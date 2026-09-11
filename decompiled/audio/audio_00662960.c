/* Decompiled from Speed.exe @ 00662960 */
/* Module: Audio */
/* Ghidra DecompileAll */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined * FUN_00662960(void)

{
  uint unaff_retaddr;
  byte local_f4;
  byte bStack_f3;
  byte bStack_f2;
  byte bStack_f1;
  byte bStack_f0;
  byte bStack_ef;
  uint local_4;
  
  local_4 = DAT_006eb720 ^ unaff_retaddr;
  DAT_00717798 = 0;
  FUN_00662880(&local_f4);
  DAT_0071779a = "70123456789abcdef*               "[(local_f4 & 0xf) + 1];
  DAT_0071779c = "70123456789abcdef*               "[(bStack_f3 & 0xf) + 1];
  DAT_00717799 = "70123456789abcdef*               "[(local_f4 >> 4) + 1];
  DAT_0071779e = "70123456789abcdef*               "[(bStack_f2 & 0xf) + 1];
  DAT_0071779b = "70123456789abcdef*               "[(bStack_f3 >> 4) + 1];
  DAT_007177a0 = "70123456789abcdef*               "[(bStack_f1 & 0xf) + 1];
  DAT_0071779d = "70123456789abcdef*               "[(bStack_f2 >> 4) + 1];
  DAT_007177a2 = "70123456789abcdef*               "[(bStack_f0 & 0xf) + 1];
  DAT_0071779f = "70123456789abcdef*               "[(bStack_f1 >> 4) + 1];
  DAT_007177a1 = "70123456789abcdef*               "[(bStack_f0 >> 4) + 1];
  DAT_007177a4 = "70123456789abcdef*               "[(bStack_ef & 0xf) + 1];
  DAT_00717798 = 0x24;
  DAT_007177a3 = "70123456789abcdef*               "[(bStack_ef >> 4) + 1];
  DAT_007177a5 = 0;
  return &DAT_00717798;
}

