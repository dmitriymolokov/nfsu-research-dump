/* Decompiled from Speed.exe @ 005365e0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void __fastcall FUN_005365e0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_EDI;
  
  uVar2 = FUN_00674898(param_1);
  *(undefined4 *)(unaff_EDI + 0x3e20) = uVar2;
  if ((((DAT_0078a345 != '\0') || (DAT_007361a4 != 0)) || (DAT_0078a344 != '\0')) ||
     (DAT_007361a8 != 0)) {
    *(undefined4 *)(unaff_EDI + 0x3e20) = 0;
  }
  iVar1 = *(int *)(unaff_EDI + 0x3e20);
  iVar3 = FUN_00674898();
  if (iVar3 < 1) {
    iVar3 = 0;
  }
  else if (0x1ff < iVar3) {
    iVar3 = 0x1ff;
  }
  iVar3 = (&DAT_006f7a1c)[-iVar3];
  *(int *)(unaff_EDI + 0x3e1c) = (iVar1 * 0x2a0f >> 0xf) + 22000;
  *(int *)(unaff_EDI + 0x3e18) = 0x7fff - iVar3;
  return;
}

