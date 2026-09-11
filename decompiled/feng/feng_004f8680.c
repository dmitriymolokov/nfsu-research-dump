/* Decompiled from Speed.exe @ 004f8680 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004f8680(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_004f65d0();
  iVar3 = *(int *)(iVar1 + 0x40);
  iVar1 = *(int *)(iVar1 + 0x44);
  iVar2 = FUN_004fd230();
  while( true ) {
    if (*(int *)(iVar3 + 0x10) == iVar2) {
      FUN_004f6910(iVar3);
    }
    if (iVar3 == iVar1) break;
    iVar3 = *(int *)(iVar3 + 4);
  }
  return;
}

