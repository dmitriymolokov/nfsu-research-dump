/* Decompiled from Speed.exe @ 00416a10 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void __fastcall FUN_00416a10(undefined4 param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  int unaff_ESI;
  
  iVar2 = 0;
  piVar3 = (int *)(param_2 + 0x1b0);
  do {
    if (*piVar3 == unaff_ESI) {
      puVar1 = (uint *)(param_2 + 0x230 + iVar2 * 4);
      *puVar1 = *puVar1 ^ 1;
      return;
    }
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar2 < 0x20);
  return;
}

