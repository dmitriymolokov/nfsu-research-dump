/* Decompiled from Speed.exe @ 0051bc00 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_0051bc00(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *unaff_EDI;
  
  uVar1 = unaff_EDI[1];
  if (((uVar1 != 0) || (unaff_EDI[2] != 0)) || (unaff_EDI[3] != 0)) {
    uVar3 = 1;
    if (uVar1 != 0) {
      iVar2 = FUN_005461c0(uVar1,0,0);
      uVar3 = (uint)(iVar2 != 0);
    }
    if (unaff_EDI[2] != 0) {
      iVar2 = FUN_005461c0(unaff_EDI[2],0,0);
      uVar3 = uVar3 & iVar2 != 0;
    }
    if (unaff_EDI[3] != 0) {
      iVar2 = FUN_005461c0(unaff_EDI[3],0,0);
      uVar3 = uVar3 & iVar2 != 0;
    }
    *unaff_EDI = uVar3;
  }
  return;
}

