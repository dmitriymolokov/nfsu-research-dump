/* Decompiled from Speed.exe @ 00667b60 */
/* Module: Audio */
/* Ghidra DecompileAll */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00667b60(undefined4 param_1,undefined4 param_2,undefined4 param_3,byte *param_4,
                 byte *param_5)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 *puVar3;
  char *pcVar4;
  byte bVar5;
  byte *pbVar6;
  uint unaff_retaddr;
  undefined1 local_2104 [8448];
  uint local_4;
  
  local_4 = DAT_006eb720 ^ unaff_retaddr;
  if ((param_4 == (byte *)0x0) || (*param_4 == 0)) {
    param_4 = &DAT_006ab838;
  }
  puVar3 = (undefined1 *)FUN_006672e0();
  *puVar3 = 0x24;
  pcVar4 = puVar3 + 1;
  bVar5 = 0;
  bVar2 = *param_5;
  pbVar6 = param_4;
  while (bVar2 != 0) {
    bVar5 = ((bVar2 ^ bVar5) >> 5 | (bVar2 ^ bVar5) << 3) ^ *pbVar6;
    pbVar1 = pbVar6 + 1;
    pbVar6 = pbVar6 + 1;
    if (*pbVar1 == 0) {
      pbVar6 = param_4;
    }
    *pcVar4 = "0000000000000000111111111111111122222222222222223333333333333333444444444444444455555555555555556666666666666666777777777777777788888888888888889999999999999999aaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbccccccccccccccccddddddddddddddddeeeeeeeeeeeeeeeeffffffffffffffff0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef"
              [bVar5];
    pcVar4[1] = "0000000000000000111111111111111122222222222222223333333333333333444444444444444455555555555555556666666666666666777777777777777788888888888888889999999999999999aaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbccccccccccccccccddddddddddddddddeeeeeeeeeeeeeeeeffffffffffffffff0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef"
                [bVar5 + 0x100];
    pbVar1 = param_5 + 1;
    pcVar4 = pcVar4 + 2;
    param_5 = param_5 + 1;
    bVar2 = *pbVar1;
  }
  *pcVar4 = '\0';
  FUN_00667300(param_1,param_2,local_2104);
  return;
}

