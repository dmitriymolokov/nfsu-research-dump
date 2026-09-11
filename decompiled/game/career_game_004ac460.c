/* Decompiled from Speed.exe @ 004ac460 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004ac460(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  
  puVar1 = param_1;
  param_1 = param_1 + 2;
  iVar5 = 0;
  do {
    if ((iVar5 < 0) || (puVar4 = param_1, 9 < iVar5)) {
      puVar4 = (undefined4 *)0x0;
    }
    uVar2 = FUN_004f42f0("PRESET_SLOT_%d",iVar5);
    puVar6 = puVar4;
    for (iVar3 = 0xce; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    iVar5 = iVar5 + 1;
    param_1 = param_1 + 0xce;
    puVar4[1] = uVar2;
  } while (iVar5 < 10);
  puVar1[0x1876] = 0;
  iVar5 = 0;
  do {
    iVar3 = DAT_00734588 + iVar5;
    if ((((iVar3 != 0) && (*(char *)(iVar3 + 0x40) != '\0')) && (*(int *)(iVar3 + 0xc54) == 0)) &&
       ((int)puVar1[0x1876] < 0x14)) {
      FUN_004f42f0("CUSTOMIZABLE_%s",iVar3);
      FUN_004acb90();
      puVar1[0x1876] = puVar1[0x1876] + 1;
    }
    iVar5 = iVar5 + 0xc90;
  } while (iVar5 < 0x1b7b0);
  iVar5 = FUN_004abfc0(puVar1,param_2);
  *puVar1 = *(undefined4 *)(iVar5 + 0x344);
  puVar1[1] = *(undefined4 *)(iVar5 + 0x344);
  return;
}

