/* Decompiled from Speed.exe @ 00683b60 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 fn_00683b60(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar3 = 0;
  iVar4 = 0;
  FUN_0063f190(&DAT_00717f18);
  if ((((int)param_1 < 0x100) || (DAT_00717f40 <= (int)(param_1 & 0xff))) ||
     (iVar1 = (param_1 & 0xff) * 0x30, iVar2 = iVar1 + DAT_00717f44,
     *(uint *)(iVar1 + DAT_00717f44) != param_1)) {
    iVar2 = 0;
  }
  else {
    iVar5 = *(int *)(iVar2 + 0x1c);
    iVar3 = *(int *)(iVar2 + 0x10);
    iVar4 = *(int *)(iVar2 + 0xc);
    if ((iVar5 != 0) || (iVar4 == 0)) {
      *(undefined4 *)(iVar2 + 0x10) = 1;
    }
  }
  FUN_0063f1a0(&DAT_00717f18);
  if (((iVar2 != 0) && (iVar3 == 0)) && (*(int *)(iVar2 + 0x10) != 0)) {
    if (iVar5 != 0) {
      fn_00639ad0(iVar5);
      return 1;
    }
    if (iVar4 == 0) {
      FUN_006831f0();
    }
    return 1;
  }
  return 0xffffffff;
}

