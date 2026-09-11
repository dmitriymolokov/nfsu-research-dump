/* spd-match: far pct=11.64 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_0041f550();
int __cdecl FUN_0041f5d0();
int __cdecl FUN_0041f5e0();
int __cdecl FUN_0041f680();
int __cdecl FUN_0041f690();
int __cdecl FUN_00424e70();
int __cdecl FUN_00424f50();
int __cdecl FUN_004280f0();
int __cdecl FUN_00432d60();
int __cdecl FUN_00442590();
int __cdecl FUN_00449ff0();
int __cdecl FUN_0044d640();
int __cdecl FUN_00457020();
int __cdecl FUN_004ad8d0();

uint FUN_0059afa0(undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4,int param_5
                 ,char param_6)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  float10 fVar7;
  int local_18;
  
  cVar1 = FUN_00457020();
  fVar7 = (float10)FUN_00442590();
  FUN_004ad8d0();
  FUN_00432d60(param_3,(float)fVar7);
  local_18 = 0;
  do {
    uVar3 = FUN_0041f680();
    if ((int)uVar3 <= local_18) {
      return uVar3 & 0xffffff00;
    }
    iVar4 = FUN_0041f690();
    if (((iVar4 != param_5) && (cVar2 = FUN_004280f0(), cVar2 == '\0')) &&
       ((param_6 != '\0' || (iVar4 = FUN_00424e70(), iVar4 != 0)))) {
      piVar5 = (int *)FUN_0041f5d0();
      FUN_0044d640();
      iVar4 = FUN_00449ff0();
      iVar6 = FUN_00424f50();
      if ((iVar4 == iVar6) && (uVar3 = (**(code **)(*piVar5 + 0x40))(), uVar3 == (cVar1 == '\0'))) {
        FUN_0041f5e0();
        fVar7 = (float10)FUN_0041f550();
        if (fVar7 < (float10)param_4) {
          return 1;
        }
      }
    }
    local_18 = local_18 + 1;
  } while( true );
}
