/* Decompiled from Speed.exe @ 00594470 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_00594470(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  piVar4 = (int *)FUN_0040a880();
  do {
    piVar5 = DAT_007377c8;
    if (DAT_007377c8 == piVar4) {
      return;
    }
    while (piVar5[2] != 0) {
      piVar5 = (int *)*piVar5;
      if (piVar5 == piVar4) {
        return;
      }
    }
    iVar1 = *piVar5;
    piVar2 = (int *)piVar5[1];
    *piVar2 = iVar1;
    *(int **)(iVar1 + 4) = piVar2;
    FUN_00594310();
    iVar3 = DAT_00734484;
    iVar1 = *(int *)(DAT_00734484 + 0x18);
    *piVar5 = *(int *)(DAT_00734484 + 0x10);
    *(int *)(iVar3 + 0x18) = iVar1 + -1;
    *(int **)(iVar3 + 0x10) = piVar5;
  } while( true );
}

