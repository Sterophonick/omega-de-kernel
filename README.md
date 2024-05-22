###### FORKED FROM https://github.com/ez-flash/omega-de-kernel

# Simpledark DE for EZ Flash Omega Definitive Edition
based on Simple DE by Sterophonick
###### *If you're looking for SimpleLight for the **original** EZ Flash Omega, check here: https://github.com/Sterophonick/SimpleLight*
###### *If you're looking for SimpleLight for the **original** EZ Flash Omega, check here: https://github.com/Sterophonick/omega-de-kernel*

##
### Screen shots
![20240508_191526](https://github.com/f3bandit/omega-de-kernel/assets/4943324/a90cbe58-49df-4f5e-9347-8037ebb017fe)
![20240508_191521](https://github.com/f3bandit/omega-de-kernel/assets/4943324/7bf732b0-89a1-4de9-8e56-84ee15a355fb)
![20240508_191506](https://github.com/f3bandit/omega-de-kernel/assets/4943324/aa2f12c7-8d70-401a-9e2d-4b2640c959f9)
![20240508_191434](https://github.com/f3bandit/omega-de-kernel/assets/4943324/223c76a1-1d0c-4d18-9df3-7767459cab01)
![20240508_191427](https://github.com/f3bandit/omega-de-kernel/assets/4943324/8f583010-7bd4-47e8-ad9d-478e1bfb5685)
![20240508_191424](https://github.com/f3bandit/omega-de-kernel/assets/4943324/493f79f6-aa2f-4202-bffb-95a20bfca719)
![20240508_191657](https://github.com/f3bandit/omega-de-kernel/assets/4943324/717c200a-c05a-44d9-8530-564967ef9695)
![20240508_191652](https://github.com/f3bandit/omega-de-kernel/assets/4943324/0265a00a-1343-44ff-a940-430103534381)
![20240508_191648](https://github.com/f3bandit/omega-de-kernel/assets/4943324/002646ba-bbb6-4032-888e-490dbae48d2e)
![20240508_191642](https://github.com/f3bandit/omega-de-kernel/assets/4943324/845e1b43-115a-4dd9-b48c-4cea5d0440f6)
![20240508_191634](https://github.com/f3bandit/omega-de-kernel/assets/4943324/2409a280-1206-4d8f-b9af-53bbaf13df2a)
![20240508_191621](https://github.com/f3bandit/omega-de-kernel/assets/4943324/d2010b9b-2238-4680-bec3-4b619bd3ae59)
![20240508_191549](https://github.com/f3bandit/omega-de-kernel/assets/4943324/f2b4f056-9c91-412b-b03f-1dbffdbca147)
![20240508_191543](https://github.com/f3bandit/omega-de-kernel/assets/4943324/4d5ad499-976a-4d4e-89f8-53dd7446c170)
![20240508_191530](https://github.com/f3bandit/omega-de-kernel/assets/4943324/3802e0b0-37f8-40b4-9dc9-3223ce73cefc)


Official forum thread:
https://gbatemp.net/threads/new-theme-for-ez-flash-omega.520665/

## Installation instructions:

_**Be sure you're using the most recent version, and follow the installation instructions in the !!!!!!!!!IMPORTANT!!!!!!!!!!!.TXT file in the GBAtemp package before reporting issues.**_

_**ALSO YOU MUST USE THE OFFICIAL KERNEL TO UPDATE THE FIRMWARE; THIS DOES NOT APPLY TO THE BASE OMEGA :(**_

1. Copy the SYSTEM and BACKUP folder to the root of the SD Card.
2. Move your IMGS, SAVER, RTS, and PATCH folders to SYSTEM.
3. If you want the light theme, copy ezkernel-light.bin to the root of the SD Card. If you want the dark thing, do the same with ezkernel-dark.bin
4. Rename the new kernel file to ezkernel.bin
5. You're done!

## Registered file types:
### Game ROMs
    .gba - GBA ROM
    .bin - GBA ROM
    .mb - GBA Multiboot ROM
    .agb - GBA ROM
    .col - ColecoVision ROM (Requires Cologne) *
    .gb - Game Boy ROM (Jaga's Goomba Color)
    .gbc - Game Boy Color ROM (Jaga's Goomba Color)
    .gg - Game Gear ROM (SMSAdvance)
    .rom - MSX Cartridge ROM (MSXAdvance) **
    .ngp - Neo Geo Pocket ROM (NGPAdvance)
    .ngc - Neo Geo Pocket ROM (NGPAdvance)
    .ngpc - Neo Geo Pocket Color ROM (NGPAdvance)
    .nes  - NES ROM File (PocketNES)
    .pce - PC-Engine ROM File (PCEAdvance)
    .sms - Sega Master System ROM File (SMSAdvance)
    .sg - Sega SG-1000 ROM File (SMSAdvance)
    .sv - Watara Supervision ROM File (Wasabi)
    .ws - WonderSwan ROM File (SwanAdvance)
    .wsc - WonderSwan Color ROM File (SwanAdvance)
    .z80 - 48k ZX-Spectrum Z80 ROM (ZXAdvance)
    .c8 - Chip-8 ROM (Chip8Adv (My First Emulator! :D))
    .arc - 4kb Emerson Arcadia 2001 ROM File

### Media
    .jpg - JPEG Image
    .jpeg - JPEG Image
    .mod - ProTracker Module file
    .bmp - Bitmap Image
    .pcx - ZSoft Paintbrush PCX image
    .mid - MIDI sequence
    .nsf - NES Music file (Nintendo Sound File)
    .vgm - SMS/GG music file
    .vga - aPlib Compressed SMS/GG music file
    .vgl - LZ77 Compressed SMS/GG music file
    .txt - Text Document
    .wav - Wave Sound (formatted in GSM 6.10)
    .k3m - Krawall Advance Sound
    .sb - MaxMod sound bank
    .lz - LZ77 Compressed Image
    .raw - Uncompressed Mode 3 Bitmap
    .ap - aPlib compressed Mode 3 Bitmap
    .bgf - BoyScout module
    .mda - Sharp X68000 Music
    .cwz - CWZ Music (IDK what exactly it is, but it was included with PogoShell 1.2)

*\* For Cologne, you have to make the ROM yourself.*\
*\*\* MSXAdvance uses the C-BIOS, so I can redistribute the emulator.*

##### Cologne Emulator Guide:
1. Download the latest version of Cologne.
2. Open the EXE file.
3. Take a blank file, and also add the Official Colecovision BIOS.
4. Create col.gba in the PLUG folder.

### This ZIP file contains some tech demos/games:
* XBill (SG-1000)
* Sega Tween (SMS)
* WinGG (Game Gear)
* HuZERO (PC-Engine)
* 1968 (ZX-Spectrum)
* Adventures Of Gus and Rob (Neo Geo Pocket)
* Kaboom! (Homebrew) (ColecoVision)
* Motkonque (MSX)
* SwanDriving (WonderSwan)
* F8Z (Chip-8)

### How to build 
1. Install devkitPro https://devkitpro.org/
2. Set the following environment variables to their correct directories: `DEVKITPRO, DEVKITARM, LIBGBA`
3. Comment or uncomment the `#define DARK` line in `draw.h`. If uncommented, a dark theme is generated.
4. Run the command `make`. If done successfully, this should give you an `ezkernel.bin` file.
5. Follow the installation instructions above.
4. Update your flashcart and enjoy! :)

### Credits
Analogue https://www.analogue.co/ for their amazing FPGA hardware\
EZ-FLASH https://www.ezflash.cn/ - The original firmware & hardware creators\
Sterophonick - SIMPLE theme for EZO & EZODE\
Techiesaru - For Patch fixes\
Kuwanger - PogoShell plugin integration (RIP)\
fluBBa - SMSAdvance, MSXAdvance, Cologne for GBA, Goomba for GBA (Original), PCEAdvance, PocketNES, SNESAdvance, Wasabi, NGPAdvance, SwanAdvance\
Jaga https://github.com/EvilJagaGenius - Jaga's Goomba Color fork https://github.com/EvilJagaGenius/jagoombacolor\

