/* Decompiled from Speed.exe @ 0058c270 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 * FUN_0058c270(int param_1)

{
  char cVar1;
  char cVar2;
  undefined4 *puVar3;
  char *pcVar4;
  char *unaff_EDI;
  
  puVar3 = *(undefined4 **)(param_1 + 0x24);
  do {
    if (puVar3 == (undefined4 *)(param_1 + 0x24)) {
      return (undefined4 *)0x0;
    }
    pcVar4 = unaff_EDI;
    do {
      cVar1 = pcVar4[(int)puVar3 + (8 - (int)unaff_EDI)];
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      if ((cVar1 == '\0') || (cVar2 == '\0')) break;
    } while (cVar1 == cVar2);
    if (cVar1 == cVar2) {
      return puVar3;
    }
    puVar3 = (undefined4 *)*puVar3;
  } while( true );
}

