/* Decompiled from Speed.exe @ 006682f0 */
/* Module: Audio */
/* Ghidra DecompileAll */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_006682f0(byte *param_1,uint *param_2,int param_3,byte *param_4)

{
  byte *pbVar1;
  byte bVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint *local_40c;
  uint *local_408;
  uint local_404 [257];
  
  local_40c = param_2;
  if (param_3 < 0) {
    local_408 = (uint *)((int)param_2 + 0xffff);
  }
  else {
    local_408 = (uint *)((int)param_2 + param_3);
  }
  if (param_1 == (byte *)0x0) {
    param_1 = &DAT_006b9172;
  }
  if (param_2 == (uint *)0x0) {
    local_40c = local_404;
  }
  puVar3 = local_40c;
  bVar2 = *param_4;
  while (bVar2 != 0) {
    if (bVar2 == 0x23) {
      param_4 = param_4 + 1;
      do {
        bVar2 = *param_4;
        if (bVar2 == 0) break;
        param_4 = param_4 + 1;
      } while (bVar2 != 0x3d);
    }
    iVar8 = 0;
    bVar2 = *param_4;
    pbVar10 = param_4;
    while (('/' < (char)bVar2 && ((char)bVar2 < ':'))) {
      pbVar10 = pbVar10 + 1;
      iVar8 = (bVar2 & 0xf) + iVar8 * 10;
      bVar2 = *pbVar10;
    }
    bVar2 = *pbVar10;
    iVar6 = 0;
    if (bVar2 == 0x61) {
      iVar4 = iVar8;
      if (iVar8 == 0) {
        iVar4 = 1;
      }
      local_40c = (uint *)((int)local_40c + iVar4);
    }
    if (bVar2 == 0x62) {
      iVar6 = 2;
    }
    if (bVar2 == 0x77) {
      iVar6 = 4;
    }
    if (bVar2 == 0x6c) {
      iVar6 = 8;
LAB_0066840c:
      bVar2 = *param_1;
      if (bVar2 == 0x2d) {
        param_1 = param_1 + 1;
      }
      uVar5 = 0;
      pbVar11 = param_1;
      do {
        param_1 = pbVar11;
        if ((char)*param_1 < '0') {
          if ((iVar6 < 1) || (*param_1 != 0x2c)) goto LAB_00668456;
          break;
        }
        uVar5 = uVar5 << 4 | (uint)(byte)(&DAT_006ab0b8)[(char)*param_1];
        iVar6 = iVar6 + -1;
        pbVar11 = param_1 + 1;
      } while (0 < iVar6);
      param_1 = param_1 + 1;
LAB_00668456:
      if (bVar2 == 0x2d) {
        uVar5 = -uVar5;
      }
      if (*pbVar10 == 0x62) {
        *(byte *)local_40c = (byte)uVar5;
        local_40c = (uint *)((int)local_40c + 1);
      }
      if (*pbVar10 == 0x77) {
        *(short *)local_40c = (short)uVar5;
        local_40c = (uint *)((int)local_40c + 2);
      }
      if (*pbVar10 == 0x6c) {
        *local_40c = uVar5;
        local_40c = local_40c + 1;
      }
    }
    else if (iVar6 != 0) goto LAB_0066840c;
    if ((*pbVar10 == 0x73) && (0 < iVar8)) {
      iVar6 = 0;
      puVar7 = local_40c;
      while (((bVar2 = *param_1, '/' < (char)bVar2 || (bVar2 == 0x25)) &&
             ((int)((1 - (int)local_40c) + (int)puVar7) < iVar8))) {
        if (bVar2 == 0x25) {
          pbVar11 = param_1 + 1;
          pbVar1 = param_1 + 2;
          param_1 = param_1 + 3;
          *(char *)puVar7 =
               "0000000000000000111111111111111122222222222222223333333333333333444444444444444455555555555555556666666666666666777777777777777788888888888888889999999999999999aaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbccccccccccccccccddddddddddddddddeeeeeeeeeeeeeeeeffffffffffffffff0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef"
               [(char)*pbVar11 + 0x200] | (&DAT_006ab0b8)[(char)*pbVar1];
          iVar6 = iVar6 + 1;
          puVar7 = (uint *)((int)puVar7 + 1);
        }
        else {
          param_1 = param_1 + 1;
          *(byte *)puVar7 = bVar2;
          iVar6 = iVar6 + 1;
          puVar7 = (uint *)((int)puVar7 + 1);
        }
      }
      if (iVar6 < iVar8) {
        uVar9 = iVar8 - iVar6;
        pbVar11 = (byte *)(iVar6 + (int)local_40c);
        for (uVar5 = uVar9 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          pbVar11[0] = 0;
          pbVar11[1] = 0;
          pbVar11[2] = 0;
          pbVar11[3] = 0;
          pbVar11 = pbVar11 + 4;
        }
        for (uVar5 = uVar9 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pbVar11 = 0;
          pbVar11 = pbVar11 + 1;
        }
        iVar6 = iVar6 + uVar9;
      }
      local_40c = (uint *)((int)local_40c + iVar6);
      if (*param_1 == 0x2c) {
        param_1 = param_1 + 1;
      }
    }
    if (local_408 <= local_40c) break;
    param_4 = pbVar10 + 1;
    if (pbVar10[1] == 0x2a) {
      param_4 = pbVar10;
    }
    bVar2 = *param_4;
  }
  return (int)local_40c - (int)puVar3;
}

