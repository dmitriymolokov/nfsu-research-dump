/* Decompiled from Speed.exe @ 00650d00 */
/* Module: Audio */
/* Ghidra DecompileVAs */


undefined4 FUN_00650d00(undefined4 param_1,short param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xfffffff8;
  if (DAT_00713ee4 == '\0') {
    return 0xfffffff6;
  }
  FUN_0064e520();
  iVar1 = FUN_00655000(param_1);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x20) = (int)param_2;
    uVar2 = 0;
  }
  FUN_0064e540();
  return uVar2;
}

