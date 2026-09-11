/* Decompiled from Speed.exe @ 00504550 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_00504550(char param_1)

{
  byte *pbVar1;
  int *piVar2;
  uint uVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  
  piVar5 = DAT_0073ad40;
  pcVar4 = "BRAKES";
  iVar6 = -1;
  uVar3 = 0x42;
  do {
    iVar6 = iVar6 * 0x21 + uVar3;
    pbVar1 = (byte *)(pcVar4 + 1);
    uVar3 = (uint)*pbVar1;
    pcVar4 = pcVar4 + 1;
  } while (*pbVar1 != 0);
  piVar2 = (int *)FUN_0040a880();
  if (piVar5 != piVar2) {
    while( true ) {
      uVar3 = piVar5[3];
      uVar7 = piVar5[4] * 0x30 + uVar3;
      if ((iVar6 != 0) && (uVar3 = FUN_0053e400(iVar6,uVar3,4), uVar3 == 0)) break;
      for (; uVar3 < uVar7; uVar3 = uVar3 + 0x30) {
        if ((iVar6 != 0) && (*(int *)(uVar3 + 4) != iVar6)) goto LAB_005045dd;
        if (*(char *)(uVar3 + 0x10) == '\x10') goto LAB_005045e0;
      }
      piVar5 = (int *)*piVar5;
      if (piVar5 == piVar2) break;
    }
  }
LAB_005045dd:
  uVar3 = 0;
LAB_005045e0:
  for (; (uVar3 != 0 && (*(char *)(uVar3 + 0x11) != param_1));
      uVar3 = FUN_0057ce10(iVar6,0x10,0,uVar3,0xffffffff)) {
    pcVar4 = "BRAKES";
    iVar6 = -1;
    uVar7 = 0x42;
    do {
      iVar6 = iVar6 * 0x21 + uVar7;
      pbVar1 = (byte *)(pcVar4 + 1);
      uVar7 = (uint)*pbVar1;
      pcVar4 = pcVar4 + 1;
    } while (*pbVar1 != 0);
  }
  return;
}

