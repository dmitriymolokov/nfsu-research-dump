/* Decompiled from Speed.exe @ 004dc840 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __thiscall FUN_004dc840(int param_1,uint param_2,int param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x40) != DAT_0073ad3c) {
    if (param_2 < 0x911ab365) {
      if (param_2 == 0x911ab364) {
        if (*(int *)(param_1 + 100) != 0) {
          FUN_004f6430(*(undefined4 *)(param_1 + 0xc));
          FUN_004c96c0(*(undefined4 *)(param_1 + 100));
          FUN_004c96c0(0x7f6c5142);
          FUN_004f8340(*(undefined4 *)(param_1 + 0xc));
          return;
        }
      }
      else if (param_2 == 0xc407210) {
        if (*(int *)(param_3 + 0x10) == -0x47583934) {
          FUN_004f6430(*(undefined4 *)(param_1 + 0xc));
          FUN_004c96c0(*(undefined4 *)(param_1 + 0x58));
          FUN_004c96c0(*(undefined4 *)(param_1 + 0x58));
          FUN_004c96c0(0x7f6c5142);
          FUN_004f8340(*(undefined4 *)(param_1 + 0xc));
          return;
        }
        if (*(int *)(param_3 + 0x10) == -0x47583933) {
          FUN_004f6430(*(undefined4 *)(param_1 + 0xc));
          FUN_004c96c0(*(undefined4 *)(param_1 + 0x60));
          *(undefined4 *)(param_1 + 0x6c) = 1;
          FUN_004c96c0(*(undefined4 *)(param_1 + 0x60));
          FUN_004c96c0(0x7f6c5142);
          FUN_004f8340(*(undefined4 *)(param_1 + 0xc));
          return;
        }
      }
      else if ((param_2 == 0x35f8620b) &&
              (iVar1 = FUN_004f64d0(*(undefined4 *)(param_1 + 0xc)), param_3 == iVar1)) {
        FUN_004f6b70("Highlight",1);
        if (*(int *)(param_3 + 0x10) == -0x47583934) {
          FUN_004f6c30("UnHighlight",1);
          return;
        }
        if (*(int *)(param_3 + 0x10) == -0x47583933) {
          FUN_004f6c30("UnHighlight",1);
          return;
        }
      }
    }
    else if ((param_2 == 0xc98356ba) && (*(int *)(param_1 + 0x70) != 0)) {
      if (DAT_007361b4 == 0) {
        iVar1 = -1;
      }
      else {
        iVar1 = *(int *)(DAT_007361b4 + 8);
      }
      if ((&DAT_007306c4)[iVar1] != -1) {
        if (DAT_007361b8 == 0) {
          iVar1 = -1;
        }
        else {
          iVar1 = *(int *)(DAT_007361b8 + 8);
        }
        if ((&DAT_007306c4)[iVar1] != -1) {
          return;
        }
      }
      FUN_004f6430(*(undefined4 *)(param_1 + 0xc));
      FUN_004c96c0(*(undefined4 *)(param_1 + 0x58));
    }
  }
  return;
}

