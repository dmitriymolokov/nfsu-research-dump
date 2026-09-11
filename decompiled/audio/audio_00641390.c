/* spd-match: far pct=11.68 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_7/buckets/audio_p1/batches/20260724T153641Z_w0_tc0 */
#include "ghidra_compat.h"

typedef int LRESULT;
typedef unsigned int WPARAM;
typedef long LPARAM;
typedef short SHORT;
typedef struct tagMSG {
  void *hwnd; unsigned int message; WPARAM wParam; LPARAM lParam;
  unsigned int time; long pt_x; long pt_y;
} MSG, tagMSG;
typedef struct tagPOINT { long x, y; } POINT, *LPPOINT;
typedef int _PtFuncCompare;
typedef struct COleDataObject { unsigned char _pad[16]; } COleDataObject;
typedef struct _AFX_EDIT_STATE { unsigned char _pad[64]; } _AFX_EDIT_STATE;
int __cdecl CreateObject(void);
extern unsigned char cRam006e768c;
extern unsigned char cRam006e768d;
extern unsigned char cRam0070fcdc;
extern int iRam0070fd84;
extern int iRam0070fd94;
extern unsigned int URam0070fd7c;
extern unsigned int URam0070fd80;
extern unsigned int sRam0070fd70;
extern void *pHRam0070fd88;
extern void *pHRam0070fd8c;
extern void *pcRam0070fd90;

int __cdecl FUN_0063eea0();
int __cdecl FUN_0063f190();
int __cdecl FUN_0063f1a0();
int __cdecl FUN_006401d0();
int __cdecl FUN_00640bc0();
int __cdecl FUN_00641a70();
int __cdecl FUN_00641ac0();
int __cdecl FUN_00641b10();
extern int DAT_0070f6cc;
extern int DAT_0070f6fc;
extern int DAT_0070fca0;
extern int DAT_0070fcc8;
extern int DAT_0070fcd0;
extern int DAT_0070fd78;
extern int DAT_0070fda4;
extern code *DAT_0070fdac;
extern int _DAT_0070fccc;
extern int _DAT_0070fcd4;
extern int _DAT_0070fcd8;
extern int _DAT_0070fd74;
extern void LAB_00640030(void);

void FUN_00641390(void)

{
  HWND hWnd;
  BOOL BVar1;
  int iVar2;
  tagMSG local_1c;
  
  hWnd = (HWND)FUN_00640bc0();
  FUN_00641a70(&DAT_0070f6cc);
  _DAT_0070fd74 = 1;
  FUN_00641ac0(&DAT_0070f6cc);
  FUN_00641b10(&DAT_0070f6cc);
  DAT_0070fd78 = 0;
  _DAT_0070fd74 = 0;
  DAT_0070fcc8 = hWnd;
  _DAT_0070fccc = hWnd;
  if (DAT_0070fcd0 == 0) {
    GetClientRect(hWnd,(LPRECT)&local_1c);
    ClientToScreen(hWnd,(LPPOINT)&local_1c);
    _DAT_0070fcd4 = local_1c.hwnd;
    _DAT_0070fcd8 = local_1c.message;
  }
  else {
    SetForegroundWindow(hWnd);
    _DAT_0070fcd4 = (HWND)0x0;
    _DAT_0070fcd8 = 0;
  }
  SetActiveWindow(hWnd);
  DAT_0070f6fc = '\x01';
  while (hWnd == DAT_0070fcc8) {
    BVar1 = GetMessageA(&local_1c,(HWND)0x0,0,0);
    if (BVar1 == 0) {
      if (DAT_0070fdac == (code *)0x0) {
        FUN_0063eea0(&LAB_00640030,1,10);
      }
      else {
        (*DAT_0070fdac)();
      }
    }
    else {
      FUN_0063f190(&DAT_0070fca0);
      if ((DAT_0070fda4 == 0) && (iVar2 = FUN_006401d0(local_1c.wParam), iVar2 == 0)) {
        TranslateMessage(&local_1c);
      }
      DispatchMessageA(&local_1c);
      FUN_0063f1a0(&DAT_0070fca0);
    }
    if (DAT_0070fd78 != 0) {
      DAT_0070fd78 = 0;
      DestroyWindow(DAT_0070fcc8);
      DAT_0070fcc8 = (HWND)0x0;
    }
    if (DAT_0070fcd0 != 0) {
      if ((DAT_0070f6fc == '\0') || (DAT_0070fcc8 == (HWND)0x0)) {
        BVar1 = IsIconic(DAT_0070fcc8);
        if (BVar1 == 0) {
          SetForegroundWindow(DAT_0070fcc8);
        }
      }
      else {
        ShowCursor(0);
      }
    }
  }
  return;
}
