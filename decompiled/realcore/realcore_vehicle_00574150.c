/* Decompiled from Speed.exe @ 00574150 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_00574150(int param_1,undefined4 param_2,undefined1 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_004218a0(param_1);
  puVar1 = &DAT_006f923c + param_1;
  iVar2 = 0x15;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 7;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_00414990();
  (&DAT_007306c4)[param_1] = param_3;
  return;
}

