/* Decompiled from Speed.exe @ 00589ba0 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00589ba0(void)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  if (DAT_00734514 == (undefined4 *)0x0) {
    DAT_00734514 = (undefined4 *)FUN_00566dc0(0x110,"SkidSetSlotPool",0);
    if ((DAT_00734514 != (undefined4 *)0x0) && (DAT_0073d814 == 1)) {
      *DAT_0073d81c = DAT_00734514;
      puVar8 = DAT_00734514;
      DAT_00734514[1] = DAT_0073d81c;
      DAT_0073d81c = puVar8;
      *DAT_00734514 = &DAT_0073d818;
    }
    DAT_00734514[5] = DAT_00734514[5] & 0xfffffffe;
  }
  puVar8 = &DAT_00731120;
  puVar9 = &DAT_006ef2e0;
  do {
    pbVar5 = (byte *)*puVar9;
    *puVar8 = 0;
    if (pbVar5 != (byte *)0x0) {
      iVar6 = -1;
      bVar2 = *pbVar5;
      while (bVar2 != 0) {
        iVar6 = iVar6 * 0x21 + (uint)bVar2;
        pbVar1 = pbVar5 + 1;
        pbVar5 = pbVar5 + 1;
        bVar2 = *pbVar1;
      }
      uVar3 = FUN_005461c0(iVar6,1,0);
      *puVar8 = uVar3;
    }
    puVar9 = puVar9 + 0x25;
    puVar8 = puVar8 + 1;
  } while ((int)puVar9 < 0x6f03a4);
  _DAT_00734518 = 0;
  _DAT_0073451c = 0;
  pcVar7 = "XEM_TIREFIRE";
  iVar6 = -1;
  uVar4 = 0x58;
  do {
    iVar6 = iVar6 * 0x21 + uVar4;
    pbVar5 = (byte *)(pcVar7 + 1);
    uVar4 = (uint)*pbVar5;
    pcVar7 = pcVar7 + 1;
  } while (*pbVar5 != 0);
  FUN_00402ad0(iVar6);
  return;
}

