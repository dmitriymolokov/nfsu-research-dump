/* Decompiled from Speed.exe @ 00504150 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_00504150(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    *(undefined4 *)(param_1 + 0x2e4 + iVar1 * 4) = 0;
    *(undefined4 *)(param_1 + 0x310 + iVar1 * 4) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0xb);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}

