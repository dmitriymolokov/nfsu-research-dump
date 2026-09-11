/* Decompiled from Speed.exe @ 00503ed0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_00503ed0(void)

{
  undefined4 *puVar1;
  int unaff_EBX;
  undefined4 *puVar2;
  
  puVar1 = _malloc(0x24);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[1] = 0xabadcafe;
    puVar1[2] = 0xabadcafe;
    *puVar1 = &PTR_FUN_006c16b0;
    puVar2 = puVar1;
  }
  FUN_004fd180();
  puVar2[5] = unaff_EBX;
  puVar2[6] = *(undefined4 *)(&DAT_006b6718 + unaff_EBX * 4);
  FUN_00503e60();
  return;
}

