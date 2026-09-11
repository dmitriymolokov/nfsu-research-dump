/* Decompiled from Speed.exe @ 00549060 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


undefined4 * FUN_00549060(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = &DAT_0073ddc4;
  do {
    if (*piVar2 == -1) {
      (&DAT_0073ddc4)[iVar1 * 8] = param_1;
      DAT_007354d0 = DAT_007354d0 + 1;
      return &DAT_0073ddc0 + iVar1 * 8;
    }
    piVar2 = piVar2 + 8;
    iVar1 = iVar1 + 1;
  } while ((int)piVar2 < 0x73de24);
  return (undefined4 *)0x0;
}

