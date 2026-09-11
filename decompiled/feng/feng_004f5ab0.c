/* Decompiled from Speed.exe @ 004f5ab0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004f5ab0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (DAT_00735788 == 0) {
    puVar3 = &DAT_006f923c;
    do {
      uVar1 = puVar3[-3];
      iVar2 = 0;
      do {
        FUN_00574020(uVar1,&LAB_004f5b40,param_1);
        iVar2 = iVar2 + 1;
      } while (iVar2 < 2);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      FUN_00575940("Add Joy handler: %s\n",puVar3[-1]);
      puVar3 = puVar3 + 7;
    } while ((int)puVar3 < 0x6f9488);
    FUN_00574020(0x2c,&LAB_0059f5b0,0);
  }
  DAT_00735788 = 1;
  return;
}

