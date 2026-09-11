/* Decompiled from Speed.exe @ 00574350 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


uint fn_00574350(int param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  bVar1 = *(byte *)(param_1 + 0x12);
  uVar6 = 1;
  uVar4 = 1;
  if (bVar1 != 0) {
    uVar6 = (*(uint *)(param_2 + (uint)(bVar1 >> 5) * 4) >> (bVar1 & 0x1f) ^
            (uint)*(byte *)(param_1 + 0x10)) & 1;
  }
  bVar2 = *(byte *)(param_1 + 0x13);
  if (bVar2 != 0) {
    bVar3 = *(byte *)(param_1 + 0x11);
    iVar5 = (uint)(bVar2 >> 5) * 4;
    uVar4 = (*(uint *)(iVar5 + param_2) >> (bVar2 & 0x1f) ^ (uint)bVar3) & 1;
    if (bVar3 != 0) {
      uVar6 = uVar6 & ((*(uint *)(param_3 + (uint)(bVar1 >> 5) * 4) >> (bVar1 & 0x1f) ^
                       (uint)*(byte *)(param_1 + 0x10)) & 1 ^ uVar6);
      uVar4 = uVar4 & ((*(uint *)(iVar5 + param_3) >> (bVar2 & 0x1f) ^ (uint)bVar3) & 1) == uVar4;
    }
  }
  return uVar4 & uVar6;
}

