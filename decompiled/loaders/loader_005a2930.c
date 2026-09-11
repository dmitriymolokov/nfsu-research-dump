/* Decompiled from Speed.exe @ 005a2930 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_005a2930(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *unaff_EDI;
  
  *unaff_EDI = &PTR_FUN_006b7f7c;
  puVar2 = unaff_EDI + 0xb;
  iVar1 = 8;
  do {
    puVar2[-6] = 0;
    FUN_004010a0(puVar2,0x15c,8,FUN_00438860);
    puVar2 = puVar2 + 0x2c3;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  _eh_vector_constructor_iterator_
            (unaff_EDI + 0x161b,0xc,4,(_func_void_void_ptr *)&LAB_004b3990,FUN_004b39a0);
  unaff_EDI[0x161a] = 0;
  unaff_EDI[0x1619] = unaff_EDI + 1;
  unaff_EDI[0x1627] = 0;
  *(undefined1 *)(unaff_EDI + 0x167b) = 0;
  unaff_EDI[0x1628] = 0xffffffff;
  return;
}

