/* Decompiled from Speed.exe @ 00504260 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 __fastcall FUN_00504260(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  for (puVar1 = (undefined4 *)*param_2;
      (puVar1 != param_2 && (iVar2 = iVar2 + 1, puVar1 != (undefined4 *)0x0));
      puVar1 = (undefined4 *)*puVar1) {
  }
  switch(iVar2) {
  case 0:
    return 0x1c2d8258;
  case 1:
    return 0x1c2d8259;
  case 2:
    return 0x1c2d825a;
  case 3:
    return 0x1c2d825b;
  case 4:
    return 0x1c2d825c;
  case 5:
    return 0x1c2d825d;
  case 6:
    return 0x1c2d825e;
  default:
    return 0;
  }
}

