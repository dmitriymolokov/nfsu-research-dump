/* Decompiled from Speed.exe @ 00565a40 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


int FUN_00565a40(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  char *unaff_EDI;
  
  FUN_0063f190(param_1 + 0x3c);
  iVar3 = 0;
  if (unaff_EDI != (char *)0x0) {
    cVar1 = *unaff_EDI;
    while (cVar1 != '\0') {
      iVar4 = iVar3 + 1;
      iVar3 = iVar3 + 1;
      cVar1 = unaff_EDI[iVar4];
    }
  }
  iVar3 = 0;
  for (puVar2 = *(undefined4 **)(param_1 + 0xc); puVar2 != (undefined4 *)(param_1 + 0xc);
      puVar2 = (undefined4 *)*puVar2) {
    iVar4 = FUN_00567d50();
    if (iVar4 == 0) {
      iVar3 = iVar3 + puVar2[3];
    }
  }
  FUN_0063f1a0(param_1 + 0x3c);
  return iVar3;
}

