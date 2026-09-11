/* Decompiled from Speed.exe @ 005e605e */
/* Module: Loader */
/* Ghidra DecompileAll */


uint __thiscall FUN_005e605e(undefined4 *param_1,int param_2)

{
  char *pcVar1;
  uint uVar2;
  char cVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 *local_8;
  
  pcVar1 = *(char **)(param_2 + 8);
  uVar2 = 0;
  if ((pcVar1 == (char *)0x0) ||
     (cVar3 = *pcVar1, pcVar5 = pcVar1, local_8 = param_1, cVar3 == '\0')) {
    uVar2 = 0xf0000;
  }
  else {
    do {
      if (cVar3 < 'x') {
        if ((cVar3 == 'w') || (cVar3 == 'a')) {
          puVar4 = (undefined4 *)0x3;
          uVar2 = uVar2 | 0x80000;
        }
        else {
          if (cVar3 != 'b') {
            if (cVar3 == 'g') goto LAB_005e60d9;
            if (cVar3 != 'r') goto LAB_005e60e3;
            goto LAB_005e609e;
          }
LAB_005e60cf:
          puVar4 = (undefined4 *)0x2;
          uVar2 = uVar2 | 0x40000;
        }
      }
      else if (cVar3 == 'x') {
LAB_005e609e:
        puVar4 = (undefined4 *)0x0;
        uVar2 = uVar2 | 0x10000;
      }
      else {
        if (cVar3 != 'y') {
          if (cVar3 != 'z') goto LAB_005e60e3;
          goto LAB_005e60cf;
        }
LAB_005e60d9:
        puVar4 = (undefined4 *)0x1;
        uVar2 = uVar2 | 0x20000;
      }
      if ((pcVar5 != pcVar1) && (puVar4 <= local_8)) {
LAB_005e60e3:
        FUN_005b1f01(*param_1,param_2,0x7d3,"invalid mask \'%s\'",pcVar1);
        param_1[0x13] = 1;
        return 0;
      }
      cVar3 = pcVar5[1];
      pcVar5 = pcVar5 + 1;
      local_8 = puVar4;
    } while (cVar3 != '\0');
  }
  return uVar2;
}

