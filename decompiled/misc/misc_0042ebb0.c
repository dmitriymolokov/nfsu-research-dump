/* Decompiled from Speed.exe @ 0042ebb0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


undefined4 __fastcall FUN_0042ebb0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x27c);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x14) != 0)) {
    if ((((*(int *)(iVar1 + 0xc) == 1) ||
         (((*(int *)(iVar1 + 0xc) == 0x11 || (*(int *)(param_2 + 0x60) == 6)) ||
          (*(int *)(param_2 + 0x60) == 7)))) ||
        (((iVar1 = *(int *)(iVar1 + 0xc), iVar1 == 0x13 || (iVar1 == 0x14)) || (iVar1 == 0x15)))) ||
       (iVar1 == 0x16)) {
      return 0x40;
    }
    if (DAT_0078eb60 == '\0') {
      DAT_0078eb60 = '\x01';
    }
  }
  return 0;
}

