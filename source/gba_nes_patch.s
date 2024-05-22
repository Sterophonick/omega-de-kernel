	.global gba_nes_patch_start
	.global gba_nes_patch_end
	.global dataStart
	.global iwramHook
	.global iwramReplace
	.global iwramSubLoc
	.global hookAddr
	.global enableAddon
	.global sramPatchFuncPtr
	.global sramPatchFuncAlt
	.global sramPatchFunc
	.global cmpBufferC

.arm
@---------------------------------
gba_nes_patch_start:
mainHook:
	ldr r0, dataStart
	swi #0x110000
	ldr r0, iwramHook
	ldr r1, iwramReplace
	str r1, [r0]
	push {r2, r3}
	adr r0, hookInjectFunc
	ldr r1, iwramSubLoc
	add r2, r1, #(hookInjectFuncEnd - hookInjectFunc)
1:
	ldr r3, [r0], #4
	str r3, [r1], #4
	cmp r1, r2
	bne 1b
	ldr r0, iwramSubLoc
	mov r1, #(hookCodeLoc - hookInjectFunc)
	adr r2, hookCode
	str r2, [r0, r1]
	pop {r2, r3}
	pop {r0, pc}
	bx r1
dataStart:
	.word 0
iwramHook:
	.word 0x030074B8
iwramReplace:
	.word 0xEA000015
iwramSubLoc:
	.word 0x03007514
.ltorg
@---------------------------------
.arm
hookInjectFunc:
	push {r0 - r4}
	ldr r0, hookCodeLoc
	ldr r1, hookAddr
	add r2, r1, #0x10
0:
	ldr r3, [r0], #4
	str r3, [r1], #4
	cmp r1, r2
	bne 0b
	
	ldr r0, mirrorFix
	mov r1, #0x06000000
	add r2, r1, #0xA000
1:
	ldr r3, [r1], #4
	cmp r0, r3
	ldreqh r0, [r1, #-0x2]
	orreq r0, #0xE000
	streqh r0, [r1, #-0x2]
	beq 2f
	cmp r1, r2
	bne 1b
2:	
	ldr r0, enableAddon
	teq r0, #0
	beq 4f
	mov r0, #0x06000000
	add r1, r0, #0x7B00
	ldr r2, irqInstruction
3:
	ldr r3, [r0], #4
	cmp r2, r3
	subeq r3, #8
	streq r3, [r0, #-4]
	beq 4f
	cmp r0, r1
	bne 3b
4:
	pop {r0 - r4}
	ldmia r5!, {r9, r10, pc}
hookAddr:
	.word 0x060000EC
hookCodeLoc:
	.word 0x0
mirrorFix:
	.word 0x08A14004
enableAddon:
	.word 0
irqInstruction:
	.word 0xE5821FFC
hookInjectFuncEnd:
@---------------------------------
.arm
hookCode:
	ldr r11, =0x12345678
	bx r11
sramPatchFuncPtr:
	.ltorg
	.word 0xE1A00000
@---------------------------------
.arm
sramPatchFuncAlt:
0:
	ldmia r5!, {r1 - r3}
	cmp r3, #0
	stmneia r4, {r1 - r3}
	bne 0b
	push {r1, r2}
	mov r0, #0x03000000
	add r11, r0, #0x8000
	b altBranch
sramPatchFunc:
1:
	stmia r3, {r0 - r2}
	ldmia r5!, {r0 - r2}
	teq r0, #0
	bne 1b
	push {r1, r2}
	ldr r0, =0x02030000
	add r11, r0, #0x6000
	adr r1, cmpBufferA
2:
	cmp r0, r11
	bge noSaveCheck
	ldrh r2, [r0], #2
	ldrh r3, [r1]
	cmp r2, r3
	bne 2b
	ldrh r2, [r0], #2
	ldrh r3, [r1, #2]
	cmp r2, r3
	bne 2b
	ldrh r2, [r0], #2
	ldrh r3, [r1, #4]
	cmp r2, r3
	bne 2b
	ldrh r2, [r0], #2
	ldrh r3, [r1, #6]
	cmp r2, r3
	bne 2b
	ldrh r2, [r0], #2
	ldrh r3, [r1, #8]
	cmp r2, r3
	bne 2b
	ldrh r2, [r0], #2
	ldrh r3, [r1, #0xa]
	cmp r2, r3
	bne 2b
	ldrh r2, [r0], #2
	ldrh r3, [r1, #0xc]
	cmp r2, r3
	bne 2b
	ldrh r2, [r0], #2
	ldrh r3, [r1, #0xe]
	cmp r2, r3
	bne 2b
	sub r0, r0, #0x10
	ldr r3, =0x2001
	strh r3, [r0], #2
	strh r3, [r0], #2
	strh r3, [r0], #2
noSaveCheck:
	ldr r0, =0x02030000
altBranch:
	adr r1, cmpBufferB
3:
	cmp r0, r11
	bge exit
	ldrh r2, [r0], #2
	ldrh r3, [r1]
	cmp r2, r3
	bne 3b
	ldrh r2, [r0], #2
	ldrh r3, [r1, #2]
	cmp r2, r3
	bne 3b
	ldrh r2, [r0], #2
	ldrh r3, [r1, #4]
	cmp r2, r3
	bne 3b
	ldrh r2, [r0], #2
	ldrh r3, [r1, #6]
	cmp r2, r3
	bne 3b
	ldrh r2, [r0], #2
	ldrh r3, [r1, #8]
	cmp r2, r3
	bne 3b
	ldrh r2, [r0], #2
	ldrh r3, [r1, #0xa]
	cmp r2, r3
	bne 3b
	ldrh r2, [r0], #2
	ldrh r3, [r1, #0xc]
	cmp r2, r3
	bne 3b
	ldrh r2, [r0], #2
	ldrh r3, [r1, #0xe]
	cmp r2, r3
	bne 3b
	sub r0, #0x10
	adr r1, repBufferB
	adr r2, repBufferBEnd
4:
	ldr r3, [r1], #4
	str r3, [r0], #4
	cmp r1, r2
	bne 4b
	adr r1, cmpBufferC
5:
	cmp r0, r11
	bge exit
	ldrh r2, [r0], #2
	ldrh r3, [r1]
	cmp r2, r3
	bne 5b
	ldrh r2, [r0], #2
	ldrh r3, [r1, #2]
	cmp r2, r3
	bne 5b
	ldrh r2, [r0], #2
	ldrh r3, [r1, #4]
	cmp r2, r3
	bne 5b
	ldrh r2, [r0], #2
	ldrh r3, [r1, #6]
	cmp r2, r3
	bne 5b
	ldrh r2, [r0], #2
	ldrh r3, [r1, #8]
	cmp r2, r3
	bne 5b
	ldrh r2, [r0], #2
	ldrh r3, [r1, #0xa]
	cmp r2, r3
	bne 5b
	ldrh r2, [r0], #2
	ldrh r3, [r1, #0xc]
	cmp r2, r3
	bne 5b
	ldrh r2, [r0], #2
	ldrh r3, [r1, #0xe]
	cmp r2, r3
	bne 5b
	sub r0, r0, #0x10
	adr r1, repBufferC
	adr r2, repBufferCEnd
6:
	ldr r3, [r1], #4
	str r3, [r0], #4
	cmp r1, r2
	bne 6b
exit:
	pop {r1, r2}
	ldr r3, hookAddr
	add pc, r3, #0x10
cmpBufferA:
	.byte 0x34, 0x70, 0x74, 0x70, 0x30, 0x78, 0x00, 0x28, 0x13, 0xD1, 0x70, 0x78, 0x00, 0x28, 0x10, 0xD1
cmpBufferB:
	.byte 0x70, 0xB5, 0xA2, 0xB0, 0x0D, 0x1C, 0x00, 0x04, 0x03, 0x0C, 0x03, 0x48, 0x00, 0x68, 0x80, 0x88
cmpBufferC:
	.byte 0xF0, 0xB5, 0xAC, 0xB0, 0x0D, 0x1C, 0x00, 0x04, 0x01, 0x0C, 0x12, 0x06, 0x17, 0x0E, 0x03, 0x48
repBufferB:
	.byte 0xC0, 0x00, 0x0E, 0x22, 0x12, 0x06, 0x80, 0x18, 0x02, 0x78, 0x0A, 0x70, 0x42, 0x78, 0x4A, 0x70
	.byte 0x82, 0x78, 0x8A, 0x70, 0xC2, 0x78, 0xCA, 0x70, 0x02, 0x79, 0x0A, 0x71, 0x42, 0x79, 0x4A, 0x71
	.byte 0x82, 0x79, 0x8A, 0x71, 0xC2, 0x79, 0xCA, 0x71, 0x00, 0x20, 0x70, 0x47
repBufferBEnd:
repBufferC:
	.byte 0xC0, 0x00, 0x0E, 0x22, 0x12, 0x06, 0x80, 0x18, 0x0A, 0x78, 0x02, 0x70, 0x4A, 0x78, 0x42, 0x70
	.byte 0x8A, 0x78, 0x82, 0x70, 0xCA, 0x78, 0xC2, 0x70, 0x0A, 0x79, 0x02, 0x71, 0x4A, 0x79, 0x42, 0x71
	.byte 0x8A, 0x79, 0x82, 0x71, 0xCA, 0x79, 0xC2, 0x71, 0x00, 0x20, 0x70, 0x47
repBufferCEnd:
	.ltorg
gba_nes_patch_end:
	.end