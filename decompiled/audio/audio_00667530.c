/* Decompiled from Speed.exe @ 00667530 */
/* Module: Audio */
/* Ghidra DecompileAll */


byte * FUN_00667530(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  if ((((param_1 != (byte *)0x0) && (bVar1 = *param_1, bVar1 != 0)) && (param_2 != (byte *)0x0)) &&
     (pbVar6 = param_2, *param_2 != 0)) {
    do {
      pbVar3 = pbVar6;
      pbVar6 = pbVar3 + 1;
    } while (pbVar3[1] != 0);
    pbVar6 = param_1 + -1;
    pbVar5 = param_1;
    do {
      if ((bVar1 == 0x3d) || (bVar1 == 0x3a)) {
        if ((pbVar6[2] < 0x20) && (*pbVar6 < 0x21)) {
          return (byte *)0x0;
        }
        if (param_1 <= pbVar6) {
          pbVar4 = pbVar3 + (int)(pbVar6 + (1 - (int)pbVar5));
          pbVar2 = pbVar6;
          do {
            if ((&DAT_006ab1b8)[*pbVar2] != (&DAT_006ab1b8)[*pbVar4]) break;
            if ((pbVar4 == param_2) && ((pbVar2 == param_1 || (pbVar2[-1] < 0x21)))) {
              if (pbVar5[1] == 0x20) {
                return pbVar5 + 2;
              }
              return pbVar5 + 1;
            }
            pbVar2 = pbVar2 + -1;
            pbVar4 = pbVar4 + -1;
          } while (param_1 <= pbVar2);
        }
      }
      bVar1 = pbVar5[1];
      pbVar5 = pbVar5 + 1;
      pbVar6 = pbVar6 + 1;
    } while (bVar1 != 0);
  }
  return (byte *)0x0;
}

