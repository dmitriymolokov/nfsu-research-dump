/* Decompiled from Speed.exe @ 005030d0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_005030d0(void)

{
  ushort in_AX;
  void *pvVar1;
  undefined4 *unaff_ESI;
  
  *(ushort *)(unaff_ESI + 3) = in_AX;
  unaff_ESI[1] = 0xabadcafe;
  unaff_ESI[2] = 0xabadcafe;
  *unaff_ESI = &PTR_FUN_006c17b4;
  *(undefined2 *)((int)unaff_ESI + 0xe) = 0;
  unaff_ESI[5] = 0;
  pvVar1 = _malloc((uint)in_AX << 5);
  unaff_ESI[5] = pvVar1;
  unaff_ESI[4] = 0;
  return;
}

