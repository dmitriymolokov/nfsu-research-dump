/* Decompiled from Speed.exe @ 00650310 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 FUN_00650310(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = param_1[0x56];
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    if (*(int *)(iVar1 + 0x20) < 0) {
      return 1;
    }
    if (*(int *)(iVar1 + 0x20) == 0) {
      return 0;
    }
    uVar2 = FUN_00412f70(*param_1);
    if (4000000 < uVar2) {
      uVar2 = 4000000;
    }
    if (((uVar2 * 1000) / *(uint *)(iVar1 + 0x10) < *(uint *)(iVar1 + 0x20)) &&
       (iVar3 = FUN_00412f90(*param_1), iVar3 != 2)) {
      if (0 < (int)param_1[0x55]) {
        return 1;
      }
      iVar3 = FUN_00412f90(*param_1);
      if (iVar3 != 0) {
        return 1;
      }
    }
    *(undefined4 *)(iVar1 + 0x20) = 0;
  }
  return 0;
}

