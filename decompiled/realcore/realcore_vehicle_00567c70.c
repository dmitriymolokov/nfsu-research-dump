/* Decompiled from Speed.exe @ 00567c70 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


int __fastcall FUN_00567c70(undefined4 param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  
  iVar3 = -1;
  bVar2 = *param_2;
  while (bVar2 != 0) {
    iVar3 = iVar3 * 0x21 + (uint)bVar2;
    pbVar1 = param_2 + 1;
    param_2 = param_2 + 1;
    bVar2 = *pbVar1;
  }
  return iVar3;
}

