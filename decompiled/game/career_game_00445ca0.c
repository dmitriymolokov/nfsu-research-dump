/* Decompiled from Speed.exe @ 00445ca0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


int FUN_00445ca0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = DAT_0077a978;
  puVar2 = (undefined4 *)FUN_0040a880();
  do {
    if (puVar1 == puVar2) {
      return 0;
    }
    iVar4 = 0;
    if (0 < (int)puVar1[9]) {
      iVar3 = puVar1[8];
      do {
        if (*(int *)(puVar1[6] + *(short *)(iVar3 + 0xc) * 0x48) == param_1) {
          return iVar3;
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0x30;
      } while (iVar4 < (int)puVar1[9]);
    }
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}

