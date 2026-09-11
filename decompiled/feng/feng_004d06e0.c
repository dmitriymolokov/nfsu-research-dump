/* Decompiled from Speed.exe @ 004d06e0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __thiscall FUN_004d06e0(int param_1,int param_2)

{
  if (((param_2 != 0xc407210) && (param_2 != 0x406415e3)) &&
     ((param_2 == -0x6edfbf62 || (param_2 == -0x4a68e40f)))) {
    DAT_007588f0 = (uint)(DAT_007588f0 == 0);
    FUN_004d0400();
    if (param_2 == -0x6edfbf62) {
      FUN_004f8340(*(undefined4 *)(param_1 + 0xc));
      return;
    }
    FUN_004f8340(*(undefined4 *)(param_1 + 0xc));
  }
  return;
}

