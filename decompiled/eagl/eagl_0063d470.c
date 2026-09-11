/* Decompiled from Speed.exe @ 0063d470 */
/* Module: EAGL */
/* Ghidra DecompileAll */


undefined4 FUN_0063d470(uint param_1,undefined4 *param_2,undefined4 *param_3)

{
  char *pcVar1;
  
  if ((((DAT_0070f48c != 0) && ((int)param_1 < 0)) && ((int)~param_1 < DAT_0070f488)) &&
     (pcVar1 = (char *)(DAT_0070f48c + ~param_1 * 0x24), *pcVar1 != '\0')) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)(pcVar1 + 8);
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(pcVar1 + 0x1c);
    }
    return 1;
  }
  SetLastError(6);
  return 0;
}

