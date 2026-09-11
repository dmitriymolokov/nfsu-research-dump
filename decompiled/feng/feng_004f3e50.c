/* Decompiled from Speed.exe @ 004f3e50 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


int __fastcall FUN_004f3e50(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 4);
  iVar3 = 0;
  while( true ) {
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = iVar6 + -4;
    }
    iVar5 = param_1;
    if (param_1 == -4) {
      iVar5 = 0;
    }
    if (iVar6 == iVar5) break;
    if (*(int *)(iVar6 + 0x18) != 0) {
      pbVar4 = *(byte **)(*(int *)(iVar6 + 0x18) + 0xc);
      iVar5 = -1;
      bVar2 = *pbVar4;
      while (bVar2 != 0) {
        iVar5 = iVar5 * 0x21 + (uint)bVar2;
        pbVar1 = pbVar4 + 1;
        pbVar4 = pbVar4 + 1;
        bVar2 = *pbVar1;
      }
      iVar3 = iVar3 + iVar5;
    }
    iVar6 = *(int *)(iVar6 + 4);
  }
  return iVar3;
}

