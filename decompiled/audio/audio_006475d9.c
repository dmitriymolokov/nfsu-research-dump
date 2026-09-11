/* Decompiled from Speed.exe @ 006475d9 */
/* Module: Audio */
/* Ghidra DecompileAll */


int FUN_006475d9(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_8;
  
  for (local_8 = 0; (*(char *)(param_1 + local_8) != '\0' && (*(char *)(param_2 + local_8) != '\0'))
      ; local_8 = local_8 + 1) {
    iVar1 = _tolower((int)*(char *)(param_1 + local_8));
    iVar2 = _tolower((int)*(char *)(param_2 + local_8));
    if (iVar1 - iVar2 != 0) {
      return iVar1 - iVar2;
    }
  }
  return (int)*(char *)(param_1 + local_8) - (int)*(char *)(param_2 + local_8);
}

