/* Decompiled from Speed.exe @ 006584a0 */
/* Module: Audio */
/* Ghidra DecompileAll */


uint FUN_006584a0(int param_1)

{
  if (((-1 < param_1) && (param_1 < (int)(uint)DAT_00713d98)) &&
     (*(int *)(DAT_00713f4c + param_1 * 8) != 0)) {
    return -(uint)(*(char *)(DAT_00713f4c + 4 + param_1 * 8) != '\0') & 0xffffffee;
  }
  return 0xfffffff8;
}

