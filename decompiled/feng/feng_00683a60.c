/* Decompiled from Speed.exe @ 00683a60 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 FUN_00683a60(uint param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 0;
  FUN_0063f190(&DAT_00717f18);
  if ((((int)param_1 < 0x100) || (DAT_00717f40 <= (int)(param_1 & 0xff))) ||
     (iVar1 = (param_1 & 0xff) * 0x30, iVar2 = iVar1 + DAT_00717f44,
     *(uint *)(iVar1 + DAT_00717f44) != param_1)) {
    iVar2 = 0;
  }
  else {
    iVar4 = *(int *)(iVar2 + 0x10);
    iVar3 = *(int *)(iVar2 + 0xc);
    if (iVar4 == 0) {
      *(undefined4 *)(iVar2 + 0xc) = 1;
    }
  }
  FUN_0063f1a0(&DAT_00717f18);
  if ((iVar2 != 0) && (iVar4 == 0)) {
    if (iVar3 != 0) {
      FUN_00642450("ASYNCFILE_release - release called more than once for this request\n");
    }
    iVar4 = *(int *)(iVar2 + 0x1c);
    while (iVar4 != 0) {
      FUN_00639d70(*(undefined4 *)(iVar2 + 0x1c));
      iVar4 = *(int *)(iVar2 + 0x1c);
    }
    if (*(int *)(iVar2 + 0x10) == 0) {
      if (param_2 != (int *)0x0) {
        *param_2 = *(int *)(iVar2 + 0x2c) - *(int *)(iVar2 + 8);
      }
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar2 + 8);
      }
      FUN_006831f0();
      return 1;
    }
    if (param_2 != (int *)0x0) {
      *param_2 = 0;
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
    FUN_006831f0();
  }
  return 0xffffffff;
}

