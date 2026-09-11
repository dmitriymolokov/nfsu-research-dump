/* Decompiled from Speed.exe @ 00435bd0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00435bd0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = 1;
  do {
    iVar3 = 0;
    if (*(int *)(param_1 + 0x24) < 1) {
      return;
    }
    piVar2 = (int *)(param_1 + 0x520);
    while (iVar1 != *(char *)(*piVar2 + 0xc)) {
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
      if (*(int *)(param_1 + 0x24) <= iVar3) {
        return;
      }
    }
    iVar1 = iVar1 + 1;
  } while( true );
}

