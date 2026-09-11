/* Decompiled from Speed.exe @ 0044a080 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_0044a080(float param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = &PTR_LAB_006c97f4;
  bVar1 = DAT_006cc7a4 <= param_1;
  unaff_ESI[2] = 0;
  *(bool *)(unaff_ESI + 1) = bVar1;
  unaff_ESI[3] = param_1;
  uVar2 = FUN_00674898();
  unaff_ESI[2] = uVar2;
  return;
}

