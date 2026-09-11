/* Decompiled from Speed.exe @ 0040ec20 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


float10 __fastcall FUN_0040ec20(int param_1)

{
  int iVar1;
  int unaff_ESI;
  float10 extraout_ST0;
  
  if (*(char *)(unaff_ESI + 0x52) == '\0') {
    return (float10)DAT_006cc7a4;
  }
  if (*(char *)(unaff_ESI + 0x52) == '\x02') {
    param_1 = (int)*(short *)(unaff_ESI + 0x58);
    FUN_00674898(param_1);
  }
  iVar1 = FUN_00674898(param_1);
  return extraout_ST0 - (float10)iVar1;
}

