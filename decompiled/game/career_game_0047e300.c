/* Decompiled from Speed.exe @ 0047e300 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0047e300(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  void *pvVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined4 *puVar16;
  float10 fVar17;
  int local_334;
  int local_2f8 [40];
  undefined4 uStack_258;
  undefined4 auStack_250 [10];
  undefined4 uStack_228;
  void *pvStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_00686d16;
  local_1c = ExceptionList;
  iVar13 = *(int *)(param_1 + 0x18);
  iVar1 = *(int *)(param_1 + 0x1c);
  ExceptionList = &local_1c;
  *(undefined4 *)(param_1 + 0x18) = 0;
  bVar6 = false;
  local_334 = -1;
  if ((*(int *)(param_1 + 0xc) == 0) || (iVar13 != 0)) {
    bVar6 = true;
    local_334 = FUN_0047e8c0(param_1);
  }
  else if ((0x37 < DAT_006f08a0 - *(int *)(param_1 + 0x28)) &&
          ((*(int *)(param_1 + 0x2c) == -1 || (iVar7 = FUN_0047e7e0(param_1,iVar1), iVar7 == 0)))) {
    bVar6 = true;
    local_334 = FUN_0047e8c0(param_1);
    if ((*(int *)(param_1 + 0x2c) == -1) && (local_334 == -1)) {
      bVar6 = false;
    }
  }
  bVar5 = false;
  if (((*(int *)(param_1 + 0x2c) != -1) && (*(int *)(param_1 + 0xc) != 0)) &&
     (0x37 < DAT_006f08a0 - *(int *)(param_1 + 0x28))) {
    iVar7 = *(int *)(*(int *)(param_1 + 0xc) + 0x1c);
    for (puVar16 = (undefined4 *)*DAT_007361f8; puVar16 != DAT_007361f8;
        puVar16 = (undefined4 *)*puVar16) {
      fVar2 = *(float *)(iVar7 + 0x40) - (float)puVar16[0x18];
      fVar4 = *(float *)(iVar7 + 0x44) - (float)puVar16[0x19];
      fVar3 = *(float *)(iVar7 + 0x48) - (float)puVar16[0x1a];
      if (SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3) < _DAT_006b7010) {
        bVar5 = true;
        break;
      }
    }
  }
  piVar10 = (int *)0x0;
  if ((!bVar6) && (!bVar5)) {
    ExceptionList = local_1c;
    return;
  }
  if (((*DAT_007361f0 == 9) && (DAT_00737290 != 0)) &&
     ((*(int *)(param_1 + 0x30) == DAT_00737290 || (iVar13 != 0)))) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    FUN_00443a10(&DAT_007372b0,&DAT_00737280);
    uVar8 = FUN_00564db0(0x3f800000,0);
    fVar17 = (float10)FUN_00428100(uVar8);
    FUN_00427c50(&DAT_00737280,(float)fVar17,uVar8);
    FUN_00443a10(&DAT_007372b0,iVar1 + 0x60);
    (**(code **)(**(int **)(iVar1 + 0x2c) + 0x2c))(1);
    (**(code **)(**(int **)(iVar1 + 0x2c) + 0x30))();
    *(undefined4 *)(iVar1 + 0x884) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
    ExceptionList = pvStack_20;
    return;
  }
  if (*(undefined4 **)(param_1 + 0xc) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0xc))(1);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if ((local_334 != -1) && (!bVar5)) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    FUN_0047f9e0();
    if (local_2f8[0] == 0) {
      FUN_0047e080(uStack_258);
      puVar16 = auStack_250;
      for (iVar13 = 0x8c; iVar13 != 0; iVar13 = iVar13 + -1) {
        *puVar16 = 0;
        puVar16 = puVar16 + 1;
      }
      uStack_228 = 2;
      pvVar9 = _malloc(0x470);
      if (pvVar9 == (void *)0x0) {
LAB_0047e63a:
        piVar10 = (int *)0x0;
      }
      else {
        piVar10 = (int *)FUN_004854e0(pvVar9,iVar1,local_2f8,auStack_250,1);
      }
    }
    else if (local_2f8[0] == 1) {
      pvVar9 = _malloc(0x45c);
      if (pvVar9 == (void *)0x0) goto LAB_0047e63a;
      piVar10 = (int *)FUN_004848f0(pvVar9,iVar1,local_2f8);
    }
    else if (local_2f8[0] == 2) {
      pvVar9 = _malloc(0x19c);
      if (pvVar9 == (void *)0x0) goto LAB_0047e63a;
      piVar10 = (int *)FUN_004864e0(pvVar9,local_2f8,iVar1);
    }
    (**(code **)(*piVar10 + 0x3c))();
    (**(code **)(*piVar10 + 4))();
    iVar13 = piVar10[7];
    for (puVar16 = (undefined4 *)*DAT_007361f8; puVar16 != DAT_007361f8;
        puVar16 = (undefined4 *)*puVar16) {
      fVar2 = *(float *)(iVar13 + 0x40) - (float)puVar16[0x18];
      fVar4 = *(float *)(iVar13 + 0x44) - (float)puVar16[0x19];
      fVar3 = *(float *)(iVar13 + 0x48) - (float)puVar16[0x1a];
      if (SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3) < _DAT_006b7014) {
        (**(code **)*piVar10)(1);
        goto LAB_0047e6b7;
      }
    }
    *(int **)(param_1 + 0xc) = piVar10;
    (**(code **)(*piVar10 + 0x38))();
    goto LAB_0047e7ab;
  }
LAB_0047e6b7:
  local_334 = -1;
  if (DAT_007364a0 == 3) {
    uVar15 = *(uint *)(*(int *)(iVar1 + 0xc) + 0xb54);
  }
  else {
    uVar15 = *(uint *)(*(int *)(iVar1 + 0xc) + 0xb50);
  }
  uVar11 = 0;
  if (0 < (int)uVar15) {
    uVar11 = DAT_006f227c % uVar15;
    uVar14 = DAT_006f227c ^ 0x1d872b41;
    uVar12 = uVar14 >> 5 ^ uVar14;
    DAT_006f227c = uVar12 << 0x1b ^ uVar12 ^ uVar14;
  }
  if ((uVar11 == *(uint *)(param_1 + 0x24)) && (0 < (int)uVar15)) {
    *(int *)(param_1 + 0x24) = (int)(*(uint *)(param_1 + 0x24) + 1) % (int)uVar15;
  }
  else {
    *(uint *)(param_1 + 0x24) = uVar11;
  }
  *(uint *)(param_1 + 0x20) = (uint)(*(int *)(param_1 + 0x20) == 0);
  if (DAT_00700aa4 == 0) {
    pvVar9 = _malloc(0x3a0);
    if (pvVar9 == (void *)0x0) goto LAB_0047e7a6;
    uVar8 = FUN_00489360(iVar1,*(undefined4 *)(param_1 + 0x24),0x43960000,1,
                         *(undefined4 *)(param_1 + 0x20),0);
  }
  else {
    pvVar9 = _malloc(0x54);
    uStack_14 = 0;
    if (pvVar9 == (void *)0x0) {
LAB_0047e7a6:
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_0048afd0(pvVar9,*(undefined4 *)(param_1 + 0x14),iVar1,
                           *(undefined4 *)(param_1 + 0x24),1,
                           CONCAT31((int3)((uint)*(int *)(param_1 + 0x20) >> 8),
                                    *(int *)(param_1 + 0x20) != 0),0);
    }
  }
  *(undefined4 *)(param_1 + 0xc) = uVar8;
LAB_0047e7ab:
  *(int *)(param_1 + 0x28) = DAT_006f08a0;
  *(int *)(param_1 + 0x2c) = local_334;
  ExceptionList = local_1c;
  return;
}

