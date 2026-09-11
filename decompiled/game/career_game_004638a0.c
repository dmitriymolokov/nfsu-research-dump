/* Decompiled from Speed.exe @ 004638a0 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_004638a0(int param_1)

{
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  
  if (*(short *)(*(int *)(param_1 + 0x14) + 0x1e) == 0) {
    return (float10)DAT_006cc7a4;
  }
  FUN_0059d350(&local_20,*(undefined4 *)(param_1 + 0x1c),1);
  FUN_00567370(local_20,local_1c);
  return -((float10)_DAT_007000ac * (float10)local_18);
}

