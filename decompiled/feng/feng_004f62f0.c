/* Decompiled from Speed.exe @ 004f62f0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004f62f0(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_0073578c != 0) {
    iVar1 = *(int *)(DAT_0073578c + 8);
    iVar2 = iVar1 + 0xdc;
    if ((iVar2 == 0) || (iVar2 = FUN_004fd1e0(iVar2), iVar2 == 0)) {
      FUN_004eede0(iVar1,"GarageMain.fng",0x10,0);
    }
  }
  return;
}

