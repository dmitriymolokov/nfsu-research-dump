/* Decompiled from Speed.exe @ 004dcdb0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __thiscall FUN_004dcdb0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x40) != DAT_0073ad3c) {
    if (param_2 == 0xc407210) {
      if (*(int *)(param_3 + 0x10) == -0x47583934) {
        FUN_004f6430(*(undefined4 *)(param_1 + 0xc));
        FUN_004c96c0(*(undefined4 *)(param_1 + 0x58));
        FUN_004c96c0(*(undefined4 *)(param_1 + 0x58));
        FUN_004c96c0(0x7f6c5142);
        FUN_004f8340(*(undefined4 *)(param_1 + 0xc));
      }
    }
    else if (param_2 == 0x35f8620b) {
      iVar1 = FUN_004f64d0(*(undefined4 *)(param_1 + 0xc));
      if (param_3 == iVar1) {
        FUN_004f6b70("Highlight",1);
        return;
      }
    }
    else if (param_2 == -0x6ee54c9c) {
      FUN_004f6430(*(undefined4 *)(param_1 + 0xc));
      FUN_004c96c0(*(undefined4 *)(param_1 + 0x5c));
      FUN_004c96c0(0x7f6c5142);
      FUN_004f8340(*(undefined4 *)(param_1 + 0xc));
      return;
    }
  }
  return;
}

