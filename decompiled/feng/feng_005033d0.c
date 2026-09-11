/* Decompiled from Speed.exe @ 005033d0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_005033d0(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int unaff_ESI;
  
  if (unaff_ESI != 0) {
    puVar1 = *(undefined4 **)(param_1 + 8);
    while ((puVar1 != (undefined4 *)0x0 && (cVar2 = FUN_005032c0(), cVar2 == '\0'))) {
      puVar1 = (undefined4 *)puVar1[1];
    }
    if (puVar1[4] == 0) {
      FUN_004ee670();
      (**(code **)*puVar1)(1);
    }
  }
  return;
}

