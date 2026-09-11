/* Decompiled from Speed.exe @ 004f75b0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_004f75b0(int param_1)

{
  char cVar1;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x18) < 0x100) {
      cVar1 = FUN_004feb50();
      if (cVar1 == '\0') {
        *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x400000;
      }
      FUN_004ff2f0(param_1,0,0);
    }
  }
  return;
}

