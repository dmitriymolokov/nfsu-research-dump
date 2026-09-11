/* Decompiled from Speed.exe @ 00658fe0 */
/* Module: Audio */
/* Ghidra DecompileAll */


int FUN_00658fe0(undefined4 param_1,undefined1 param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  int local_8;
  int local_4;
  
  if (DAT_00713ee4 == '\0') {
    return -10;
  }
  iVar2 = FUN_00652720(param_1);
  if (-1 < iVar2) {
    local_8 = -1;
    local_4 = iVar2;
    iVar3 = FUN_006584e0(iVar2,&local_8);
    while (iVar3 != 0) {
      iVar3 = local_8 * 0x8c + DAT_00713f48;
      iVar5 = 0;
      if (*(char *)(local_8 * 0x8c + 0x23 + DAT_00713f48) != '\0') {
        psVar4 = (short *)(iVar3 + 4);
        do {
          sVar1 = *psVar4;
          *(undefined1 *)(sVar1 * 0x8c + 0x5f + DAT_00713f48) = param_2;
          FUN_00651fa0((int)sVar1);
          iVar5 = iVar5 + 1;
          psVar4 = psVar4 + 1;
          iVar2 = local_4;
        } while (iVar5 < (int)(uint)*(byte *)(iVar3 + 0x23));
      }
      iVar3 = FUN_006584e0(iVar2,&local_8);
    }
  }
  return iVar2;
}

