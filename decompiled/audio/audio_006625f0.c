/* Decompiled from Speed.exe @ 006625f0 */
/* Module: Audio */
/* Ghidra DecompileAll */


uint FUN_006625f0(uint param_1)

{
  return (((param_1 & 0xff) << 8 | param_1 >> 8 & 0xff) << 8 | param_1 >> 0x10 & 0xff) << 8 |
         param_1 >> 0x18;
}

