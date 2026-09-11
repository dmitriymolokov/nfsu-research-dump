/* Decompiled from Speed.exe @ 00591b80 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_00591b80(undefined4 param_1,undefined1 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_EBX;
  undefined4 *unaff_ESI;
  
  iVar2 = FUN_00567160();
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_004454d0();
  }
  unaff_ESI[2] = uVar3;
  unaff_ESI[3] = 0;
  unaff_ESI[4] = 1;
  unaff_ESI[5] = 1;
  unaff_ESI[6] = 0;
  unaff_ESI[0x18] = unaff_EBX;
  *(int *)(unaff_EBX + 0xd8) = *(int *)(unaff_EBX + 0xd8) + 1;
  *DAT_00737820 = unaff_ESI;
  puVar1 = unaff_ESI;
  unaff_ESI[1] = DAT_00737820;
  DAT_00737820 = puVar1;
  *(undefined1 *)(unaff_ESI + 7) = param_2;
  *unaff_ESI = &DAT_0073781c;
  return;
}

