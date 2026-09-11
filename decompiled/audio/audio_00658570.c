/* Decompiled from Speed.exe @ 00658570 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 FUN_00658570(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int local_30 [6];
  int local_18 [6];
  
  iVar2 = param_1;
  cVar1 = *(char *)(param_1 + 3);
  iVar3 = 0;
  if (0 < cVar1) {
    piVar6 = (int *)(param_1 + 0x80);
    do {
      local_18[iVar3] = piVar6[-6] + param_2;
      if (*piVar6 == 0) {
        local_30[iVar3] = 0;
      }
      else {
        local_30[iVar3] = *(int *)(param_1 + 0x68) + *piVar6 + param_2;
      }
      iVar3 = iVar3 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar3 < cVar1);
  }
  param_1 = 0;
  uVar4 = FUN_00659a70(&param_1,iVar2);
  while (uVar4 != 0) {
    if (((uVar4 & 1) != 0) && (*(char *)(iVar2 + 3) == '\x01')) {
      iVar3 = FUN_00653fa0(*(undefined4 *)(iVar2 + 200));
      iVar5 = FUN_00654540(*(undefined1 *)(iVar2 + 0x13),*(undefined2 *)(iVar2 + 0x56),
                           *(undefined4 *)(iVar2 + 0x58),*(undefined4 *)(iVar2 + 0x5c),
                           *(undefined4 *)(iVar2 + 0x60),(int)*(char *)(iVar2 + 2),local_18[0],
                           local_30[0]);
      *(int *)(iVar3 + 4) = iVar5;
      if (iVar5 == 0) {
        FUN_00653fe0(*(undefined4 *)(iVar2 + 200));
      }
    }
    uVar4 = FUN_00659a70(&param_1,iVar2);
  }
  return 8;
}

