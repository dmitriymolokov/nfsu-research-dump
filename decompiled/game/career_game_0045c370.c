/* spd-match: far pct=3.81 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2440_float_int */
#include "ghidra_compat.h"

int __cdecl FUN_0044d5d0();
int __cdecl FUN_0045c500();
int __cdecl FUN_0045c550();
int __cdecl FUN_0045c640();
int __cdecl FUN_0057a8e0();
int __cdecl FUN_005a6150();
int __cdecl FUN_005a7390();
extern int _DAT_006b74e4;
extern int _DAT_006cc798;
extern int _DAT_006cc8bc;

void FUN_0045c370(char *param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,float param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  float10 fVar6;
  float local_8;
  int local_4;
  
  piVar4 = param_2;
  iVar2 = param_2[0xe5];
  iVar3 = param_2[0xea];
  if (((param_2[0xe3] != 0) && (*(int *)(iVar3 + 4) != 0)) && (cVar1 = *param_1, cVar1 < '\x14')) {
    if (cVar1 == '\0') {
      iVar2 = param_2[0xe2];
      FUN_0044d5d0();
      fVar6 = (float10)FUN_0057a8e0();
      iVar5 = *(int *)(iVar3 + 4) + -1;
      local_4 = param_2[(char)iVar2 * 0xe + 0xe] + 1;
      if (iVar5 <= param_2[(char)iVar2 * 0xe + 0xe] + 1) {
        local_4 = iVar5;
      }
      param_2 = (int *)(unsigned int)((float)fVar6);
      if (ABS((float)fVar6) < _DAT_006b74e4) {
        param_2 = (int *)0x0;
      }
    }
    else {
      local_4 = FUN_005a6150(iVar3,param_1 + cVar1 * 0x10,1);
      if (local_4 < 0) {
        return;
      }
      fVar6 = (float10)FUN_005a7390(param_1 + cVar1 * 0x10,iVar2);
      param_2 = (int *)(unsigned int)((float)fVar6);
    }
    local_8 = param_6;
    if (ABS(param_6 - _DAT_006cc798) < _DAT_006cc8bc !=
        (ABS(param_6 - _DAT_006cc798) == _DAT_006cc8bc)) {
      fVar6 = (float10)FUN_0045c550(piVar4 + 0xe3);
      local_8 = (float)fVar6;
    }
    if (local_4 < *(int *)(iVar3 + 4)) {
      do {
        FUN_0045c640(local_8,param_5,param_3);
        FUN_0045c500(param_1,param_2,*piVar4);
        local_4 = local_4 + 1;
      } while (local_4 < *(int *)(iVar3 + 4));
    }
    *(undefined4 *)(*(int *)(*piVar4 + 0x2c) + 1000) = 0;
  }
  return;
}
