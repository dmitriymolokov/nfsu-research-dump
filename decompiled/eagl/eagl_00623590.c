/* Decompiled from Speed.exe @ 00623590 */
/* Module: EAGL */
/* Ghidra DecompileModule */


void FUN_00623590(void)

{
  int *piVar1;
  int *piVar2;
  
  for (piVar2 = DAT_0070a4f8; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[3]) {
    piVar1 = *(int **)(*piVar2 + 0x44);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(*piVar2 + 0x44) = 0;
    }
  }
  return;
}

