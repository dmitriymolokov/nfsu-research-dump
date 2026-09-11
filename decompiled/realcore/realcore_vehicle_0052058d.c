/* Decompiled from Speed.exe @ 0052058d */
/* Module: realcore */
/* Ghidra DecompileVAs */


void __fastcall FUN_0052058d(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int unaff_EBX;
  int iVar6;
  bool in_ZF;
  float10 fVar7;
  int iStack0000000c;
  undefined4 uStack00000010;
  
  if (!in_ZF) {
    iVar2 = 0;
    uStack00000010 = 0x140;
    iStack0000000c = 0x168;
    iVar4 = 0x104;
    iVar6 = unaff_EBX;
    do {
      iVar5 = *(int *)(DAT_007356a8 + -0x7c + uStack00000010);
      if ((((iVar5 != unaff_EBX) && (iVar5 = *(int *)(iVar5 + 0x234), iVar5 != unaff_EBX)) &&
          (*(int *)(*(int *)(iVar5 + 0x14) + 4) == 1)) &&
         (*(char *)(*(int *)(iVar5 + 0x14) + 0x734) == (char)unaff_EBX)) {
        *(int *)(iStack0000000c + *(int *)(param_1 + 4)) = iVar5;
        iVar6 = iVar6 + 1;
        iStack0000000c = iStack0000000c + 4;
        *(int *)(iVar2 + 0x100 + *(int *)(param_1 + 4)) = unaff_EBX;
        *(int *)(iVar2 + 0x120 + *(int *)(param_1 + 4)) = unaff_EBX;
        *(int *)(iVar2 + 0x104 + *(int *)(param_1 + 4)) = unaff_EBX;
        *(int *)(iVar2 + 0x124 + *(int *)(param_1 + 4)) = unaff_EBX;
        *(int *)(uStack00000010 + *(int *)(param_1 + 4)) = unaff_EBX;
      }
      *(int *)(iVar4 + -4 + *(int *)(param_1 + 4)) = unaff_EBX;
      *(int *)(iVar4 + *(int *)(param_1 + 4)) = unaff_EBX;
      uStack00000010 = uStack00000010 + 4;
      iVar4 = iVar4 + 8;
      iVar2 = iVar2 + 8;
    } while (iVar4 < 0x114);
    if (iVar6 == 2) {
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x188) = 1;
    }
    else {
      *(int *)(*(int *)(param_1 + 4) + 0x188) = unaff_EBX;
    }
    iVar5 = 0;
    uStack00000010 = 0x140;
    iVar4 = 0x104;
    iVar2 = unaff_EBX;
    do {
      iVar1 = *(int *)(DAT_007356a8 + -0x70 + uStack00000010);
      if ((iVar1 != unaff_EBX) && (iVar1 = *(int *)(iVar1 + 0x234), iVar1 != unaff_EBX)) {
        if ((*(int *)(*(int *)(iVar1 + 0x14) + 4) != 1) ||
           (*(char *)(*(int *)(iVar1 + 0x14) + 0x734) != (char)unaff_EBX)) {
          *(int *)(*(int *)(param_1 + 4) + 0x168 + (iVar6 + iVar2) * 4) = iVar1;
          iVar2 = iVar2 + 1;
        }
        *(int *)(*(int *)(param_1 + 4) + 0x100 + iVar5) = unaff_EBX;
        *(int *)(iVar5 + 0x120 + *(int *)(param_1 + 4)) = unaff_EBX;
        *(int *)(iVar5 + 0x104 + *(int *)(param_1 + 4)) = unaff_EBX;
        *(int *)(iVar5 + 0x124 + *(int *)(param_1 + 4)) = unaff_EBX;
        *(int *)(uStack00000010 + *(int *)(param_1 + 4)) = unaff_EBX;
      }
      *(int *)(iVar4 + -4 + *(int *)(param_1 + 4)) = unaff_EBX;
      *(int *)(iVar4 + *(int *)(param_1 + 4)) = unaff_EBX;
      uStack00000010 = uStack00000010 + 4;
      iVar4 = iVar4 + 8;
      iVar5 = iVar5 + 8;
    } while (iVar4 < 0x124);
    iVar6 = 0x168;
    do {
      if (*(int *)(iVar6 + *(int *)(param_1 + 4)) != unaff_EBX) {
        fVar7 = (float10)FUN_00580240();
        *(float *)(*(int *)(param_1 + 4) + -0x78 + iVar6) = (float)fVar7;
      }
      iVar6 = iVar6 + 4;
    } while (iVar6 < 0x178);
    *(int *)(*(int *)(param_1 + 4) + 0x178) = unaff_EBX;
    QueryPerformanceCounter((LARGE_INTEGER *)&stack0x00000010);
    uVar3 = __allshr();
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x17c) = uVar3;
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  return;
}

