/* spd-match: far pct=7.31 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_7/buckets/audio_p1/batches/20260724T153828Z_w0_tc0 */
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
typedef int (__cdecl *audio_hook_fn)(unsigned int, unsigned int);
extern audio_hook_fn pcRam0070fd90;
extern int UNK_0063fe60;
int __stdcall ReleaseMutex(void *);

extern int DAT_0070f6fc;

LRESULT FUN_00640440(int param_1,WPARAM param_2,int *param_3)

{
  SHORT SVar1;
  int iVar2;
  LRESULT LVar3;
  undefined4 uVar4;
  
  if (((param_1 != 0) || (DAT_0070f6fc == '\0')) || (pcRam0070fd90 == (code *)0x0))
  goto code_r0x00640520;
  if ((cRam006e768d == '\0') || ((*(byte *)(param_3 + 2) & 0x20) == 0)) {
    SVar1 = GetAsyncKeyState(0x11);
    if (SVar1 < 0) {
      uVar4 = 0x1d;
      if (*param_3 != 0x1b) goto code_r0x00640520;
      iVar2 = 1;
    }
    else {
      iVar2 = *param_3;
      if (((iVar2 != 0x5b) && (iVar2 != 0x5c)) && ((iVar2 != 0x5d && (iVar2 != 0x2c))))
      goto code_r0x00640520;
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0x38;
    if (*param_3 == 9) {
      iVar2 = 0xf;
    }
    else if (*param_3 == 0x1b) {
      iVar2 = 1;
    }
    else {
      SVar1 = GetAsyncKeyState(0x11);
      if ((-1 < SVar1) || (*param_3 != 0x20)) goto code_r0x00640520;
      iVar2 = 0x39;
    }
  }
  if (((pcRam0070fd90 != (code *)0x0) && (param_2 != 0x105)) && (param_2 != 0x101)) {
    iVar2 = pcRam0070fd90(uVar4,iVar2);
    if (iVar2 == 0) {
code_r0x00640520:
      LVar3 = CallNextHookEx(pHRam0070fd8c,param_1,param_2,(LPARAM)param_3);
      return LVar3;
    }
  }
  return 1;
}
