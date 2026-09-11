/* Decompiled from Speed.exe @ 00667950 */
/* Module: Audio */
/* Ghidra DecompileAll */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00667950(undefined4 param_1,undefined4 param_2,undefined4 param_3,byte *param_4)

{
  byte bVar1;
  int iVar2;
  uint *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined4 uVar6;
  int iVar7;
  byte *pbVar8;
  uint unaff_retaddr;
  undefined1 local_1204 [4607];
  undefined1 uStack_5;
  uint local_4;
  
  local_4 = DAT_006eb720 ^ unaff_retaddr;
  if (param_4 == (byte *)0x0) {
    FUN_006675e0(param_1,param_3);
    return 0;
  }
  pbVar4 = (byte *)FUN_006672e0();
  puVar3 = &local_4;
  bVar1 = *param_4;
  pbVar8 = param_4;
  while (bVar1 != 0) {
    if (bVar1 == 0x20) goto LAB_006679f2;
    pbVar5 = pbVar8 + 1;
    pbVar8 = pbVar8 + 1;
    bVar1 = *pbVar5;
  }
  pbVar5 = pbVar4;
  if (*pbVar8 == 0x20) {
LAB_006679f2:
    *pbVar4 = 0x22;
    pbVar5 = pbVar4 + 1;
    puVar3 = (uint *)&uStack_5;
  }
  iVar7 = (int)puVar3 - (int)pbVar4;
  bVar1 = *param_4;
  while (bVar1 != 0) {
    if (iVar7 < 1) goto LAB_00667a5a;
    bVar1 = *param_4;
    if ((((bVar1 < 0x20) || (0x7e < bVar1)) || (bVar1 == 0x3d)) ||
       (((bVar1 == 0x22 || (bVar1 == 0x3a)) || (bVar1 == 0x25)))) {
      if (2 < iVar7) {
        *pbVar5 = 0x25;
        pbVar5[1] = "0000000000000000111111111111111122222222222222223333333333333333444444444444444455555555555555556666666666666666777777777777777788888888888888889999999999999999aaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbccccccccccccccccddddddddddddddddeeeeeeeeeeeeeeeeffffffffffffffff0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef"
                    [*param_4];
        pbVar5[2] = "0000000000000000111111111111111122222222222222223333333333333333444444444444444455555555555555556666666666666666777777777777777788888888888888889999999999999999aaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbccccccccccccccccddddddddddddddddeeeeeeeeeeeeeeeeffffffffffffffff0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef"
                    [*param_4 + 0x100];
        pbVar5 = pbVar5 + 3;
      }
      iVar2 = -3;
    }
    else {
      *pbVar5 = bVar1;
      pbVar5 = pbVar5 + 1;
      iVar2 = -1;
    }
    iVar7 = iVar7 + iVar2;
    pbVar4 = param_4 + 1;
    param_4 = param_4 + 1;
    bVar1 = *pbVar4;
  }
  if (iVar7 < 1) {
LAB_00667a5a:
    uVar6 = 0xffffffff;
  }
  else {
    if (*pbVar8 == 0x20) {
      *pbVar5 = 0x22;
      pbVar5 = pbVar5 + 1;
    }
    *pbVar5 = 0;
    uVar6 = FUN_00667300(param_1,param_2,local_1204);
  }
  return uVar6;
}

