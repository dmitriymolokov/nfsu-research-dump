/* Decompiled from Speed.exe @ 004f16a0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_004f16a0(undefined4 param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = (undefined1 *)(param_2 + 0x414c);
  iVar2 = 0x10;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 0x100;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(param_2 + 0x4148) = 0;
  return;
}

