/* Decompiled from Speed.exe @ 00474730 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_00474730(float param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  int iVar7;
  undefined2 uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  char cVar11;
  int iVar12;
  int unaff_EBX;
  undefined4 *local_18;
  int local_14;
  float local_10;
  int *local_8;
  
  iVar7 = *(int *)(unaff_EBX + 0x30);
  if (DAT_007798e0 == 0) {
    iVar12 = *(int *)(unaff_EBX + 0x20);
    uVar10 = *(undefined4 *)(iVar12 + 0x24);
    uVar2 = *(undefined4 *)(iVar12 + 0x28);
    *(undefined4 *)(iVar7 + 0x20) = *(undefined4 *)(iVar12 + 0x20);
    *(undefined4 *)(iVar7 + 0x24) = uVar10;
    *(undefined4 *)(iVar7 + 0x28) = uVar2;
    FUN_00401cd0();
    FUN_00465390();
    iVar12 = *(int *)(unaff_EBX + 0x20);
    uVar10 = *(undefined4 *)(iVar12 + 0xa4);
    uVar2 = *(undefined4 *)(iVar12 + 0xa8);
    *(undefined4 *)(iVar7 + 0x30) = *(undefined4 *)(iVar12 + 0xa0);
    *(undefined4 *)(iVar7 + 0x34) = uVar10;
    *(undefined4 *)(iVar7 + 0x38) = uVar2;
    fVar3 = *(float *)(iVar12 + 0xa8);
    fVar4 = *(float *)(iVar12 + 0xa4);
    fVar5 = *(float *)(iVar12 + 0xa0);
    *(undefined1 *)(iVar7 + 0x420) = 0;
    *(float *)(iVar7 + 0x394) = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5);
    iVar12 = *(int *)(unaff_EBX + 0x20);
    uVar10 = *(undefined4 *)(iVar12 + 0xc4);
    uVar2 = *(undefined4 *)(iVar12 + 200);
    *(undefined4 *)(iVar7 + 0x90) = *(undefined4 *)(iVar12 + 0xc0);
    *(undefined4 *)(iVar7 + 0x94) = uVar10;
    *(undefined4 *)(iVar7 + 0x98) = uVar2;
    uVar8 = FUN_00564db0(*(undefined4 *)(*(int *)(unaff_EBX + 0x20) + 0x30),
                         *(undefined4 *)(*(int *)(unaff_EBX + 0x20) + 0x34));
    *(undefined2 *)(iVar7 + 0x374) = uVar8;
    iVar12 = *(int *)(unaff_EBX + 0x20);
    fVar3 = *(float *)(iVar12 + 0x38);
    fVar4 = *(float *)(iVar12 + 0x34);
    local_18 = (undefined4 *)(iVar7 + 0x334);
    local_14 = 0;
    fVar5 = *(float *)(iVar12 + 0x30);
    local_8 = (int *)(unaff_EBX + 0x38);
    puVar9 = (undefined4 *)(iVar7 + 0x354);
    *(undefined4 *)(iVar7 + 0x3a8) = 1;
    *(undefined4 *)(iVar7 + 900) = 0;
    *(undefined4 *)(iVar7 + 0x388) = 0;
    *(float *)(iVar7 + 0x390) =
         *(float *)(iVar7 + 0x30) * fVar5 +
         *(float *)(iVar7 + 0x34) * fVar4 + *(float *)(iVar7 + 0x38) * fVar3;
    do {
      fVar3 = *(float *)((-0x330 - iVar7) + *(int *)(unaff_EBX + 0x24) + (int)puVar9);
      fVar4 = (float)puVar9[-0x25];
      local_10 = *(float *)(*(int *)(unaff_EBX + 0x24) + (-800 - iVar7) + (int)puVar9);
      fVar5 = *(float *)((local_14 / 2) * 0x20 + 0x18c + *(int *)(unaff_EBX + 0x2c));
      if (fVar5 < local_10) {
        local_10 = fVar5;
      }
      uVar10 = FUN_00674898(local_10);
      FUN_00586bb0(fVar3 * param_1 + fVar4,fVar3,uVar10,local_10);
      cVar6 = *(char *)(iVar7 + 0x310 + local_14);
      cVar11 = (char)*(undefined4 *)((int)puVar9 + *(int *)(unaff_EBX + 0x24) + (-0x2f0 - iVar7));
      *(char *)(iVar7 + 0x310 + local_14) = cVar11;
      if (cVar6 == '\0') {
        if (cVar11 != '\0') {
          iVar12 = *(int *)(iVar7 + 0x38c) + 1;
LAB_0047495c:
          *(int *)(iVar7 + 0x38c) = iVar12;
        }
      }
      else if (cVar11 == '\0') {
        iVar12 = *(int *)(iVar7 + 0x38c) + -1;
        goto LAB_0047495c;
      }
      uVar10 = *(undefined4 *)(*(int *)(unaff_EBX + 0x24) + 0x98 + local_14 * 8);
      *local_18 = *(undefined4 *)(*(int *)(unaff_EBX + 0x24) + 0x94 + local_14 * 8);
      local_18[1] = uVar10;
      *puVar9 = 0;
      puVar9[-0x21] = *(undefined4 *)(*(int *)(unaff_EBX + 0x24) + (-0x300 - iVar7) + (int)puVar9);
      uVar10 = DAT_006cc7a4;
      if (*(char *)(*local_8 + 0x155) != '\0') {
        uVar10 = *(undefined4 *)(*local_8 + 0x15c);
      }
      puVar9[-0x1d] = uVar10;
      *(undefined1 *)(*local_8 + 0x155) =
           *(undefined1 *)((int)puVar9 + *(int *)(unaff_EBX + 0x24) + (-0x2f0 - iVar7));
      puVar1 = (undefined4 *)(*(int *)(unaff_EBX + 0x24) + 0x94 + local_14 * 8);
      iVar12 = *local_8;
      uVar10 = *puVar1;
      *(undefined4 *)(iVar12 + 0x104) =
           *(undefined4 *)(*(int *)(unaff_EBX + 0x24) + 0x98 + local_14 * 8);
      *(undefined4 *)(iVar12 + 0x100) = uVar10;
      *(undefined4 *)(iVar12 + 0x160) = *puVar1;
      *(undefined1 *)(*local_8 + 0x154) =
           *(undefined1 *)(*(int *)(unaff_EBX + 0x24) + 0xb4 + local_14);
      iVar12 = *(int *)(unaff_EBX + 0x34);
      if (((*(int *)(*(int *)(iVar12 + 0x14) + 4) != 3) && (*(char *)(iVar12 + 0x8a8) == '\0')) &&
         (*(char *)(iVar12 + 0x4d0) != '\0')) {
        FUN_00587e90(param_1,iVar12);
      }
      puVar9 = puVar9 + 1;
      local_14 = local_14 + 1;
      local_8 = local_8 + 1;
      local_18 = local_18 + 2;
    } while (local_14 < 4);
  }
  *(undefined4 *)(iVar7 + 0x3a0) = *(undefined4 *)(*(int *)(unaff_EBX + 0x24) + 0x120);
  *(undefined4 *)(iVar7 + 0x398) = *(undefined4 *)(*(int *)(unaff_EBX + 0x24) + 0x124);
  return;
}

