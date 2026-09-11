/* Decompiled from Speed.exe @ 006235d0 */
/* Module: EAGL */
/* Ghidra DecompileAll */


void FUN_006235d0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  piVar1 = DAT_0070a4f8;
  while (piVar5 = piVar1, piVar5 != (int *)0x0) {
    piVar1 = (int *)piVar5[3];
    iVar2 = piVar5[2];
    if (piVar5[1] != 0) {
      iVar3 = *(int *)(piVar5[1] + 0x24);
      if ((iVar3 == 0) || (piVar4 = *(int **)(iVar3 + 0x18), piVar4 == (int *)0x0)) {
        if (iVar2 != 0) {
          *(int **)(iVar2 + 0xc) = piVar1;
        }
        if (piVar5[3] != 0) {
          *(int *)(piVar5[3] + 8) = iVar2;
        }
        if (DAT_0070a4f8 == piVar5) {
          DAT_0070a4f8 = piVar1;
        }
        *piVar5 = 0;
        piVar5[1] = 0;
        piVar5[2] = 0;
        piVar5[3] = 0;
        (*(code *)PTR_FUN_006dfaa0)(piVar5,0x10);
      }
      else {
        (**(code **)(*piVar4 + 0x3c))(piVar4,0,*piVar5 + 0x44);
      }
    }
  }
  return;
}

