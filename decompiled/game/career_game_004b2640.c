/* Decompiled from Speed.exe @ 004b2640 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


undefined4 * FUN_004b2640(int param_1)

{
  byte *pbVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  
  puVar2 = DAT_00748844;
  puVar3 = (undefined4 *)FUN_0040a880();
  while( true ) {
    if (puVar2 == puVar3) {
      return (undefined4 *)0x0;
    }
    pbVar6 = (byte *)(puVar2 + 10);
    iVar5 = -1;
    if (pbVar6 != (byte *)0x0) {
      bVar4 = *pbVar6;
      while (bVar4 != 0) {
        if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
          bVar4 = bVar4 - 0x20;
        }
        iVar5 = iVar5 * 0x21 + (uint)bVar4;
        pbVar1 = pbVar6 + 1;
        pbVar6 = pbVar6 + 1;
        bVar4 = *pbVar1;
      }
    }
    if (param_1 == iVar5) break;
    puVar2 = (undefined4 *)*puVar2;
  }
  return puVar2;
}

