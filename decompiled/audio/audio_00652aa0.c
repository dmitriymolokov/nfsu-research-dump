/* Decompiled from Speed.exe @ 00652aa0 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 FUN_00652aa0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_d0;
  undefined1 local_cc [204];
  
  if (DAT_00713ee4 != '\0') {
    DAT_00713f3c = FUN_00652800;
    iVar2 = FUN_00658440();
    *param_1 = iVar2;
    piVar1 = (int *)(DAT_00713f4c + iVar2 * 8);
    iVar2 = 0;
    *piVar1 = param_2;
    *(undefined1 *)(piVar1 + 1) = 1;
    if (*(short *)(param_2 + 6) != 0) {
      do {
        local_d0 = FUN_00658470(param_2,iVar2);
        if (local_d0 != 0) {
          local_d0 = local_d0 + 4;
          do {
            iVar3 = FUN_006586b0(&local_d0,local_cc);
            FUN_00658570(local_cc,param_2);
            FUN_00652a30(local_cc,0);
          } while (iVar3 != 0);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)(uint)*(ushort *)(param_2 + 6));
    }
    *(undefined1 *)(piVar1 + 1) = 0;
    return 8;
  }
  return 0xfffffff6;
}

