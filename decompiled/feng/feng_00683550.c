/* Decompiled from Speed.exe @ 00683550 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void fn_00683550(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar4 = FUN_00639c00(param_3[7]);
  iVar2 = param_3[0xb];
  param_3[2] = param_3[2] + iVar4;
  param_3[0xb] = iVar2 + iVar4;
  if ((iVar4 < 0x2000) || (param_3[4] != 0)) {
    FUN_0063f190(&DAT_00717f18);
    pcVar1 = (code *)param_3[6];
    iVar2 = param_3[4];
    iVar4 = param_3[3];
    param_3[7] = 0;
    FUN_0063f1a0(&DAT_00717f18);
    if (iVar2 == 0) {
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)(*param_3);
      }
    }
    else if (iVar4 == 0) {
      FUN_006831f0();
      return;
    }
    return;
  }
  iVar3 = param_3[9];
  iVar6 = param_3[10] - iVar4;
  param_3[10] = iVar6;
  param_3[9] = iVar3 + iVar4;
  if (0x2000 < iVar6) {
    iVar6 = 0x2000;
  }
  uVar5 = FUN_0063a700(param_3[8],iVar3 + iVar4,iVar2 + iVar4,iVar6,99,param_3);
  param_3[7] = uVar5;
  if (param_3[7] == 0) {
    FUN_00642450("ASYNCFILE_read - unable to initiate file read\n");
    return;
  }
  FUN_00639f20(param_3[7],fn_00683550);
  return;
}

