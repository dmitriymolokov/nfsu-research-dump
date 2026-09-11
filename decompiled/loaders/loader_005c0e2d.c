/* Decompiled from Speed.exe @ 005c0e2d */
/* Module: Loader */
/* Ghidra DecompileAll */


int FUN_005c0e2d(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_005c0cfc(param_1);
  if (((puVar1 != (undefined4 *)0x0) && (iVar2 = puVar1[4], iVar2 != 0)) &&
     (*(int *)(iVar2 + 4) == 8)) {
    iVar2 = FUN_005ba77a(iVar2);
    if (iVar2 != 0) {
      iVar2 = FUN_005bcf1c(param_2,*(int *)(puVar1[8] + 8) + 0x10,puVar1 + 0xc);
      if (-1 < iVar2) {
        iVar2 = 0;
      }
      goto LAB_005c0e81;
    }
  }
  iVar2 = -0x7fffbffb;
LAB_005c0e81:
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  return iVar2;
}

