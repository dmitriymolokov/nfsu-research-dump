/* Decompiled from Speed.exe @ 0042a530 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0042a530(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 == 0) {
    if ('\0' < *(char *)(*(int *)(param_1 + 0x3c) + 0x1c)) {
      *(undefined4 *)(param_1 + 0x38) = 2;
    }
    return;
  }
  if (iVar1 == 1) {
    if ((*(char *)(*(int *)(param_1 + 0x3c) + 0x1c) != '\0') || (*(int *)(param_1 + 0x3cc) != 4)) {
      *(undefined4 *)(param_1 + 0x4cc) = 0;
      return;
    }
    if (DAT_006cc7a4 == *(float *)(param_1 + 0x4cc)) {
      *(float *)(param_1 + 0x4cc) = (float)DAT_0073ad34 * _DAT_006cca38;
      return;
    }
    if ((float)DAT_0073ad34 * _DAT_006cca38 - *(float *)(param_1 + 0x4cc) < _DAT_006b7c00) {
      return;
    }
  }
  else {
    if (iVar1 != 2) {
      return;
    }
    if (*(char *)(*(int *)(param_1 + 0x3c) + 0x1c) != '\0') {
      return;
    }
    if (*(int *)(param_1 + 0x3cc) != 4) {
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}

