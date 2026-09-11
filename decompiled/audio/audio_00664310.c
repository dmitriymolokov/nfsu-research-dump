/* Decompiled from Speed.exe @ 00664310 */
/* Module: Audio */
/* Ghidra DecompileAll */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00664310(undefined4 param_1)

{
  int unaff_ESI;
  uint unaff_retaddr;
  undefined1 local_1004 [4096];
  uint local_4;
  
  local_4 = DAT_006eb720 ^ unaff_retaddr;
  FUN_00671077(local_1004,param_1,&stack0x00000008);
  if (*(code **)(unaff_ESI + 0x700) != (code *)0x0) {
    (**(code **)(unaff_ESI + 0x700))(*(undefined4 *)(unaff_ESI + 0x6fc),local_1004);
  }
  return;
}

