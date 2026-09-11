/* Decompiled from Speed.exe @ 004af140 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004af140(int *param_1)

{
  byte *pbVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  byte *pbVar7;
  byte local_40;
  byte local_3f [63];
  
  if (param_1[0x728] != 0) {
    if (((param_1[0x724] != 0) && (*(int *)(param_1[0x724] + 8) != 0)) &&
       (iVar4 = FUN_0058c370(&DAT_00737b58), iVar4 != 0)) {
      if (((param_1[0x729] != 0) && (iVar4 = param_1[0x725], iVar4 != 0)) &&
         (*(int *)(iVar4 + 8) != 0)) {
        FUN_0058c500(iVar4);
        FUN_0058c760();
      }
      FUN_004323f0(param_1 + 0x394,param_1 + 0x1cc);
      FUN_0057f2b0(1);
      param_1[0x725] = param_1[0x724];
      param_1[0x728] = 0;
      param_1[0x729] = 1;
    }
    if (param_1[0x728] != 0) {
      return;
    }
  }
  if (param_1[0x727] != 0) {
    if (param_1[0x729] != 0) {
      iVar4 = param_1[0x725];
      if ((iVar4 != 0) && (*(int *)(iVar4 + 8) != 0)) {
        FUN_0058c500(iVar4);
        FUN_0058c760();
      }
      param_1[0x729] = 0;
    }
    FUN_004323f0(param_1 + 0x1cc,param_1 + 4);
    FUN_0057f2b0(1);
    iVar4 = 1;
    param_1[0x728] = 1;
    param_1[0x727] = 0;
    if (param_1[0x72b] == 0) {
      iVar4 = 2;
    }
    if (*param_1 == 2) {
      iVar4 = iVar4 + 2;
    }
    FUN_00565da0("DUMMY_SKIN%d",iVar4);
    iVar5 = -1;
    pbVar7 = &local_40;
    bVar2 = local_40;
    while (bVar2 != 0) {
      iVar5 = iVar5 * 0x21 + (uint)bVar2;
      pbVar1 = pbVar7 + 1;
      pbVar7 = pbVar7 + 1;
      bVar2 = *pbVar1;
    }
    param_1[0x2dd] = iVar5;
    FUN_00565da0("DUMMY_WHEEL%d",iVar4);
    iVar4 = -1;
    pbVar7 = &local_40;
    while (local_40 != 0) {
      iVar4 = iVar4 * 0x21 + (uint)local_40;
      pbVar1 = pbVar7 + 1;
      pbVar7 = pbVar7 + 1;
      local_40 = *pbVar1;
    }
    param_1[0x2de] = iVar4;
    piVar6 = (int *)FUN_0058c3b0(&DAT_00737b58,param_1 + 0x1cc);
    iVar4 = *piVar6;
    piVar3 = (int *)piVar6[1];
    *piVar3 = iVar4;
    *(int **)(iVar4 + 4) = piVar3;
    *DAT_00737ba8 = (int)piVar6;
    piVar3 = piVar6;
    piVar6[1] = (int)DAT_00737ba8;
    DAT_00737ba8 = piVar3;
    *piVar6 = (int)&DAT_00737ba4;
    param_1[0x724] = (int)piVar6;
    if (DAT_00737b64 == 0) {
      FUN_0058c840(&DAT_00737b58);
    }
    if (DAT_00737b6c == 0) {
      FUN_0058cbb0();
    }
  }
  return;
}

