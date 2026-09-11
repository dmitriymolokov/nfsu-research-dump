/* Decompiled from Speed.exe @ 00667d70 */
/* Module: Audio */
/* Ghidra DecompileAll */


int FUN_00667d70(byte *param_1,int param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  int iVar6;
  
  bVar1 = *param_3;
  iVar6 = param_2;
  if (bVar1 != 0) {
    puVar5 = &param_3;
    do {
      pbVar4 = param_3 + 1;
      if (iVar6 < 2) break;
      if (bVar1 < 0x21) {
        *param_1 = DAT_006eb1a4;
        param_1 = param_1 + 1;
        iVar6 = iVar6 + -1;
        bVar1 = *pbVar4;
        while ((bVar1 != 0 && ((char)bVar1 < '!'))) {
          pbVar3 = pbVar4 + 1;
          pbVar4 = pbVar4 + 1;
          bVar1 = *pbVar3;
        }
      }
      else if (bVar1 == 0x25) {
        bVar1 = *pbVar4;
        if (bVar1 != 0) {
          pbVar4 = param_3 + 2;
          if (param_1[-1] == 0x3d) {
            param_1 = param_1 + -1;
            iVar6 = iVar6 + 1;
          }
          *param_1 = 0;
          param_3 = pbVar4;
          if (bVar1 == 0x73) {
            iVar2 = FUN_00667950(param_1,iVar6,&DAT_006b9172,puVar5[1]);
          }
          else if (bVar1 == 100) {
            iVar2 = FUN_00667690(param_1,iVar6,&DAT_006b9172,puVar5[1]);
          }
          else if (bVar1 == 0x61) {
            iVar2 = FUN_006677e0(param_1,iVar6,&DAT_006b9172,puVar5[1]);
          }
          else if (bVar1 == 0x66) {
            iVar2 = FUN_00667750(param_1,iVar6,&DAT_006b9172,puVar5[1]);
          }
          else {
            if (bVar1 != 0x65) {
              if (bVar1 == 0x72) {
                pbVar3 = (byte *)puVar5[1];
                bVar1 = *pbVar3;
                puVar5 = puVar5 + 1;
                for (; (bVar1 != 0 && (0 < iVar6)); iVar6 = iVar6 + -1) {
                  *param_1 = bVar1;
                  bVar1 = pbVar3[1];
                  param_1 = param_1 + 1;
                  pbVar3 = pbVar3 + 1;
                }
              }
              goto LAB_00667e02;
            }
            iVar2 = FUN_00667c40(param_1,iVar6,&DAT_006b9172,puVar5[1]);
          }
          puVar5 = puVar5 + 1;
          if (0 < iVar2) {
            param_1 = param_1 + iVar2;
            iVar6 = iVar6 - iVar2;
          }
        }
      }
      else {
        *param_1 = bVar1;
        param_1 = param_1 + 1;
        iVar6 = iVar6 + -1;
      }
LAB_00667e02:
      bVar1 = *pbVar4;
      param_3 = pbVar4;
    } while (bVar1 != 0);
  }
  if (0 < iVar6) {
    *param_1 = 0;
  }
  return param_2 - iVar6;
}

