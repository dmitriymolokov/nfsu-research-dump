/* spd-match: far pct=14.06 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0041BF20 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00419c20();
int __fastcall FUN_0041bf20(int obj, undefined4 param_1, int param_2, int param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9, undefined4 param_10, undefined4 param_11, undefined4 param_12, undefined4 param_13, undefined4 param_14, undefined4 param_15, undefined4 param_16, undefined4 param_17, undefined4 param_18, undefined4 param_19, undefined4 param_20)

{
  int *piVar1;
  int iVar2;

  int iVar3;
  undefined4 *puVar4;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38 [4];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined4 local_c;
  undefined4 *local_8;
  undefined4 local_4;
  
  iVar2 = param_3;
  piVar1 = *(int **)(param_2 + 0x10 + (obj + param_3 * 8) * 4);
  iVar3 = 0;
  if (piVar1 != (int *)0x0) {
    local_5c = param_11;
    local_58 = param_12;
    local_54 = param_13;
    local_50 = param_14;
    param_3 = param_15;
    local_48 = param_17;
    local_44 = param_18;
    local_40 = param_19;
    local_3c = param_20;
    puVar4 = local_38;
    for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    local_38[2] = param_5;
    local_28 = param_7;
    local_38[1] = param_4;
    local_20 = param_9;
    local_38[3] = param_6;
    local_24 = param_8;
    local_18 = &local_5c;
    local_10 = &local_4c;
    local_1c = param_10;
    local_14 = &local_54;
    local_4 = param_16;
    local_8 = &param_3;
    local_4c = 0x14;
    local_38[0] = 0x38;
    local_c = 4;
    iVar3 = (**(code **)(*piVar1 + 0x18))(piVar1,local_38,0x140);
    if (iVar3 < 0) {
      FUN_00419c20("ERROR: Failed to update constant force on channel %d\n",iVar2);
    }
  }
  return iVar3;
}
