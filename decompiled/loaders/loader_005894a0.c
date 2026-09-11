/* Decompiled from Speed.exe @ 005894a0 */
/* Module: Loader */
/* Ghidra DecompileAll */


void __fastcall FUN_005894a0(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if (((*(int **)(param_2 + 0x34) != (int *)0x0) && (iVar1 = **(int **)(param_2 + 0x34), iVar1 != 0)
      ) && (*(undefined4 **)(iVar1 + 0x34) != (undefined4 *)0x0)) {
    **(undefined4 **)(iVar1 + 0x34) = 0;
    *(undefined4 *)(iVar1 + 0x34) = 0;
  }
  iVar1 = **(int **)(param_2 + 0x30);
  piVar2 = (int *)(*(int **)(param_2 + 0x30))[1];
  *piVar2 = iVar1;
  *(int **)(iVar1 + 4) = piVar2;
  FUN_0041f570();
  return;
}

