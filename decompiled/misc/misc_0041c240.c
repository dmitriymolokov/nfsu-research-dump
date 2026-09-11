/* spd-match: far pct=13.28 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0041C240 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00419c20();
int __fastcall FUN_0041c240(int obj, int param_1, int param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, int param_9, undefined4 param_10, undefined4 param_11, undefined4 param_12, undefined4 param_13, undefined4 param_14, undefined4 param_15, undefined4 param_16, undefined4 param_17, undefined4 param_18, undefined4 param_19, undefined4 param_20)

{
  int *piVar1;

  int iVar2;
  undefined4 *puVar3;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
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
  int local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 local_10;
  int local_c;
  undefined4 *local_8;
  undefined4 local_4;
  
  piVar1 = *(int **)(param_1 + 0x10 + (obj + param_2 * 8) * 4);
  iVar2 = 0;
  if (piVar1 != (int *)0x0) {
    local_78 = param_10;
    local_74 = param_11;
    local_70 = param_12;
    local_6c = param_13;
    local_68 = param_14;
    local_64 = param_15;
    local_60 = param_16;
    local_5c = param_17;
    local_58 = param_18;
    local_54 = param_19;
    local_4c = 8000;
    local_48 = 8000;
    local_44 = 8000;
    local_40 = 8000;
    puVar3 = local_38;
    for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    local_38[1] = param_3;
    local_38[3] = param_5;
    local_24 = param_7;
    local_38[2] = param_4;
    local_18 = &local_78;
    local_28 = param_6;
    local_c = param_9 * 0x18;
    local_20 = param_8;
    local_14 = &local_70;
    local_4 = param_20;
    local_8 = &local_68;
    local_50 = 0;
    local_3c = 500;
    local_38[0] = 0x38;
    local_1c = param_9;
    local_10 = 0;
    iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,local_38,0x140);
    if (iVar2 < 0) {
      FUN_00419c20("ERROR: Failed to update condition force on channel %d\n",local_4);
    }
  }
  return iVar2;
}
