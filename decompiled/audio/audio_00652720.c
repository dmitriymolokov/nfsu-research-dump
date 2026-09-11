/* Decompiled from Speed.exe @ 00652720 */
/* Module: Audio */
/* Ghidra DecompileAll */


uint FUN_00652720(uint param_1)

{
  uint uVar1;
  
  if ((-1 < (int)param_1) && (uVar1 = param_1 & 0xff, (int)uVar1 < (int)DAT_00713ee8)) {
    if ((*(char *)(uVar1 * 0x8c + 0x69 + DAT_00713f48) == '\0') ||
       (*(uint *)(uVar1 * 0x8c + DAT_00713f48) != param_1)) {
      uVar1 = 0xfffffff8;
    }
    return uVar1;
  }
  return 0xfffffff8;
}

