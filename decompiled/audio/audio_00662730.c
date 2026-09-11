/* Decompiled from Speed.exe @ 00662730 */
/* Module: Audio */
/* Ghidra DecompileAll */


byte FUN_00662730(uint *param_1,int *param_2,int *param_3,byte *param_4)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  
  bVar2 = *param_4;
  while (('\0' < (char)bVar2 && ((char)bVar2 < '!'))) {
    pbVar1 = param_4 + 1;
    param_4 = param_4 + 1;
    bVar2 = *pbVar1;
  }
  uVar3 = 0;
LAB_00662752:
  do {
    bVar2 = *param_4;
    if (((char)bVar2 < '0') || ('9' < (char)bVar2)) {
      if (bVar2 != 0x2e) {
        bVar5 = uVar3 != 0;
        *param_1 = uVar3;
        bVar2 = *param_4;
        while ((bVar2 != 0x3a && (bVar2 != 0))) {
          pbVar1 = param_4 + 1;
          param_4 = param_4 + 1;
          bVar2 = *pbVar1;
        }
        iVar4 = 0;
        if (*param_4 == 0x3a) {
          param_4 = param_4 + 1;
          bVar2 = *param_4;
          while (('/' < (char)bVar2 && ((char)bVar2 < ':'))) {
            param_4 = param_4 + 1;
            iVar4 = (bVar2 & 0xf) + iVar4 * 10;
            bVar2 = *param_4;
          }
          bVar5 = bVar5 | 2;
        }
        *param_2 = iVar4;
        if (param_3 != (int *)0x0) {
          iVar4 = 0;
          if (*param_4 == 0x3a) {
            param_4 = param_4 + 1;
            bVar2 = *param_4;
            while (('/' < (char)bVar2 && ((char)bVar2 < ':'))) {
              param_4 = param_4 + 1;
              iVar4 = (bVar2 & 0xf) + iVar4 * 10;
              bVar2 = *param_4;
            }
            bVar5 = bVar5 | 4;
          }
          *param_3 = iVar4;
        }
        return bVar5;
      }
    }
    else if (bVar2 != 0x2e) {
      uVar3 = uVar3 + (uVar3 & 0xff) * 9 + (bVar2 & 0xf);
      param_4 = param_4 + 1;
      goto LAB_00662752;
    }
    uVar3 = uVar3 << 8;
    param_4 = param_4 + 1;
  } while( true );
}

