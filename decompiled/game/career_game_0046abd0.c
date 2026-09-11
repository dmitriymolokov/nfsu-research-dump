/* Decompiled from Speed.exe @ 0046abd0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __fastcall FUN_0046abd0(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0xc) == 0) goto LAB_0046abe1;
  piVar2 = (int *)(*(int *)(param_1 + 0xc) + -4);
  while( true ) {
    if (param_1 == -0xc) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = (int *)(param_1 + 8);
    }
    if (piVar2 == piVar1) break;
    (**(code **)(*piVar2 + 0x1c))();
    if (piVar2[1] == 0) {
LAB_0046abe1:
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)(piVar2[1] + -4);
    }
  }
  return;
}

