/* Decompiled from Speed.exe @ 005653c0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void FUN_005653c0(undefined4 param_1,int param_2)

{
  int unaff_ESI;
  
  FUN_0063f190(unaff_ESI + 0x3c);
  FUN_00565410(unaff_ESI,param_2);
  param_2 = *(int *)(unaff_ESI + 0x28) - param_2;
  *(int *)(unaff_ESI + 0x28) = param_2;
  *(int *)(unaff_ESI + 0x30) = *(int *)(unaff_ESI + 0x24) - param_2;
  *(int *)(unaff_ESI + 0x1c) = *(int *)(unaff_ESI + 0x1c) + -1;
  FUN_0063f1a0(unaff_ESI + 0x3c);
  return;
}

