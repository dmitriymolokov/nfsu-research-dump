/* Decompiled from Speed.exe @ 0040c840 */
/* Module: Loader */
/* Ghidra DecompileModule */


undefined4 FUN_0040c840(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *unaff_EDI;
  
  piVar1 = (int *)*unaff_EDI;
  piVar2 = (int *)piVar1[0xb];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    piVar1[0xb] = 0;
  }
  piVar2 = (int *)piVar1[8];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    piVar1[8] = 0;
  }
  iVar3 = *piVar1;
  piVar1 = (int *)piVar1[1];
  *piVar1 = iVar3;
  *(int **)(iVar3 + 4) = piVar1;
  *unaff_EDI = 0;
  return 1;
}

