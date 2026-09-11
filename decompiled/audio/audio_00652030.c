/* Decompiled from Speed.exe @ 00652030 */
/* Module: Audio */
/* Ghidra DecompileVAs */


int FUN_00652030(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_4;
  
  if (DAT_00713ee4 != '\0') {
    iVar1 = FUN_00652720(param_1);
    if (-1 < iVar1) {
      local_4 = 0xffffffff;
      iVar2 = FUN_006584e0(iVar1,&local_4);
      while (iVar2 != 0) {
        FUN_00651f30(local_4);
        iVar2 = FUN_006584e0(iVar1,&local_4);
      }
    }
    return iVar1;
  }
  return -10;
}

