/* Decompiled from Speed.exe @ 004d0760 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __thiscall FUN_004d0760(int param_1,int param_2)

{
  if (param_2 == 0xc407210) {
    return;
  }
  if (param_2 == 0x406415e3) {
    return;
  }
  if (param_2 == -0x6edfbf62) {
    if (DAT_007588ec == 1) {
      DAT_007588ec = 3;
      goto LAB_004d07d3;
    }
    if (DAT_007588ec == 3) {
      DAT_007588ec = 6;
      goto LAB_004d07d3;
    }
  }
  else {
    if (param_2 != -0x4a68e40f) goto LAB_004d07d3;
    if (DAT_007588ec == 1) {
      DAT_007588ec = 6;
      goto LAB_004d07d3;
    }
    if (DAT_007588ec != 3) {
      DAT_007588ec = (uint)(DAT_007588ec == 6) * 2 + 1;
      goto LAB_004d07d3;
    }
  }
  DAT_007588ec = 1;
LAB_004d07d3:
  FUN_004d04b0();
  if (param_2 != -0x6edfbf62) {
    FUN_004f8340(*(undefined4 *)(param_1 + 0xc));
    return;
  }
  FUN_004f8340(*(undefined4 *)(param_1 + 0xc));
  return;
}

