/* Decompiled from Speed.exe @ 00658d80 */
/* Module: Audio */
/* Ghidra DecompileVAs */


int FUN_00658d80(undefined4 param_1,short param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int local_4;
  
  if (DAT_00713ee4 == '\0') {
    return -10;
  }
  if (param_3 < -0x4000) {
    param_3 = -0x4000;
  }
  else if (0x3fff < param_3) {
    param_3 = 0x3fff;
  }
  iVar1 = FUN_00652720(param_1);
  if (-1 < iVar1) {
    local_4 = -1;
    iVar2 = FUN_006584e0(iVar1,&local_4);
    while (iVar2 != 0) {
      iVar2 = local_4 * 0x8c + DAT_00713f48;
      if (*(char *)(local_4 * 0x8c + 0x23 + DAT_00713f48) == '\x01') {
        *(short *)(iVar2 + 0x1e) = (short)param_3;
        *(short *)(iVar2 + 0x1c) = *(short *)(iVar2 + 0x50) + *(short *)(iVar2 + 0x4c) + param_2;
        if (DAT_00713ce0 == 0) {
          *(undefined2 *)(iVar2 + 0x1c) = 0;
        }
        FUN_006513b0(local_4);
      }
      iVar2 = FUN_006584e0(iVar1,&local_4);
    }
  }
  return iVar1;
}

