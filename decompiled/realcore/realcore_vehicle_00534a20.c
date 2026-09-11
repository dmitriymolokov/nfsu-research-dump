/* Decompiled from Speed.exe @ 00534a20 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_00534a20(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = &PTR_FUN_006be3c4;
  _eh_vector_constructor_iterator_
            (unaff_ESI + 8,0x230,2,(_func_void_void_ptr *)&LAB_00535520,FUN_0052e460);
  unaff_ESI[0x120] = 0;
  unaff_ESI[5] = 0;
  unaff_ESI[4] = 0;
  puVar1 = unaff_ESI + 0x8d;
  iVar2 = 2;
  do {
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 0x8c;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

