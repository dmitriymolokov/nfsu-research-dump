/* Decompiled from Speed.exe @ 00431190 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00431190(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_007361c4;
  iVar3 = 0;
  if (0 < DAT_007361c4) {
    do {
      piVar1 = &DAT_007361bc + iVar3;
      iVar3 = iVar3 + 1;
      *(uint *)(*piVar1 + 0xc) = (uint)(byte)(&DAT_007306c4)[*(int *)(*piVar1 + 8)];
    } while (iVar3 < iVar2);
  }
  return;
}

