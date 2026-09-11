/* Decompiled from Speed.exe @ 0040cce0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_0040cce0(void)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    piVar1 = *(int **)((int)&DAT_0071aba8 + iVar2);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)((int)&DAT_0071aba8 + iVar2) = 0;
    }
    piVar1 = *(int **)((int)&DAT_0071ab9c + iVar2);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)((int)&DAT_0071ab9c + iVar2) = 0;
    }
    iVar2 = iVar2 + 4;
  } while (iVar2 < 8);
  if (DAT_0071abb0 != (int *)0x0) {
    (**(code **)(*DAT_0071abb0 + 8))(DAT_0071abb0);
  }
  if (DAT_0071aba4 != (int *)0x0) {
    (**(code **)(*DAT_0071aba4 + 8))(DAT_0071aba4);
  }
  return;
}

