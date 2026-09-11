/* Decompiled from Speed.exe @ 00591bf0 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_00591bf0(int param_1,int param_2,undefined1 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
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
  if (*(int *)(param_2 + 0xc) != 0) {
    iVar2 = FUN_00567160();
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_004454d0();
    }
    unaff_ESI[3] = uVar3;
  }
  unaff_ESI[0x18] = param_1;
  unaff_ESI[4] = 1;
  unaff_ESI[5] = 1;
  unaff_ESI[6] = 0;
  *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
  *DAT_00737820 = unaff_ESI;
  puVar1 = unaff_ESI;
  unaff_ESI[1] = DAT_00737820;
  DAT_00737820 = puVar1;
  *(undefined1 *)(unaff_ESI + 7) = param_3;
  *unaff_ESI = &DAT_0073781c;
  return;
}

