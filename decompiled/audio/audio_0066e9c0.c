/* Decompiled from Speed.exe @ 0066e9c0 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_0066e9c0(int param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  
  bVar3 = *(byte *)(param_1 + 0x100);
  uVar5 = *(uint *)(param_1 + 0x104);
  if (param_3 < 1) {
    *(uint *)(param_1 + 0x104) = uVar5;
    *(byte *)(param_1 + 0x100) = bVar3;
    return;
  }
  pbVar6 = (byte *)((uint)bVar3 + param_1);
  uVar4 = uVar5 & 0xff;
  do {
    uVar5 = uVar5 >> 8 ^ *(uint *)(&DAT_006ab998 + (*pbVar6 ^ uVar4) * 4);
    bVar3 = bVar3 + 1;
    pbVar6 = (byte *)((uint)bVar3 + param_1);
    bVar1 = *pbVar6;
    uVar4 = uVar5 & 0xff;
    bVar2 = *(byte *)(uVar4 + param_1);
    *pbVar6 = bVar2;
    *(byte *)(uVar4 + param_1) = bVar1;
    *param_2 = *param_2 ^ *(byte *)(((uint)bVar1 - (uint)bVar2 & 0xff) + param_1);
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  *(uint *)(param_1 + 0x104) = uVar5;
  *(byte *)(param_1 + 0x100) = bVar3;
  return;
}

