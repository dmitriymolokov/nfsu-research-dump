/* Decompiled from Speed.exe @ 005847b0 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_005847b0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  
  uVar1 = unaff_EDI[1];
  uVar2 = unaff_EDI[2];
  *unaff_ESI = *unaff_EDI;
  unaff_ESI[1] = uVar1;
  unaff_ESI[2] = uVar2;
  FUN_00401cd0();
  uVar1 = unaff_EDI[0x15];
  uVar2 = unaff_EDI[0x16];
  unaff_ESI[0x14] = unaff_EDI[0x14];
  unaff_ESI[0x15] = uVar1;
  unaff_ESI[0x16] = uVar2;
  uVar1 = unaff_EDI[0x19];
  uVar2 = unaff_EDI[0x1a];
  unaff_ESI[0x18] = unaff_EDI[0x18];
  unaff_ESI[0x19] = uVar1;
  unaff_ESI[0x1a] = uVar2;
  unaff_ESI[0x1c] = unaff_EDI[0x1c];
  return;
}

