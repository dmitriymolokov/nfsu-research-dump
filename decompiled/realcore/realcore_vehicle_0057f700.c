/* Decompiled from Speed.exe @ 0057f700 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_0057f700(int param_1,int param_2,int param_3,int param_4,char param_5,float param_6)

{
  float fVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  undefined4 *puVar10;
  
  if (*(char *)(param_2 + 0x424) == -1) {
    FUN_0057f2b0(1);
  }
  fVar1 = *(float *)(param_2 + 0x428);
  while( true ) {
    if (*(char *)(param_1 + 0x424) == -1) {
      FUN_0057f2b0(1);
    }
    if (ABS(fVar1 - *(float *)(param_1 + 0x428)) <= param_6) break;
    puVar5 = (undefined4 *)(param_2 + 8);
    puVar10 = (undefined4 *)(param_1 + 8);
    for (iVar7 = 0x16; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar10 = puVar10 + 1;
    }
    FUN_0057f2b0(0);
    if (*(char *)(param_1 + 0x424) == -1) {
      FUN_0057f2b0(1);
    }
    fVar3 = ABS(fVar1 - *(float *)(param_1 + 0x428));
    if (fVar3 < param_6 != (fVar3 == param_6)) break;
    puVar9 = &DAT_006f0f78;
    do {
      if (*(char *)(param_1 + 0x424) == -1) {
        FUN_0057f2b0(1);
      }
      if (ABS(fVar1 - *(float *)(param_1 + 0x428)) <= param_6) break;
      iVar7 = 0;
      do {
        if (*(char *)(param_1 + 0x424) == -1) {
          FUN_0057f2b0(1);
        }
        if (ABS(fVar1 - *(float *)(param_1 + 0x428)) <= param_6) break;
        if ((*puVar9 & 1 << ((byte)iVar7 & 0x1f)) != 0) {
          if (*(char *)(param_1 + 0x424) == -1) {
            FUN_0057f2b0(1);
          }
          if (fVar1 <= *(float *)(param_1 + 0x428)) {
            puVar8 = (uint *)(param_1 + 8 + (&DAT_006f0f58)[iVar7] * 4);
            uVar4 = *(int *)(param_1 + 8 + (&DAT_006f0f58)[iVar7] * 4) - 1;
            uVar4 = uVar4 & ((int)uVar4 < 1) - 1;
          }
          else {
            puVar8 = (uint *)(param_1 + 8 + (&DAT_006f0f58)[iVar7] * 4);
            uVar4 = *puVar8 + 1;
            if (2 < (int)uVar4) {
              uVar4 = 3;
            }
          }
          *puVar8 = uVar4;
          FUN_0057f2b0(0);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < 4);
      if (param_5 != '\0') {
        puVar5 = &DAT_006f0f58;
        do {
          puVar5 = puVar5 + 1;
        } while ((int)puVar5 < 0x6f0f68);
        iVar7 = FUN_00674898();
        if (iVar7 < 1) {
          iVar7 = 0;
        }
        else if (3 < iVar7) {
          iVar7 = 3;
        }
        piVar6 = &DAT_006f0f68;
        do {
          iVar2 = *piVar6;
          piVar6 = piVar6 + 1;
          *(int *)(param_1 + 8 + iVar2 * 4) = iVar7;
        } while ((int)piVar6 < 0x6f0f78);
        if ((-1 < param_3) && (param_3 < 4)) {
          iVar7 = param_3;
        }
        *(int *)(param_1 + 0x18) = iVar7;
        FUN_0057f2b0(0);
      }
      puVar9 = puVar9 + 1;
    } while ((int)puVar9 < 0x6f0fb4);
    if (*(char *)(param_1 + 0x424) == -1) {
      FUN_0057f2b0(1);
    }
    fVar3 = ABS(fVar1 - *(float *)(param_1 + 0x428));
    if (fVar3 < param_6 != (fVar3 == param_6)) break;
    param_6 = param_6 + param_6;
  }
  FUN_00580590(param_1);
  if ((-1 < param_4) && (param_4 < 4)) {
    *(char *)(param_1 + 0x424) = (char)param_4;
  }
  return;
}

