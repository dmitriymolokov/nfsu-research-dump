/* Decompiled from Speed.exe @ 00585b40 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00585b40(float param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  float10 extraout_ST0;
  int local_18;
  LARGE_INTEGER local_8;
  
  uVar7 = DAT_00734574 & 0xf;
  if (DAT_0073459c == 0) {
    fVar1 = _DAT_006f0890 - param_1;
    iVar5 = ((int)DAT_00734574 % 100) * 0x10;
    bVar8 = DAT_006cc7a4 < fVar1;
    *(float *)(&DAT_00730ad8 + iVar5) = param_1;
    if ((bVar8) && (fVar1 < _DAT_006ccdec)) {
      iVar6 = FUN_005648c0();
      fVar2 = fVar1 * _DAT_006cc844;
      do {
        QueryPerformanceCounter(&local_8);
        uVar3 = DAT_007349c8;
        local_18 = __allshr();
        local_18 = local_18 - iVar6;
        if (local_18 < 0) {
          local_18 = 0;
        }
      } while ((float)(1 << ((byte)uVar3 & 0x1f)) * (float)local_18 * _DAT_007301d0 < fVar2);
      param_1 = fVar1 + param_1;
    }
    uVar4 = DAT_0073ad38;
    uVar3 = DAT_006f088c;
    *(float *)(&DAT_00730adc + iVar5) = param_1;
    *(undefined4 *)(&DAT_00730ae0 + iVar5) = uVar3;
    *(undefined4 *)(&DAT_00730ae4 + iVar5) = uVar4;
    iVar5 = FUN_00674898();
    iVar6 = FUN_00674898();
    _DAT_00734570 = (float)(extraout_ST0 - (float10)iVar6 * (float10)_DAT_006cca38);
    if ((DAT_007345a0 != 0) && (FUN_0057c3b0(iVar5,8,3), DAT_007345a0 != 0)) {
      FUN_0057c3b0(uVar7,4,5);
    }
  }
  else {
    iVar5 = FUN_0057c5a0(3);
    FUN_0057c5a0(5);
  }
  DAT_00734568 = iVar5;
  DAT_0073ad38 = (float)iVar5 * _DAT_006cc7e4;
  return;
}

