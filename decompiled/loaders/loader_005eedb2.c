/* Decompiled from Speed.exe @ 005eedb2 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005eedb2(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1[1];
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *param_1;
    *(int *)(param_2 + 1) = (int)uVar1;
  }
  if (param_3 != (undefined4 *)0x0) {
    uVar1 = FUN_0061b900();
    uVar1 = PackedFloatingMUL(uVar1,_DAT_006a0790);
    *param_3 = (int)uVar1;
  }
  FastExitMediaState();
  return;
}

