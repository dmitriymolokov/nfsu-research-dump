/* Decompiled from Speed.exe @ 00658e60 */
/* Module: Audio */
/* Ghidra DecompileVAs */


int FUN_00658e60(undefined4 param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  int local_4;
  
  if (DAT_00713ee4 == '\0') {
    return -10;
  }
  iVar1 = FUN_00652720(param_1);
  if (-1 < iVar1) {
    local_4 = -1;
    iVar2 = FUN_006584e0(iVar1,&local_4);
    while (iVar2 != 0) {
      *(undefined1 *)(local_4 * 0x8c + DAT_00713f48 + 0x61 + param_2) = param_3;
      FUN_00651490(param_2,local_4);
      FUN_00651450(local_4,param_2);
      iVar2 = FUN_006584e0(iVar1,&local_4);
    }
  }
  return iVar1;
}

