/* Decompiled from Speed.exe @ 005ba35f */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 __fastcall FUN_005ba35f(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    FUN_005ba278(param_1,0,0,"internal error: scope underflow");
    return 0x80004005;
  }
  if (((*(int *)(iVar1 + 0x10) == 4) && (*(int *)(iVar1 + 0x1c) != 0)) &&
     (*(int *)(*(int *)(iVar1 + 0x1c) + 0x10) != 4)) {
    for (piVar3 = (int *)(iVar1 + 0x18); *piVar3 != 0; piVar3 = (int *)(*piVar3 + 0xc)) {
      *(undefined4 *)(*(int *)(*piVar3 + 8) + 0x2c) = 1;
    }
    *piVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x1c) + 0x18);
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xc) + 0x1c) + 0x18) =
         *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x18);
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x18) = 0;
  }
  puVar2 = *(undefined4 **)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = puVar2[7];
  puVar2[7] = 0;
  (**(code **)*puVar2)(1);
  return 0;
}

