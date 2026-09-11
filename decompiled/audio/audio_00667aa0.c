/* Decompiled from Speed.exe @ 00667aa0 */
/* Module: Audio */
/* Ghidra DecompileAll */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_00667aa0(undefined4 param_1,undefined4 param_2,undefined4 param_3,byte *param_4,int param_5)

{
  undefined1 *puVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint unaff_retaddr;
  undefined1 local_2104 [8448];
  uint local_4;
  
  local_4 = DAT_006eb720 ^ unaff_retaddr;
  puVar1 = (undefined1 *)FUN_006672e0();
  *puVar1 = 0x24;
  pcVar2 = puVar1 + 1;
  if ((uint)((int)&local_4 - (int)pcVar2) < param_5 * 2 + 1U) {
    uVar3 = 0xffffffff;
  }
  else {
    if (0 < param_5) {
      do {
        *pcVar2 = "0000000000000000111111111111111122222222222222223333333333333333444444444444444455555555555555556666666666666666777777777777777788888888888888889999999999999999aaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbccccccccccccccccddddddddddddddddeeeeeeeeeeeeeeeeffffffffffffffff0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef"
                  [*param_4];
        pcVar2[1] = "0000000000000000111111111111111122222222222222223333333333333333444444444444444455555555555555556666666666666666777777777777777788888888888888889999999999999999aaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbccccccccccccccccddddddddddddddddeeeeeeeeeeeeeeeeffffffffffffffff0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef"
                    [*param_4 + 0x100];
        pcVar2 = pcVar2 + 2;
        param_4 = param_4 + 1;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
    }
    *pcVar2 = '\0';
    uVar3 = FUN_00667300(param_1,param_2,local_2104);
  }
  return uVar3;
}

