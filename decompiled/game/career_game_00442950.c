/* Decompiled from Speed.exe @ 00442950 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


undefined4 __fastcall FUN_00442950(undefined4 param_1,int param_2)

{
  char in_AL;
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(char *)((-(uint)(in_AL != '\0') & 0xfffffffa) + 0x276 + param_2 + iVar1) != '\0') {
      return 1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  return 0;
}

