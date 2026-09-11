/* Decompiled from Speed.exe @ 00595bf0 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_00595bf0(void)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char cVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar7 = DAT_00737778;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00686bf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar6 = (undefined4 *)FUN_0040a880();
  for (; puVar7 != puVar6; puVar7 = (undefined4 *)*puVar7) {
    FUN_00402ad0(puVar7[0x21]);
    FUN_00402ad0(puVar7[0x22]);
  }
  iVar9 = DAT_00734474;
  if (DAT_00734474 < 1) {
    iVar9 = 1;
  }
  puVar7 = (undefined4 *)FUN_00565b60(iVar9 * 0x68 + 0x30,0,0,0);
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7[9] = iVar9;
    puVar7[10] = 0x68;
    puVar7[5] = 0xb;
    puVar7[4] = 0;
    puVar7[2] = 0;
    puVar7[8] = 0;
    puVar7[3] = "VirginSmokeableSlotPool";
    puVar7[0xb] = iVar9;
    puVar7[6] = 0;
    puVar7[7] = 0;
    FUN_00566e20();
    if (DAT_0073d814 == 1) {
      *DAT_0073d81c = puVar7;
      puVar4 = puVar7;
      puVar7[1] = DAT_0073d81c;
      DAT_0073d81c = puVar4;
      *puVar7 = &DAT_0073d818;
    }
  }
  DAT_00734464 = puVar7;
  puVar7 = (undefined4 *)FUN_00565b60(0x9a30,0,0,0);
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7[9] = 0x20;
    puVar7[10] = 0x4d0;
    puVar7[5] = 0xb;
    puVar7[4] = 0;
    puVar7[2] = 0;
    puVar7[8] = 0;
    puVar7[3] = "SmokeableSlotPool";
    puVar7[0xb] = 0x20;
    puVar7[6] = 0;
    puVar7[7] = 0;
    FUN_00566e20();
    if (DAT_0073d814 == 1) {
      *DAT_0073d81c = puVar7;
      puVar4 = puVar7;
      puVar7[1] = DAT_0073d81c;
      DAT_0073d81c = puVar4;
      *puVar7 = &DAT_0073d818;
    }
  }
  DAT_0073168c = FUN_00595230;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  DAT_00734468 = puVar7;
  if (0 < DAT_00734474) {
    local_18 = 0;
    do {
      piVar8 = (int *)(local_18 + DAT_00734470);
      if (DAT_00737778 != puVar6) {
        puVar7 = DAT_00737778;
        do {
          if (puVar7[0x20] == *piVar8) {
            cVar5 = FUN_00595b70();
            puVar7 = DAT_00734464;
            if (cVar5 == '\0') {
              puVar4 = DAT_00734464 + 4;
              if ((DAT_00734464[4] == 0) && ((*(byte *)(DAT_00734464 + 5) & 1) != 0)) {
                FUN_00566e60();
              }
              puVar2 = (undefined4 *)*puVar4;
              iVar9 = puVar7[6] + 1;
              if (puVar2 != (undefined4 *)0x0) {
                uVar3 = *puVar2;
                if ((int)puVar7[7] < iVar9) {
                  puVar7[7] = iVar9;
                }
                puVar7[6] = iVar9;
                bVar1 = *(byte *)(puVar7 + 5);
                *puVar4 = uVar3;
                if (((bVar1 & 2) != 0) && (iVar9 = (int)puVar7[10] >> 2, puVar7 = puVar2, 0 < iVar9)
                   ) {
                  for (; iVar9 != 0; iVar9 = iVar9 + -1) {
                    *puVar7 = 0;
                    puVar7 = puVar7 + 1;
                  }
                }
              }
              local_4 = 0;
              if (puVar2 != (undefined4 *)0x0) {
                FUN_005962e0(puVar2,piVar8);
              }
              local_4 = 0xffffffff;
            }
            goto LAB_00595e60;
          }
          puVar7 = (undefined4 *)*puVar7;
        } while (puVar7 != puVar6);
      }
      if ((*piVar8 != local_20) && (local_24 = local_24 + 1, local_24 < 4)) {
        local_20 = *piVar8;
      }
LAB_00595e60:
      local_1c = local_1c + 1;
      local_18 = local_18 + 0x70;
    } while (local_1c < DAT_00734474);
  }
  ExceptionList = local_c;
  return;
}

