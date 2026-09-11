/* Decompiled from Speed.exe @ 0057e9a0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_0057e9a0(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  
  puVar6 = DAT_0073ad40;
  puVar1 = (undefined4 *)FUN_0040a880();
  for (; puVar6 != puVar1; puVar6 = (undefined4 *)*puVar6) {
    uVar3 = puVar6[3];
    uVar2 = puVar6[4] * 0x30 + uVar3;
    for (; uVar3 < uVar2; uVar3 = uVar3 + 0x30) {
      if (*(char *)(uVar3 + 0x10) == '\x1e') goto LAB_0057e9e6;
    }
  }
  uVar3 = 0;
LAB_0057e9e6:
  *(uint *)(param_1 + 0x4c4) = uVar3;
  *(char *)(param_1 + 0x64a) = *(char *)(param_1 + 0x64a) + '\x01';
  FUN_0057ea80(param_1);
  pcVar5 = (char *)(param_1 + 0x64b);
  puVar6 = (undefined4 *)(param_1 + 0x4c8);
  iVar4 = 4;
  do {
    *puVar6 = 0;
    *pcVar5 = *pcVar5 + '\x01';
    FUN_0057ea80(param_1);
    puVar6 = puVar6 + 1;
    pcVar5 = pcVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}

