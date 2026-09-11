/* Decompiled from Speed.exe @ 0059fd70 */
/* Module: Loader */
/* Ghidra DecompileAll */


byte * FUN_0059fd70(byte *param_1)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  iVar6 = 0;
  piVar5 = &DAT_006ee720;
  do {
    pbVar8 = (byte *)piVar5[1];
    pbVar7 = param_1;
    do {
      bVar3 = *pbVar8;
      if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
        bVar3 = bVar3 & 0x5f;
      }
      bVar1 = *pbVar7;
      pbVar8 = pbVar8 + 1;
      if (('`' < (char)bVar1) && ((char)bVar1 < '{')) {
        bVar1 = bVar1 & 0x5f;
      }
      pbVar7 = pbVar7 + 1;
    } while (((bVar3 != 0) && (bVar1 != 0)) && (bVar3 == bVar1));
    if (bVar3 == bVar1) {
      iVar2 = 0;
      piVar4 = piVar5;
      do {
        if (*piVar4 == DAT_006ee6f0) {
          FUN_004f68c0(0x20,&DAT_006cc568,(&PTR_s_logo_eng_006ee724)[(iVar2 + iVar6 * 0xc) * 2]);
          return &DAT_0078ef80;
        }
        iVar2 = iVar2 + 1;
        piVar4 = piVar4 + 2;
      } while (iVar2 < 0xc);
    }
    piVar5 = piVar5 + 0x18;
    iVar6 = iVar6 + 1;
  } while ((int)piVar5 < 0x6eef60);
  return param_1;
}

