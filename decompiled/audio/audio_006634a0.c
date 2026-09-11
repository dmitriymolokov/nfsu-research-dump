/* Decompiled from Speed.exe @ 006634a0 */
/* Module: Audio */
/* Ghidra DecompileAll */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_006634a0(void)

{
  uint unaff_retaddr;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_006eb720 ^ unaff_retaddr;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_24 = 0x4f000002;
  local_20 = 0x101a8c0;
  local_8 = 0;
  FUN_00663190(&local_14,0x10,&local_24,0x10);
  return (((local_10 & 0xff) << 8 | local_10 >> 8 & 0xff) << 8 | local_10 >> 0x10 & 0xff) << 8 |
         local_10 >> 0x18;
}

