/* Decompiled from Speed.exe @ 00504630 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


int FUN_00504630(undefined4 param_1,uint param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int unaff_EDI;
  
  iVar3 = DAT_00734588;
  uVar4 = 0;
  if (unaff_EDI != 0x23) {
    if (unaff_EDI * 0xc90 + DAT_00734588 == 0) {
      return 0;
    }
    uVar4 = FUN_00567c70();
  }
  iVar5 = FUN_0057ce10(uVar4,param_1,0,0,0xffffffff);
  while( true ) {
    if (iVar5 == 0) {
      return 0;
    }
    if (*(byte *)(iVar5 + 0x11) == param_2) break;
    iVar6 = 0;
    if (unaff_EDI != 0x23) {
      iVar6 = unaff_EDI * 0xc90 + iVar3;
      if (iVar6 == 0) {
        iVar6 = 0;
      }
      else {
        pbVar7 = (byte *)(iVar6 + 0x20);
        iVar6 = -1;
        bVar2 = *pbVar7;
        while (bVar2 != 0) {
          iVar6 = iVar6 * 0x21 + (uint)bVar2;
          pbVar1 = pbVar7 + 1;
          pbVar7 = pbVar7 + 1;
          bVar2 = *pbVar1;
        }
      }
    }
    iVar5 = FUN_0057ce10(iVar6,param_1,0,iVar5,0xffffffff);
  }
  return iVar5;
}

