/* spd-match: far pct=9.05 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_7/buckets/audio_p1/batches/20260724T153828Z_w0_tc0 */
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

LRESULT FUN_00640350(int param_1,WPARAM param_2,uint param_3)

{
  SHORT SVar1;
  WPARAM WVar2;
  int iVar3;
  LRESULT LVar4;
  undefined4 uVar5;
  
  if (((param_1 != 0) || (DAT_0070f6fc == '\0')) || (pcRam0070fd90 == (code *)0x0))
  goto code_r0x00640420;
  if ((cRam006e768d == '\0') || ((param_3 & 0x20000000) == 0)) {
    SVar1 = GetAsyncKeyState(0x11);
    if (SVar1 < 0) {
      uVar5 = 0x1d;
      if (param_2 != 0x1b) goto code_r0x00640420;
      WVar2 = 1;
    }
    else {
      if (((param_2 != 0x5b) && (param_2 != 0x5c)) && ((param_2 != 0x5d && (param_2 != 0x2c))))
      goto code_r0x00640420;
      uVar5 = 0;
      WVar2 = param_2;
    }
  }
  else {
    uVar5 = 0x38;
    if (param_2 == 9) {
      WVar2 = 0xf;
    }
    else if (param_2 == 0x1b) {
      WVar2 = 1;
    }
    else {
      SVar1 = GetAsyncKeyState(0x11);
      if ((-1 < SVar1) || (param_2 != 0x20)) goto code_r0x00640420;
      WVar2 = 0x39;
    }
  }
  if (pcRam0070fd90 != (code *)0x0) {
    iVar3 = pcRam0070fd90(uVar5,WVar2);
    if (iVar3 == 0) {
code_r0x00640420:
      LVar4 = CallNextHookEx(pHRam0070fd88,param_1,param_2,param_3);
      return LVar4;
    }
  }
  return 1;
}
