/* Decompiled from Speed.exe @ 00652800 */
/* Module: Audio */
/* Ghidra DecompileVAs */


undefined4 FUN_00652800(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_d0;
  undefined1 local_cc [204];
  
  if (DAT_00713ee4 == '\0') {
    return 0xfffffff6;
  }
  if (param_1 == -1) {
    iVar2 = 0;
    if (DAT_00713d98 != 0) {
      do {
        FUN_00652800(iVar2);
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)(uint)DAT_00713d98);
      return 0;
    }
  }
  else {
    iVar2 = FUN_006584a0(param_1);
    if (iVar2 != 0) {
      return 0xfffffff8;
    }
    FUN_0064e520();
    iVar2 = *(int *)(DAT_00713f4c + param_1 * 8);
    iVar4 = 0;
    if (0 < DAT_00713ee8) {
      iVar3 = 0;
      iVar1 = DAT_00713f48;
      do {
        if (*(short *)(iVar3 + 0x12 + iVar1) == param_1) {
          FUN_00652030(*(undefined4 *)(iVar3 + iVar1));
          iVar1 = DAT_00713f48;
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0x8c;
      } while (iVar4 < DAT_00713ee8);
    }
    iVar4 = 0;
    if (*(short *)(iVar2 + 6) != 0) {
      do {
        local_d0 = FUN_00658470(iVar2,iVar4);
        if (local_d0 != 0) {
          local_d0 = local_d0 + 4;
          do {
            iVar1 = FUN_006586b0(&local_d0,local_cc);
            FUN_00658660(local_cc);
            FUN_00652a30(local_cc,2);
          } while (iVar1 != 0);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)(uint)*(ushort *)(iVar2 + 6));
    }
    *(undefined4 *)(DAT_00713f4c + param_1 * 8) = 0;
    *(undefined1 *)(DAT_00713f4c + 4 + param_1 * 8) = 0;
    FUN_0064e540();
  }
  return 0;
}

