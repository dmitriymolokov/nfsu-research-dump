/* Decompiled from Speed.exe @ 00424f60 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00424f60(void)

{
  int iVar1;
  undefined4 *unaff_ESI;
  undefined4 *puVar2;
  
  *unaff_ESI = &PTR_FUN_006caa58;
  unaff_ESI[0x6d] = 0;
  unaff_ESI[0x6e] = 0;
  puVar2 = unaff_ESI + 4;
  for (iVar1 = 0x70; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_00458f10(0,0);
  unaff_ESI[0x75] = 1;
  unaff_ESI[0x76] = 1;
  *(undefined2 *)(unaff_ESI + 0x74) = 0;
  unaff_ESI[0x77] = 0;
  unaff_ESI[0x78] = 0;
  unaff_ESI[0x79] = 0;
  FUN_00458f10(0,0);
  return;
}

