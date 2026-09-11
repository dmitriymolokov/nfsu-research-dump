/* spd-match: far pct=14.90 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_7/buckets/audio_p1/batches/20260724T153641Z_w0_tp1 */
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

int __cdecl FUN_00412e30(...);
int __cdecl FUN_00412fb0(...);
int __cdecl FUN_0063f0a0(...);
int __cdecl FUN_00642e80(...);
int __cdecl FUN_00645c59(...);
int __cdecl FUN_00645ce0(...);
int __cdecl FUN_00645eb0(...);
int __cdecl FUN_00646070(...);
int __cdecl FUN_00646090(...);
int __cdecl FUN_006460b0(...);
int __cdecl FUN_006460d0(...);
int __cdecl FUN_006489c9(...);
int __cdecl FUN_00648a0b(...);
int __cdecl FUN_00649d50(...);

struct ThisCallBox {
  void FUN_00645a77(undefined4 param_2, int *param_3);
};
void ThisCallBox::FUN_00645a77(undefined4 param_2, int *param_3) {
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_1c;
  undefined1 local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  local_c = 0;
  local_8 = FUN_006460d0();
  *param_3 = 0;
  while( true ) {
    local_10 = FUN_00412e30(local_8);
    FUN_0063f0a0(0);
    if (local_10 != 0) break;
    cVar1 = FUN_00412fb0(local_8);
    if (cVar1 != '\0') {
                    
      FUN_00642e80("done\n");
    }
  }
  uVar2 = FUN_00645c59(local_10,4);
  cVar1 = FUN_00649d50(uVar2);
  if (cVar1 != '\0') {
    local_c = 2;
  }
  if (local_c == 0) {
    local_18 = 0;
    local_1c = uVar2;
                    
    FUN_00642e80("Bad STREAM_release %s\n",&local_1c);
  }
  *(int *)(((int)this) + 0x90) = *(int *)(((int)this) + 0x90) + 1;
  if (1 < *(int *)(((int)this) + 0x90)) {
    *(undefined4 *)(((int)this) + 0x90) = 0;
  }
  local_14 = ((int)this) + 0x78 + *(int *)(((int)this) + 0x90) * 0xc;
  *param_3 = local_14;
  FUN_00645eb0(local_10);
  if (local_c == 2) {
    uVar2 = FUN_00645ce0(local_10 + 4,4);
    FUN_00646090(uVar2);
    FUN_00646070(local_10);
  }
  else {
    uVar2 = FUN_00645ce0(local_10 + 4,4);
    FUN_00646090(uVar2);
    FUN_00646070(local_10 + 8);
  }
  cVar1 = FUN_006460b0();
  if ((cVar1 == '\0') && (local_c == 2)) {
    uVar2 = CreateObject();
    iVar3 = FUN_006489c9(uVar2,local_14);
    if (iVar3 != 2) {
      FUN_00648a0b();
                    
      FUN_00642e80("RCMP_ASSERT in %s at %d \n %s\n","src/av/cmn/avplayer.cpp",0x766,
                   "!\"This file is not a MAD file\"");
    }
  }
  return;
}
