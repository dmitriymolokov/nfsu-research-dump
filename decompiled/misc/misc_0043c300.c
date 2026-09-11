/* spd-match: far pct=11.74 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2296 */
#include "ghidra_compat.h"

int __cdecl FUN_0040ed00();
int __cdecl FUN_0041f600();
int __cdecl FUN_00421a50();
int __cdecl FUN_00421a70();
int __cdecl FUN_00424c80();
int __cdecl FUN_00432e70();
int __cdecl FUN_00436f10();
int __cdecl FUN_00438860();
int __cdecl FUN_004388d0();
int __cdecl FUN_00439010();
int __cdecl FUN_004390f0();
int __cdecl FUN_0043b7f0();
int __cdecl FUN_0043b850();
int __cdecl FUN_004acd20();
int __cdecl FUN_00548820();
int __cdecl FUN_00548840();
int __cdecl FUN_00548a80();
int __cdecl FUN_0054b170();
int __cdecl FUN_005801b0();
int __cdecl FUN_005802c0();
int __cdecl FUN_00580400();
int __cdecl FUN_005ab2b0();
int __cdecl FUN_00674898();
extern int DAT_006f1f64;
extern int DAT_0073d868;
extern int DAT_0078a2f0;
extern int DAT_0078a2fc;
extern int DAT_0078a318;
extern int DAT_0078a31c;

void __fastcall FUN_0043c300(int param_1)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  float10 fVar4;
  undefined1 local_9a4 [1024];
  int local_5a4;
  int local_5a0;
  int local_59c;
  int local_598;
  int *local_594;
  undefined4 *local_590;
  undefined1 *local_58c;
  undefined1 local_585;
  undefined4 local_584 [49];
  undefined4 local_4c0;
  undefined4 auStack_4bc [11];
  undefined4 auStack_490 [27];
  int local_424;
  uint local_420;
  undefined1 local_41c [1040];
  undefined4 local_c;
  undefined1 *local_8;
  
  FUN_00548820();
  local_420 = 0;
  cVar2 = FUN_00421a50();
  if (cVar2 == '\0') {
    cVar2 = FUN_0041f600();
    if (cVar2 == '\0') {
      if (DAT_0078a318 != 0) {
        local_420 = 1;
      }
    }
    else {
      local_420 = 3;
    }
  }
  else {
    local_420 = 2;
  }
  uVar3 = FUN_0043b7f0();
  FUN_00548840(uVar3);
  FUN_00548840(local_420 & 0xff);
  FUN_00548840(*(undefined1 *)(*(int *)(param_1 + 4) + 5));
  FUN_00548840((int)(short)DAT_0078a2f0);
  FUN_00548840((undefined1)DAT_0078a2fc);
  FUN_00548840(((int)DAT_0078a31c) & 0xff);
  for (local_424 = 0; local_424 < 4; local_424 = local_424 + 1) {
    if (*(int *)(param_1 + 8 + local_424 * 4) != 0) {
      local_594 = (int *)FUN_0043b850(local_424);
      FUN_00438860();
      local_590 = (undefined4 *)FUN_00432e70();
      if ((local_594 != *(int **)(param_1 + 4)) && (local_598 = FUN_004390f0(), local_598 != 0)) {
        FUN_004acd20(local_598,1);
        local_584[0] = *local_590;
        auStack_490[DAT_0078a31c] = local_590[((int)DAT_0078a31c) + 0x3d];
        local_4c0 = local_590[0x31];
        for (local_59c = 1; local_59c <= (int)DAT_0078a31c; local_59c = local_59c + 1) {
          auStack_4bc[local_59c] = local_590[local_59c + 0x32];
        }
        local_590 = local_584;
      }
      FUN_00548840(*(undefined1 *)((int)local_594 + 5));
      FUN_00439010();
      uVar3 = FUN_00424c80();
      FUN_00548840(uVar3);
      FUN_00548840(*(undefined1 *)local_590);
      FUN_00548840(*(undefined1 *)(local_590 + 2));
      FUN_00548a80(local_590[0x1f]);
      fVar4 = (float10)FUN_0040ed00();
      FUN_00548a80((float)fVar4);
      if (local_590[0x1e] == 0) {
        FUN_00548a80(0);
      }
      else {
        fVar4 = (float10)FUN_0040ed00();
        FUN_00548a80((float)fVar4);
      }
      for (local_5a0 = 1; local_5a0 <= (int)DAT_0078a31c; local_5a0 = local_5a0 + 1) {
        fVar4 = (float10)FUN_0040ed00();
        FUN_00548a80((float)fVar4);
      }
      FUN_00548a80(local_590[7]);
      FUN_00548a80(local_590[6]);
      FUN_00548a80(local_590[0x2b]);
      fVar4 = (float10)FUN_0040ed00();
      FUN_00548a80((float)fVar4);
      fVar4 = (float10)FUN_0040ed00();
      FUN_00548a80((float)fVar4);
      FUN_00548a80(local_590[0x2e]);
      FUN_00436f10();
      FUN_00436f10();
      for (local_5a4 = 1; local_5a4 <= (int)DAT_0078a31c; local_5a4 = local_5a4 + 1) {
        FUN_00436f10();
      }
      FUN_00436f10();
      FUN_00548840(local_594[0x62] & 0xff);
      iVar1 = *local_594;
      if (iVar1 == 4) {
        local_585 = 1;
      }
      else if (iVar1 == 5) {
        local_585 = 2;
      }
      else if (iVar1 == 6) {
        local_585 = 3;
      }
      else {
        local_585 = 0;
      }
      FUN_00548840(local_585);
      FUN_00439010();
      local_58c = (undefined1 *)FUN_00421a70();
      FUN_00548840(*local_58c);
      FUN_005802c0();
      uVar3 = FUN_00674898();
      FUN_00548840(uVar3);
      FUN_005801b0();
      uVar3 = FUN_00674898();
      FUN_00548840(uVar3);
      FUN_00580400();
      uVar3 = FUN_00674898();
      FUN_00548840(uVar3);
    }
  }
  local_8 = local_41c;
  local_c = FUN_004388d0();
  if (DAT_006f1f64 != 0) {
    FUN_005ab2b0(local_8,local_c,local_9a4,0x400,1);
    FUN_0054b170(&DAT_0073d868);
  }
  return;
}
