/* Decompiled from Speed.exe @ 00668270 */
/* Module: Audio */
/* Ghidra DecompileAll */


int FUN_00668270(char *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  byte *pbVar4;
  
  if ((param_1 != (char *)0x0) && (*param_1 == '$')) {
    if (param_2 == 0) {
      iVar1 = 0;
      pcVar3 = param_1 + 1;
      if ((byte)param_1[1] < 0x30) {
        return 0;
      }
      do {
        if ((byte)pcVar3[1] < 0x30) {
          return iVar1;
        }
        pbVar4 = (byte *)(pcVar3 + 2);
        pcVar3 = pcVar3 + 2;
        iVar1 = iVar1 + 1;
      } while (0x2f < *pbVar4);
      return iVar1;
    }
    if (0 < param_3) {
      iVar1 = 0;
      pbVar4 = (byte *)(param_1 + 1);
      if (param_3 < 1) {
        return 0;
      }
      while( true ) {
        if (*pbVar4 < 0x30) {
          return iVar1;
        }
        if (pbVar4[1] < 0x30) break;
        iVar2 = iVar1 + 1;
        *(char *)(iVar1 + param_2) =
             (&DAT_006ab0b8)[pbVar4[1]] |
             "0000000000000000111111111111111122222222222222223333333333333333444444444444444455555555555555556666666666666666777777777777777788888888888888889999999999999999aaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbccccccccccccccccddddddddddddddddeeeeeeeeeeeeeeeeffffffffffffffff0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef"
             [*pbVar4 + 0x200];
        pbVar4 = pbVar4 + 2;
        iVar1 = iVar2;
        if (param_3 <= iVar2) {
          return iVar2;
        }
      }
      return iVar1;
    }
  }
  return -1;
}

