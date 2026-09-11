/* Decompiled from Speed.exe @ 0049e400 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


undefined4 __fastcall FUN_0049e400(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((&DAT_006fba08)[iVar1 * 2] == param_1) {
      return *(undefined4 *)(iVar1 * 8 + 0x6fba0c);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0xb);
  return 0;
}

