/*******************************************************
 **             LaserTank ver 4.0                     **
 **               By Jim Kindley                      **
 **               (c) 2001                            **
 **         The Program and Source is Public Domain   **
 *******************************************************
 **       Release version 2005 by Yves Maingoy        **
 **               ymaingoy@free.fr                    **
 *******************************************************/

/* LaserTank Ver 4.1 (32Bit) Resource File */

// You can Change anything in ""
// \tF2 = Tab F2
// Format MENUITEM, Menu Lable, Function Number

MAIN MENU
BEGIN
	POPUP "&Game"
	BEGIN
		MENUITEM "&New\tF2", 101
		MENUITEM "&Load Level...\tL", 106
		MENUITEM "&Skip Level\tS", 107
		MENUITEM "&Previous Level\tP",119
		MENUITEM "Last Level Playe&d\tBkSp", 118, GRAYED
		MENUITEM SEPARATOR
		MENUITEM "&Open Data File...\tO", 108
		MENUITEM SEPARATOR
		MENUITEM "&View High Scores\tV", 113
		MENUITEM "&Global High Score List\tG", 906
		MENUITEM SEPARATOR
		MENUITEM "&Record Game\tF5", 123
		MENUITEM "S&ave Recording\tF6", 117, GRAYED
		MENUITEM "Resume Re&cording\tF8",125
		MENUITEM "Play&back Game...\tF7", 114
		MENUITEM SEPARATOR
		MENUITEM "Pr&int GameBoard",126
		MENUITEM SEPARATOR
		MENUITEM "&Exit", 103
	END
	POPUP "&Move"
	BEGIN
		MENUITEM "&ReStart\tR", 105
		MENUITEM "&Undo Last Move/Shot\tU", 110, GRAYED
		MENUITEM "&Save Position\tCtrl+C", 111
		MENUITEM "Restore &Position\tCrtl+V", 112, GRAYED
		MENUITEM "RePla&y\tF4",124
	END
	POPUP "&Options"
	BEGIN
		MENUITEM "&Animation\tA", 104, CHECKED
		MENUITEM "Soun&d\tN", 102, CHECKED
		MENUITEM "&Remember Last Level", 109, CHECKED
		MENUITEM "S&kip Completed Levels", 116
		MENUITEM "Au&toRecord", 115
		MENUITEM "Disable &Warnings",127
		MENUITEM SEPARATOR
		POPUP "&Size"
		BEGIN
			MENUITEM "&Small", 120, CHECKED
			MENUITEM "&Medium", 121
			MENUITEM "&Large", 122
		END
		MENUITEM "Change &Difficulty...\tD", 225
		MENUITEM "Change &Graphics ...\tCtrl+G", 226
	END
	MENUITEM "&Editor [F9]", 201
	POPUP "&Help"
	BEGIN
		MENUITEM "&Hint\tH",301
		MENUITEM SEPARATOR
		MENUITEM "&Index", 902
		MENUITEM "&Quick Help\tF1", 907
		MENUITEM "&Revisions (History)", 904
		MENUITEM SEPARATOR
		MENUITEM "&About", 901
	END

END

MENU2 MENU
BEGIN
	POPUP "&Editor"
	BEGIN
		MENUITEM "&Clear Field\tCtrl+C", 601
		MENUITEM "&Load Level...\tCtrl+L", 602
		MENUITEM "&Save Level\tCtrl+S", 603
		MENUITEM "Save &As...",606
		MENUITEM "&Exit", 103
	END
	MENUITEM "&Hint", 605
	POPUP "&Shift"
	BEGIN
		MENUITEM "&Right\tCtrl+Direction", 710
		MENUITEM "&Left", 711
		MENUITEM "&Up", 712
		MENUITEM "&Down",713
	END
	MENUITEM "&Close Editor [F9]",604
	POPUP "&Difficulty"
	BEGIN
		MENUITEM "&Kids", 701
		MENUITEM "&Easy", 702
		MENUITEM "&Medium", 703
		MENUITEM "&Hard", 704
		MENUITEM "&Deadly", 705
	END
	POPUP "&Help"
	BEGIN
		MENUITEM "&Editor\tF1", 903
		MENUITEM "&Writing Levels", 905
		MENUITEM SEPARATOR
		MENUITEM "&About", 901
	END
END

// These are the Key Shortcuts, if you change any of these you should change the references
// in the Menus above.
// The format is Vertual Key Code, Function Number, VIRTKEY
ACC1 ACCELERATORS
BEGIN
	VK_F2, 	101, VIRTKEY
	VK_L, 	106, VIRTKEY
	VK_S,	107, VIRTKEY
	VK_O,	108, VIRTKEY
	VK_V,	113, VIRTKEY
	VK_G, 	906, VIRTKEY
	VK_F4, 	124, VIRTKEY
	VK_F5,	123, VIRTKEY
	VK_F6,	117, VIRTKEY
	VK_F7,	114, VIRTKEY
	VK_F8,	125, VIRTKEY
	VK_F9,	201, VIRTKEY
	VK_BACK,118, VIRTKEY
	VK_P,	119, VIRTKEY
	VK_R, 	105, VIRTKEY
	VK_U,	110, VIRTKEY
	VK_C,	111, VIRTKEY,CONTROL	// Press Control + 'C'
	VK_V,	112, VIRTKEY,CONTROL
	VK_A, 	104, VIRTKEY
	VK_N,	102, VIRTKEY
	VK_D,	225, VIRTKEY
	VK_G,	226, VIRTKEY,CONTROL
	VK_H, 	301, VIRTKEY
	VK_F1,	907, VIRTKEY
END

// Editor Menu Accelerators
// DONT use Keys that can be entered in the Author & Level Name field

ACC2 ACCELERATORS
BEGIN
	VK_L, 		602, VIRTKEY,CONTROL
	VK_C, 		601, VIRTKEY,CONTROL
	VK_S, 		603, VIRTKEY,CONTROL
	VK_H, 		605, VIRTKEY,CONTROL
	VK_F9, 		604, VIRTKEY
	VK_G,		226, VIRTKEY,CONTROL
	VK_F1,		903, VIRTKEY
	VK_UP,		712, VIRTKEY,CONTROL
	VK_RIGHT,	710, VIRTKEY,CONTROL
	VK_LEFT,	711, VIRTKEY,CONTROL
	VK_DOWN,	713, VIRTKEY,CONTROL

END

// Dialogs
// You can Change the Caption or anything in ""


ABOUTBOX DIALOG 19, 27, 224, 157
STYLE DS_MODALFRAME | WS_POPUP | WS_CAPTION
CAPTION IDM_ABOUTBOX_00
FONT 8, "MS Sans Serif"
BEGIN
  PUSHBUTTON IDM_ABOUTBOX_01, ID_ABOUTBOX_OK, 181, 9, 30, 48
  ICON       "ICON1",                     -1, 15, 9, 18, 20
  LTEXT      IDM_ABOUTBOX_02, ID_ABOUTBOX_02, 49, 9, 82, 8, WS_VISIBLE
  LTEXT      IDM_ABOUTBOX_03, ID_ABOUTBOX_03, 82, 19, 49, 8,WS_VISIBLE
  LTEXT      IDM_ABOUTBOX_04, ID_ABOUTBOX_04, 49, 29, 82, 8,WS_VISIBLE
  LTEXT      IDM_ABOUTBOX_05, ID_ABOUTBOX_05, 49, 40, 82, 8,WS_VISIBLE
  ICON       "jek",           -1, 15, 32, 18, 20
  LTEXT      IDM_ABOUTBOX_06, ID_ABOUTBOX_06, 50, 19, 27, 8, WS_VISIBLE
  EDITTEXT                    ID_ABOUTBOX_07,8, 65, 208, 85, ES_MULTILINE | ES_READONLY | ES_WANTRETURN | WS_VSCROLL
  CONTROL		 "",              -1, "Static",SS_ETCHEDFRAME,8,5,207,55
  CONTROL		 "",              -1, "Static",SS_ETCHEDVERT,40,6,2,54
END

DEADBOX DIALOGEX 27, 17, 94, 62
STYLE WS_POPUP | DS_MODALFRAME | DS_3DLOOK | DS_CENTER
EXSTYLE WS_EX_STATICEDGE
FONT 12, "MS Sans Serif"
BEGIN
	CONTROL                       IDM_DEADBOX_00,  ID_DEADBOX_UNDO, "BUTTON", BS_DEFPUSHBUTTON | WS_CHILD | WS_VISIBLE | WS_TABSTOP, 14,24,67,10
	CONTROL                       IDM_DEADBOX_01,  ID_DEADBOX_DEAD, "STATIC", SS_CENTER | WS_CHILD | WS_VISIBLE | WS_GROUP, 10,8,75,8
	CONTROL "",                   -1, "STATIC", SS_ETCHEDFRAME | SS_SUNKEN| WS_CHILD | WS_VISIBLE, 8,5,80,13
	CONTROL                       IDM_DEADBOX_02,  ID_DEADBOX_RESTART, "BUTTON", BS_PUSHBUTTON | WS_CHILD | WS_VISIBLE | WS_TABSTOP, 22,40,52,10
	CONTROL "",                   -1, "STATIC", SS_ETCHEDFRAME | SS_SUNKEN | WS_CHILD | WS_VISIBLE, 3,2,89,55
END

DIFFBOX DIALOG 31, 21, 76, 121
STYLE DS_MODALFRAME | DS_3DLOOK | WS_POPUP | WS_CAPTION
CAPTION "Game Difficulty"
FONT 10, "MS Sans Serif"
BEGIN
	CONTROL "&Ok",                ID_DIFFBOX_01, "BUTTON", BS_PUSHBUTTON | WS_CHILD | WS_VISIBLE | WS_TABSTOP, 43, 103, 24, 15
	CONTROL "&Kids",              ID_DIFFBOX_02, "BUTTON", BS_AUTOCHECKBOX | BS_PUSHLIKE| WS_CHILD | WS_VISIBLE | WS_GROUP | WS_TABSTOP, 13, 23, 51, 12
	CONTROL "&Easy",              ID_DIFFBOX_03, "BUTTON", BS_AUTOCHECKBOX | BS_PUSHLIKE| WS_CHILD | WS_VISIBLE | WS_TABSTOP, 13, 37, 50, 12
	CONTROL "&Medium",            ID_DIFFBOX_04, "BUTTON", BS_AUTOCHECKBOX | BS_PUSHLIKE| WS_CHILD | WS_VISIBLE | WS_TABSTOP, 13, 51, 50, 12
	CONTROL "&Hard",              ID_DIFFBOX_05, "BUTTON", BS_AUTOCHECKBOX | BS_PUSHLIKE| WS_CHILD | WS_VISIBLE | WS_TABSTOP, 13, 65, 50, 12
	CONTROL "&Deadly",            ID_DIFFBOX_06, "BUTTON", BS_AUTOCHECKBOX | BS_PUSHLIKE| WS_CHILD | WS_VISIBLE | WS_TABSTOP, 13, 79, 50, 12
	CONTROL "&All",               ID_DIFFBOX_07, "BUTTON", BS_PUSHBUTTON | WS_CHILD | WS_VISIBLE | WS_TABSTOP, 9, 103, 24, 15
	CONTROL "Select",             ID_DIFFBOX_08, "BUTTON", BS_GROUPBOX | WS_CHILD | WS_VISIBLE, 7, 8, 62, 91
END



GRAPHBOX DIALOG 7, 12, 197, 145
STYLE DS_MODALFRAME | WS_POPUP | WS_CAPTION | WS_SYSMENU
CAPTION "Select Graphics Set"
BEGIN
	CONTROL "Select One",         ID_GRAPHBOX_01, "button", BS_GROUPBOX | WS_CHILD | WS_VISIBLE, 9, 6, 181, 60
	CONTROL "&Internal Graphics", ID_GRAPHBOX_02, "BUTTON", BS_AUTOCHECKBOX | BS_PUSHLIKE| WS_CHILD | WS_VISIBLE | WS_TABSTOP, 18, 16, 68, 10
	CONTROL "&User Graphics ",    ID_GRAPHBOX_03, "BUTTON", BS_AUTOCHECKBOX | BS_PUSHLIKE| WS_CHILD | WS_VISIBLE | WS_TABSTOP, 108, 16, 71, 10
	CONTROL "",                   ID_GRAPHBOX_10, "LISTBOX", LBS_STANDARD | LBS_DISABLENOSCROLL | WS_CHILD | WS_VISIBLE, 18, 38, 161, 30
	PUSHBUTTON "&Close",          ID_GRAPHBOX_04, 161, 68, 28, 11, WS_CHILD | WS_VISIBLE | WS_TABSTOP
	LTEXT "Author :",             ID_GRAPHBOX_05, 43, 134, 31, 8, WS_CHILD | WS_VISIBLE | WS_GROUP
	EDITTEXT                      ID_GRAPHBOX_11, 10, 98, 175, 33, ES_MULTILINE | ES_READONLY | ES_WANTRETURN
	CTEXT "Laser Tank Graphic Set Description", ID_GRAPHBOX_06, 22, 86, 147, 8, WS_CHILD | WS_VISIBLE | WS_GROUP
	LTEXT "Text",                 ID_GRAPHBOX_07, 79, 134, 95, 8, SS_LEFT | SS_NOPREFIX | WS_CHILD | WS_VISIBLE | WS_GROUP
	CONTROL "&View Opening Screen ",ID_GRAPHBOX_08, "BUTTON", BS_AUTOCHECKBOX | BS_PUSHLIKE | WS_CHILD | WS_VISIBLE | WS_TABSTOP, 9, 68, 80, 11
	PUSHBUTTON "Change &Directory", ID_GRAPHBOX_09, 95, 68, 60, 11, WS_CHILD | WS_VISIBLE | WS_TABSTOP
END

LOADLEV DIALOG 8, 22, 246, 166
STYLE DS_MODALFRAME | DS_3DLOOK | WS_POPUP | WS_CAPTION
CAPTION "Pick Level to Load"
FONT 10, "Courier"
BEGIN
	CONTROL "",                   ID_LOADLEV_02,"EDIT", ES_LEFT | ES_NUMBER | WS_CHILD | WS_VISIBLE | WS_GROUP| WS_BORDER | WS_TABSTOP,178,127,30,12
	LISTBOX                       ID_LOADLEV_08,6,18,235,104, LBS_NOTIFY | LBS_OWNERDRAWFIXED| LBS_HASSTRINGS | WS_VISIBLE | WS_BORDER | WS_VSCROLL | WS_TABSTOP | LBS_WANTKEYBOARDINPUT
	CONTROL "&Cancel",            ID_LOADLEV_01, "BUTTON", BS_PUSHBUTTON | WS_CHILD | WS_VISIBLE | WS_TABSTOP, 212, 146, 33, 15
	CONTROL "icon1",              -1, "STATIC", SS_ICON | WS_CHILD | WS_VISIBLE, 3, 145, 14, 20
	CONTROL "&Filter",            ID_LOADLEV_03, "BUTTON", BS_PUSHBUTTON | WS_CHILD | WS_VISIBLE | WS_TABSTOP, 21, 146, 29, 15
	CONTROL "File:",              ID_LOADLEV_04, "STATIC", SS_RIGHT | WS_CHILD | WS_VISIBLE | WS_GROUP, 57, 149, 34, 8
	CONTROL "- File Loading Error -", ID_LOADLEV_05, "STATIC", SS_NOPREFIX | SS_LEFT | WS_CHILD | WS_VISIBLE | WS_GROUP, 92, 149, 112, 8
	CONTROL "",                   -1, "STATIC", SS_ETCHEDFRAME | WS_CHILD | WS_VISIBLE, 55, 146, 154, 15
	CONTROL "Lev#   Name                           Author", ID_LOADLEV_06, "STATIC", SS_LEFT | WS_CHILD | WS_VISIBLE | WS_GROUP, 7, 6, 240, 8
	CONTROL "or Direct Level Number Entry >>",ID_LOADLEV_07,"STATIC" ,SS_LEFT | WS_CHILD | WS_VISIBLE | WS_GROUP, 21, 130, 157, 8
END

HINTBOX DIALOG 20, 26, 161, 76
STYLE DS_MODALFRAME | DS_3DLOOK |WS_POPUP | WS_CAPTION | WS_SYSMENU
CAPTION "Modify Hint"
BEGIN
	CONTROL "",                   ID_HINTBOX_03, "EDIT", ES_LEFT | ES_MULTILINE | ES_WANTRETURN | WS_CHILD | WS_VISIBLE | WS_BORDER | WS_TABSTOP, 4, 4, 153, 52
	CONTROL "&Ok",                ID_HINTBOX_01, "BUTTON", BS_PUSHBUTTON | WS_CHILD | WS_VISIBLE | WS_TABSTOP, 125, 61, 29, 11
	CONTROL "&Cancel",            ID_HINTBOX_02, "BUTTON", BS_PUSHBUTTON | WS_CHILD | WS_VISIBLE | WS_TABSTOP, 89, 61, 29, 11
	CONTROL "icon1",              -1, "STATIC", SS_ICON | WS_CHILD | WS_VISIBLE, 7, 59, 16, 16
END

RETBOX DIALOGEX 80, 43, 64, 20
STYLE WS_POPUP | DS_MODALFRAME | DS_3DLOOK
EXSTYLE WS_EX_STATICEDGE
FONT 10, "MS Sans Serif"
BEGIN
	CONTROL "&Return to Game", ID_RETBOX_00, "BUTTON", BS_DEFPUSHBUTTON | WS_CHILD | WS_VISIBLE, 2, 2, 60, 15
END

WINBOX DIALOGEX 18, 18, 153, 151
STYLE DS_MODALFRAME | WS_POPUP | DS_CENTER
EXSTYLE WS_EX_STATICEDGE
FONT 12, "Arial"
BEGIN
	DEFPUSHBUTTON "&Ok",          ID_WINBOX_00,110, 133, 35, 10
	CONTROL       "",             -1, "STATIC", SS_ETCHEDFRAME | SS_SUNKEN | WS_CHILD | WS_VISIBLE, 3, 3, 147, 50
	CONTROL       "You Won ! ! !",ID_WINBOX_01, "STATIC", SS_CENTER | WS_CHILD | WS_VISIBLE | WS_GROUP, 44, 9, 64, 8
	LTEXT         "File :",       ID_WINBOX_02, 10, 23, 23,  8, WS_VISIBLE
    LTEXT         "- Error -",    ID_WINBOX_03, 35, 23, 112, 8, WS_VISIBLE
	LTEXT         "",             ID_WINBOX_04, 10, 32, 130, 8, WS_VISIBLE
	LTEXT         "",             ID_WINBOX_05, 10, 40, 130, 8, WS_VISIBLE
	CONTROL       "",             -1, "STATIC", SS_ETCHEDFRAME | WS_CHILD | WS_VISIBLE, 41, 7, 70, 12
	ICON          "icon1",        -1, 6, 7, 14, 14
	ICON          "icon1",        -1, 131, 7, 14, 14
	CONTROL       "",             -1, "STATIC", SS_ETCHEDFRAME | SS_SUNKEN | WS_CHILD | WS_VISIBLE, 3, 57, 147, 89
	CONTROL       "",             ID_WINBOX_06, "EDIT", ES_LEFT | ES_MULTILINE | ES_READONLY | ES_WANTRETURN | WS_CHILD | WS_VISIBLE | WS_BORDER | WS_VSCROLL | WS_TABSTOP, 8, 62, 138, 67
END




SEARCH DIALOG 18, 18, 153, 104
STYLE DS_MODALFRAME | DS_3DLOOK | WS_POPUP | WS_CAPTION | WS_SYSMENU
CAPTION "Filter Level Data"
FONT 10, "MS Sans Serif"
BEGIN
	CONTROL "Enter Search String :",ID_SEARCH_01, "STATIC", SS_LEFT | WS_CHILD | WS_VISIBLE | WS_GROUP, 6, 7, 68, 8
	CONTROL "",                     ID_SEARCH_07, "EDIT", ES_LEFT | WS_CHILD | WS_VISIBLE | WS_BORDER | WS_TABSTOP, 78, 6, 67, 12
	CONTROL "Search By",            ID_SEARCH_02, "BUTTON", BS_GROUPBOX | WS_CHILD | WS_VISIBLE, 8, 17, 110, 20
	CONTROL "&Title",               ID_SEARCH_03, "BUTTON", BS_AUTORADIOBUTTON | WS_CHILD | WS_VISIBLE | WS_TABSTOP, 20, 25, 41, 10
	CONTROL "&Author",              ID_SEARCH_04, "BUTTON", BS_AUTORADIOBUTTON | WS_CHILD | WS_VISIBLE | WS_TABSTOP,67, 25, 46, 10
	CONTROL "&Cancel",              ID_SEARCH_05, "BUTTON", BS_PUSHBUTTON | WS_CHILD | WS_VISIBLE | WS_TABSTOP, 73, 90, 32, 11
	CONTROL "&Ok",                  ID_SEARCH_06, "BUTTON", BS_PUSHBUTTON | WS_CHILD | WS_VISIBLE | WS_TABSTOP, 113, 90, 35, 11
	CONTROL "",-1, "STATIC", SS_ETCHEDFRAME | WS_CHILD | WS_VISIBLE, 3, 3, 145, 40
	CONTROL "ICON1", -1, "STATIC", SS_ICON | WS_CHILD | WS_VISIBLE, 6, 86, 20, 20
	CONTROL "&Only Unsolved Levels",ID_SEARCH_08, "BUTTON", BS_AUTOCHECKBOX | WS_CHILD | WS_VISIBLE | WS_TABSTOP, 10, 44, 130, 12
	CONTROL "&Filter by Difficulty",ID_SEARCH_09, "BUTTON", BS_AUTOCHECKBOX | WS_CHILD | WS_VISIBLE | WS_TABSTOP,10,58,100,12
	CONTROL "&Kids",                ID_SEARCH_10, "BUTTON", BS_AUTOCHECKBOX | BS_PUSHLIKE | WS_CHILD | WS_VISIBLE | WS_DISABLED| WS_GROUP | WS_TABSTOP, 5,70,27,10
	CONTROL "&Easy",                ID_SEARCH_11, "BUTTON", BS_AUTOCHECKBOX | BS_PUSHLIKE | WS_CHILD | WS_VISIBLE | WS_DISABLED| WS_TABSTOP, 33,70,27,10
	CONTROL "&Medium",              ID_SEARCH_12, "BUTTON", BS_AUTOCHECKBOX | BS_PUSHLIKE | WS_CHILD | WS_VISIBLE | WS_DISABLED| WS_TABSTOP, 61,70,27,10
	CONTROL "&Hard",                ID_SEARCH_13, "BUTTON", BS_AUTOCHECKBOX | BS_PUSHLIKE | WS_CHILD | WS_VISIBLE | WS_DISABLED| WS_TABSTOP, 89,70,27,10
	CONTROL "&Deadly",              ID_SEARCH_14, "BUTTON", BS_AUTOCHECKBOX | BS_PUSHLIKE | WS_CHILD | WS_VISIBLE | WS_DISABLED| WS_TABSTOP, 117,70,27,10
	CONTROL "", -1, "STATIC", SS_ETCHEDFRAME | WS_CHILD | WS_VISIBLE, 3, 57, 145, 27
END

LOADTID DIALOG 11, 25, 150, 40
STYLE DS_MODALFRAME | DS_3DLOOK | WS_POPUP | WS_CAPTION | WS_SYSMENU
CAPTION "Pick Tunnel ID #"
BEGIN
	CONTROL "",                   ID_LOADTID_01, "EDIT", ES_LEFT | ES_NUMBER | WS_CHILD | WS_VISIBLE | WS_BORDER | WS_TABSTOP, 38, 20, 24, 12
	CONTROL "0 - 7",              ID_LOADTID_02,"STATIC",SS_LEFT | WS_CHILD | WS_VISIBLE,65,21,30,8
	CONTROL "&Ok",                ID_LOADTID_03, "BUTTON", BS_PUSHBUTTON | WS_CHILD | WS_VISIBLE | WS_TABSTOP, 92, 20, 29, 11
	CONTROL "Enter the ID Number for this Tunnel", ID_LOADTID_04, "STATIC", SS_LEFT | WS_CHILD | WS_VISIBLE | WS_GROUP, 5, 7, 135, 8
END


HIGHBOX DIALOG 14, 30, 215, 110
STYLE DS_MODALFRAME | DS_3DLOOK | WS_POPUP | WS_CAPTION
CAPTION "! New High Score !"
FONT 8, "MS Sans Serif"
BEGIN
	CONTROL "&Ok",            ID_HIGHBOX_01, "BUTTON", BS_PUSHBUTTON | WS_CHILD | WS_VISIBLE | WS_TABSTOP, 175, 88, 35, 15
	CONTROL "",               ID_HIGHBOX_14, "EDIT", ES_LEFT | WS_CHILD | WS_VISIBLE | WS_BORDER | WS_TABSTOP, 178, 43, 26, 12
	CONTROL "Level Number :", ID_HIGHBOX_02, "STATIC", SS_RIGHT | WS_CHILD | WS_VISIBLE | WS_GROUP, 3, 9, 55, 10
	CONTROL "Level Name :",   ID_HIGHBOX_03, "STATIC", SS_RIGHT | WS_CHILD | WS_VISIBLE | WS_GROUP, 6, 23, 52, 8
	CONTROL "Moves :",        ID_HIGHBOX_04, "STATIC", SS_RIGHT | WS_CHILD | WS_VISIBLE | WS_GROUP, 11, 44, 30, 8
	CONTROL "Shots :",        ID_HIGHBOX_05, "STATIC", SS_LEFT | WS_CHILD | WS_VISIBLE | WS_GROUP, 84, 44, 26, 8
	CONTROL "",               -1, "STATIC", SS_ETCHEDFRAME | WS_CHILD | WS_VISIBLE, 5, 6, 204, 30
	CONTROL "0",              ID_HIGHBOX_06, "STATIC", SS_NOPREFIX | SS_RIGHT | WS_CHILD | WS_VISIBLE | WS_GROUP, 46, 44, 21, 8
	CONTROL "0",              ID_HIGHBOX_07, "STATIC", SS_NOPREFIX | SS_RIGHT | WS_CHILD | WS_VISIBLE | WS_GROUP, 113, 44, 21, 8
	CONTROL "",               -1, "STATIC", SS_ETCHEDFRAME | WS_CHILD | WS_VISIBLE, 5, 39, 204, 19
	CONTROL "0",              ID_HIGHBOX_08, "STATIC", SS_NOPREFIX | SS_RIGHT | WS_CHILD | WS_VISIBLE | WS_GROUP, 65, 9, 20, 8
	CONTROL " ",              ID_HIGHBOX_09, "STATIC", SS_NOPREFIX | SS_LEFT | SS_NOPREFIX | WS_CHILD | WS_VISIBLE | WS_GROUP, 65, 24, 134, 8
	CONTROL "Initials :",     ID_HIGHBOX_10, "STATIC", SS_RIGHT | WS_CHILD | WS_VISIBLE | WS_GROUP, 141, 44, 31, 8
	CONTROL "ICON1",          -1, "STATIC", SS_ICON | WS_CHILD | WS_VISIBLE, 182, 62, 18, 20
	CONTROL "",               ID_HIGHBOX_15, "STATIC", SS_NOPREFIX | SS_LEFT | WS_CHILD | WS_DISABLED | WS_GROUP, 22, 68, 130, 8
	CONTROL "Global HS :",    ID_HIGHBOX_12, "STATIC", SS_RIGHT | WS_CHILD | WS_VISIBLE | WS_DISABLED | WS_GROUP, 16, 92, 40, 8
	CONTROL "- No Data -",    ID_HIGHBOX_13, "STATIC", SS_NOPREFIX | SS_LEFT | WS_CHILD | WS_DISABLED| WS_VISIBLE | WS_GROUP, 60, 92, 105, 8
	CONTROL "",               -1, "STATIC", SS_ETCHEDFRAME | WS_CHILD | WS_VISIBLE, 10, 86, 160, 19
END


HIGHLIST DIALOG 8, 22, 246, 177
STYLE DS_MODALFRAME | DS_3DLOOK | WS_POPUP | WS_CAPTION
CAPTION "High Scores"
FONT 10, "Courier"
BEGIN
	LISTBOX                   ID_LISTBOX,6,18,237,132, LBS_NOTIFY | LBS_OWNERDRAWFIXED| LBS_HASSTRINGS | WS_VISIBLE | WS_BORDER | WS_VSCROLL | WS_TABSTOP | LBS_WANTKEYBOARDINPUT
	CONTROL "icon1",          -1, "STATIC", SS_ICON | WS_CHILD | WS_VISIBLE, 5, 153, 18, 20
	CONTROL "&Ok",            ID_HIGHLIST_01, "BUTTON", BS_PUSHBUTTON | WS_CHILD | WS_VISIBLE | WS_TABSTOP, 209, 155, 29, 15
	CONTROL "- File Loading Error -", ID_HIGHLIST_02, "STATIC", SS_NOPREFIX | SS_LEFT | WS_CHILD | WS_VISIBLE  | WS_GROUP, 28, 158, 173, 8
	CONTROL "",               -1, "STATIC", SS_ETCHEDFRAME | WS_CHILD | WS_VISIBLE, 26, 156, 175, 12
	CONTROL "Lev#  Name                          Moves  Shots  Initials", ID_HIGHLIST_03, "STATIC", SS_LEFT | WS_CHILD | WS_VISIBLE | WS_GROUP, 5, 3, 240, 8
END


GHIGHLIST DIALOG 8, 22, 310, 170
STYLE DS_MODALFRAME | DS_3DLOOK | WS_POPUP | WS_CAPTION
CAPTION "Global High Scores"
FONT 8, "Courier New"
BEGIN
	CONTROL "",               ID_LISTBOX, "LISTBOX", LBS_NOTIFY | LBS_OWNERDRAWFIXED| LBS_HASSTRINGS| WS_CHILD | WS_VISIBLE | WS_BORDER | WS_VSCROLL | WS_TABSTOP | LBS_WANTKEYBOARDINPUT, 6, 24, 300, 122
	CONTROL "icon1",          -1, "STATIC", SS_ICON | WS_CHILD | WS_VISIBLE, 6, 148, 21, 18
	CONTROL "&Ok",            ID_GHIGHLIST_01, "BUTTON", BS_PUSHBUTTON | WS_CHILD | WS_VISIBLE | WS_TABSTOP, 279, 150, 29, 15
	CONTROL "Lev#  Name                             M      S   Init   M     S  Init", ID_GHIGHLIST_02, "STATIC", SS_LEFT | WS_CHILD | WS_VISIBLE | WS_GROUP, 8, 16, 290, 8
	CONTROL "Global",         ID_GHIGHLIST_03, "STATIC", SS_LEFT | WS_CHILD | WS_VISIBLE | WS_GROUP, 176, 5, 29, 8
	CONTROL "Local",          ID_GHIGHLIST_04, "STATIC", SS_CENTER | WS_CHILD | WS_VISIBLE | WS_GROUP, 238, 5, 26, 8
	CONTROL "- No Data -",    ID_GHIGHLIST_05, "STATIC", SS_NOPREFIX | SS_LEFT | WS_CHILD | WS_VISIBLE | WS_GROUP, 50, 153, 160, 8
	CONTROL "",               -1, "STATIC", SS_ETCHEDFRAME | WS_CHILD | WS_VISIBLE, 30, 150, 210, 15
	CONTROL "&Beat",          ID_GHIGHLIST_06, "BUTTON", BS_PUSHBUTTON | WS_CHILD | WS_VISIBLE | WS_TABSTOP, 245, 150, 29, 15
END


RECBOX DIALOG 29, 25, 105, 54
STYLE DS_MODALFRAME | DS_3DLOOK | WS_POPUP | WS_CAPTION
CAPTION "Recording Game"
FONT 10, "MS Sans Serif"
BEGIN
	CONTROL "Please Enter Your Name", ID_RECBOX_01, "STATIC", SS_LEFT | WS_CHILD | WS_VISIBLE | WS_GROUP, 10, 4, 85, 10
	CONTROL "",               ID_RECBOX_03, "EDIT", ES_LEFT | WS_CHILD | WS_VISIBLE | WS_BORDER | WS_TABSTOP, 7, 18, 91, 12
	CONTROL "&Ok",            ID_RECBOX_02, "BUTTON", BS_PUSHBUTTON | WS_CHILD | WS_VISIBLE | WS_TABSTOP, 71, 35, 24, 15
	CONTROL "ICON1",          -1, "STATIC", SS_ICON | WS_CHILD | WS_VISIBLE, 5, 35, 16, 16
END

PLAYBOX DIALOG 126, 47, 116, 106
STYLE DS_MODALFRAME | DS_3DLOOK | WS_POPUP | WS_CAPTION
CAPTION "Playback Game"
FONT 8, "MS Sans Serif"
BEGIN
	CONTROL "&Close",         ID_PLAYBOX_01, "BUTTON", BS_PUSHBUTTON | WS_CHILD | WS_VISIBLE | WS_TABSTOP, 67, 82, 40, 14
	CONTROL "&Play",          ID_PLAYBOX_02, "BUTTON", BS_PUSHBUTTON | WS_CHILD | WS_VISIBLE | WS_TABSTOP, 67, 63, 40, 14
	CONTROL "&Reset",         ID_PLAYBOX_03, "BUTTON", BS_PUSHBUTTON | WS_CHILD | WS_VISIBLE | WS_TABSTOP, 67, 44, 39, 14
	CONTROL "&Fast",          ID_PLAYBOX_04, "BUTTON", BS_AUTORADIOBUTTON | BS_PUSHLIKE | WS_CHILD | WS_VISIBLE | WS_GROUP | WS_TABSTOP, 9, 44, 40, 14
	CONTROL "&Slow",          ID_PLAYBOX_05, "BUTTON", BS_AUTORADIOBUTTON | BS_PUSHLIKE | WS_CHILD | WS_VISIBLE | WS_TABSTOP, 9, 63, 40, 14
	CONTROL "S&tep",          ID_PLAYBOX_06, "BUTTON", BS_AUTORADIOBUTTON | BS_PUSHLIKE | WS_CHILD | WS_VISIBLE | WS_TABSTOP, 9, 82, 40, 14
	CONTROL "Step :",         ID_PLAYBOX_07, "STATIC", SS_RIGHT | WS_CHILD | WS_VISIBLE | WS_GROUP, 17, 8, 25, 8
	CONTROL "of",             ID_PLAYBOX_08, "STATIC", SS_LEFT | WS_CHILD | WS_VISIBLE | WS_GROUP, 66, 8, 10, 8
	CONTROL "0",              ID_PLAYBOX_09, "STATIC", SS_RIGHT | WS_CHILD | WS_VISIBLE | WS_GROUP, 45, 8, 16, 8
	CONTROL "0",              ID_PLAYBOX_10, "STATIC", SS_RIGHT | WS_CHILD | WS_VISIBLE | WS_GROUP, 80, 8, 16, 8
	CONTROL "Speed",          ID_PLAYBOX_11, "BUTTON", BS_GROUPBOX | WS_CHILD | WS_VISIBLE, 3, 31, 52, 70
	CONTROL "",               -1, "STATIC", SS_ETCHEDFRAME | WS_CHILD | WS_VISIBLE, 61, 35, 52, 66
END

PICKLEVEL DIALOG 11, 25, 142, 85
STYLE DS_MODALFRAME | DS_3DLOOK | WS_POPUP | WS_CAPTION | WS_SYSMENU
CAPTION "Save Laser Tank Level"
BEGIN
	CONTROL "",               -1, "STATIC", SS_ETCHEDFRAME | WS_CHILD | WS_VISIBLE,                                          7,5,130,44
	CONTROL "Enter the Level Number to", ID_PICKLEVEL_02, "STATIC", SS_LEFT | WS_CHILD | WS_VISIBLE | WS_GROUP,              11,7,121,8
	CONTROL "Save :",         ID_PICKLEVEL_03, "STATIC", SS_LEFT | WS_CHILD | WS_VISIBLE | WS_GROUP,                         11,20,39,8
	CONTROL "",               ID_PICKLEVEL_05, "EDIT", ES_LEFT | ES_NUMBER | WS_CHILD | WS_VISIBLE | WS_BORDER | WS_TABSTOP, 53,19,30,12
	CONTROL "0 - 10",         ID_PICKLEVEL_04, "STATIC", SS_CENTER | WS_CHILD | WS_VISIBLE | WS_DISABLED | WS_GROUP,         88,22,44,8
	CONTROL "icon1",          -1, "STATIC", SS_ICON | WS_CHILD | WS_VISIBLE,                                                 8,51,21,20
	CONTROL "11",             ID_PICKLEVEL_07, "STATIC", SS_RIGHT | WS_CHILD | WS_VISIBLE | WS_DISABLED | WS_GROUP,          79,35,16,8
	CONTROL "= Add",          ID_PICKLEVEL_06, "STATIC", SS_LEFT | WS_CHILD | WS_VISIBLE | WS_DISABLED | WS_GROUP,           97,35,36,8
	CONTROL "&Ok",            ID_PICKLEVEL_01, "BUTTON", BS_PUSHBUTTON | WS_CHILD | WS_VISIBLE | WS_TABSTOP,                 105,53,32,12
	CONTROL "&Clear High Score", ID_PICKLEVEL_08, "BUTTON", BS_AUTOCHECKBOX | WS_CHILD | WS_VISIBLE | WS_GROUP | WS_TABSTOP, 8,73,97,10
END

