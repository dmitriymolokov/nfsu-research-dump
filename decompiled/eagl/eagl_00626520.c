/* Decompiled from Speed.exe @ 00626520 */
/* Module: EAGL */
/* Ghidra DecompileAll */


void FUN_00626520(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  float *pfVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  float *local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  
  if (*(int *)(DAT_00709df0 + 0x20) < 0) {
    iVar14 = *(int *)(DAT_00709df0 + 0x18);
    pfVar16 = *(float **)(DAT_00709df0 + 0x28);
  }
  else {
    iVar14 = *(int *)(DAT_00709df0 + 8) * DAT_00709f70 * *(int *)(DAT_00709df0 + 0x1c) +
             *(int *)(DAT_00709df0 + 0x18);
    pfVar16 = (float *)(DAT_00709f70 * *(int *)(DAT_00709df0 + 0x1c) * 0x10 +
                       *(int *)(DAT_00709df0 + 0x28));
  }
  iVar15 = *(int *)(DAT_00709df0 + 0x1c);
  local_14 = *(undefined4 *)(DAT_00709df0 + 0x10);
  DAT_0070ab50 = FUN_006230e0(0,iVar15 * param_1,&local_24,iVar14);
  if (DAT_0070fde0 == 0) {
    if (DAT_0070fdf4 == 0) {
      if (0 < iVar15) {
        do {
          FUN_00643e50(pfVar16,&DAT_0070aba0 + (int)pfVar16[3] * 0x40,local_24);
          local_24 = (float *)((int)local_24 + param_1);
          pfVar16 = (float *)((int)pfVar16 + param_2);
          iVar15 = iVar15 + -1;
        } while (iVar15 != 0);
      }
    }
    else if (0 < iVar15) {
      do {
        FastExitMediaState();
        uVar17 = CONCAT44(*pfVar16,*pfVar16);
        uVar18 = CONCAT44(pfVar16[1],pfVar16[1]);
        uVar21 = CONCAT44(pfVar16[2],pfVar16[2]);
        iVar14 = (int)pfVar16[3] * 0x40;
        uVar19 = PackedFloatingMUL(*(undefined8 *)(&DAT_0070abc0 + iVar14),uVar21);
        uVar20 = PackedFloatingADD(uVar19,*(undefined8 *)(&DAT_0070abd0 + iVar14));
        uVar19 = PackedFloatingMUL(*(undefined8 *)(&DAT_0070abb0 + iVar14),uVar18);
        uVar22 = PackedFloatingMUL(*(undefined8 *)(&DAT_0070aba0 + iVar14),uVar17);
        uVar19 = PackedFloatingADD(uVar22,uVar19);
        uVar19 = PackedFloatingADD(uVar19,uVar20);
        *(undefined8 *)local_24 = uVar19;
        uVar21 = PackedFloatingMUL(*(undefined8 *)(&DAT_0070abc8 + iVar14),uVar21);
        uVar21 = PackedFloatingADD(uVar21,*(undefined8 *)(&DAT_0070abd8 + iVar14));
        uVar18 = PackedFloatingMUL(*(undefined8 *)(&DAT_0070abb8 + iVar14),uVar18);
        uVar17 = PackedFloatingMUL(*(undefined8 *)(&DAT_0070aba8 + iVar14),uVar17);
        uVar17 = PackedFloatingADD(uVar17,uVar18);
        uVar17 = PackedFloatingADD(uVar17,uVar21);
        *(undefined8 *)(local_24 + 2) = uVar17;
        local_24 = (float *)((int)local_24 + param_1);
        pfVar16 = (float *)((int)pfVar16 + param_2);
        iVar15 = iVar15 + -1;
        FastExitMediaState();
      } while (iVar15 != 0);
    }
  }
  else if (0 < iVar15) {
    do {
      local_20 = pfVar16[2];
      local_1c = pfVar16[1];
      iVar14 = (int)pfVar16[3] * 0x40;
      fVar1 = *(float *)(iVar14 + 0x70abd4);
      fVar2 = *(float *)(&DAT_0070abd8 + iVar14);
      fVar3 = *(float *)(iVar14 + 0x70abdc);
      fVar4 = *(float *)(&DAT_0070abc4 + iVar14);
      fVar5 = *(float *)(&DAT_0070abc8 + iVar14);
      fVar6 = *(float *)(iVar14 + 0x70abcc);
      fVar7 = *(float *)(&DAT_0070aba4 + iVar14);
      fVar8 = *(float *)(&DAT_0070aba8 + iVar14);
      fVar9 = *(float *)(iVar14 + 0x70abac);
      local_18 = *pfVar16;
      fVar10 = *(float *)(&DAT_0070abb4 + iVar14);
      fVar11 = *(float *)(&DAT_0070abb8 + iVar14);
      fVar12 = *(float *)(iVar14 + 0x70abbc);
      *local_24 = *(float *)(&DAT_0070aba0 + iVar14) * local_18 +
                  *(float *)(&DAT_0070abb0 + iVar14) * local_1c +
                  *(float *)(&DAT_0070abc0 + iVar14) * local_20 + *(float *)(&DAT_0070abd0 + iVar14)
      ;
      local_24[1] = fVar7 * local_18 + fVar10 * local_1c + fVar4 * local_20 + fVar1;
      local_24[2] = fVar8 * local_18 + fVar11 * local_1c + fVar5 * local_20 + fVar2;
      local_24[3] = fVar9 * local_18 + fVar12 * local_1c + fVar6 * local_20 + fVar3;
      local_24 = (float *)((int)local_24 + param_1);
      pfVar16 = (float *)((int)pfVar16 + param_2);
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  uVar13 = local_14;
  FUN_00622b40();
  FUN_00622720(*(undefined4 *)(DAT_00709df0 + 4),uVar13);
  return;
}

