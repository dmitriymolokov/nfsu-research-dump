/* Decompiled from Speed.exe @ 00410ce0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00410ce0(void)

{
  int iVar1;
  
  if (DAT_00701040 < DAT_00700e74) {
    DAT_00700e74 = DAT_00701040;
  }
  if (DAT_00701044 < DAT_00700e78) {
    DAT_00700e78 = DAT_00701044;
  }
  if (DAT_00701048 < DAT_00700e7c) {
    DAT_00700e7c = DAT_00701048;
  }
  if (DAT_0070104c < DAT_00700e80) {
    DAT_00700e80 = DAT_0070104c;
  }
  if (DAT_00701050 < DAT_00700e84) {
    DAT_00700e84 = DAT_00701050;
  }
  if (DAT_00701054 < DAT_00700e88) {
    DAT_00700e88 = DAT_00701054;
  }
  if (DAT_00701058 < DAT_00700e8c) {
    DAT_00700e8c = DAT_00701058;
  }
  if (DAT_0070105c < DAT_00700e90) {
    DAT_00700e90 = DAT_0070105c;
  }
  if (DAT_00701060 < DAT_00700e94) {
    DAT_00700e94 = DAT_00701060;
  }
  if (DAT_00701064 < DAT_00700e98) {
    DAT_00700e98 = DAT_00701064;
  }
  if (DAT_00701068 < DAT_00700e9c) {
    DAT_00700e9c = DAT_00701068;
  }
  if (DAT_0070106c < DAT_00700ea0) {
    DAT_00700ea0 = DAT_0070106c;
  }
  if (DAT_00701070 < DAT_00700ea4) {
    DAT_00700ea4 = DAT_00701070;
  }
  if (DAT_00701074 < DAT_00700ea8) {
    DAT_00700ea8 = DAT_00701074;
  }
  if (DAT_00701078 < DAT_00700eac) {
    DAT_00700eac = DAT_00701078;
  }
  if (DAT_0070107c < DAT_00700eb0) {
    DAT_00700eb0 = DAT_0070107c;
  }
  if (DAT_00701080 < DAT_00700eb4) {
    DAT_00700eb4 = DAT_00701080;
  }
  iVar1 = DAT_00700e70;
  if (*(int *)(&DAT_0071b7b0 + DAT_00700e70 * 4) == 0) {
    for (; -1 < iVar1; iVar1 = iVar1 + 1) {
      if (*(int *)(&DAT_0071b7b0 + iVar1 * 4) != 0) {
        DAT_00700e70 = iVar1;
      }
    }
  }
  return;
}

