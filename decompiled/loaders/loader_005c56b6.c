/* Decompiled from Speed.exe @ 005c56b6 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 __thiscall FUN_005c56b6(int param_1,uint *param_2,int *param_3)

{
  uint *puVar1;
  uint *puVar2;
  
  puVar1 = *(uint **)(param_1 + 0x50);
  do {
    puVar2 = puVar1;
    puVar1 = (uint *)puVar2[0x1b];
  } while ((uint *)puVar2[0x1b] != (uint *)0x0);
  if (param_2 != (uint *)0x0) {
    *param_2 = *puVar2;
  }
  if (param_3 != (int *)0x0) {
    if (puVar2[1] < *puVar2) {
      *param_3 = 0;
    }
    else {
      *param_3 = puVar2[1] - *puVar2;
    }
  }
  return 0;
}

