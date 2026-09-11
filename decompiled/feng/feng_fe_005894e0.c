/* Decompiled from Speed.exe @ 005894e0 */
/* Module: FEng_FE */
/* Ghidra DecompileModule */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005894e0(int param_1,float *param_2,undefined4 param_3,char param_4)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  float local_7c;
  float local_60;
  float local_5c;
  float local_58;
  
  iVar7 = *(int *)(param_1 + 0xf0);
  local_7c = 0.0;
  if (0 < iVar7) {
    iVar5 = (iVar7 + 6) * 0x10;
    fVar2 = *param_2 - *(float *)(iVar5 + param_1);
    iVar5 = iVar5 + param_1;
    fVar3 = param_2[1] - *(float *)(iVar5 + 4);
    local_58 = param_2[2] - *(float *)(iVar5 + 8);
    local_7c = SQRT(local_58 * local_58 + fVar2 * fVar2 + fVar3 * fVar3);
    FUN_00567370();
  }
  if (1 < iVar7) {
    fVar3 = _DAT_006cc7bc -
            (local_60 * *(float *)(param_1 + 0x10) +
            local_58 * *(float *)(param_1 + 0x18) + local_5c * *(float *)(param_1 + 0x14));
    fVar2 = local_7c + *(float *)(param_1 + 0x20);
    if (_DAT_006b5b00 < fVar3) {
      if (*(undefined4 **)(param_1 + 0x34) == (undefined4 *)0x0) {
        return 0;
      }
      **(undefined4 **)(param_1 + 0x34) = 0;
      *(undefined4 *)(param_1 + 0x34) = 0;
      return 0;
    }
    if ((fVar2 <= _DAT_006b5af4) && (fVar3 < _DAT_006b5afc || fVar2 < _DAT_006b5af8)) {
      iVar5 = iVar7 + 6;
      *(float *)(param_1 + 0x20) = fVar2;
      goto LAB_0058965d;
    }
  }
  if (iVar7 == 8) {
    return 1;
  }
  iVar5 = iVar7 + 7;
  *(int *)(param_1 + 0xf0) = iVar7 + 1;
  if (1 < iVar7 + 1) {
    *(float *)(param_1 + 0x10) = local_60;
    *(float *)(param_1 + 0x14) = local_5c;
    *(float *)(param_1 + 0x18) = local_58;
  }
  *(float *)(param_1 + 0x20) = local_7c;
LAB_0058965d:
  FUN_00589270(param_2);
  uVar4 = FUN_00674898();
  *(undefined1 *)(iVar5 * 0x10 + param_1 + 0xf) = uVar4;
  FUN_005677d0(local_7c);
  FUN_00567890();
  *(float *)(param_1 + 0x100) = *(float *)(param_1 + 0x60) + *(float *)(param_1 + 0x50);
  *(float *)(param_1 + 0x104) = *(float *)(param_1 + 0x54) + *(float *)(param_1 + 100);
  *(float *)(param_1 + 0x108) = *(float *)(param_1 + 0x58) + *(float *)(param_1 + 0x68);
  *(float *)(param_1 + 0x100) = *(float *)(param_1 + 0x100) * _DAT_006cc7dc;
  *(float *)(param_1 + 0x104) = *(float *)(param_1 + 0x104) * _DAT_006cc7dc;
  *(float *)(param_1 + 0x108) = *(float *)(param_1 + 0x108) * _DAT_006cc7dc;
  puVar1 = DAT_00737bd4;
  if (param_4 != '\0') {
    puVar6 = (undefined4 *)FUN_0040a880();
    for (; puVar1 != puVar6; puVar1 = (undefined4 *)*puVar1) {
      iVar7 = FUN_00402a70(puVar1);
      if (iVar7 != 0) {
        *(undefined4 *)(iVar7 + 0x10) = 1;
        FUN_00401cd0();
        FUN_00402bd0();
        FUN_00589f70(iVar7);
      }
    }
  }
  return 0;
}

