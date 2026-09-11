/* Decompiled from Speed.exe @ 0040caa0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_0040caa0(undefined4 param_1)

{
  int iVar1;
  undefined4 unaff_EBX;
  int iVar2;
  
  if (DAT_00743c58 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = DAT_00743c58 + -4;
  }
  iVar1 = FUN_0040cb70();
  while (iVar2 != iVar1) {
    FUN_0053f9f0(iVar2,unaff_EBX,param_1);
    if (*(int *)(iVar2 + 4) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + 4) + -4;
    }
  }
  return;
}

