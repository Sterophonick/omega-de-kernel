#include <gba_base.h>

#include "ff.h"

enum
{
	EMax = 32
};
typedef struct SPatchInfo
{
	u32 iOffset;
	u32 iValue;
}SPatchInfo2;

extern FIL gfile;
extern void Sleep_ReplaceIRQ_start(void);
extern void Sleep_ReplaceIRQ_end(void);
extern void Return_address_L(void);
extern void Sleep_key(void);
extern void Reset_key(void);
//extern void Wakeup_key(void);


extern void RTS_ReplaceIRQ_start(void);
extern void RTS_ReplaceIRQ_end(void);
extern void RTS_Return_address_L(void);
extern void RTS_Sleep_key(void);
extern void RTS_Reset_key(void);
//extern void RTS_Wakeup_key(void);
extern void RTS_switch(void);
extern void Cheat_count(void);
extern void CHEAT(void);
extern void no_CHEAT_end(void);


extern void RTS_only_ReplaceIRQ_start(void);
extern void RTS_only_ReplaceIRQ_end(void);
extern void RTS_only_Return_address_L(void);
extern void RTS_only_SAVE_key(void);
extern void RTS_only_LOAD_key(void);

extern void gba_nes_patch_start(void);
extern void gba_nes_patch_end(void);
extern void dataStart(void);
extern void iwramHook(void);
extern void iwramReplace(void);
extern void iwramSubLoc(void);
extern void hookAddr(void);
extern void sramPatchFuncPtr(void);
extern void sramPatchFuncAlt(void);
extern void sramPatchFunc(void);
extern void cmpBufferC(void);

extern void Fire_Emblem_0378_patch_start(void);
extern void Fire_Emblem_0378_patch_end(void);
extern void Fire_Emblem_1692_patch_start(void);
extern void Fire_Emblem_1692_patch_end(void);
extern void Fire_Emblem_A_patch_start(void);
extern void Fire_Emblem_A_patch_end(void);
extern void Modify_address_A(void);
extern void Fire_Emblem_B_patch_start(void);
extern void Fire_Emblem_B_patch_end(void);
extern void Modify_address_B(void);
extern void Fire_Emblem_iQue_patch_start(void);
extern void Fire_Emblem_iQue_patch_end(void);

extern u32 gl_cheat_count;


void GBApatch_Cleanrom(u32* address,int filesize);
void GBApatch_PSRAM(u32* address,int filesize);

void GBApatch_Cleanrom_NOR(u32* address,u32 offset);
void GBApatch_NOR(u32* address,int filesize,u32 offset);
u32  Check_pat(TCHAR* gamefilename);
void Make_pat_file(char* filename);
u32 Check_RTS(TCHAR* gamefilename);
u8 Check_mde_file(TCHAR* gamefilename);
u8 Make_mde_file(TCHAR* gamefilename,u8 Save_num);

void Patch_SpecialROM_sheepmode(void);
u32 use_internal_engine(u8 gamecode[]);
u32 Check_cheat_file(TCHAR *gamefilename);
void SetTrimSize(u8* buffer,u32 romsize,u32 iSize,u32 mode,BYTE saveMODE);
u32 Find_spend_address_SpecialROM(u32* Data);
void Patch_SpecialROM_TrimSize(void);
u32 Check_game_RTS_FAT(TCHAR *filename,u32 game_save_rts);
void IWRAM_CODE PatchInternal(u32* Data,int iSize,u32 offset);
void Patch_SpecialROM_sleepmode(void);