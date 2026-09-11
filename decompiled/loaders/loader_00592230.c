/* Decompiled from Speed.exe @ 00592230 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_00592230(undefined4 param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = &DAT_006ef2d4;
  do {
    pbVar3 = (byte *)piVar5[-1];
    iVar4 = -1;
    bVar2 = *pbVar3;
    while (bVar2 != 0) {
      iVar4 = iVar4 * 0x21 + (uint)bVar2;
      pbVar1 = pbVar3 + 1;
      pbVar3 = pbVar3 + 1;
      bVar2 = *pbVar1;
    }
    *piVar5 = iVar4;
    piVar5 = piVar5 + 0x25;
  } while ((int)piVar5 < 0x6f0398);
  return param_1;
}

