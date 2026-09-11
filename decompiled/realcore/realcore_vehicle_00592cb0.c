/* Decompiled from Speed.exe @ 00592cb0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileModule */


void FUN_00592cb0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  char local_e8 [228];
  
  pcVar6 = local_e8;
  for (iVar5 = 0x37; iVar5 != 0; iVar5 = iVar5 + -1) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6[2] = '\0';
    pcVar6[3] = '\0';
    pcVar6 = pcVar6 + 4;
  }
  pcVar6[0] = '\0';
  pcVar6[1] = '\0';
  puVar1 = *(undefined4 **)(param_1 + 0x1c);
  while (puVar4 = puVar1, puVar4 != (undefined4 *)(param_1 + 0x1c)) {
    puVar1 = (undefined4 *)*puVar4;
    if (*(char *)(puVar4 + 3) == '\0') {
      piVar2 = *(int **)(puVar4[2] + 600);
      piVar3 = *(int **)(puVar4[2] + 0x25c);
      if ((*(char *)((int)piVar2 + 0x16) != '\0') && (local_e8[(short)piVar2[6]] == '\0')) {
        local_e8[(short)piVar2[6]] = '\x01';
        (**(code **)(*piVar2 + 0x28))(param_2);
      }
      if ((*(char *)((int)piVar3 + 0x16) != '\0') && (local_e8[(short)piVar3[6]] == '\0')) {
        iVar5 = *piVar3;
        local_e8[(short)piVar3[6]] = '\x01';
        (**(code **)(iVar5 + 0x28))(param_2);
      }
    }
  }
  return;
}

