/* Decompiled from Speed.exe @ 00664d80 */
/* Module: Audio */
/* Ghidra DecompileAll */


uint FUN_00664d80(int param_1,int param_2)

{
  if ((param_2 == 0x75736572) || (param_2 == 0x61636374)) {
    return param_1 + 0x134;
  }
  if (param_2 == 0x70657273) {
    return param_1 + 0x174;
  }
  if (param_2 == 0x726f6f6d) {
    return param_1 + 0x1c0;
  }
  if (param_2 == 0x706c6179) {
    if (*(int *)(param_1 + 0x45c) != 0) {
      return param_1 + 0x200;
    }
  }
  else if (param_2 == 0x646f776e) {
    return param_1 + 0x570U & -(uint)(*(char *)(param_1 + 0x570) != '\0');
  }
  return 0;
}

