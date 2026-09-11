/* Decompiled from Speed.exe @ 00647885 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_00647885(int *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_8;
  
  iVar1 = *param_1;
  for (local_8 = 0; local_8 < *param_2; local_8 = local_8 + 1) {
    iVar2 = _isspace((int)*(char *)(iVar1 + local_8));
    if (iVar2 == 0) break;
  }
  *param_1 = iVar1 + local_8;
  *param_2 = *param_2 - local_8;
  return;
}

