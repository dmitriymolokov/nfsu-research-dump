/* Decompiled from Speed.exe @ 0052e6d0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void FUN_0052e6d0(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  int unaff_ESI;
  
  iVar6 = *(int *)(*(int *)(unaff_ESI + 0x204) + 0x168 + param_1 * 4);
  fVar1 = *(float *)(iVar6 + 100);
  fVar4 = *(float *)(iVar6 + 0x68);
  *(float *)(unaff_ESI + 0x180) = *(float *)(unaff_ESI + 0xe0) - *(float *)(iVar6 + 0x60);
  *(float *)(unaff_ESI + 0x184) = *(float *)(unaff_ESI + 0xe4) - fVar1;
  *(float *)(unaff_ESI + 0x188) = *(float *)(unaff_ESI + 0xe8) - fVar4;
  iVar6 = *(int *)(*(int *)(unaff_ESI + 0x204) + 0x168 + param_1 * 4);
  uVar2 = *(undefined4 *)(iVar6 + 100);
  uVar3 = *(undefined4 *)(iVar6 + 0x68);
  *(undefined4 *)(unaff_ESI + 0x1a0) = *(undefined4 *)(iVar6 + 0x60);
  *(undefined4 *)(unaff_ESI + 0x1a4) = uVar2;
  *(undefined4 *)(unaff_ESI + 0x1a8) = uVar3;
  iVar6 = *(int *)(*(int *)(unaff_ESI + 0x204) + 0x168 + param_1 * 4);
  uVar2 = *(undefined4 *)(iVar6 + 0x94);
  uVar3 = *(undefined4 *)(iVar6 + 0x98);
  *(undefined4 *)(unaff_ESI + 0x1c0) = *(undefined4 *)(iVar6 + 0x90);
  *(undefined4 *)(unaff_ESI + 0x1c4) = uVar2;
  *(undefined4 *)(unaff_ESI + 0x1c8) = uVar3;
  *(undefined4 *)(unaff_ESI + 0x188) = 0;
  *(undefined4 *)(unaff_ESI + 0x1c8) = 0;
  FUN_00567370();
  FUN_00567370();
  iVar6 = FUN_00564db0(*(undefined4 *)(unaff_ESI + 0x1b0),*(undefined4 *)(unaff_ESI + 0x1b4));
  iVar7 = FUN_00564db0(*(undefined4 *)(unaff_ESI + 400),*(undefined4 *)(unaff_ESI + 0x194));
  *(uint *)(unaff_ESI + 0x60 + param_1 * 4) = iVar6 - iVar7 & 0xffff;
  iVar6 = *(int *)(*(int *)(unaff_ESI + 0x204) + 0x60 + param_1 * 4);
  fVar4 = *(float *)(iVar6 + 0x48);
  fVar1 = *(float *)(iVar6 + 0x44);
  *(float *)(unaff_ESI + 0x180) = *(float *)(unaff_ESI + 0xe0) - *(float *)(iVar6 + 0x40);
  *(float *)(unaff_ESI + 0x184) = *(float *)(unaff_ESI + 0xe4) - fVar1;
  *(float *)(unaff_ESI + 0x188) = *(float *)(unaff_ESI + 0xe8) - fVar4;
  uVar2 = *(undefined4 *)(iVar6 + 0x44);
  uVar3 = *(undefined4 *)(iVar6 + 0x48);
  *(undefined4 *)(unaff_ESI + 0x1a0) = *(undefined4 *)(iVar6 + 0x40);
  *(undefined4 *)(unaff_ESI + 0x1a4) = uVar2;
  *(undefined4 *)(unaff_ESI + 0x1a8) = uVar3;
  uVar2 = *(undefined4 *)(iVar6 + 0x54);
  uVar3 = *(undefined4 *)(iVar6 + 0x58);
  *(undefined4 *)(unaff_ESI + 0x1c0) = *(undefined4 *)(iVar6 + 0x50);
  *(undefined4 *)(unaff_ESI + 0x1c4) = uVar2;
  *(undefined4 *)(unaff_ESI + 0x1c8) = uVar3;
  *(undefined4 *)(unaff_ESI + 0x188) = 0;
  *(undefined4 *)(unaff_ESI + 0x1c8) = 0;
  FUN_00567370();
  FUN_00567370();
  uVar5 = FUN_00564db0(*(undefined4 *)(unaff_ESI + 0x1b0),*(undefined4 *)(unaff_ESI + 0x1b4));
  iVar6 = FUN_00564db0(*(undefined4 *)(unaff_ESI + 400),*(undefined4 *)(unaff_ESI + 0x194));
  *(uint *)(unaff_ESI + 0x68 + param_1 * 4) = (uint)uVar5 - iVar6 & 0xffff;
  return;
}

