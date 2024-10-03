#include "lang.h"

#include "asc126_old.h"
#include "asc126_new.h"

char* gl_init_error;
char* gl_power_off;
char* gl_init_ok;
char* gl_Loading;
char* gl_file_overflow;
char* gl_theme_credit;
char* gl_theme_credit2;
char* gl_theme_credit3;
char* gl_theme_credit4;

char* gl_generating_emu;

char* gl_menu_btn;
char* gl_lastest_game;

char* gl_writing;

char* gl_time;
char* gl_Mon;
char* gl_Tues;
char* gl_Wed;
char* gl_Thur;
char* gl_Fri;
char* gl_Sat;
char* gl_Sun;

char* gl_addon;
char* gl_reset;
char* gl_rts;
char* gl_sleep;
char* gl_cheat;

char* gl_hot_key;
char* gl_hot_key2;

char* gl_language;
char* gl_en_lang;
char* gl_zh_lang;
char* gl_set_btn;
char* gl_ok_btn;

char* gl_formatnor_info1;
char* gl_formatnor_info2;

char* temp;

char* gl_check_sav;
char* gl_make_sav;

char* gl_check_RTS;
char* gl_make_RTS;

char* gl_check_pat;
char* gl_make_pat;

char* gl_loading_game;

char* gl_engine;
char* gl_use_engine;

char*  gl_recently_play;

char* gl_START_help;
char* gl_SELECT_help;
char* gl_L_A_help;
char* gl_LSTART_help;
char* gl_online_manual;

char* gl_no_game_played;

char* gl_ingameRTC;
//char* gl_offRTC_powersave;
char* gl_ingameRTC_open;
char* gl_ingameRTC_close;

char* gl_lang_toggle_reset;
char* gl_lang_toggle_backup;

char* gl_error_0;
char* gl_error_1;
char* gl_error_2;
char* gl_error_3;
char* gl_error_4;
char* gl_error_5;
char* gl_error_6;

char* gl_save_sav;
char* gl_save_ing;

char* gl_save;
char* gl_auto_save;

char* gl_modeB_INITstr;
char* gl_modeB_RUMBLE;
char* gl_modeB_RAM;
char* gl_modeB_LINK;

char* gl_led;
char* gl_led_open;

char* gl_Breathing_light;
char* gl_SD_working;

char* gl_NOR_full;
char* gl_save_loaded;
char* gl_save_saved;
char* gl_file_exist;
char* gl_file_noexist;
//--
char**  gl_rom_menu;
char**  gl_nor_op;

char* gl_copying_data;

char* gl_enabled;
char* gl_disabled;

unsigned char* ASC_DATA;


//����
const char zh_init_error[]="TF����ʼ��ʧ��";
const char zh_power_off[]="�ػ�";
const char zh_init_ok[]="TF����ʼ���ɹ�";
const char zh_Loading[]="������...";
const char zh_file_overflow[]="�ļ�̫��,���ܼ���";

const char zh_menu_btn[]=" (B)ȡ��    (A)ȷ��";
const char zh_writing[]="����д��...";
const char zh_lastest_game[]="��ѡ�����һ����Ϸ";

const char zh_time[] ="     ʱ��";
const char zh_Mon[]="һ";
const char zh_Tues[]="��";
const char zh_Wed[]="��";
const char zh_Thur[]="��";
const char zh_Fri[]="��";
const char zh_Sat[]="��";
const char zh_Sun[]="��";

const char zh_addon[]="     ����";
const char zh_reset[]="����λ";
const char zh_rts[]="��ʱ�浵";
const char zh_sleep[]="˯��";
const char zh_cheat[]="����ָ";

const char zh_hot_key[]=" ˯���ȼ�";
const char zh_hot_key2[]=" �˵��ȼ�";

const char zh_language[]=" LANGUAGE";
const char zh_lang[]=" ����";

const char zh_set_btn[]="����";
const char zh_ok_btn[]="����";
const char zh_formatnor_info[]="ȷ��?��Լ4����";

const char zh_theme_credit[]="Superdark DE K1.05";
const char zh_theme_credit2[]="f3bandit";
const char zh_theme_credit3[]="Based on Simple DE";
const char zh_theme_credit4[]="Sterophonick";

const char zh_check_sav[]="���SAV�ļ�";
const char zh_make_sav[]="����SAV�ļ�";

const char zh_check_RTS[]="���RTS�ļ�";
const char zh_make_RTS[]="����RTS�ļ�";

const char zh_check_pat[]="���PAT�ļ�";
const char zh_make_pat[]="����PAT�ļ�";

const char zh_please_wait[]="��ȴ�...";

const char zh_loading_game[]="������Ϸ";

const char zh_no_roms[]="�Ҳ���.gba�ļ�!";

const char zh_engine[]="     ����";
const char zh_use_engine[]="���ٲ�������";

const char zh_recently_play[]="�����Ϸ�б�";

const char zh_START_help[]="�������Ϸ�б�";
const char zh_SELECT_help[]="����ѡ��";
const char zh_L_A_help[]="��ת������ѡ��";
const char zh_LSTART_help[]="ɾ���ļ�";
const char zh_LSELECT_help[]="ɾ�������ļ�";
const char zh_online_manual[]="  ����˵����";

const char zh_no_game_played[]="�����û�����Ϸ";

const char zh_ingameRTC[]=" ��Ϸʱ��";
//const char zh_offRTC_powersave[]=" ";
const char zh_ingameRTC_open[]="��";
const char zh_ingameRTC_close[]="�ر�";//TURNOFF TO POWER SAVE

const char zh_lang_toggle_reset[]="Ӳ����";
const char zh_lang_toggle_backup[]="���汸��";

const char zh_error_0[]="�ļ��д���";
const char zh_error_1[]="�ļ�����";
const char zh_error_2[]="SAVER����";
const char zh_error_3[]="�浵����";
const char zh_error_4[]="��ȡ�浵����";
const char zh_error_5[]="�����浵����";
const char zh_error_6[]="RTS�ļ�����";

const char zh_save_sav[]="����浵?";
const char zh_save_ing[]="����...";
const char zh_save[]="     �浵";
const char zh_auto_save[]="�����Զ�����";

const char zh_modeB_INITstr[]="ģʽB״̬";
const char zh_modeB_RUMBLE[]="��";
const char zh_modeB_RAM[]="�ڴ�";
const char zh_modeB_LINK[]="����";

const char zh_led[]="   ָʾ��";
const char zh_led_open[]="��LED";
const char zh_Breathing_light[]="   ������";
const char zh_SD_working[]=" SD������";

const char zh_NOR_full[]="NOR�ռ䲻��";
const char zh_save_loaded[]="�浵�Ѽ��ص�FRAM";
const char zh_save_saved[]="�浵�ѱ��浽SD";
const char zh_file_exist[]="�ļ�����,������?";
const char zh_file_noexist[]="�Ҳ����浵�ļ�";

const char zh_copying_data[]="����ROM...";
const char zh_generating_emu[]="����ģ����...";

const char zh_enabled[]="������";
const char zh_disabled[]="������ʿ";

const char *zh_rom_menu[]={
	"ֱ������",
	"����������",
	"��¼��NOR",
	"��¼��NOR������",
	"�浵����",
	"����ָ",
};
const char *zh_nor_op[5]={
	"ֱ������",
	"ɾ��",
	"ȫ����ʽ��",
	"���ش浵��FRAM",
	"����FRAM�浵",
};



//English
const char en_init_error[]="Failed to initialize microSD card.";
const char en_power_off[]="Power off the console.";
const char en_init_ok[]="microSD card initialization successful.";
const char en_Loading[]="Loading...";
const char en_file_overflow[]="The file is too big.";

const char en_menu_btn[]=" (B) No     (A) OK";
const char en_writing[]="Writing...";
const char en_lastest_game[]="Select the lastest";

const char en_time[]="     Time";
const char en_Mon[]="Mon";
const char en_Tues[]="Tue";
const char en_Wed[]="Wed";
const char en_Thur[]="Thu";
const char en_Fri[]="Fri";
const char en_Sat[]="Sat";
const char en_Sun[]="Sun";

const char en_addon[]="    Addon";
const char en_reset[]="Reset";
const char en_rts[]="Savestate";
const char en_sleep[]="Sleep";
const char en_cheat[]="Cheat";

const char en_hot_key[] ="Sleep key";
const char en_hot_key2[]=" Menu key";

const char en_language[]=" Language";
const char en_lang[]="English";
const char en_set_btn[]="Set";
const char en_ok_btn[]=" OK";
const char en_formatnor_info1[]="Are you sure?";
const char en_formatnor_info2[]="This will take a while.";

const char en_theme_credit[]="Superdark DE K1.04";
const char en_theme_credit2[]="f3bandit";
const char en_theme_credit3[]="based on Simple DE";
const char en_theme_credit4[]="Sterophonick";

const char en_check_sav[]="Checking Save Data...";
const char en_make_sav[] ="Creating Save Data...";

const char en_check_RTS[]="Checking RTS file...";
const char en_make_RTS[] ="Creating RTS file...";

const char en_check_pat[]="Checking Patch file...";
const char en_make_pat[] ="Creating Patch file...";

const char en_please_wait[]="Please Wait...";

const char en_loading_game[]="Loading ROM...";

const char en_no_roms[]="No .gba ROMs found!";

const char en_engine[]="   Engine";
const char en_use_engine[]="Fast Patch Engine";

const char en_recently_play[]="Recently Played";

const char en_START_help[]="Open recently played list";
const char en_SELECT_help[]="More options";
const char en_L_A_help[]="Invert cold start option";
const char en_LSTART_help[]="Delete file";
const char en_LSELECT_help[]="Delete save file";
const char en_online_manual[]="Online manual";

const char en_no_game_played[]="No recently played games yet...";

const char en_ingameRTC[]=" Game RTC";
const char en_ingameRTC_open[]="Open";
const char en_ingameRTC_close[]="Close";//TURNOFF TO POWER SAVE

const char en_lang_toggle_reset[]="HardReset";
const char en_lang_toggle_backup[]="Backup";

const char en_error_0[]="Folder error";
const char en_error_1[]="File error";
const char en_error_2[]="SAVER error";
const char en_error_3[]="Save error";
const char en_error_4[]="Read save error";
const char en_error_5[]="Make save error";
const char en_error_6[]="RTS file error";


const char en_save_sav[]="Copy game save?";
const char en_save_ing[]="Saving...";
const char en_save[]="     Save";
const char en_auto_save[]="Auto save";

const char en_modeB_INITstr[]="   Mode B";
const char en_modeB_RUMBLE[]="Rumble";
const char en_modeB_RAM[]="RAM";
const char en_modeB_LINK[]="Cart";

const char en_led[]="      LED";
const char en_led_open[]="Enable LED";
const char en_Breathing_light[]="Breathing";
const char en_SD_working[]="   SD LED";

const char en_NOR_full[]="NOR is full!          ";
const char en_save_loaded[]=".sav has been loaded";
const char en_save_saved[]=".sav has been saved";
const char en_file_exist[]="Overwrite file?";
const char en_file_noexist[]="Can't find .sav file";

const char en_copying_data[]="Copying ROM...";
const char en_generating_emu[]="Generating Emulator...";

const char en_enabled[]="Enabled";
const char en_disabled[]="Disabled";

const char *en_rom_menu[] = {
	"Clean boot",
	"Boot with addon",
	"Write to NOR clean",
	"Write to NOR with addon",
	"Save type",
	"Cheat",
};
const char *en_nor_op[5]={
	"Direct boot",
	"Delete",
	"Format all",
	"Load save data",
	"Save save data",
};

//---------------------------------------------------------------------------------
void LoadChinese(void)
{
	gl_init_error = (char*)zh_init_error;
	gl_power_off = (char*)zh_power_off;
	gl_init_ok = (char*)zh_init_ok;
	gl_Loading = (char*)zh_Loading;
	gl_file_overflow = (char*)zh_file_overflow;
	gl_theme_credit = (char*)zh_theme_credit;
	gl_theme_credit2 = (char*)zh_theme_credit2;
	gl_theme_credit3 = (char*)zh_theme_credit3;
	gl_theme_credit4 = (char*)zh_theme_credit4;

	gl_menu_btn = (char*)zh_menu_btn;
	gl_writing = (char*)zh_writing;
	gl_lastest_game = (char*)zh_lastest_game;


	gl_time = (char*)zh_time;
	gl_Mon = (char*)zh_Mon;
	gl_Tues = (char*)zh_Tues;
	gl_Wed = (char*)zh_Wed;
	gl_Thur = (char*)zh_Thur;
	gl_Fri = (char*)zh_Fri;
	gl_Sat = (char*)zh_Sat;
	gl_Sun = (char*)zh_Sun;

	gl_addon = (char*)zh_addon;
	gl_reset = (char*)zh_reset;
	gl_rts = (char*)zh_rts;
	gl_sleep = (char*)zh_sleep;
	gl_cheat = (char*)zh_cheat;

	gl_hot_key = (char*)zh_hot_key;
	gl_hot_key2 = (char*)zh_hot_key2;

	gl_language =  (char*)zh_language;
	gl_en_lang = (char*)en_lang;
	gl_zh_lang = (char*)zh_lang;;
	gl_set_btn = (char*)zh_set_btn;
	gl_ok_btn = (char*)zh_ok_btn;
	gl_formatnor_info1 = (char*)zh_formatnor_info;
	gl_formatnor_info2= " ";

	temp = " ";


	gl_check_sav = (char*)zh_check_sav;
	gl_make_sav = (char*)zh_make_sav;

	gl_check_RTS = (char*)zh_check_RTS;
	gl_make_RTS = (char*)zh_make_RTS;

	gl_check_pat = (char*)zh_check_pat;
	gl_make_pat = (char*)zh_make_pat;

	gl_loading_game = (char*)zh_loading_game;
	gl_engine = (char*)zh_engine;
	gl_use_engine = (char*)zh_use_engine;

	gl_recently_play = (char*)zh_recently_play;

	gl_START_help = (char*)zh_START_help;
	gl_SELECT_help = (char*)zh_SELECT_help;
	gl_L_A_help = (char*)zh_L_A_help;
	gl_LSTART_help = (char*)zh_LSTART_help;
	gl_online_manual = (char*)zh_online_manual;

	gl_no_game_played = (char*)zh_no_game_played;

	gl_ingameRTC = (char*)zh_ingameRTC;
	//gl_offRTC_powersave = (char*)zh_offRTC_powersave;
	gl_ingameRTC_open = (char*)zh_ingameRTC_open;
	gl_ingameRTC_close = (char*)zh_ingameRTC_close;

	gl_lang_toggle_reset = (char*)zh_lang_toggle_reset;
	gl_lang_toggle_backup = (char*)zh_lang_toggle_backup;

	gl_error_0 = (char*)zh_error_0;
	gl_error_1 = (char*)zh_error_1;
	gl_error_2 = (char*)zh_error_2;
	gl_error_3 = (char*)zh_error_3;
	gl_error_4 = (char*)zh_error_4;
	gl_error_5 = (char*)zh_error_5;
	gl_error_6 = (char*)zh_error_6;

	gl_save_sav = (char*)zh_save_sav;
	gl_save_ing = (char*)zh_save_ing;
	gl_save = (char*)zh_save;
	gl_auto_save = (char*)zh_auto_save;

	gl_modeB_INITstr = (char*)zh_modeB_INITstr;
	gl_modeB_RUMBLE = (char*)zh_modeB_RUMBLE;
	gl_modeB_RAM= (char*)zh_modeB_RAM;
	gl_modeB_LINK= (char*)zh_modeB_LINK;

	gl_led = (char*)zh_led;
	gl_led_open = (char*)zh_led_open;

	gl_Breathing_light = (char*)zh_Breathing_light;
	gl_SD_working = (char*)zh_SD_working;

	gl_NOR_full = (char*)zh_NOR_full;
	gl_save_loaded = (char*)zh_save_loaded;
	gl_save_saved = (char*)zh_save_saved;
	gl_file_exist = (char*)zh_file_exist;
	gl_file_noexist = (char*)zh_file_noexist;
	//
	gl_rom_menu = (char**)zh_rom_menu;
	gl_nor_op = (char**)zh_nor_op;

	gl_copying_data = (char**)zh_copying_data;

	gl_generating_emu = (char**)zh_generating_emu;

	gl_enabled = (char*)zh_enabled;
	gl_disabled = (char*)zh_disabled;

	// For Chinese, Use old font
	ASC_DATA = ASC_DATA_OLD;

}
//---------------------------------------------------------------------------------
void LoadEnglish(void)
{
	gl_init_error = (char*)en_init_error;
	gl_power_off = (char*)en_power_off;
	gl_init_ok = (char*)en_init_ok;
	gl_Loading = (char*)en_Loading;
	gl_file_overflow = (char*)en_file_overflow;
	gl_theme_credit = (char*)en_theme_credit;
	gl_theme_credit2 = (char*)en_theme_credit2;
	gl_theme_credit3 = (char*)en_theme_credit3;
	gl_theme_credit4 = (char*)en_theme_credit4;

	gl_menu_btn = (char*)en_menu_btn;
	gl_writing = (char*)en_writing;
	gl_lastest_game = (char*)en_lastest_game;

	gl_time = (char*)en_time;
	gl_Mon = (char*)en_Mon;
	gl_Tues = (char*)en_Tues;
	gl_Wed = (char*)en_Wed;
	gl_Thur = (char*)en_Thur;
	gl_Fri = (char*)en_Fri;
	gl_Sat = (char*)en_Sat;
	gl_Sun = (char*)en_Sun;
	gl_addon = (char*)en_addon;
	gl_reset = (char*)en_reset;
	gl_rts = (char*)en_rts;
	gl_sleep = (char*)en_sleep;
	gl_cheat = (char*)en_cheat;

	gl_hot_key = (char*)en_hot_key;
	gl_hot_key2 = (char*)en_hot_key2;

	gl_language =  (char*)en_language;
	gl_en_lang = (char*)en_lang;
	gl_zh_lang = (char*)zh_lang;;
	gl_set_btn = (char*)en_set_btn;
	gl_ok_btn = (char*)en_ok_btn;
	gl_formatnor_info1 = (char*)en_formatnor_info1;
	gl_formatnor_info2= (char*)en_formatnor_info2;

	temp = "Sure? about 4 mins";

	gl_check_sav = (char*)en_check_sav;
	gl_make_sav = (char*)en_make_sav;

	gl_check_RTS = (char*)en_check_RTS;
	gl_make_RTS = (char*)en_make_RTS;

	gl_check_pat = (char*)en_check_pat;
	gl_make_pat = (char*)en_make_pat;

	gl_loading_game = (char*)en_loading_game;

	gl_engine = (char*)en_engine;
	gl_use_engine = (char*)en_use_engine;

	gl_recently_play = (char*)en_recently_play;

	gl_START_help = (char*)en_START_help;
	gl_SELECT_help = (char*)en_SELECT_help;
	gl_L_A_help = (char*)en_L_A_help;
	gl_LSTART_help = (char*)en_LSTART_help;
	gl_online_manual = (char*)en_online_manual;

	gl_no_game_played = (char*)en_no_game_played;

	gl_ingameRTC = (char*)en_ingameRTC;
	//gl_offRTC_powersave = (char*)en_offRTC_powersave;
	gl_ingameRTC_open = (char*)en_ingameRTC_open;
	gl_ingameRTC_close = (char*)en_ingameRTC_close;

	gl_lang_toggle_reset = (char*)en_lang_toggle_reset;
	gl_lang_toggle_backup = (char*)en_lang_toggle_backup;

	gl_error_0 = (char*)en_error_0;
	gl_error_1 = (char*)en_error_1;
	gl_error_2 = (char*)en_error_2;
	gl_error_3 = (char*)en_error_3;
	gl_error_4 = (char*)en_error_4;
	gl_error_5 = (char*)en_error_5;
	gl_error_6 = (char*)en_error_6;

	gl_save_sav = (char*)en_save_sav;
	gl_save_ing = (char*)en_save_ing;
	gl_save = (char*)en_save;
	gl_auto_save = (char*)en_auto_save;

	gl_modeB_INITstr = (char*)en_modeB_INITstr;
	gl_modeB_RUMBLE = (char*)en_modeB_RUMBLE;
	gl_modeB_RAM = (char*)en_modeB_RAM;
	gl_modeB_LINK= (char*)en_modeB_LINK;

	gl_led = (char*)en_led;
	gl_led_open = (char*)en_led_open;
	gl_Breathing_light = (char*)en_Breathing_light;
	gl_SD_working = (char*)en_SD_working;

	gl_NOR_full = (char*)en_NOR_full;
	gl_save_loaded = (char*)en_save_loaded;
	gl_save_saved = (char*)en_save_saved;
	gl_file_exist = (char*)en_file_exist;
	gl_file_noexist = (char*)en_file_noexist;
	//
	gl_rom_menu = (char**)en_rom_menu;
	gl_nor_op = (char**)en_nor_op;

	gl_copying_data = (char**)en_copying_data;

	gl_generating_emu = (char**)en_generating_emu;

	gl_enabled = (char*)en_enabled;
	gl_disabled = (char*)en_disabled;

	// For English, Use new font
	ASC_DATA = ASC_DATA_NEW;
}
