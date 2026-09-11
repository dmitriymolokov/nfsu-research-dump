/* Decompiled from Speed.exe @ 00658cf0 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 FUN_00658cf0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int local_4;
  
  if (DAT_00713ee4 == '\0') {
    return 0xfffffff6;
  }
  iVar1 = FUN_00652720(param_1);
  if (-1 < iVar1) {
    local_4 = -1;
    iVar2 = FUN_006584e0(iVar1,&local_4);
    while (iVar2 != 0) {
      *(short *)(local_4 * 0x8c + 0x6a + DAT_00713f48) = (short)param_2;
      FUN_006512c0(local_4,param_2);
      iVar2 = FUN_006584e0(iVar1,&local_4);
    }
  }
  return 0;
}

