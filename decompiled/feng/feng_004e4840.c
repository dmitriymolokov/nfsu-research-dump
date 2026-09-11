/* Decompiled from Speed.exe @ 004e4840 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004e4840(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte *pbVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  char *pcVar10;
  byte *pbVar11;
  int *piVar12;
  int *local_8;
  
  iVar6 = FUN_004f3f90(&DAT_00746104);
  iVar7 = DAT_0073578c;
  if ((((iVar6 != 0) && (*(int *)(iVar6 + 0x18) != 0)) && (DAT_0073578c != 0)) &&
     ((iVar6 = FUN_004f3f90(&DAT_00746104), iVar6 != 0 && (*(int *)(iVar6 + 0x18) != 0)))) {
    FUN_004eebf0(*(undefined4 *)(iVar7 + 8),*(int *)(iVar6 + 0x18));
  }
  if (param_1 == 0x423af469) {
    FUN_005044b0(0,0);
    FUN_005044b0(0,0);
    FUN_005044b0(0,0);
    FUN_005044b0(0,0);
  }
  else if (param_1 == 0x780885f9) {
    iVar7 = FUN_004acce0();
    iVar6 = 0;
    if (iVar7 != 0x23) {
      if (iVar7 * 0xc90 + DAT_00734588 == 0) goto LAB_004e4a53;
      iVar6 = FUN_00567c70();
    }
    piVar9 = DAT_0073ad40;
    local_8 = DAT_0073ad40;
    piVar8 = (int *)FUN_0040a880();
    if (piVar9 != piVar8) {
      while( true ) {
        piVar9 = (int *)local_8[3];
        piVar12 = piVar9 + local_8[4] * 0xc;
        if ((iVar6 != 0) && (piVar9 = (int *)FUN_0053e400(iVar6,piVar9,4), piVar9 == (int *)0x0))
        break;
        for (; piVar9 < piVar12; piVar9 = piVar9 + 0xc) {
          if ((iVar6 != 0) && (piVar9[1] != iVar6)) goto LAB_004e49a2;
          if ((char)piVar9[4] == '\b') goto LAB_004e49a4;
        }
        local_8 = (int *)*local_8;
        if (local_8 == piVar8) break;
      }
    }
LAB_004e49a2:
    piVar9 = (int *)0x0;
LAB_004e49a4:
    if (piVar9 != (int *)0x0) {
      bVar5 = true;
      do {
        if (!bVar5) break;
        pcVar10 = "STOCK";
        do {
          cVar2 = pcVar10[*piVar9 + -0x6c3200];
          cVar3 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          if ((cVar2 == '\0') || (cVar3 == '\0')) break;
        } while (cVar2 == cVar3);
        if (cVar2 == cVar3) {
          bVar5 = false;
        }
        else {
          iVar6 = FUN_004acce0();
          iVar7 = 0;
          if (iVar6 != 0x23) {
            iVar7 = iVar6 * 0xc90 + DAT_00734588;
            if (iVar7 == 0) {
              iVar7 = 0;
            }
            else {
              pbVar11 = (byte *)(iVar7 + 0x20);
              iVar7 = -1;
              bVar4 = *pbVar11;
              while (bVar4 != 0) {
                iVar7 = iVar7 * 0x21 + (uint)bVar4;
                pbVar1 = pbVar11 + 1;
                pbVar11 = pbVar11 + 1;
                bVar4 = *pbVar1;
              }
            }
          }
          piVar9 = (int *)FUN_0057ce10(iVar7,8,0,piVar9,0xffffffff);
        }
      } while (piVar9 != (int *)0x0);
      FUN_005044b0(piVar9,0);
    }
  }
LAB_004e4a53:
  if (DAT_00735df4 != '\0') {
    FUN_004aa970(&DAT_007588c4,DAT_00758ad4);
    DAT_00735df4 = '\0';
  }
  FUN_005043f0("MU_GarageVinylGroup.fng");
  FUN_005043f0("MU_GarageVinylLayerV2.fng");
  FUN_005043f0("MU_GarageVinylBrowser.fng");
  FUN_00504320("MU_GarageVinylLayerV2.fng");
  FUN_004e2430(param_1,param_2,param_3,param_4);
  return;
}

