/* Decompiled from Speed.exe @ 00645f60 */
/* Module: Audio */
/* Ghidra DecompileVAs */


DWORD * __fastcall FUN_00645f60(DWORD *param_1)

{
  DWORD DVar1;
  
  param_1[2] = 0;
  param_1[3] = 0;
  DVar1 = timeGetTime();
  *param_1 = DVar1;
  param_1[4] = 0x1000;
  return param_1;
}

