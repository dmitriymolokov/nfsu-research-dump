/* Decompiled from Speed.exe @ 00682c91 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


int FUN_00682c91(uint param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 *puVar3;
  byte bVar4;
  
  pbVar1 = (byte *)((&DAT_00793240)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24);
  bVar2 = *pbVar1;
  if (param_2 == 0x8000) {
    bVar4 = bVar2 & 0x7f;
  }
  else {
    if (param_2 != 0x4000) {
      puVar3 = (undefined4 *)FUN_00677f42();
      *puVar3 = 0x16;
      return -1;
    }
    bVar4 = bVar2 | 0x80;
  }
  *pbVar1 = bVar4;
  return (-(uint)((bVar2 & 0x80) != 0) & 0xffffc000) + 0x8000;
}

