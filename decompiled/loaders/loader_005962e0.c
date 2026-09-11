/* Decompiled from Speed.exe @ 005962e0 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_005962e0(undefined4 *param_1,int *param_2)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  int iVar10;
  char local_50 [48];
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_00685cbb;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_00468340(param_1,2);
  *param_1 = &PTR_FUN_006c8720;
  DAT_0073600c = DAT_0073600c + 1;
  if (DAT_00736034 < DAT_0073600c) {
    DAT_00736034 = DAT_0073600c;
  }
  *(undefined1 *)((int)param_1 + 0x16) = 0;
  *param_1 = &PTR_FUN_006b8a90;
  local_14 = 0;
  DAT_00736020 = DAT_00736020 + 1;
  if (DAT_00736048 < DAT_00736020) {
    DAT_00736048 = DAT_00736020;
  }
  param_1[0x18] = param_2;
  piVar9 = DAT_00737778;
  piVar7 = (int *)FUN_0040a880();
  if (piVar9 != piVar7) {
    do {
      if (piVar9[0x20] == *param_2) goto LAB_005963b5;
      piVar9 = (int *)*piVar9;
    } while (piVar9 != piVar7);
  }
  piVar9 = (int *)0x0;
LAB_005963b5:
  param_1[0x19] = piVar9;
  param_2[3] = (int)param_1;
  if (*(int *)(&DAT_0072a008 + *(short *)(param_1[0x18] + 4) * 4) != 0) {
    pbVar1 = (byte *)(*(short *)(param_1[0x18] + 6) * 0x30 +
                      *(int *)(*(int *)(&DAT_0072a008 + *(short *)(param_1[0x18] + 4) * 4) + 0x20) +
                     0xe);
    *pbVar1 = *pbVar1 & 0xef;
  }
  FUN_00565da0("VirginSmokeable%s",param_1[0x19] + 8);
  pcVar8 = (char *)(param_1 + 0xd);
  iVar10 = 0x28;
  iVar3 = -(int)pcVar8;
  do {
    cVar2 = pcVar8[(int)(local_50 + iVar3)];
    iVar10 = iVar10 + -1;
    *pcVar8 = cVar2;
    if (cVar2 == '\0') break;
    pcVar8 = pcVar8 + 1;
  } while (iVar10 != 0);
  *(undefined1 *)((int)param_1 + 0x5b) = 0;
  param_1[4] = 0;
  *(undefined1 *)((int)param_1 + 0x1b) = 0;
  *(undefined1 *)((int)param_1 + 0x1d) = 0;
  FUN_00468680(param_1,param_1[0x18] + 0x10);
  iVar3 = param_1[0x18];
  fVar4 = *(float *)(iVar3 + 0x20) - *(float *)(iVar3 + 0x10);
  fVar5 = *(float *)(iVar3 + 0x24) - *(float *)(iVar3 + 0x14);
  fVar6 = *(float *)(iVar3 + 0x28) - *(float *)(iVar3 + 0x18);
  param_1[8] = SQRT(fVar4 * fVar4 + fVar6 * fVar6 + fVar5 * fVar5) * _DAT_006cc7dc;
  ExceptionList = local_1c;
  return param_1;
}

