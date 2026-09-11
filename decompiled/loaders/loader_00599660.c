/* spd-match: far pct=7.72 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_00408200();
int __cdecl FUN_00408210();
int __cdecl FUN_00417490();
int __cdecl FUN_0041f5d0();
int __cdecl FUN_004216b0();
int __cdecl FUN_004216f0();
int __cdecl FUN_00421a50();
int __cdecl FUN_00424f50();
int __cdecl FUN_00432e10();
int __cdecl FUN_00454ff0();
int __cdecl FUN_00456fe0();
int __cdecl FUN_00457000();
extern int _DAT_006b5a58;

int FUN_00599660(undefined4 param_1,char param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  uint uVar6;
  float10 fVar7;
  int local_1c;
  int local_c;
  
  FUN_00424f50();
  FUN_00432e10();
  iVar2 = (-(uint)(param_2 != '\0') & 0xfffffffa) + 0x11;
  cVar1 = FUN_00421a50();
  if (((cVar1 != '\0') && (iVar3 = FUN_00408200(), 0 < iVar3)) &&
     (fVar7 = (float10)FUN_004216f0(0x3f800000), fVar7 < (float10)_DAT_006b5a58)) {
    iVar3 = FUN_00408200();
    FUN_004216b0(iVar3 * 100000);
    FUN_00408210();
    FUN_00417490();
    piVar4 = (int *)FUN_0041f5d0();
    local_1c = (**(code **)(*piVar4 + 0x1c))(0);
    cVar1 = FUN_00457000();
    if (cVar1 != '\0') {
      cVar1 = FUN_00456fe0();
      if (cVar1 == '\0') {
        local_1c = local_1c + -0x11;
      }
      else {
        local_1c = local_1c + -0xb;
      }
      pcVar5 = (char *)FUN_00454ff0();
      if (*pcVar5 != '\0') {
        return local_1c + iVar2;
      }
    }
  }
  for (local_c = 0; local_c < 10; local_c = local_c + 1) {
    uVar6 = FUN_004216b0(600000);
    pcVar5 = (char *)FUN_00454ff0();
    if (*pcVar5 != '\0') {
      return uVar6 / 100000 + iVar2;
    }
  }
  local_c = 0;
  while( true ) {
    if (5 < local_c) {
      return -1;
    }
    pcVar5 = (char *)FUN_00454ff0();
    if (*pcVar5 != '\0') break;
    local_c = local_c + 1;
  }
  return local_c + iVar2;
}
