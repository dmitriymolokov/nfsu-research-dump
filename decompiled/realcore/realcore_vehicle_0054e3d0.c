/* Decompiled from Speed.exe @ 0054e3d0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_0054e3d0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar1 = &DAT_0073d828;
  do {
    if (*piVar1 == 0) {
      if (&DAT_0073d828 + iVar3 * 5 != (undefined4 *)0x0) {
        uVar2 = FUN_00549340(param_1,param_2,1);
        (&DAT_0073d830)[iVar3 * 5] = uVar2;
        (&DAT_0073d828)[iVar3 * 5] = 2;
        uVar2 = FUN_00674898();
        (&DAT_0073d838)[iVar3 * 5] = uVar2;
      }
      return;
    }
    piVar1 = piVar1 + 5;
    iVar3 = iVar3 + 1;
  } while ((int)piVar1 < 0x73d864);
  return;
}

