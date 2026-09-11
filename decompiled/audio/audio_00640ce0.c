/* spd-match: far pct=11.56 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_7/buckets/audio_p1/batches/20260724T153641Z_w0_tc0 */
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

int __cdecl FUN_0063e5c0();
int __cdecl FUN_0063f0a0();
int __cdecl FUN_0063f170();
extern int DAT_0070fca0;
extern int DAT_0070fcc8;
extern int DAT_0070fdb0;
extern int DAT_0070fdb4;
extern unsigned int uRam0070fda0;

void FUN_00640CE0(void)

{
  BOOL BVar1;
  
  if (cRam0070fcdc == '\x01') {
    if (iRam0070fd84 != 0) {
      SystemParametersInfoA(0x11,URam0070fd7c,(PVOID)0x0,2);
      SystemParametersInfoA(0x56,URam0070fd80,(PVOID)0x0,2);
    }
    if (DAT_0070fcc8 != (HWND)0x0) {
      BVar1 = PostMessageA(DAT_0070fcc8,0x466,0,0);
      if (BVar1 == 0) {
        GetLastError();
      }
      while (DAT_0070fcc8 != (HWND)0x0) {
        FUN_0063e5c0(0);
        FUN_0063f0a0(0);
      }
    }
  }
  if ((iRam0070fd94 != 0) && (iRam0070fd94 = iRam0070fd94 + -1, iRam0070fd94 == 0)) {
    UnregisterClassA(DAT_0070fdb0,DAT_0070fdb4);
    uRam0070fda0 = 0;
    FUN_0063f170(&DAT_0070fca0);
    DAT_0070fdb4 = (HINSTANCE)0x0;
  }
  return;
}
