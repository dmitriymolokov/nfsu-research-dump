/* Decompiled from Speed.exe @ 00428100 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_00428100(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (((iVar1 != 3) && (iVar1 != 2)) && (iVar1 != 4)) {
    return (float10)DAT_006cc7a4;
  }
  piVar2 = *(int **)(*(int *)(param_1 + 0x2c) + 0x3d8);
  if (*piVar2 != 0) {
    return (float10)((uint)*(byte *)(piVar2[2] + 0x6a + piVar2[1]) << 0x10) * (float10)_DAT_006cc83c
    ;
  }
  return (float10)DAT_006cc7a4;
}

