/* Decompiled from Speed.exe @ 005929c0 */
/* Module: Loader */
/* Ghidra DecompileAll */


void __thiscall
FUN_005929c0(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_50 [48];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  *(undefined4 *)(param_1 + 0x408) = 1;
  FUN_00401cd0();
  local_20 = *param_3;
  local_1c = param_3[1];
  local_18 = param_3[2];
  FUN_00579310(local_50);
  iVar3 = *(int *)(*(int *)(param_1 + 0x140) + 0x1c);
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  *(undefined4 *)(iVar3 + 0x90) = *param_5;
  *(undefined4 *)(iVar3 + 0x94) = uVar1;
  *(undefined4 *)(iVar3 + 0x98) = uVar2;
  if (*(int *)(iVar3 + 0xe4) == 0) {
    FUN_00579190();
  }
  return;
}

