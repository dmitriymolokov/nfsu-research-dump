/* Decompiled from Speed.exe @ 0064af67 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_0064af67(int *param_1,int *param_2)

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
  
  iVar11 = param_1[5] - param_1[3];
  iVar5 = param_1[1];
  iVar1 = param_1[7];
  iVar2 = (param_1[1] + param_1[7]) - (param_1[5] + param_1[3]);
  iVar8 = param_1[5] + param_1[3] + param_1[1] + param_1[7];
  iVar3 = FUN_0064af54(iVar11 + (iVar5 - iVar1),0x61f8,iVar8,iVar11,iVar2);
  iVar11 = FUN_0064af54(iVar11,0x8a8c);
  iVar11 = iVar11 + iVar3;
  iVar4 = FUN_0064af54(iVar2,0xb505);
  iVar5 = FUN_0064af54(iVar5 - iVar1,0x14e7b);
  iVar8 = iVar8 + (iVar5 - iVar3);
  iVar9 = (iVar5 - iVar3) + iVar4;
  iVar4 = iVar4 + iVar11;
  iVar5 = *param_1;
  iVar1 = param_1[4];
  iVar2 = *param_1;
  iVar3 = param_1[4];
  iVar6 = FUN_0064af54(param_1[2] - param_1[6],0xb505);
  iVar10 = param_1[2] + param_1[6] + iVar6;
  iVar7 = (iVar5 + iVar1) - iVar10;
  iVar10 = iVar5 + iVar1 + iVar10;
  iVar5 = (iVar2 - iVar3) - iVar6;
  iVar6 = (iVar2 - iVar3) + iVar6;
  *param_2 = iVar10 + iVar8;
  param_2[1] = iVar6 + iVar9;
  param_2[2] = iVar5 + iVar4;
  param_2[3] = iVar7 + iVar11;
  param_2[4] = iVar7 - iVar11;
  param_2[5] = iVar5 - iVar4;
  param_2[6] = iVar6 - iVar9;
  param_2[7] = iVar10 - iVar8;
  return;
}

