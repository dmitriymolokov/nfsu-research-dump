/* Decompiled from Speed.exe @ 00445c60 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


int * FUN_00445c60(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int unaff_EDI;
  
  puVar1 = DAT_0077a978;
  puVar2 = (undefined4 *)FUN_0040a880();
  do {
    if (puVar1 == puVar2) {
      return (int *)0x0;
    }
    iVar4 = 0;
    if (0 < (int)puVar1[7]) {
      piVar3 = (int *)puVar1[6];
      do {
        if (*piVar3 == unaff_EDI) {
          return piVar3;
        }
        iVar4 = iVar4 + 1;
        piVar3 = piVar3 + 0x12;
      } while (iVar4 < (int)puVar1[7]);
    }
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}

