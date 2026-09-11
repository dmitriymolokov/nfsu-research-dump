/* Decompiled from Speed.exe @ 004053f0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004053f0(void)

{
  undefined1 *puVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  undefined1 *_Memory;
  int unaff_ESI;
  char *unaff_EDI;
  
  DAT_00736520 = DAT_00736520 + 1;
  puVar1 = (undefined1 *)(unaff_ESI + 0xc);
  _Memory = (undefined1 *)0x0;
  if (*(undefined1 **)(unaff_ESI + 8) != puVar1) {
    _Memory = *(undefined1 **)(unaff_ESI + 8);
  }
  if (unaff_EDI == (char *)0x0) {
    *(undefined1 **)(unaff_ESI + 8) = puVar1;
    *puVar1 = 0;
  }
  else {
    pcVar3 = unaff_EDI;
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    if ((int)pcVar3 - (int)(unaff_EDI + 1) < 0x24) {
      _DAT_00736524 = _DAT_00736524 + 1;
      *(undefined1 **)(unaff_ESI + 8) = puVar1;
      iVar4 = (int)puVar1 - (int)unaff_EDI;
      do {
        cVar2 = *unaff_EDI;
        unaff_EDI[iVar4] = cVar2;
        unaff_EDI = unaff_EDI + 1;
      } while (cVar2 != '\0');
    }
    else {
      DAT_00736528 = DAT_00736528 + 1;
      pcVar3 = _malloc(((int)pcVar3 - (int)(unaff_EDI + 1)) + 1);
      *(char **)(unaff_ESI + 8) = pcVar3;
      do {
        cVar2 = *unaff_EDI;
        unaff_EDI = unaff_EDI + 1;
        *pcVar3 = cVar2;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
    }
  }
  if (_Memory != (undefined1 *)0x0) {
    _free(_Memory);
  }
  return;
}

