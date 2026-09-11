/* Decompiled from Speed.exe @ 005011e0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


uint FUN_005011e0(uint *param_1)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  uint *puVar11;
  uint *puVar12;
  
  puVar3 = param_1;
  uVar6 = param_1[1];
  puVar11 = (uint *)(uVar6 + 8);
  puVar12 = (uint *)(*(int *)(uVar6 + 4) + 8 + uVar6);
  uVar8 = *puVar11;
  do {
    if (uVar8 == 0xcc736552) {
LAB_00501220:
      if (puVar11[2] == 0x6d4e7352) {
        uVar6 = puVar11[3];
        piVar10 = (int *)((int)puVar11 + uVar6 + 0x10);
        if (*piVar10 != 0x71527352) {
          return uVar6 & 0xffffff00;
        }
        iVar9 = piVar10[2];
        piVar10 = piVar10 + 3;
        *(int *)(*param_1 + 0x58) = iVar9;
        if (iVar9 != 0) {
          pvVar4 = _malloc(iVar9 * 0x18);
          *(void **)(*param_1 + 0x5c) = pvVar4;
          pvVar4 = _malloc(puVar11[3]);
          *(void **)(*param_1 + 0x8c) = pvVar4;
          if (iVar9 != 0) {
            iVar5 = 0;
            param_1 = (uint *)iVar9;
            do {
              *(int *)(iVar5 + *(int *)(*puVar3 + 0x5c)) = *piVar10;
              *(int *)(*(int *)(*puVar3 + 0x5c) + 4 + iVar5) = piVar10[1];
              *(int *)(*(int *)(*puVar3 + 0x5c) + 8 + iVar5) = piVar10[2];
              *(int *)(*(int *)(*puVar3 + 0x5c) + 0xc + iVar5) = piVar10[3];
              *(int *)(*(int *)(*puVar3 + 0x5c) + 0x10 + iVar5) = piVar10[4];
              *(int *)(*(int *)(*puVar3 + 0x5c) + 0x14 + iVar5) = piVar10[5];
              piVar10 = piVar10 + 6;
              iVar5 = iVar5 + 0x18;
              param_1 = (uint *)((int)param_1 + -1);
            } while (param_1 != (uint *)0x0);
          }
          uVar8 = puVar11[3];
          uVar6 = *puVar3;
          puVar11 = puVar11 + 4;
          puVar12 = *(uint **)(uVar6 + 0x8c);
          for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar12 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar12 = puVar12 + 1;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(char *)puVar12 = (char)*puVar11;
            puVar11 = (uint *)((int)puVar11 + 1);
            puVar12 = (uint *)((int)puVar12 + 1);
          }
          if (iVar9 != 0) {
            iVar5 = 0;
            do {
              iVar2 = *(int *)(*puVar3 + 0x5c);
              uVar6 = *(uint *)(*puVar3 + 0x8c);
              piVar10 = (int *)(iVar2 + 4 + iVar5);
              piVar1 = (int *)(iVar2 + 4 + iVar5);
              iVar5 = iVar5 + 0x18;
              iVar9 = iVar9 + -1;
              *piVar1 = *piVar10 + uVar6;
            } while (iVar9 != 0);
          }
        }
        return CONCAT31((int3)(uVar6 >> 8),1);
      }
LAB_00501229:
      return uVar6 & 0xffffff00;
    }
    if (puVar11 == puVar12) {
      if (*puVar11 != 0xcc736552) goto LAB_00501229;
      goto LAB_00501220;
    }
    uVar6 = *(uint *)((int)puVar11 + puVar11[1] + 8);
    puVar11 = (uint *)((int)puVar11 + puVar11[1] + 8);
    uVar8 = uVar6;
  } while( true );
}

