/* Decompiled from Speed.exe @ 0056ca60 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void FUN_0056ca60(int *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if (*param_1 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*param_1 + 0x868);
  }
  iVar2 = 0x10;
  piVar3 = param_1 + 0x1e8;
  do {
    uVar1 = 0;
    if (iVar4 != 0) {
      uVar1 = *(uint *)(iVar4 + 0xe0) >> ((byte)iVar2 & 0x1f) & 3;
    }
    if ((&DAT_006f1b48)[uVar1] != *piVar3) {
      *piVar3 = (&DAT_006f1b48)[uVar1];
      piVar3[1] = -1;
    }
    if ((&DAT_006f1b58)[uVar1] != piVar3[0x18]) {
      piVar3[0x18] = (&DAT_006f1b58)[uVar1];
      piVar3[0x19] = -1;
    }
    iVar2 = iVar2 + 2;
    piVar3 = piVar3 + 4;
  } while (iVar2 < 0x1c);
  param_1[0x143] = 0;
  return;
}

