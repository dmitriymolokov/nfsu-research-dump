/* Decompiled from Speed.exe @ 00587330 */
/* Module: Loader */
/* Ghidra DecompileModule */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00587330(undefined4 param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  int unaff_ESI;
  float10 fVar5;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_68;
  undefined1 local_60 [16];
  undefined1 local_50 [12];
  undefined4 local_44;
  undefined4 local_34;
  undefined4 local_24;
  
  fVar1 = *(float *)(*(int *)(unaff_ESI + 0x1c) + 4) * *(float *)(unaff_ESI + 0x170) * _DAT_006f0784
  ;
  fVar2 = *(float *)(*(int *)(unaff_ESI + 0x1c) + 8) * *(float *)(unaff_ESI + 0x174) * _DAT_006f0788
  ;
  if (DAT_006cc7a4 < *(float *)(unaff_ESI + 0x28)) {
    fVar1 = -fVar1;
  }
  if (*(int *)(unaff_ESI + 0x10c) == 0) {
    *(float *)(unaff_ESI + 0x108) = fVar1 + *(float *)(unaff_ESI + 0x108);
  }
  fVar1 = fVar2;
  if (DAT_006cc7a4 < *(float *)(unaff_ESI + 0x28)) {
    fVar1 = -fVar2;
  }
  if (*(int *)(unaff_ESI + 0x10c) == 0) {
    *(float *)(unaff_ESI + 0x108) = fVar1 + *(float *)(unaff_ESI + 0x108);
  }
  FUN_00565230();
  local_44 = 0;
  local_34 = 0;
  local_24 = 0;
  thunk_FUN_005abda2(local_60,unaff_ESI + 0xf0,local_50);
  uVar4 = FUN_00564db0(fVar2,fStack_68);
  fStack_80 = (float)uVar4 * _DAT_006cc980;
  if (_DAT_006cc97c < fStack_80) {
    fStack_80 = fStack_80 - _DAT_006cc978;
  }
  if ((fVar2 < DAT_006cc7a4) && (fStack_80 = fStack_80 + _DAT_006cc97c, _DAT_006cc97c < fStack_80))
  {
    fStack_80 = fStack_80 - _DAT_006cc978;
  }
  fVar1 = *(float *)(*(int *)(unaff_ESI + 0x14) + 0x10) * *(float *)(unaff_ESI + 0x28) - fVar2;
  *(float *)(unaff_ESI + 0x160) = fVar1;
  *(float *)(unaff_ESI + 0x164) = fVar1;
  if ((((*(float *)(unaff_ESI + 0x160) < -_DAT_006f0780) &&
       (*(float *)(unaff_ESI + 0x108) < DAT_006cc7a4)) && (fStack_78 == DAT_006cc7a4)) &&
     (param_2 == 0)) {
    *(float *)(unaff_ESI + 0x108) = *(float *)(unaff_ESI + 0x108) * _DAT_006cca10;
  }
  fVar1 = *(float *)(unaff_ESI + 0x160);
  fVar3 = SQRT(fVar1 * fVar1 + fStack_68 * fStack_68);
  if ((fVar3 != DAT_006cc7a4) && ((fStack_68 != DAT_006cc7a4 || (fVar2 != DAT_006cc7a4)))) {
    fStack_7c = *(float *)(&DAT_006ef2f8 + *(int *)(unaff_ESI + 0x150) * 0x94) *
                *(float *)(*(int *)(unaff_ESI + 0x18) + 0x10) * *(float *)(unaff_ESI + 0x180) *
                *(float *)(unaff_ESI + 0x17c) * *(float *)(unaff_ESI + 0x178);
    if (*(int *)(*(int *)(unaff_ESI + 0x20) + 0x3c0) == 1) {
      fVar5 = (float10)FUN_005872b0();
      fStack_7c = (float)(fVar5 * (float10)fStack_7c);
    }
    fVar3 = (_DAT_006f0794 / fVar3) * fStack_7c * *(float *)(unaff_ESI + 0x158);
    FUN_00587220(ABS(fVar2) *
                 (_DAT_006f0794 / SQRT(fVar2 * fVar2 + fStack_68 * fStack_68)) * fStack_7c *
                 *(float *)(unaff_ESI + 0x158));
    if (((_DAT_006f0780 < ABS(fVar1)) || (**(float **)(unaff_ESI + 0x18) < ABS(fStack_80))) ||
       (*(int *)(unaff_ESI + 0x10c) != 0)) {
      fVar2 = fVar1 * fVar3;
      *(undefined1 *)(unaff_ESI + 0x154) = 1;
      *(float *)(unaff_ESI + 0x118) = fVar2;
      fVar3 = -(fVar3 * fStack_68);
      *(float *)(unaff_ESI + 0x11c) = fVar3;
      if ((*(float *)(*(int *)(unaff_ESI + 0x20) + 0x390) * _DAT_006cc9f0 < _DAT_006cc7bc) &&
         (_DAT_006cc7b8 < fStack_7c)) {
        fStack_7c = _DAT_006cc7bc / fStack_7c;
        *(float *)(unaff_ESI + 0x118) = fVar2 * fStack_7c;
        *(float *)(unaff_ESI + 0x11c) = fStack_7c * fVar3;
      }
      *(float *)(unaff_ESI + 0x100) = fVar1;
      *(float *)(unaff_ESI + 0x104) = fStack_68;
      return;
    }
  }
  *(undefined1 *)(unaff_ESI + 0x154) = 0;
  fStack_74 = 1.0;
  *(float *)(unaff_ESI + 0x118) =
       *(float *)(unaff_ESI + 0x108) / *(float *)(*(int *)(unaff_ESI + 0x14) + 0x10);
  if (fVar2 <= DAT_006cc7a4) {
    fStack_74 = -1.0;
  }
  fStack_70 = -1.0;
  if (fStack_80 <= DAT_006cc7a4) {
    fStack_70 = 1.0;
  }
  fVar5 = (float10)FUN_00587740(unaff_ESI,_DAT_006f0794 * *(float *)(unaff_ESI + 0x158),
                                ABS(fStack_80));
  *(undefined4 *)(unaff_ESI + 0x100) = 0;
  *(undefined4 *)(unaff_ESI + 0x104) = 0;
  *(float *)(unaff_ESI + 0x11c) = (float)(fVar5 * (float10)fStack_70 * (float10)fStack_74);
  return;
}

