/* Decompiled from Speed.exe @ 00668bc0 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 FUN_00668bc0(int param_1)

{
  int iVar1;
  char cVar2;
  
  iVar1 = FUN_00668720();
  if (iVar1 != -1) {
    iVar1 = iVar1 * 0x10 + 0x18 + param_1;
    *(undefined2 *)(iVar1 + 4) = 0x8000;
    cVar2 = *(char *)(param_1 + 8) + -1;
    *(char *)(iVar1 + 7) = cVar2;
    *(char *)(iVar1 + 6) = cVar2;
    return 1;
  }
  return 0;
}

