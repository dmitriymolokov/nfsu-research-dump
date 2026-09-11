/* spd-match: far pct=7.39 M4.0.2-CE */
/* Decompiled from Speed.exe @ 00483b90 */
/* Module: Career_Game */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

extern char s_333_333__006b6c84[];

void  FUN_00483b90(float *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fStack_35c;
  float local_358;
  float local_350;
  float local_34c;
  float local_348;
  float fStack_344;
  float fStack_30c;
  float fStack_308;
  float fStack_304;
  float local_300;
  float local_2fc;
  float local_2f8;
  float fStack_2f4;
  undefined1 local_2f0 [4];
  undefined1 auStack_2ec [32];
  int aiStack_2cc [160];
  int iStack_4c;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_2c;
  void *local_28;
  undefined4 local_24;
  void *pvStack_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = (undefined1 *)&LAB_0068600b;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  FUN_0040bc10();
  if (param_1 == (float *)0x0) {
    param_1 = (float *)(param_4 + 0x60);
  }
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_2c = 0;
  local_28 = (void *)0x0;
  local_24 = 0;
  local_350 = *param_1 * *(float *)&_DAT_006cc7dc + local_300 * *(float *)&_DAT_006cc7dc;
  local_34c = param_1[1] * *(float *)&_DAT_006cc7dc + local_2fc * *(float *)&_DAT_006cc7dc;
  local_348 = param_1[2] * *(float *)&_DAT_006cc7dc + local_2f8 * *(float *)&_DAT_006cc7dc;
  local_358 = (SQRT((*param_1 - local_300) * (*param_1 - local_300) +
                    (param_1[1] - local_2fc) * (param_1[1] - local_2fc) +
                    (param_1[2] - local_2f8) * (param_1[2] - local_2f8)) + *(float *)&_DAT_006cc7bc) *
              *(float *)&_DAT_006cc7dc;
  FUN_00440740();
  local_14 = 0;
  FUN_004407b0(&local_350,local_358,0);
  FUN_005abda2(local_2f0,param_1,param_3);
  fStack_35c = local_2fc * (*(float *)&_DAT_006cc7bc / fStack_2f4);
  local_358 = (*(float *)&_DAT_006cc7bc / fStack_2f4) * local_2f8;
  FUN_004838e0(param_2,auStack_2ec,param_1,&fStack_30c,&local_34c);
  fStack_30c = fStack_30c + local_34c;
  fStack_308 = fStack_308 + local_348;
  fStack_304 = fStack_304 + fStack_344;
  if (param_4 != 0) {
    fStack_344 = fStack_304 - param_1[2];
    fVar3 = (fStack_308 - param_1[1]) * (fStack_308 - param_1[1]);
    fVar2 = (fStack_30c - *param_1) * (fStack_30c - *param_1);
    local_34c = *(float *)(*(int *)(param_4 + 0x3c) + 0x100);
    fVar4 = ABS(*(float *)(*(int *)(param_4 + 0x3c) + 0xf0));
    if (fVar4 < local_34c) {
      fVar4 = local_34c;
    }
    fVar4 = fVar4 + (float)(*(unsigned int *)((unsigned char *)&(s_333_333__006b6c84) + 0));
    if (SQRT(fStack_344 * fStack_344 + fVar2 + fVar3) < fVar4) {
      fStack_304 = SQRT(fVar4 * fVar4 - (fVar2 + fVar3)) + param_1[2];
    }
  }
  FUN_00483ad0(param_2,param_3,param_1,&fStack_35c);
  iVar5 = 0;
  if (0 < iStack_4c) {
    do {
      piVar1 = aiStack_2cc + iVar5;
      iVar5 = iVar5 + 1;
      *(char *)(*piVar1 + 8) = *(char *)(*piVar1 + 8) + -1;
    } while (iVar5 < iStack_4c);
  }
  ExceptionList = local_28;
  return;
}
