/* Decompiled from Speed.exe @ 005b603a */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005b603a(int param_1,undefined4 param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  undefined4 uVar6;
  
  uVar6 = 0;
  iVar4 = FUN_005b4c4b(param_2);
  if (iVar4 == 0) {
    uVar6 = 0x8876086c;
  }
  else {
    iVar2 = *(int *)(iVar4 + 4);
    uVar3 = *(uint *)(*(int *)(iVar2 + 0x2c) + 0x1c);
    if (param_3 == 0) {
      if ((uVar3 & 8) != 0) {
        puVar5 = (uint *)(*(int *)(iVar2 + 0x44) + *(int *)(param_1 + 0x110));
        *puVar5 = *puVar5 | 1;
      }
      pbVar1 = (byte *)(*(int *)(*(int *)(iVar4 + 4) + 0x2c) + 0x1c);
      *pbVar1 = *pbVar1 & 0x7f;
      puVar5 = (uint *)(*(int *)(*(int *)(iVar4 + 4) + 0x44) + *(int *)(param_1 + 0x110));
      *puVar5 = *puVar5 & 0xfffffffd;
    }
    else {
      if ((uVar3 & 8) != 0) {
        puVar5 = (uint *)(*(int *)(iVar2 + 0x44) + *(int *)(param_1 + 0x110));
        *puVar5 = *puVar5 & 0xfffffffe;
      }
      pbVar1 = (byte *)(*(int *)(*(int *)(iVar4 + 4) + 0x2c) + 0x1c);
      *pbVar1 = *pbVar1 | 0x80;
      puVar5 = (uint *)(*(int *)(*(int *)(iVar4 + 4) + 0x44) + *(int *)(param_1 + 0x110));
      *puVar5 = *puVar5 | 2;
    }
  }
  return uVar6;
}

