/* Decompiled from Speed.exe @ 0052e8c0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileModule */


short FUN_0052e8c0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  short sVar4;
  int unaff_ESI;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar3 = *(int *)(*(int *)(unaff_ESI + 0x204) + 0x60 + *(int *)(unaff_ESI + 0xcc) * 4);
  if (*(int *)(unaff_ESI + 0xd0) == 0) {
    uVar1 = *(undefined4 *)(iVar3 + 0x54);
    uVar2 = *(undefined4 *)(iVar3 + 0x58);
    *(undefined4 *)(unaff_ESI + 0xf0) = *(undefined4 *)(iVar3 + 0x50);
    *(undefined4 *)(unaff_ESI + 0xf4) = uVar1;
    *(undefined4 *)(unaff_ESI + 0xf8) = uVar2;
    *(int *)(unaff_ESI + 0xd0) = iVar3 + 0x50;
  }
  FUN_00567370(*(float *)(unaff_ESI + 0xe0) - *(float *)(iVar3 + 0x40),
               *(float *)(unaff_ESI + 0xe4) - *(float *)(iVar3 + 0x44),
               *(float *)(unaff_ESI + 0xe8) - *(float *)(iVar3 + 0x48));
  FUN_00567370(local_20,local_1c,0);
  fVar5 = local_20;
  fVar6 = local_1c;
  fVar7 = local_18;
  FUN_00567370(local_20,local_1c,local_18);
  sVar4 = FUN_00564cd0(local_18 * fVar7 + fVar5 * local_20 + fVar6 * local_1c);
  *(short *)(unaff_ESI + 0x200) = 0x4000 - sVar4;
  return 0x4000 - sVar4;
}

