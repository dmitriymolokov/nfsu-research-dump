/* Decompiled from Speed.exe @ 0063db00 */
/* Module: EAGL */
/* Ghidra DecompileAll */


int FUN_0063db00(uint param_1)

{
  char *pcVar1;
  
  if ((((DAT_0070f48c != 0) && ((int)param_1 < 0)) && ((int)~param_1 < DAT_0070f488)) &&
     (pcVar1 = (char *)(DAT_0070f48c + ~param_1 * 0x24), *pcVar1 != '\0')) {
    return (int)pcVar1[1];
  }
  SetLastError(6);
  return 0;
}

