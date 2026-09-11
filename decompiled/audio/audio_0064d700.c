/* Decompiled from Speed.exe @ 0064d700 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 FUN_0064d700(int param_1)

{
  undefined4 *puVar1;
  
  *(undefined1 *)(param_1 + 0x10) = 0xff;
  if (*(char *)(param_1 + 0xf) != '\0') {
    puVar1 = (undefined4 *)(param_1 + 0x1c + (uint)*(byte *)(param_1 + 0xe) * 0xc);
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  return 0;
}

