/* Decompiled from Speed.exe @ 004ac040 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


uint __fastcall FUN_004ac040(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  piVar2 = (int *)(param_1 + 0x61dc);
  do {
    if (param_2 == *piVar2) {
      return CONCAT31((int3)(uVar1 >> 8),1);
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 4;
  } while ((int)uVar1 < 0xf);
  return uVar1 & 0xffffff00;
}

