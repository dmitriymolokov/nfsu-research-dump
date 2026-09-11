/* Decompiled from Speed.exe @ 00411b70 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00411b70(int param_1)

{
  int iVar1;
  int unaff_ESI;
  
  FUN_0063f190(unaff_ESI + 4);
  iVar1 = *(int *)(unaff_ESI + 100);
  param_1 = iVar1 - param_1;
  *(int *)(unaff_ESI + 100) = param_1;
  FUN_0063f1a0(unaff_ESI + 4);
  if (((*(int *)(unaff_ESI + 0x54) <= iVar1) && (param_1 < *(int *)(unaff_ESI + 0x54))) &&
     (*(undefined4 *)(unaff_ESI + 0x60) = 1, *(int *)(unaff_ESI + 0x48) == 1)) {
    DAT_0071b7c8 = DAT_0071b7c8 + 1;
    _DAT_00736354 = FUN_005648c0();
    FUN_0063a020(*(undefined4 *)(unaff_ESI + 400),*(undefined4 *)(unaff_ESI + 0x50));
  }
  return;
}

