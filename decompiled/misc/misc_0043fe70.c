/* Decompiled from Speed.exe @ 0043fe70 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


int __fastcall FUN_0043fe70(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = DAT_00736184;
  while( true ) {
    if (iVar2 == 0) {
      return 0;
    }
    if ((-1 < param_1) && (param_1 < *(int *)(iVar2 + 0x24))) break;
    piVar1 = (int *)(iVar2 + 0x24);
    iVar2 = *(int *)(iVar2 + 8);
    param_1 = param_1 - *piVar1;
  }
  return *(int *)(DAT_00736184 + 0x28) * param_1 + 0x30 + iVar2;
}

