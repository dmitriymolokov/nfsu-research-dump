/* Decompiled from Speed.exe @ 00622c60 */
/* Module: EAGL */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00622c60(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (*param_1 != 0) {
    if (*param_1 == (&DAT_0070a428)[param_2]) {
      (&DAT_0070a428)[param_2] = 0;
    }
    iVar2 = 0;
    if (0 < DAT_006e2a8c) {
      puVar1 = (undefined4 *)*param_1;
      while (*(undefined4 **)(DAT_0070a488 + iVar2 * 4) != puVar1) {
        iVar2 = iVar2 + 1;
        if (DAT_006e2a8c <= iVar2) {
          return;
        }
      }
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      *param_1 = 0;
      *(undefined4 *)(DAT_0070a488 + iVar2 * 4) = 0;
      _DAT_0070a498 = _DAT_0070a498 + -1;
    }
  }
  return;
}

