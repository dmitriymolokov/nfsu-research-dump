/* Decompiled from Speed.exe @ 00402ad0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00402ad0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int unaff_EDI;
  
  puVar4 = (undefined4 *)0x0;
  do {
    if (param_1 == 0) {
      return;
    }
    puVar5 = DAT_0078e9e8;
    if (puVar4 != (undefined4 *)0x0) {
      puVar5 = (undefined4 *)*puVar4;
    }
    puVar2 = (undefined4 *)FUN_0040a880();
    puVar4 = puVar5;
    while( true ) {
      if (puVar4 == puVar2) {
        return;
      }
      if ((puVar4[7] != 0) && (*(int *)(puVar4[7] + 0x10) == param_1)) break;
      puVar4 = (undefined4 *)*puVar4;
    }
    piVar3 = (int *)FUN_00402a70(puVar4);
    if (piVar3 != (int *)0x0) {
      piVar1 = *(int **)(unaff_EDI + 4);
      *piVar1 = (int)piVar3;
      *(int **)(unaff_EDI + 4) = piVar3;
      piVar3[1] = (int)piVar1;
      *piVar3 = unaff_EDI;
    }
  } while( true );
}

