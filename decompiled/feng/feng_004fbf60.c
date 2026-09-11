/* Decompiled from Speed.exe @ 004fbf60 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_004fbf60(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int unaff_ESI;
  int iVar3;
  
  if (-1 < *(char *)(unaff_ESI + 3)) {
    cVar1 = *(char *)(unaff_ESI + 2);
    if (cVar1 == '\0') {
      FUN_004fc9a0(param_2,param_1);
    }
    else if ((cVar1 == '\x01') || (cVar1 == '\x03')) {
      FUN_004fc100();
    }
    iVar3 = 0;
    iVar2 = *(int *)(unaff_ESI + 0x30);
    if (*(char *)(unaff_ESI + 0x2c) != '\0') {
      iVar2 = FUN_004fc0e0();
    }
    if (iVar2 != 0) {
      do {
        iVar2 = *(int *)(iVar2 + 4);
        iVar3 = iVar3 + 1;
      } while (iVar2 != 0);
      if (iVar3 != 0) {
        return;
      }
    }
    *(byte *)(unaff_ESI + 3) = *(byte *)(unaff_ESI + 3) | 0x80;
  }
  return;
}

