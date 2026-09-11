/* Decompiled from Speed.exe @ 004dd100 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __thiscall FUN_004dd100(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x40) != DAT_0073ad3c) {
    if (param_2 == 0x406415e3) {
      if (*(int *)(param_1 + 0x44) < *(int *)(param_1 + 0x74) + -1) {
        iVar2 = *(int *)(param_1 + 0x44) + 1;
        *(int *)(param_1 + 0x44) = iVar2;
        if (8 < iVar2) {
          *(undefined4 *)(param_1 + 0x44) = 8;
        }
        cVar1 = *(char *)(param_1 + 0x84);
        goto joined_r0x004dd1e5;
      }
      FUN_004f8340(*(undefined4 *)(param_1 + 0x4c));
      FUN_004f6430(*(undefined4 *)(param_1 + 0xc));
      FUN_004c96c0(*(undefined4 *)(param_1 + 0x7c));
    }
    else {
      if (param_2 == -0x6ee54c9c) {
        if (*(int *)(param_1 + 0x44) < 1) {
          FUN_004f8340(*(undefined4 *)(param_1 + 0x4c));
          FUN_004f6430(*(undefined4 *)(param_1 + 0xc));
          FUN_004c96c0(*(undefined4 *)(param_1 + 0x80));
          return;
        }
        iVar2 = *(int *)(param_1 + 0x44) + -1;
        *(int *)(param_1 + 0x44) = iVar2;
        if (iVar2 < 0) {
          *(undefined4 *)(param_1 + 0x44) = 0;
        }
        cVar1 = *(char *)(param_1 + 0x84);
joined_r0x004dd1e5:
        if (cVar1 == '\0') {
          FUN_00495f00(*(undefined4 *)(param_1 + 0x54 + *(int *)(param_1 + 0x44) * 4));
          return;
        }
        FUN_004f6850(*(undefined4 *)(param_1 + 0x54 + *(int *)(param_1 + 0x44) * 4));
        return;
      }
      if ((param_2 == -0x367ca946) && (DAT_00734dbc != '\0')) {
        FUN_004f6430(*(undefined4 *)(param_1 + 0xc));
        return;
      }
    }
  }
  return;
}

