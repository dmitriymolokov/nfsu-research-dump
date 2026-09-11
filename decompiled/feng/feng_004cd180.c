/* Decompiled from Speed.exe @ 004cd180 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_004cd180(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  int unaff_EDI;
  
  iVar9 = -1;
  bVar2 = *param_1;
  while (bVar2 != 0) {
    iVar9 = iVar9 * 0x21 + (uint)bVar2;
    pbVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    bVar2 = *pbVar1;
  }
  piVar4 = &DAT_007469b4;
  do {
    if (iVar9 == *piVar4) {
      if (unaff_EDI == 7) {
        return;
      }
      if (unaff_EDI == 5) {
        return;
      }
      break;
    }
    piVar4 = piVar4 + 1;
  } while ((int)piVar4 < 0x7469bc);
  cVar3 = FUN_004cd060();
  if (cVar3 == '\0') {
    pcVar8 = "HELP_Generic.fng";
    iVar7 = -1;
    uVar5 = 0x48;
    do {
      iVar7 = iVar7 * 0x21 + uVar5;
      pbVar1 = (byte *)(pcVar8 + 1);
      uVar5 = (uint)*pbVar1;
      pcVar8 = pcVar8 + 1;
    } while (*pbVar1 != 0);
    if ((iVar9 != iVar7) || ((unaff_EDI != 1 && (unaff_EDI != 2)))) {
      uVar6 = FUN_004cd0d0();
      switch(uVar6) {
      case 1:
        iVar9 = FUN_004ccd20();
        break;
      case 2:
        iVar9 = FUN_004cce10();
        break;
      case 3:
        iVar9 = FUN_004cce70();
        break;
      case 4:
        iVar9 = FUN_004cced0();
        break;
      case 5:
        iVar9 = FUN_004ccf90();
        break;
      case 6:
        iVar9 = FUN_004ccc70();
        if (iVar9 == -1) {
          return;
        }
        iVar9 = FUN_004ccc90();
        break;
      case 7:
        iVar9 = FUN_004ccda0();
        break;
      default:
        goto switchD_004cd213_default;
      }
      if (iVar9 != -1) {
        FUN_0051c770();
        return;
      }
    }
  }
switchD_004cd213_default:
  return;
}

