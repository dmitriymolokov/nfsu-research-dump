/* Decompiled from Speed.exe @ 0053c020 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


undefined4 __fastcall FUN_0053c020(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[param_1[8] + 0xb];
  iVar2 = FUN_00674898();
  if ((((0 < iVar2) && (*(int *)(iVar1 + 8) == 0)) && (param_1[0x184] == 1)) &&
     (*(int *)(param_1[1] + 0x10) != 5)) {
    (**(code **)(*param_1 + 0xc0))();
    (**(code **)(*param_1 + 0x40))();
    param_1[0x184] = 0;
    FUN_00538f80();
    return 0;
  }
  FUN_00538f80();
  return 1;
}

