/* Decompiled from Speed.exe @ 00644910 */
/* Module: Audio */
/* Ghidra DecompileVAs */


uint FUN_00644910(byte *param_1,undefined4 *param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  
  uVar3 = 0;
  if (param_1 != (byte *)0x0) {
    pbVar4 = param_1 + 2;
    if ((*param_1 & 1) != 0) {
      pbVar4 = param_1 + 5;
    }
    uVar3 = (uint)CONCAT21(CONCAT11(*pbVar4,pbVar4[1]),pbVar4[2]);
    pbVar4 = pbVar4 + 3;
    if (param_2 != (undefined4 *)0x0) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              bVar2 = *pbVar4;
              uVar6 = (uint)bVar2;
              pbVar5 = pbVar4 + 1;
              if ((char)bVar2 < '\0') break;
              pbVar4 = pbVar4 + (uVar6 & 3) + 2;
            }
            if ((bVar2 & 0x40) != 0) break;
            pbVar4 = pbVar4 + (*pbVar5 >> 6) + 3;
          }
          if ((bVar2 & 0x20) != 0) break;
          pbVar4 = pbVar4 + (uVar6 & 3) + 4;
        }
        uVar1 = (bVar2 & 0x1f) * 4 + 4;
        if (0x70 < uVar1) break;
        pbVar4 = pbVar5 + uVar1;
      }
      *param_2 = pbVar5 + ((uVar6 & 3) - (int)param_1);
    }
  }
  return uVar3;
}

