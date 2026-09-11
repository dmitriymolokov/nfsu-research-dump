/* Decompiled from Speed.exe @ 006559d0 */
/* Module: Audio */
/* Ghidra DecompileAll */


int FUN_006559d0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_4;
  
  if (DAT_00713ee4 == '\0') {
    return -10;
  }
  iVar1 = FUN_00652720(param_1);
  if (-1 < iVar1) {
    local_4 = 0xffffffff;
    iVar2 = FUN_006584e0(iVar1,&local_4);
    while (iVar2 != 0) {
      FUN_00659c20(local_4,param_2);
      iVar2 = FUN_006584e0(iVar1,&local_4);
    }
  }
  return iVar1;
}

