/* Decompiled from Speed.exe @ 00432a30 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00432a30(undefined4 param_1,undefined4 param_2,int *param_3)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined *puVar6;
  int unaff_EDI;
  
  if (((DAT_0078a344 == '\0') && (DAT_007361a8 == 0)) || (DAT_0078a320 != 1)) {
    pcVar5 = "3RDPERSON_";
    iVar3 = -1;
    uVar2 = 0x33;
    do {
      iVar3 = iVar3 * 0x21 + uVar2;
      pbVar1 = (byte *)(pcVar5 + 1);
      uVar2 = (uint)*pbVar1;
      pcVar5 = pcVar5 + 1;
    } while (*pbVar1 != 0);
  }
  else {
    pcVar5 = "3RDPERSONDRAG_";
    iVar3 = -1;
    uVar2 = 0x33;
    do {
      iVar3 = iVar3 * 0x21 + uVar2;
      pbVar1 = (byte *)(pcVar5 + 1);
      uVar2 = (uint)*pbVar1;
      pcVar5 = pcVar5 + 1;
    } while (*pbVar1 != 0);
  }
  if (_DAT_006ccad8 <= *(float *)(unaff_EDI + 8)) {
    pcVar5 = "10500LINES";
    uVar2 = 0x31;
    iVar4 = iVar3;
    do {
      iVar4 = iVar4 * 0x21 + uVar2;
      pbVar1 = (byte *)(pcVar5 + 1);
      uVar2 = (uint)*pbVar1;
      pcVar5 = pcVar5 + 1;
    } while (*pbVar1 != 0);
    *param_3 = iVar4;
    if (_DAT_006cc940 <= *(float *)(unaff_EDI + 4)) {
      puVar6 = &DAT_006ca6f8;
      uVar2 = 0x39;
      do {
        iVar3 = iVar3 * 0x21 + uVar2;
        pbVar1 = puVar6 + 1;
        uVar2 = (uint)*pbVar1;
        puVar6 = puVar6 + 1;
      } while (*pbVar1 != 0);
      param_3[1] = iVar3;
      return;
    }
    puVar6 = &DAT_006ca6f0;
    uVar2 = 0x38;
    do {
      iVar3 = iVar3 * 0x21 + uVar2;
      pbVar1 = puVar6 + 1;
      uVar2 = (uint)*pbVar1;
      puVar6 = puVar6 + 1;
    } while (*pbVar1 != 0);
    param_3[1] = iVar3;
    return;
  }
  if (_DAT_006ccad4 <= *(float *)(unaff_EDI + 8)) {
    pcVar5 = "9500LINES";
    uVar2 = 0x39;
    iVar4 = iVar3;
    do {
      iVar4 = iVar4 * 0x21 + uVar2;
      pbVar1 = (byte *)(pcVar5 + 1);
      uVar2 = (uint)*pbVar1;
      pcVar5 = pcVar5 + 1;
    } while (*pbVar1 != 0);
    *param_3 = iVar4;
    if (_DAT_006ccad0 <= *(float *)(unaff_EDI + 4)) {
      puVar6 = &DAT_006ca6dc;
      uVar2 = 0x38;
      do {
        iVar3 = iVar3 * 0x21 + uVar2;
        pbVar1 = puVar6 + 1;
        uVar2 = (uint)*pbVar1;
        puVar6 = puVar6 + 1;
      } while (*pbVar1 != 0);
      param_3[1] = iVar3;
      return;
    }
    puVar6 = &DAT_006ca6d4;
    uVar2 = 0x37;
    do {
      iVar3 = iVar3 * 0x21 + uVar2;
      pbVar1 = puVar6 + 1;
      uVar2 = (uint)*pbVar1;
      puVar6 = puVar6 + 1;
    } while (*pbVar1 != 0);
    param_3[1] = iVar3;
    return;
  }
  if (*(float *)(unaff_EDI + 8) < _DAT_006ccacc) {
    pcVar5 = "7500LINES";
    uVar2 = 0x37;
    do {
      iVar3 = iVar3 * 0x21 + uVar2;
      pbVar1 = (byte *)(pcVar5 + 1);
      uVar2 = (uint)*pbVar1;
      pcVar5 = pcVar5 + 1;
    } while (*pbVar1 != 0);
    *param_3 = iVar3;
    iVar3 = FUN_00567ca0();
    param_3[1] = iVar3;
  }
  else {
    pcVar5 = "8500LINES";
    uVar2 = 0x38;
    do {
      iVar3 = iVar3 * 0x21 + uVar2;
      pbVar1 = (byte *)(pcVar5 + 1);
      uVar2 = (uint)*pbVar1;
      pcVar5 = pcVar5 + 1;
    } while (*pbVar1 != 0);
    *param_3 = iVar3;
    if (_DAT_006ccac8 <= *(float *)(unaff_EDI + 4)) {
      iVar3 = FUN_00567ca0();
      param_3[1] = iVar3;
      return;
    }
    if (_DAT_006ccac4 <= *(float *)(unaff_EDI + 4)) {
      iVar3 = FUN_00567ca0();
      param_3[1] = iVar3;
      return;
    }
  }
  return;
}

