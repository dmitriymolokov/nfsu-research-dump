/* Decompiled from Speed.exe @ 004df120 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


int __fastcall FUN_004df120(int param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  byte *pbVar5;
  
  for (puVar3 = *(undefined4 **)(param_1 + 0x40); puVar3 != (undefined4 *)(param_1 + 0x40);
      puVar3 = (undefined4 *)*puVar3) {
    if (*(int *)puVar3[2] == param_2) goto LAB_004df13f;
  }
  puVar3 = (undefined4 *)0x0;
LAB_004df13f:
  pbVar5 = *(byte **)(puVar3[2] + 8);
  iVar4 = -1;
  bVar2 = *pbVar5;
  while (bVar2 != 0) {
    iVar4 = iVar4 * 0x21 + (uint)bVar2;
    pbVar1 = pbVar5 + 1;
    pbVar5 = pbVar5 + 1;
    bVar2 = *pbVar1;
  }
  return iVar4;
}

