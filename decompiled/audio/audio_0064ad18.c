/* Decompiled from Speed.exe @ 0064ad18 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_0064ad18(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  if ((((((param_1[1] == 0 && param_1[2] == 0) && param_1[3] == 0) && param_1[4] == 0) &&
       param_1[5] == 0) && param_1[6] == 0) && param_1[7] == 0) {
    *param_2 = *param_1;
    param_2[8] = *param_1;
    param_2[0x10] = *param_1;
    param_2[0x18] = *param_1;
    param_2[0x20] = *param_1;
    param_2[0x28] = *param_1;
    param_2[0x30] = *param_1;
    param_2[0x38] = *param_1;
  }
  else {
    iVar2 = param_1[5] - param_1[3];
    iVar5 = param_1[1];
    iVar1 = param_1[7];
    iVar7 = (param_1[1] + param_1[7]) - (param_1[5] + param_1[3]);
    iVar9 = param_1[5] + param_1[3] + param_1[1] + param_1[7];
    iVar3 = FUN_0064af54(iVar2 + (iVar5 - iVar1),0x61f8,iVar9,iVar2,iVar7);
    iVar4 = FUN_0064af54(iVar2,0x8a8c);
    iVar4 = iVar4 + iVar3;
    iVar7 = FUN_0064af54(iVar7,0xb505);
    iVar5 = FUN_0064af54(iVar5 - iVar1,0x14e7b);
    iVar9 = iVar9 + (iVar5 - iVar3);
    iVar10 = (iVar5 - iVar3) + iVar7;
    iVar7 = iVar7 + iVar4;
    iVar5 = *param_1;
    iVar1 = param_1[4];
    iVar2 = *param_1;
    iVar3 = param_1[4];
    iVar6 = FUN_0064af54(param_1[2] - param_1[6],0xb505);
    iVar11 = param_1[2] + param_1[6] + iVar6;
    iVar8 = (iVar5 + iVar1) - iVar11;
    iVar11 = iVar5 + iVar1 + iVar11;
    iVar5 = (iVar2 - iVar3) - iVar6;
    iVar6 = (iVar2 - iVar3) + iVar6;
    *param_2 = iVar11 + iVar9;
    param_2[8] = iVar6 + iVar10;
    param_2[0x10] = iVar5 + iVar7;
    param_2[0x18] = iVar8 + iVar4;
    param_2[0x20] = iVar8 - iVar4;
    param_2[0x28] = iVar5 - iVar7;
    param_2[0x30] = iVar6 - iVar10;
    param_2[0x38] = iVar11 - iVar9;
  }
  return;
}

