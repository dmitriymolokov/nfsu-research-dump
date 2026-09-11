/* Decompiled from Speed.exe @ 00668740 */
/* Module: Audio */
/* Ghidra DecompileAll */


uint __fastcall FUN_00668740(int param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  char *pcVar5;
  
  uVar3 = 0;
  uVar1 = 0;
  bVar4 = 0;
  if (*(uint *)(param_1 + 4) != 0) {
    pcVar5 = (char *)(param_1 + 0x1f);
    do {
      bVar2 = *(char *)(param_1 + 8) - *pcVar5;
      if (bVar4 < bVar2) {
        uVar1 = uVar3;
        bVar4 = bVar2;
      }
      uVar3 = uVar3 + 1;
      pcVar5 = pcVar5 + 0x10;
    } while (uVar3 < *(uint *)(param_1 + 4));
  }
  return uVar1;
}

