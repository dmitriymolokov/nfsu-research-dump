/* Decompiled from Speed.exe @ 00578b10 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_00578b10(int param_1)

{
  byte *pbVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined *puVar11;
  undefined8 uVar12;
  
  pcVar8 = "WorldObject";
  iVar10 = -1;
  uVar5 = 0x57;
  do {
    iVar10 = iVar10 * 0x21 + uVar5;
    pbVar1 = (byte *)(pcVar8 + 1);
    uVar5 = (uint)*pbVar1;
    pcVar8 = pcVar8 + 1;
  } while (*pbVar1 != 0);
  iVar6 = FUN_00577d10(iVar10);
  if (iVar6 != 0) {
    iVar2 = *(int *)(iVar6 + 0x2c);
    if (iVar2 == iVar6 + 0x2c) {
      puVar7 = (undefined4 *)FUN_00577e60(0);
    }
    else if (iVar2 == 0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar7 = (undefined4 *)(iVar2 + -4);
    }
    while (puVar4 = puVar7, puVar4 != (undefined4 *)0x0) {
      puVar7 = DAT_0073b138;
      if (iVar10 == DAT_0073b128) {
        puVar11 = &DAT_0073b118;
LAB_00578b7e:
        if (puVar4 == (undefined4 *)0x0) {
          puVar3 = *(undefined **)(puVar11 + 0x2c);
          if (puVar3 == puVar11 + 0x2c) {
            puVar7 = (undefined4 *)FUN_00577e60(0);
          }
          else if (puVar3 == (undefined *)0x0) {
LAB_00578bef:
            puVar7 = (undefined4 *)0x0;
          }
          else {
            puVar7 = (undefined4 *)(puVar3 + -4);
          }
        }
        else {
          if (puVar4[1] == 0) {
            puVar7 = (undefined4 *)0x0;
          }
          else {
            puVar7 = (undefined4 *)(puVar4[1] + -4);
          }
          if (puVar4[6] == -0x2c) {
            puVar9 = (undefined4 *)0x0;
          }
          else {
            puVar9 = (undefined4 *)(puVar4[6] + 0x28);
          }
          if (puVar7 == puVar9) {
            uVar12 = FUN_00577e60(0);
            puVar7 = (undefined4 *)uVar12;
            if (puVar7 == (undefined4 *)0x0) {
              if ((undefined *)((ulonglong)uVar12 >> 0x20) == puVar11) goto LAB_00578bef;
              puVar7 = (undefined4 *)FUN_00577ed0();
            }
          }
        }
      }
      else {
        while ((undefined4 **)puVar7 != &DAT_0073b138) {
          uVar12 = FUN_00577d10(iVar10);
          puVar11 = (undefined *)uVar12;
          if (puVar11 != (undefined *)0x0) goto LAB_00578b7e;
          puVar7 = (undefined4 *)*(undefined4 *)((ulonglong)uVar12 >> 0x20);
        }
        puVar7 = (undefined4 *)0x0;
      }
      if ((puVar4[0xb] != 0) && (*(int *)(puVar4[0xb] + 0xc) == param_1)) {
        (**(code **)*puVar4)(1);
      }
    }
  }
  if (DAT_007345c0 != 0) {
    FUN_00577d80();
    return;
  }
  return;
}

