/* Decompiled from Speed.exe @ 005a7bf0 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_005a7bf0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = DAT_006ee1e4;
  iVar3 = 0;
  if (0 < DAT_006ee1e4) {
    piVar4 = &DAT_00732340;
    piVar2 = (int *)&DAT_00732334;
    do {
      piVar2[-1] = piVar2[-1] >> 4;
      *piVar2 = *piVar2 >> 4;
      piVar2[1] = piVar2[1] >> 4;
      piVar2[2] = piVar2[2] >> 4;
      *piVar4 = iVar3;
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 5;
      piVar4 = piVar4 + 5;
    } while (iVar3 < iVar1);
  }
  return;
}

