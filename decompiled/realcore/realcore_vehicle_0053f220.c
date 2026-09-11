/* Decompiled from Speed.exe @ 0053f220 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void FUN_0053f220(int param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int local_428 [4];
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  int iStack_404;
  undefined1 auStack_400 [1024];
  
  piVar5 = local_428;
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
  }
  local_428[1] = *(undefined4 *)(param_3 + 0x94);
  iVar4 = param_3 + 8;
  local_428[2] = *(undefined4 *)(*(int *)(param_3 + 0x8c) + 4);
  local_428[3] = param_3;
  local_428[0] = iVar4;
  (**(code **)(param_1 + 0x10))(local_428);
  *(undefined4 *)(param_3 + 0xa0) = uStack_414;
  *(undefined4 *)(param_3 + 0x9c) = uStack_418;
  *(undefined4 *)(param_3 + 0xb4) = uStack_410;
  *(undefined4 *)(param_3 + 0xb8) = uStack_40c;
  if (iStack_404 == 0) goto LAB_0053f351;
  uVar3 = FUN_004482f0(iVar4,6,0,uStack_408,iStack_404);
  *(undefined4 *)(param_3 + 0x98) = uVar3;
  FUN_00565da0("StrmHdrRes: %s",iVar4);
  sVar1 = *(short *)(param_3 + 0x88);
  if (sVar1 != 0) {
    if ((&DAT_007301d4)[sVar1] == 0) {
LAB_0053f301:
      iVar4 = 0;
    }
    else if (sVar1 == 0) {
      iVar4 = 0x6300000;
    }
    else {
      iVar4 = FUN_00565810();
      iVar4 = iVar4 + -0x58;
      if (iVar4 < 0) goto LAB_0053f301;
    }
    if (iVar4 <= iStack_404 + 0x80) {
      *(undefined1 *)(param_3 + 0x8a) = 0;
    }
  }
  FUN_00448070(auStack_400);
  FUN_00448110();
LAB_0053f351:
  if (*(int *)(param_3 + 0x98) == 0) {
    pcVar2 = *(code **)(*(int *)(param_3 + 0x8c) + 8);
    uVar3 = *(undefined4 *)(*(int *)(param_3 + 0x8c) + 0xc);
    *(undefined4 *)(param_3 + 0x90) = 1;
    FUN_00565ce0();
    *(undefined4 *)(param_3 + 0x8c) = 0;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(uVar3);
    }
  }
  return;
}

