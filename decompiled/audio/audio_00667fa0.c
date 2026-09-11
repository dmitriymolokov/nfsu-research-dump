/* Decompiled from Speed.exe @ 00667fa0 */
/* Module: Audio */
/* Ghidra DecompileAll */


int FUN_00667fa0(byte *param_1,byte *param_2,int param_3,byte *param_4,int param_5,uint param_6)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  byte *pbVar5;
  
  if (param_1 != (byte *)0x0) {
    bVar4 = *param_1;
    if ((bVar4 == 0x22) || (bVar4 == 0x27)) {
      param_1 = param_1 + 1;
    }
    else {
      bVar4 = 0;
    }
    if (0 < param_5) {
      do {
        bVar1 = *param_1;
        while ((((int)(char)bVar1 != (uint)bVar4 && ('\x1f' < (char)bVar1)) &&
               ((int)(char)bVar1 != param_6))) {
          pbVar5 = param_1 + 1;
          param_1 = param_1 + 1;
          bVar1 = *pbVar5;
        }
        if ((int)(char)*param_1 != param_6) goto LAB_00668008;
        param_1 = param_1 + 1;
        param_5 = param_5 + -1;
      } while (0 < param_5);
    }
    if (param_1 != (byte *)0x0) {
      if (param_2 == (byte *)0x0) {
        iVar3 = 0;
        if (*param_1 != bVar4) {
          while ((bVar1 = *param_1, 0x1f < bVar1 && (bVar1 != param_6))) {
            if ((bVar1 == 0x25) && ((0x1f < param_1[1] && (0x1f < param_1[2])))) {
              param_1 = param_1 + 2;
            }
            pbVar5 = param_1 + 1;
            iVar3 = iVar3 + 1;
            param_1 = param_1 + 1;
            if (*pbVar5 == bVar4) {
              return iVar3;
            }
          }
        }
      }
      else {
        if (param_3 < 1) {
          return -1;
        }
        iVar3 = 1;
        if (1 < param_3) {
          do {
            bVar1 = *param_1;
            if (((bVar1 == bVar4) || (bVar1 < 0x20)) || (bVar1 == param_6)) break;
            if (bVar1 == 0x25) {
              bVar2 = param_1[1];
              if (bVar2 == 0x25) {
                *param_2 = 0x25;
                param_1 = param_1 + 2;
              }
              else {
                if ((bVar2 < 0x20) || (param_1[2] < 0x20)) goto LAB_00668118;
                *param_2 = (&DAT_006ab0b8)[param_1[2]] |
                           "0000000000000000111111111111111122222222222222223333333333333333444444444444444455555555555555556666666666666666777777777777777788888888888888889999999999999999aaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbccccccccccccccccddddddddddddddddeeeeeeeeeeeeeeeeffffffffffffffff0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef"
                           [bVar2 + 0x200];
                param_1 = param_1 + 3;
              }
            }
            else {
LAB_00668118:
              *param_2 = bVar1;
              param_1 = param_1 + 1;
            }
            param_2 = param_2 + 1;
            iVar3 = iVar3 + 1;
          } while (iVar3 < param_3);
        }
        *param_2 = 0;
        iVar3 = iVar3 + -1;
      }
      return iVar3;
    }
  }
LAB_00668008:
  if (param_4 == (byte *)0x0) {
    return -1;
  }
  if (param_2 == (byte *)0x0) {
    pbVar5 = param_4 + 1;
    do {
      bVar4 = *param_4;
      param_4 = param_4 + 1;
    } while (bVar4 != 0);
    return (int)param_4 - (int)pbVar5;
  }
  iVar3 = 1;
  pbVar5 = param_2;
  if (1 < param_3) {
    do {
      pbVar5 = param_2;
      if (*param_4 == 0) break;
      pbVar5 = param_2 + 1;
      *param_2 = *param_4;
      param_4 = param_4 + 1;
      iVar3 = iVar3 + 1;
      param_2 = pbVar5;
    } while (iVar3 < param_3);
  }
  *pbVar5 = 0;
  return iVar3 + -1;
}

