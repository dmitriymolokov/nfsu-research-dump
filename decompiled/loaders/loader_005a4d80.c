/* Decompiled from Speed.exe @ 005a4d80 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 * FUN_005a4d80(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  int iVar6;
  
  puVar3 = DAT_00737300;
  puVar4 = (undefined4 *)FUN_0040a880();
  while( true ) {
    if (puVar3 == puVar4) {
      return (undefined4 *)0x0;
    }
    pbVar5 = (byte *)puVar3[3];
    iVar6 = -1;
    bVar2 = *pbVar5;
    while (bVar2 != 0) {
      iVar6 = iVar6 * 0x21 + (uint)bVar2;
      pbVar1 = pbVar5 + 1;
      pbVar5 = pbVar5 + 1;
      bVar2 = *pbVar1;
    }
    if (iVar6 == param_1) break;
    puVar3 = (undefined4 *)*puVar3;
  }
  return puVar3;
}

