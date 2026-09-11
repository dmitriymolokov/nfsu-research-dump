/* Decompiled from Speed.exe @ 0045a7d0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __fastcall FUN_0045a7d0(char *param_1,int param_2,char param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *local_10;
  char *local_c;
  
  if (param_2 < *param_1) {
    if (0 < *param_1 - param_2) {
      local_10 = param_1 + param_2 * 2 + 0x164;
      local_c = param_1 + param_2 + 0x18c;
      pcVar3 = param_1 + 0x150;
      pcVar4 = param_1 + 0x164;
      pcVar5 = param_1 + param_2 * 0x10 + 0x18;
      pcVar6 = param_1 + 0x18;
      do {
        uVar1 = *(undefined4 *)(pcVar5 + -4);
        uVar2 = *(undefined4 *)pcVar5;
        *(undefined4 *)(pcVar6 + -8) = *(undefined4 *)(pcVar5 + -8);
        *(undefined4 *)(pcVar6 + -4) = uVar1;
        *(undefined4 *)pcVar6 = uVar2;
        *pcVar3 = pcVar3[param_2];
        *(undefined2 *)pcVar4 = *(undefined2 *)local_10;
        pcVar3[0x3c] = *local_c;
        local_10 = local_10 + 2;
        pcVar3 = pcVar3 + 1;
        local_c = local_c + 1;
        pcVar4 = pcVar4 + 2;
        pcVar5 = pcVar5 + 0x10;
        pcVar6 = pcVar6 + 0x10;
      } while ((int)(pcVar3 + (-0x150 - (int)param_1)) < *param_1 - param_2);
    }
    *param_1 = *param_1 - (char)param_2;
    param_1[0x1a4] = '\0';
    param_1[0x1a5] = '\0';
    param_1[0x1a6] = '\0';
    param_1[0x1a7] = '\0';
    param_1[0x1a8] = '\0';
    param_1[0x1a9] = '\0';
    param_1[0x1aa] = '\0';
    param_1[0x1ab] = '\0';
    if (param_3 != '\0') {
      FUN_0045a8c0();
    }
  }
  return;
}

