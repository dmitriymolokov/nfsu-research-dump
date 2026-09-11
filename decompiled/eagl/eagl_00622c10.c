/* Decompiled from Speed.exe @ 00622c10 */
/* Module: EAGL */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00622c10(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)*param_1;
  if ((puVar1 != (undefined4 *)0x0) && (iVar2 = 0, 0 < DAT_006e2a8c)) {
    while (*(undefined4 **)(DAT_0070a488 + iVar2 * 4) != puVar1) {
      iVar2 = iVar2 + 1;
      if (DAT_006e2a8c <= iVar2) {
        return;
      }
    }
    (**(code **)*puVar1)(1);
    *param_1 = 0;
    *(undefined4 *)(DAT_0070a488 + iVar2 * 4) = 0;
    _DAT_0070a498 = _DAT_0070a498 + -1;
  }
  return;
}

