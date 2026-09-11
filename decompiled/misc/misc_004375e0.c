/* Decompiled from Speed.exe @ 004375e0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Removing unreachable block (ram,0x00437bff) */
/* WARNING: Removing unreachable block (ram,0x00437b33) */
/* WARNING: Removing unreachable block (ram,0x00437a02) */
/* WARNING: Removing unreachable block (ram,0x00437936) */
/* WARNING: Removing unreachable block (ram,0x0043786a) */
/* WARNING: Removing unreachable block (ram,0x0043779e) */
/* WARNING: Removing unreachable block (ram,0x004376d2) */
/* WARNING: Removing unreachable block (ram,0x00437738) */
/* WARNING: Removing unreachable block (ram,0x00437804) */
/* WARNING: Removing unreachable block (ram,0x004378d0) */
/* WARNING: Removing unreachable block (ram,0x0043799c) */
/* WARNING: Removing unreachable block (ram,0x00437a68) */
/* WARNING: Removing unreachable block (ram,0x00437b99) */
/* WARNING: Removing unreachable block (ram,0x00437c65) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004375e0(int param_1,undefined4 param_2,float param_3)

{
  undefined4 uVar1;
  float fVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 auStack_60 [23];
  
  if (param_3 <= *(float *)(param_1 + 0x78)) {
    return;
  }
  if (param_3 < (float)*(int *)(param_1 + 0x234) * _DAT_006cca38) {
    return;
  }
  *(float *)(param_1 + 0x78) = param_3;
  *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
  uVar4 = FUN_00674898();
  *(undefined4 *)(param_1 + 0x94) = uVar4;
  FUN_00584270((float)*(int *)(param_1 + 0x94));
  FUN_00436e20(param_1 + 0x10,&DAT_0077ba7c);
  FUN_00436e20(param_1 + 0x14,&DAT_0077bbc8);
  FUN_00436e20(param_1 + 0x18,&DAT_0077bd14);
  FUN_005488d0(DAT_0077bf8c);
  fVar2 = _DAT_0077bf9c * 0.0 + _DAT_0077bf90;
  if (fVar2 < _DAT_0077bf90) {
    fVar2 = _DAT_0077bf90;
  }
  if (_DAT_0077bf94 < fVar2) {
    fVar2 = _DAT_0077bf94;
  }
  *(float *)(param_1 + 0x20) = fVar2;
  FUN_005488d0(DAT_0077bf8c);
  fVar2 = _DAT_0077bf9c * 0.0 + _DAT_0077bf90;
  if (fVar2 < _DAT_0077bf90) {
    fVar2 = _DAT_0077bf90;
  }
  if (_DAT_0077bf94 < fVar2) {
    fVar2 = _DAT_0077bf94;
  }
  *(float *)(param_1 + 0x24) = fVar2;
  FUN_005488d0(DAT_0077bf8c);
  fVar2 = _DAT_0077bf9c * 0.0 + _DAT_0077bf90;
  if (fVar2 < _DAT_0077bf90) {
    fVar2 = _DAT_0077bf90;
  }
  if (_DAT_0077bf94 < fVar2) {
    fVar2 = _DAT_0077bf94;
  }
  *(float *)(param_1 + 0x28) = fVar2;
  FUN_005488d0(DAT_0077c0d8);
  fVar2 = _DAT_0077c0e8 * 0.0 + _DAT_0077c0dc;
  if (fVar2 < _DAT_0077c0dc) {
    fVar2 = _DAT_0077c0dc;
  }
  if (_DAT_0077c0e0 < fVar2) {
    fVar2 = _DAT_0077c0e0;
  }
  *(float *)(param_1 + 0x30) = fVar2;
  FUN_005488d0(DAT_0077c0d8);
  fVar2 = _DAT_0077c0e8 * 0.0 + _DAT_0077c0dc;
  if (fVar2 < _DAT_0077c0dc) {
    fVar2 = _DAT_0077c0dc;
  }
  if (_DAT_0077c0e0 < fVar2) {
    fVar2 = _DAT_0077c0e0;
  }
  *(float *)(param_1 + 0x34) = fVar2;
  FUN_005488d0(DAT_0077c0d8);
  fVar2 = _DAT_0077c0e8 * 0.0 + _DAT_0077c0dc;
  if (fVar2 < _DAT_0077c0dc) {
    fVar2 = _DAT_0077c0dc;
  }
  if (_DAT_0077c0e0 < fVar2) {
    fVar2 = _DAT_0077c0e0;
  }
  *(float *)(param_1 + 0x38) = fVar2;
  FUN_005488d0(DAT_0077c0d8);
  fVar2 = _DAT_0077c0e8 * 0.0 + _DAT_0077c0dc;
  if (fVar2 < _DAT_0077c0dc) {
    fVar2 = _DAT_0077c0dc;
  }
  if (_DAT_0077c0e0 < fVar2) {
    fVar2 = _DAT_0077c0e0;
  }
  *(float *)(param_1 + 0x3c) = fVar2;
  FUN_005488d0(DAT_0077c370);
  fVar2 = _DAT_0077c380 * 0.0 + _DAT_0077c374;
  if (fVar2 < _DAT_0077c374) {
    fVar2 = _DAT_0077c374;
  }
  if (_DAT_0077c378 < fVar2) {
    fVar2 = _DAT_0077c378;
  }
  *(float *)(param_1 + 0x40) = fVar2;
  FUN_005488d0(DAT_0077c370);
  fVar2 = _DAT_0077c380 * 0.0 + _DAT_0077c374;
  if (fVar2 < _DAT_0077c374) {
    fVar2 = _DAT_0077c374;
  }
  if (_DAT_0077c378 < fVar2) {
    fVar2 = _DAT_0077c378;
  }
  *(float *)(param_1 + 0x44) = fVar2;
  FUN_005488d0(DAT_0077c370);
  fVar2 = _DAT_0077c380 * 0.0 + _DAT_0077c374;
  if (fVar2 < _DAT_0077c374) {
    fVar2 = _DAT_0077c374;
  }
  if (_DAT_0077c378 < fVar2) {
    fVar2 = _DAT_0077c378;
  }
  *(float *)(param_1 + 0x48) = fVar2;
  FUN_005488d0(0x20);
  *(float *)(param_1 + 0x60) = _DAT_006cc83c * 0.0;
  FUN_005488d0(0x20);
  *(undefined2 *)(param_1 + 100) = 0;
  FUN_005488d0(1);
  *(undefined1 *)(param_1 + 0x74) = 0;
  FUN_005488d0(DAT_0077c4bc);
  fVar2 = _DAT_0077c4cc * 0.0 + _DAT_0077c4c0;
  if (fVar2 < _DAT_0077c4c0) {
    fVar2 = _DAT_0077c4c0;
  }
  if (_DAT_0077c4c4 < fVar2) {
    fVar2 = _DAT_0077c4c4;
  }
  *(float *)(param_1 + 0x6c) = fVar2;
  FUN_005488d0(DAT_0077c4bc);
  fVar2 = _DAT_0077c4cc * 0.0 + _DAT_0077c4c0;
  if (fVar2 < _DAT_0077c4c0) {
    fVar2 = _DAT_0077c4c0;
  }
  if (_DAT_0077c4c4 < fVar2) {
    fVar2 = _DAT_0077c4c4;
  }
  *(float *)(param_1 + 0x68) = fVar2;
  FUN_005488d0(DAT_0077c4bc);
  fVar2 = _DAT_0077c4cc * 0.0 + _DAT_0077c4c0;
  if (fVar2 < _DAT_0077c4c0) {
    fVar2 = _DAT_0077c4c0;
  }
  if (_DAT_0077c4c4 < fVar2) {
    fVar2 = _DAT_0077c4c4;
  }
  *(float *)(param_1 + 0x70) = fVar2;
  FUN_005488d0(DAT_0077c608);
  fVar2 = _DAT_0077c618 * 0.0 + _DAT_0077c60c;
  if (fVar2 < _DAT_0077c60c) {
    fVar2 = _DAT_0077c60c;
  }
  if (_DAT_0077c610 < fVar2) {
    fVar2 = _DAT_0077c610;
  }
  *(float *)(param_1 + 0x7c) = fVar2;
  FUN_005488d0(DAT_0077c754);
  *(undefined4 *)(param_1 + 0x80) = DAT_0077c758;
  if (*(int *)(param_1 + 0x90) == 0) {
    if (DAT_00736188 != 0) {
      FUN_00437fe0();
    }
    *(undefined4 *)(param_1 + 0x90) = 1;
  }
  if (*(char *)(param_1 + 0x74) != '\0') {
    cVar3 = FUN_00465430();
    if (cVar3 == '\0') {
      FUN_004654f0();
      goto LAB_00437d4f;
    }
    if (*(char *)(param_1 + 0x74) != '\0') goto LAB_00437d4f;
  }
  cVar3 = FUN_00465430();
  if (cVar3 != '\0') {
    FUN_00465530();
  }
LAB_00437d4f:
  iVar6 = *(int *)(param_1 + 4);
  param_3 = _DAT_006f0898 - param_3;
  FUN_00483160(*(undefined4 *)(iVar6 + 0x60),*(undefined4 *)(iVar6 + 100),
               *(undefined4 *)(iVar6 + 0x68));
  iVar6 = *(int *)(param_1 + 4);
  FUN_00593bc0(*(undefined4 *)(iVar6 + 0x70),*(undefined4 *)(iVar6 + 0x74),
               *(undefined4 *)(iVar6 + 0x78));
  uVar4 = DAT_006b79b0;
  *(undefined4 *)(param_1 + 0x164) = DAT_006b79b0;
  *(undefined4 *)(param_1 + 0x194) = uVar4;
  *(undefined4 *)(param_1 + 0x1c4) = uVar4;
  FUN_00566bf0();
  *(float *)(param_1 + 0x200) = -*(float *)(param_1 + 0x20c);
  *(undefined4 *)(param_1 + 0x238) = 0;
  FUN_00426110();
  iVar6 = *(int *)(param_1 + 4);
  uVar4 = *(undefined4 *)(param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(iVar6 + 100) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(iVar6 + 0x60) = uVar1;
  *(undefined4 *)(iVar6 + 0x68) = uVar4;
  FUN_00566b10();
  FUN_00401cd0();
  FUN_00465390();
  FUN_00424cf0();
  iVar6 = *(int *)(param_1 + 4);
  *(float *)(iVar6 + 0x3d0) =
       *(float *)(iVar6 + 0x90) * *(float *)(param_1 + 0x20) +
       *(float *)(iVar6 + 0x94) * *(float *)(param_1 + 0x24) +
       *(float *)(iVar6 + 0x98) * *(float *)(param_1 + 0x28);
  iVar6 = *(int *)(param_1 + 4);
  uVar4 = *(undefined4 *)(param_1 + 0x48);
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(iVar6 + 0xd4) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(iVar6 + 0xd0) = uVar1;
  *(undefined4 *)(iVar6 + 0xd8) = uVar4;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x3d8) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x3e0) = *(undefined4 *)(param_1 + 0x7c);
  FUN_00438390(param_3);
  FUN_00426110();
  iVar6 = *(int *)(*(int *)(param_1 + 4) + 0x30);
  *(undefined4 *)(iVar6 + 0x1dc) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(iVar6 + 0x1e4) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(iVar6 + 0x1e0) = *(undefined4 *)(param_1 + 0x70);
  *(short *)(iVar6 + 0x1d0) =
       (short)(((int)*(short *)(param_1 + 100) + (int)*(short *)(iVar6 + 0x1d0)) / 2);
  (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x34) + 8) + 4))();
  iVar6 = *(int *)(param_1 + 4);
  puVar8 = (undefined4 *)(iVar6 + 0x300);
  iVar5 = 0;
  puVar7 = puVar8;
  do {
    auStack_60[iVar5] = *puVar7;
    iVar5 = iVar5 + 1;
    puVar7 = puVar7 + 1;
  } while (iVar5 < 4);
  if (param_3 <= DAT_006cc7a4) {
    _DAT_0078eb5c = _DAT_0078eb5c + 1;
  }
  else {
    (**(code **)(**(int **)(iVar6 + 0x3c) + 0x28))(param_3);
  }
  iVar6 = 0;
  do {
    puVar7 = auStack_60 + iVar6;
    iVar6 = iVar6 + 1;
    *puVar8 = *puVar7;
    puVar8 = puVar8 + 1;
  } while (iVar6 < 4);
  return;
}

