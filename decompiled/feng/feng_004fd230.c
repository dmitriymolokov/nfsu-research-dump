/* Decompiled from Speed.exe @ 004fd230 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


int __fastcall FUN_004fd230(undefined4 param_1,byte *param_2)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  
  iVar2 = -1;
  if (param_2 != (byte *)0x0) {
    bVar3 = *param_2;
    while (bVar3 != 0) {
      if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
        bVar3 = bVar3 - 0x20;
      }
      iVar2 = iVar2 * 0x21 + (uint)bVar3;
      pbVar1 = param_2 + 1;
      param_2 = param_2 + 1;
      bVar3 = *pbVar1;
    }
  }
  return iVar2;
}

