/* Decompiled from Speed.exe @ 00520ae0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_00520ae0(void)

{
  int *piVar1;
  undefined4 uVar2;
  int unaff_ESI;
  LARGE_INTEGER local_8;
  
  QueryPerformanceCounter(&local_8);
  uVar2 = __allshr();
  *(undefined4 *)(unaff_ESI + 0x94) = uVar2;
  *(undefined4 *)(unaff_ESI + 0x90) = 1;
  local_8.s.LowPart = FUN_00674898();
  uVar2 = FUN_00674898();
  piVar1 = *(int **)(unaff_ESI + 0x8c);
  *(undefined4 *)(unaff_ESI + 0x98) = uVar2;
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0) {
      FUN_0064bbd0();
    }
    FUN_0064b510(&local_8);
    FUN_0064b580();
    (**(code **)(*(int *)local_8.s.LowPart + 4))(piVar1);
    FUN_0064b5a0();
    *(undefined4 *)(unaff_ESI + 0x8c) = 0;
  }
  return;
}

