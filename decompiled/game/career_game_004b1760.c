/* Decompiled from Speed.exe @ 004b1760 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004b1760(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float10 fVar3;
  float fVar4;
  short sVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  float10 extraout_ST0;
  float10 extraout_ST1;
  float fStack_2e4;
  undefined1 local_2d0 [4];
  float local_2cc;
  float local_2a8 [3];
  undefined4 auStack_29c [64];
  undefined4 auStack_19c [64];
  undefined1 auStack_9c [12];
  undefined1 local_90 [40];
  undefined1 auStack_68 [100];
  
  iVar6 = *(int *)(param_1 + 0x114);
  if (*(int *)(iVar6 + 0x1ca8) != 0) {
    if ((((undefined4 *)(iVar6 + 0x1570) != (undefined4 *)0x0) && (*(int *)(param_1 + 0x90) == 0))
       && (*(int *)(param_1 + 0x9c) == 0)) {
      *(undefined4 *)(param_2 + 0x994) = 1;
      if (DAT_0073458c != 0) {
        FUN_0057f2b0(1);
        DAT_0073458c = 0;
      }
      if (*(char *)(iVar6 + 0x1994) == -1) {
        FUN_0057f2b0(1);
      }
      fVar4 = (*(float *)(iVar6 + 0x15f0) - *(float *)(iVar6 + 0x15e8)) + DAT_006f1ad4;
      if (param_3 != 0) {
        fVar4 = -fVar4;
      }
      *(undefined4 *)(param_2 + 0x9a0) = 0;
      *(undefined4 *)(param_2 + 0x9a4) = 0;
      uVar2 = *(undefined4 *)(param_1 + 0xf0);
      *(float *)(param_2 + 0x748) = fVar4;
      *(undefined4 *)(param_2 + 0x740) = uVar2;
      *(undefined4 *)(param_2 + 0x744) = 0;
      FUN_00565020();
      if (param_3 != 0) {
        local_2cc = -local_2cc;
        local_2a8[0] = -local_2a8[0];
      }
      FUN_0040b930();
      thunk_FUN_005ac68f(local_2d0,local_2d0,local_90);
      FUN_00401cd0();
      FUN_004010a0(auStack_29c,0x40,4,FUN_004ad8d0);
      FUN_004010a0(auStack_19c,0x40,4,FUN_004ad8d0);
      FUN_00674898();
      fStack_2e4 = 0.0;
      if (*(int *)(param_1 + 0x10c) != 0) {
        sVar5 = FUN_00674898();
        fVar3 = (float10)DAT_0073ad38;
        *(short *)(param_1 + 0x108) = *(short *)(param_1 + 0x108) + sVar5;
        fStack_2e4 = (float)((extraout_ST1 / fVar3) / extraout_ST0);
      }
      puVar7 = (undefined4 *)(iVar6 + 0x1570);
      iVar6 = 0;
      do {
        *(undefined4 *)((int)auStack_29c + iVar6) = 0x3f800000;
        *(undefined4 *)((int)auStack_29c + iVar6 + 4) = 0;
        *(undefined4 *)((int)auStack_29c + iVar6 + 8) = 0;
        *(undefined4 *)((int)auStack_29c + iVar6 + 0xc) = 0;
        *(undefined4 *)((int)auStack_29c + iVar6 + 0x10) = 0;
        *(undefined4 *)((int)auStack_29c + iVar6 + 0x14) = 0x3f800000;
        *(undefined4 *)((int)auStack_29c + iVar6 + 0x18) = 0;
        *(undefined4 *)((int)auStack_29c + iVar6 + 0x1c) = 0;
        *(undefined4 *)((int)auStack_29c + iVar6 + 0x20) = 0;
        *(undefined4 *)((int)auStack_29c + iVar6 + 0x24) = 0;
        *(undefined4 *)((int)auStack_29c + iVar6 + 0x28) = 0x3f800000;
        *(undefined4 *)((int)auStack_29c + iVar6 + 0x2c) = 0;
        *(undefined4 *)((int)auStack_29c + iVar6 + 0x30) = 0;
        *(undefined4 *)((int)auStack_29c + iVar6 + 0x34) = 0;
        *(undefined4 *)((int)auStack_29c + iVar6 + 0x38) = 0;
        *(undefined4 *)((int)auStack_29c + iVar6 + 0x3c) = 0x3f800000;
        *(undefined4 *)((int)auStack_19c + iVar6) = 0x3f800000;
        *(undefined4 *)((int)auStack_19c + iVar6 + 4) = 0;
        *(undefined4 *)((int)auStack_19c + iVar6 + 8) = 0;
        *(undefined4 *)((int)auStack_19c + iVar6 + 0xc) = 0;
        *(undefined4 *)((int)auStack_19c + iVar6 + 0x10) = 0;
        *(undefined4 *)((int)auStack_19c + iVar6 + 0x14) = 0x3f800000;
        *(undefined4 *)((int)auStack_19c + iVar6 + 0x18) = 0;
        *(undefined4 *)((int)auStack_19c + iVar6 + 0x1c) = 0;
        *(undefined4 *)((int)auStack_19c + iVar6 + 0x20) = 0;
        *(undefined4 *)((int)auStack_19c + iVar6 + 0x24) = 0;
        *(undefined4 *)((int)auStack_19c + iVar6 + 0x28) = 0x3f800000;
        *(undefined4 *)((int)auStack_19c + iVar6 + 0x2c) = 0;
        *(undefined4 *)((int)auStack_19c + iVar6 + 0x30) = 0;
        *(undefined4 *)((int)auStack_19c + iVar6 + 0x34) = 0;
        *(undefined4 *)((int)auStack_19c + iVar6 + 0x38) = 0;
        *(undefined4 *)((int)auStack_19c + iVar6 + 0x3c) = 0x3f800000;
        FUN_0040ba40();
        if (iVar6 < 0x41) {
          FUN_0040b930();
          thunk_FUN_005ac68f((int)auStack_19c + iVar6,(int)auStack_19c + iVar6,auStack_9c);
          FUN_0040b930();
          thunk_FUN_005ac68f((int)local_2a8 + iVar6,(int)local_2a8 + iVar6,auStack_68);
        }
        uVar2 = puVar7[-1];
        uVar1 = *puVar7;
        *(undefined4 *)((int)auStack_29c + iVar6 + 0x30) = puVar7[-2];
        *(undefined4 *)((int)auStack_29c + iVar6 + 0x34) = uVar2;
        *(undefined4 *)((int)auStack_29c + iVar6 + 0x3c) = 0x3f800000;
        *(undefined4 *)((int)auStack_29c + iVar6 + 0x38) = uVar1;
        uVar2 = puVar7[-1];
        iVar8 = iVar6 + 0x40;
        uVar1 = *puVar7;
        *(undefined4 *)((int)auStack_19c + iVar6 + 0x30) = puVar7[-2];
        *(undefined4 *)((int)auStack_19c + iVar6 + 0x34) = uVar2;
        *(undefined4 *)((int)auStack_19c + iVar6 + 0x3c) = 0x3f800000;
        *(undefined4 *)((int)auStack_19c + iVar6 + 0x38) = uVar1;
        puVar7 = puVar7 + 0xc;
        iVar6 = iVar8;
      } while (iVar8 < 0x100);
      iVar6 = 4;
      do {
        FUN_00401cd0();
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      iVar6 = 4;
      do {
        FUN_00401cd0();
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      *(float *)(param_2 + 0x9a8) = fStack_2e4;
      return;
    }
  }
  *(undefined4 *)(param_2 + 0x994) = 0;
  return;
}

