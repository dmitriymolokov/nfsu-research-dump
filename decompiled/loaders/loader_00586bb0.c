/* spd-match: far pct=13.65 M4.0.2-CE */
/* Decompiled from Speed.exe @ 00586bb0 */
/* Module: Loader */
/* Ghidra DecompileModule */


void FUN_00586bb0(undefined4 param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  int unaff_EBX;
  int unaff_ESI;
  int unaff_EDI;
  float10 fVar11;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 local_90 [36];
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 local_50 [48];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar8 = *(int *)(*(int *)(unaff_EDI + 0x14) + 0x18);
  *(undefined4 *)(unaff_EDI + 0x24) = param_1;
  *(undefined4 *)(unaff_EDI + 0x28) = param_2;
  *(undefined2 *)(unaff_ESI + 0x376) = param_3;
  *(undefined4 *)(unaff_ESI + 0x2b0 + iVar8 * 4) = param_2;
  *(undefined4 *)(unaff_ESI + 0x2c0 + iVar8 * 4) = param_1;
  *(undefined4 *)(unaff_ESI + 0x300 + iVar8 * 4) = param_4;
  FUN_00465150(unaff_ESI);
  FUN_00401cd0();
  local_1c = *(undefined4 *)(unaff_ESI + 0x24);
  local_20 = *(undefined4 *)(unaff_ESI + 0x20);
  local_18 = *(undefined4 *)(unaff_ESI + 0x28);
  local_14 = 0x3f800000;
  FUN_005ac68f(local_90,iVar8 * 0x40 + 0xb0 + unaff_ESI,local_50);
  FUN_00586820();
  FUN_00586770();
  fVar9 = fStack_6c - *(float *)(unaff_ESI + 0x20);
  fVar10 = fStack_68 - *(float *)(unaff_ESI + 0x24);
  fStack_64 = fStack_64 - *(float *)(unaff_ESI + 0x28);
  fVar1 = *(float *)(unaff_ESI + 0x90);
  fVar2 = *(float *)(unaff_ESI + 0x98);
  fVar3 = *(float *)(unaff_ESI + 0x94);
  fVar4 = *(float *)(unaff_ESI + 0x90);
  fVar5 = *(float *)(unaff_ESI + 0x34);
  fVar6 = *(float *)(unaff_ESI + 0x38);
  *(float *)(unaff_EDI + 0xf0) =
       (fVar10 * *(float *)(unaff_ESI + 0x98) - fStack_64 * *(float *)(unaff_ESI + 0x94)) +
       *(float *)(unaff_ESI + 0x30);
  *(float *)(unaff_EDI + 0xf4) = fVar5 + (fStack_64 * fVar1 - fVar9 * fVar2);
  *(float *)(unaff_EDI + 0xf8) = fVar6 + (fVar9 * fVar3 - fVar10 * fVar4);
  fVar11 = (float10)FUN_00440a40(*(undefined4 *)(unaff_ESI + 4),&fStack_6c,&stack0xffffff40,
                                 &uStack_ac,0);
  cVar7 = *(char *)(iVar8 + 0x310 + unaff_ESI);
  *(undefined1 *)(iVar8 + 0x310 + unaff_ESI) = 1;
  if (cVar7 == '\0') {
    *(int *)(unaff_ESI + 0x38c) = *(int *)(unaff_ESI + 0x38c) + 1;
  }
  *(int *)(unaff_ESI + 0x314 + iVar8 * 4) = unaff_EBX;
  if (*(int *)(unaff_ESI + 0x324 + iVar8 * 4) < unaff_EBX) {
    *(int *)(unaff_ESI + 0x324 + iVar8 * 4) = unaff_EBX;
  }
  *(float *)(unaff_EDI + 0x138) = (float)fVar11;
  *(float *)(unaff_EDI + 0x130) = fStack_6c;
  *(float *)(unaff_EDI + 0x134) = fStack_68;
  *(undefined4 *)(unaff_EDI + 0x140) = uStack_ac;
  *(undefined4 *)(unaff_EDI + 0x144) = uStack_a8;
  *(undefined4 *)(unaff_EDI + 0x148) = uStack_a4;
  *(undefined1 *)(unaff_EDI + 0x155) = 1;
  *(int *)(unaff_EDI + 0x150) = unaff_EBX;
  return;
}

