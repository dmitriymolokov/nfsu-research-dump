/* Decompiled from Speed.exe @ 00659c20 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 FUN_00659c20(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  
  iVar1 = param_1 * 0x8c + DAT_00713f48;
  if ((*(byte *)(param_1 * 0x8c + 0x24 + DAT_00713f48) & 4) == 0) {
    return 0xfffffff9;
  }
  iVar2 = 0;
  if (*(char *)(iVar1 + 0x23) != '\0') {
    psVar3 = (short *)(iVar1 + 4);
    do {
      FUN_0065fc80((int)*psVar3,iVar2,param_2);
      iVar2 = iVar2 + 1;
      psVar3 = psVar3 + 1;
    } while (iVar2 < (int)(uint)*(byte *)(iVar1 + 0x23));
  }
  return 0;
}

