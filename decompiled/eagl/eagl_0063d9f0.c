/* Decompiled from Speed.exe @ 0063d9f0 */
/* Module: EAGL */
/* Ghidra DecompileAll */


undefined4 FUN_0063d9f0(uint param_1)

{
  char *pcVar1;
  
  if ((((DAT_0070f48c != 0) && ((int)param_1 < 0)) && ((int)~param_1 < DAT_0070f488)) &&
     (pcVar1 = (char *)(DAT_0070f48c + ~param_1 * 0x24), *pcVar1 != '\0')) {
    return *(undefined4 *)(pcVar1 + 0x14);
  }
  SetLastError(6);
  return 0;
}

