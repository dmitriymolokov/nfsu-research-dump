/* Decompiled from Speed.exe @ 006520a0 */
/* Module: Audio */
/* Ghidra DecompileVAs */


int FUN_006520a0(undefined4 param_1,uint param_2)

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
      iVar2 = local_4 * 0x8c + DAT_00713f48;
      if (*(ushort *)(iVar2 + 0x88) == param_2) {
        return 0;
      }
      *(short *)(iVar2 + 0x88) = (short)param_2;
      FUN_00652ca0(local_4);
      FUN_00651260(local_4);
      iVar2 = FUN_006584e0(iVar1,&local_4);
    }
  }
  return iVar1;
}

