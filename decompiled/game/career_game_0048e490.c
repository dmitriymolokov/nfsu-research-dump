/* spd-match: far pct=9.26 M4.0.2-CE */
/* Decompiled from Speed.exe @ 0048e490 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0048e490(float param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  ushort uVar5;
  undefined2 uVar6;
  int unaff_EBX;
  int *piVar7;
  float unaff_ESI;
  float10 fVar8;
  int iVar9;
  float local_10c;
  float fStack_108;
  float fStack_104;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined1 local_d0 [4];
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined1 auStack_9c [64];
  undefined1 auStack_5c [88];
  
  local_10c = param_1;
  cVar4 = FUN_0043a2e0();
  if ((((cVar4 != '\0') || (DAT_007361f0 == (int *)0x0)) ||
      ((*DAT_007361f0 != 7 && (*DAT_007361f0 != 0xb)))) && (*(int *)((int)param_1 + 0x2c) != 0)) {
    if (DAT_00735f54 == 0) {
      FUN_0048e7b0(DAT_0073457c,0);
    }
    if (*(int *)((int)param_1 + 0x2c) != 0) {
      FUN_0047b3d0();
      FUN_00401cd0();
      FUN_005ac68f(local_d0,local_d0,&DAT_00779820);
      fVar8 = (float10)FUN_00440a40((int)param_1 + 0x48,&fStack_ac,0,0,0);
      if (*(int *)((int)param_1 + 0x30c) == 0) {
        *(float *)((int)param_1 + 0x308) = (float)fVar8;
        *(undefined4 *)((int)param_1 + 0x30c) = 1;
      }
      else {
        *(float *)((int)param_1 + 0x308) =
             (float)((float10)_DAT_006b6f78 * fVar8 +
                    ((float10)_DAT_006cc7bc - (float10)_DAT_006b6f78) *
                    (float10)*(float *)((int)param_1 + 0x308));
      }
      fStack_104 = unaff_ESI + *(float *)((int)param_1 + 0x308);
      uStack_f8 = uStack_c8;
      fStack_108 = fStack_a8;
      uStack_f4 = uStack_c4;
      fStack_ec = fStack_ac - fStack_bc;
      uStack_fc = uStack_cc;
      fStack_e8 = fStack_a8 - fStack_b8;
      local_10c = fStack_ac;
      fStack_e4 = fStack_104 - fStack_b4;
      fStack_a4 = fStack_104;
      FUN_0040b780(&uStack_fc);
      FUN_0047d070(*(undefined4 *)((int)param_1 + 0x1c),auStack_9c,DAT_0073ad38);
      iVar9 = DAT_00735f5c;
      fVar1 = *(float *)(*(int *)(*(int *)((int)param_1 + 0x2c) + 0x14) + 0x30);
      if ((fVar1 < _DAT_006cc7bc == (fVar1 == _DAT_006cc7bc)) &&
         (uVar5 = FUN_00564db0(fVar1 + fVar1,DAT_006b6f74), iVar9 == 0)) {
        uVar6 = FUN_00401c10((float)uVar5 * _DAT_006ccd6c);
        *(undefined2 *)(*(int *)((int)param_1 + 0x1c) + 0xc4) = uVar6;
      }
      FUN_00565020();
      if (iVar9 == 0) {
        *(undefined4 *)(*(int *)((int)param_1 + 0x1c) + 0x280) = 0;
      }
      iVar9 = 0;
      if (0 < *(int *)(DAT_0073619c + 0x24)) {
        piVar7 = (int *)((int)param_1 + 0x38);
        do {
          piVar2 = *(int **)((int)piVar7 + DAT_0073619c + (0x4e8 - unaff_EBX));
          if ((unaff_EBX != -0x38) && (piVar2 != (int *)0x0)) {
            iVar3 = *piVar2;
            FUN_00472830(iVar3 + 0x90,auStack_5c,&local_10c);
            FUN_00472950();
            if ((*(char *)(*piVar7 + 0x15) != '\0') && (DAT_00735f5c == 0)) {
              *(int *)(*(int *)(unaff_EBX + 0x1c) + 0x280) = iVar3;
            }
          }
          iVar9 = iVar9 + 1;
          piVar7 = piVar7 + 1;
        } while (iVar9 < *(int *)(DAT_0073619c + 0x24));
      }
    }
  }
  return;
}

