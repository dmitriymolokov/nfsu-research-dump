/* Decompiled from Speed.exe @ 0046a370 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046a370(undefined4 param_1,float param_2)

{
  int unaff_EDI;
  undefined1 local_60 [16];
  undefined1 local_50 [76];
  
  if (*(int *)(*(int *)(unaff_EDI + 0x140) + 0x868) != 0) {
    FUN_00565230();
    thunk_FUN_005abda2(local_60,param_1,local_50);
    FUN_0058d930(_DAT_007000cc * param_2);
  }
  if (*(int *)(*(int *)(unaff_EDI + 0x140) + 0x18) != 0) {
    FUN_0042f5f0(param_2);
  }
  return;
}

