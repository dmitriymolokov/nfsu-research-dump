/* Decompiled from Speed.exe @ 00541190 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


undefined4 __fastcall FUN_00541190(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar1 = *param_1;
  piVar2 = (int *)param_1[1];
  *piVar2 = iVar1;
  *(int **)(iVar1 + 4) = piVar2;
  return 1;
}

