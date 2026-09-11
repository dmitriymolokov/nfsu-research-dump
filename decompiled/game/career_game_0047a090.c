/* Decompiled from Speed.exe @ 0047a090 */
/* Module: Career_Game */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047a090(int param_1,undefined4 param_2)

{
  float fVar1;
  float10 fVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  float *pfVar10;
  char *pcVar11;
  int iVar12;
  undefined4 *puVar13;
  bool bVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  
  *(undefined1 *)(param_1 + 0x69) = 0;
  uVar3 = DAT_0078f1cc & 1;
  *(undefined1 *)(param_1 + 0x68) = 0;
  if (uVar3 == 0) {
    DAT_0078f1cc = DAT_0078f1cc | 1;
    DAT_0078f1a8 = 4;
    DAT_0078f1a9 = 0x20;
    DAT_0078f1aa = 0;
    DAT_0078f1ab = 0;
    _DAT_0078f1a4 = &PTR_FUN_006b9694;
    _DAT_0078f1ac = 0;
    _DAT_0078f1b0 = 0.0;
    _DAT_0078f1b4 = (undefined4 *)&DAT_0078f1b8;
    _DAT_0078f1b4 = _malloc(0x80);
    puVar13 = _DAT_0078f1b4;
    for (iVar9 = 0x20; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
    }
    _atexit((_func_4879 *)&LAB_00696410);
  }
  uVar7 = DAT_00700520;
  uVar6 = DAT_0070051c;
  if ((DAT_0078f1cc & 2) == 0) {
    DAT_0078f1cc = DAT_0078f1cc | 2;
    FUN_00584180(DAT_0070051c);
    FUN_00584180(uVar6);
    FUN_00584180(uVar7);
    _DAT_0078f198 = 0x41f00000;
    _DAT_0078f19c = 0.0;
    _DAT_0078f1a0 = 0;
    _atexit((_func_4879 *)&LAB_00696400);
  }
  uVar7 = _DAT_007372a8;
  uVar6 = DAT_007372a0;
  iVar9 = DAT_00735fb8;
  iVar12 = 0;
  if (DAT_00735fb8 == 0) {
    _DAT_0072cc10 = **(undefined4 **)(*(int *)(param_1 + 0x5c) + 0x10);
    _DAT_0078eb48 = (float)DAT_0073ad34 * _DAT_006cca38;
    _DAT_0073453c = 1;
    _DAT_0072cc20 = 0;
    _DAT_0072cc1c = 0.0;
    _DAT_0072cc28 = 0;
    _DAT_0072cc24 = 0.0;
    _DAT_0072cc2c = 0.0;
    _DAT_0072cc30 = 0.0;
    _DAT_0072cc34 = -1.0;
    _DAT_0072cc38 = 0.0;
    _DAT_0072cc3c = 0.0;
    _DAT_0078f118 = 0.0;
    _DAT_0078eb44 = 0;
    DAT_0078f110 = 0.0;
    DAT_0078f114 = 0.0;
    DAT_0078f10c = 0;
    _DAT_0078f108 = 0;
    _DAT_0078f19c = 0.0;
    _DAT_0078f1a0 = 0;
    FUN_005842d0(0);
    _DAT_0078f19c = 0.0;
    _DAT_0078f1a0 = 0;
    FUN_005842d0(0);
    FUN_005842d0(0);
    _DAT_0078f104 = DAT_006b7150;
    DAT_00735fb8 = 999;
    return;
  }
  if (DAT_00735fb8 == 999) {
    iVar9 = *(int *)(param_1 + 0x20);
    if ((SQRT(*(float *)(iVar9 + 200) * *(float *)(iVar9 + 200) +
              *(float *)(iVar9 + 0xc4) * *(float *)(iVar9 + 0xc4) +
              *(float *)(iVar9 + 0xc0) * *(float *)(iVar9 + 0xc0)) == DAT_006cc7a4) &&
       (SQRT(*(float *)(iVar9 + 0xa8) * *(float *)(iVar9 + 0xa8) +
             *(float *)(iVar9 + 0xa4) * *(float *)(iVar9 + 0xa4) +
             *(float *)(iVar9 + 0xa0) * *(float *)(iVar9 + 0xa0)) == DAT_006cc7a4)) {
      DAT_00735fb8 = 1;
      return;
    }
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x1e4) = 0x3f800000;
    return;
  }
  if (DAT_00735fb8 == 1) {
    if ((DAT_00735fb4 != 0) && (DAT_00735fb4 != 1)) {
      DAT_00735fb8 = 2;
      return;
    }
    bVar14 = DAT_0078f10c == '\0';
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x1e4) = 0;
    if (bVar14) {
      (**(code **)(**(int **)(param_1 + 4) + 0x2c))(1);
      FUN_0046e5b0(1);
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x1dc) = 0x3f400000;
      iVar9 = DAT_00735fb8;
      if (DAT_006cc7a4 <= *(float *)(*(int *)(param_1 + 0x48) + 0x14) * _DAT_006ccb78) {
        DAT_0078f10c = '\x01';
        (**(code **)(**(int **)(param_1 + 4) + 0x2c))(0xffffffff);
        FUN_0046e5b0(0xffffffff);
        *(undefined4 *)(*(int *)(param_1 + 4) + 0x1dc) = 0x3f800000;
        iVar9 = DAT_00735fb8;
      }
    }
    else {
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x1dc) = 0x3f800000;
    }
    if (DAT_006cc7a4 < DAT_0072cc58) {
      _DAT_0072cc14 = DAT_0072cc58;
    }
    cVar8 = DAT_006cc7a4 < DAT_0072cc58;
    if (DAT_006cc7a4 < DAT_0072cc0c) {
      _DAT_0072cc18 = DAT_0072cc0c;
      cVar8 = cVar8 + '\x01';
    }
    if (DAT_006cc7a4 < DAT_0072cc44) {
      _DAT_0072cc1c = DAT_0072cc44;
      _DAT_0072cc20 = DAT_0072cc78;
      cVar8 = cVar8 + '\x01';
    }
    if (DAT_006cc7a4 < DAT_0072cc70) {
      _DAT_0072cc24 = DAT_0072cc70;
      _DAT_0072cc28 = DAT_0072cc64;
      cVar8 = cVar8 + '\x01';
    }
    if (cVar8 == '\x04') {
      DAT_00735fb8 = iVar9 + 1;
      return;
    }
  }
  else {
    if (DAT_00735fb8 == 2) {
      if ((DAT_00735fb4 == 0) || (DAT_00735fb4 == 2)) {
        bVar14 = _DAT_0078eb48 == _DAT_006cc8a8;
        *(undefined4 *)(*(int *)(param_1 + 4) + 0x1e4) = 0;
        *(undefined4 *)(*(int *)(param_1 + 4) + 0x1dc) = 0x3f800000;
        if (bVar14) {
          _DAT_0078eb48 = (float)DAT_0073ad34 * _DAT_006cca38;
        }
        fVar1 = (float)DAT_0073ad34 * _DAT_006cca38;
        DAT_0072cc60 = fVar1 - _DAT_0072cc48;
        fVar4 = *(float *)(*(int *)(param_1 + 0x58) + 0x390) * _DAT_006cc9f0;
        fVar5 = fVar4 - _DAT_0072cc2c;
        if (fVar5 < _DAT_006b7148 == (fVar5 == _DAT_006b7148)) {
          _DAT_0078eb48 = fVar1;
          _DAT_0072cc2c = fVar4;
          _DAT_0072cc30 = DAT_0072cc60;
          return;
        }
        if (fVar1 - _DAT_0078eb48 < _DAT_006b7144) {
          return;
        }
        _DAT_0078eb48 = -1.0;
      }
      DAT_00735fb8 = 3;
      return;
    }
    if (DAT_00735fb8 == 3) {
      if ((DAT_00735fb4 != 0) && (DAT_00735fb4 != 3)) {
        DAT_00735fb8 = 4;
        return;
      }
      if (_DAT_0072cc34 == _DAT_006cc8a8) {
        if (_DAT_006b714c <= *(float *)(*(int *)(param_1 + 0x58) + 0x390) * _DAT_006cc9f0) {
          _DAT_0072cc34 = (float)DAT_0073ad34 * _DAT_006cca38;
        }
        else {
          *(undefined4 *)(*(int *)(param_1 + 4) + 0x1dc) = 0x3f800000;
        }
      }
      if (_DAT_006cc8a8 < _DAT_0072cc34) {
        *(undefined4 *)(*(int *)(param_1 + 4) + 0x1dc) = 0;
        fVar1 = *(float *)(*(int *)(param_1 + 0x58) + 0x390) * _DAT_006cc9f0;
        if (fVar1 < _DAT_006b714c == (fVar1 == _DAT_006b714c)) {
          *(undefined4 *)(*(int *)(param_1 + 4) + 0x1e4) = 0x3dcccccd;
          _DAT_0072cc34 = (float)DAT_0073ad34 * _DAT_006cca38;
          return;
        }
        *(undefined4 *)(*(int *)(param_1 + 4) + 0x1e4) = 0x3f800000;
        fVar1 = *(float *)(*(int *)(param_1 + 0x58) + 0x390) * _DAT_006cc9f0;
        if (fVar1 < _DAT_006cc7bc != (fVar1 == _DAT_006cc7bc)) {
          _DAT_0072cc34 =
               ((float)DAT_0073ad34 * _DAT_006cca38 - _DAT_0072cc34) * _DAT_006b714c * _DAT_006ccc88
          ;
          DAT_00735fb8 = 4;
          return;
        }
      }
    }
    else if (DAT_00735fb8 == 4) {
      DAT_00735fbc = 0;
      if ((DAT_00735fb4 != 0) && (DAT_00735fb4 != 4)) {
        DAT_00735fb8 = 5;
        return;
      }
      FUN_00584610(_DAT_0078f104 * _DAT_006cc7a0 - *(float *)(*(int *)(param_1 + 0x5c) + 0x3d4),
                   param_2,0,0);
      fVar15 = (float10)FUN_00401c80(DAT_0078f17c,-DAT_00700524,DAT_00700524);
      fVar16 = (float10)FUN_0045db00();
      fVar19 = (float10)_DAT_006cc7d0;
      fVar17 = (float10)_DAT_0078f19c;
      fVar2 = (float10)_DAT_006cc7b8;
      fVar18 = (float10)FUN_00583ea0(ABS(*(float *)(*(int *)(param_1 + 0x5c) + 0x3d4)));
      iVar9 = *(int *)(param_1 + 4);
      fVar19 = (float10)FUN_00401c80((float)(fVar17 * fVar2 +
                                            (fVar16 + (float10)(float)fVar15) * fVar19),
                                     -(float)fVar18,(float)fVar18,-_DAT_007003f8,0x3f800000);
      fVar19 = (float10)FUN_00401c80((float)(((float10)_DAT_0078f118 -
                                             (float10)*(float *)(iVar9 + 0x1e4)) + fVar19));
      if (fVar19 <= (float10)DAT_006cc7a4) {
        fVar19 = (float10)DAT_006cc7a4;
      }
      _DAT_0078f118 = (float)fVar19;
      *(float *)(iVar9 + 0x1dc) = (float)fVar19;
      fVar1 = *(float *)(*(int *)(param_1 + 0x58) + 0x390) * _DAT_006cc9f0;
      fVar4 = ABS(fVar1 - _DAT_0078f104);
      if (fVar4 < _DAT_006b7154 == (fVar4 == _DAT_006b7154)) {
        _DAT_0078eb48 = (float)DAT_0073ad34 * _DAT_006cca38;
        _DAT_0072cc38 = fVar1;
      }
      else if (_DAT_006b7158 <= (float)DAT_0073ad34 * _DAT_006cca38 - _DAT_0078eb48) {
        _DAT_0078f104 = _DAT_006b715c + _DAT_0078f104;
        _DAT_0078eb48 = (float)DAT_0073ad34 * _DAT_006cca38;
      }
      fVar1 = *(float *)(*(int *)(param_1 + 0x58) + 0x390);
      fVar1 = (fVar1 / _DAT_006b7160) * fVar1 * _DAT_006ccc44;
      if (DAT_0078f114 < fVar1) {
        DAT_0078f110 = *(float *)(*(int *)(param_1 + 0x58) + 0x390) * _DAT_006cc9f0;
        _DAT_0072cc3c = fVar1;
        DAT_0078f114 = fVar1;
      }
      fVar19 = (float10)FUN_0044ca20();
      FUN_00584270((float)fVar19);
      iVar9 = *(int *)(param_1 + 0x58);
      if (DAT_006b7150 <= *(float *)(iVar9 + 0x390) * _DAT_006cc9f0) {
        pcVar11 = (char *)(iVar9 + 0x310);
        pfVar10 = (float *)(iVar9 + 0x338);
        iVar9 = 4;
        do {
          if ((*pcVar11 == '\0') || (_DAT_006b7164 < ABS(*pfVar10))) {
            iVar12 = iVar12 + 1;
          }
          pfVar10 = pfVar10 + 2;
          pcVar11 = pcVar11 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        if ((0 < iVar12) || (_DAT_006b7168 < _DAT_0078f1b0)) {
          _DAT_0072cc38 = DAT_0078f110;
          DAT_0072cc40 = (char)iVar12;
          _DAT_0072cc3c = DAT_0078f114;
          DAT_0078f110 = 0.0;
          DAT_0078f114 = 0.0;
          _DAT_0078eb48 = -1.0;
          DAT_00735fb8 = DAT_00735fb8 + 1;
          return;
        }
      }
    }
    else {
      iVar9 = *(int *)(param_1 + 0x20);
      *(undefined4 *)(iVar9 + 0x74) = _DAT_007372a4;
      *(undefined4 *)(iVar9 + 0x70) = uVar6;
      *(undefined4 *)(iVar9 + 0x78) = uVar7;
      uVar7 = _DAT_007372a8;
      uVar6 = DAT_007372a0;
      iVar9 = *(int *)(param_1 + 0x20);
      *(undefined4 *)(iVar9 + 0x84) = _DAT_007372a4;
      *(undefined4 *)(iVar9 + 0x80) = uVar6;
      *(undefined4 *)(iVar9 + 0x88) = uVar7;
      FUN_0046e5b0(2);
      DAT_00735fb8 = 0;
      DAT_00735fb0 = 0;
      DAT_00735fbc = 0;
      _DAT_0073453c = 0;
    }
  }
  return;
}

