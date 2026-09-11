/* Decompiled from Speed.exe @ 00668720 */
/* Module: Audio */
/* Ghidra DecompileAll */


uint __fastcall FUN_00668720(undefined4 param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int unaff_ESI;
  
  uVar1 = 0;
  if (*(uint *)(param_2 + 4) != 0) {
    piVar2 = (int *)(param_2 + 0x18);
    do {
      if (*piVar2 == unaff_ESI) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 4;
    } while (uVar1 < *(uint *)(param_2 + 4));
  }
  return 0xffffffff;
}

