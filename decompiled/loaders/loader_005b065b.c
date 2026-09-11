/* Decompiled from Speed.exe @ 005b065b */
/* Module: Loader */
/* Ghidra DecompileAll */


int FUN_005b065b(int param_1)

{
  BOOL BVar1;
  uint uVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  int local_8;
  
  if (param_1 == 0) {
    DAT_006d4d00 = 0xffff;
    ppuVar4 = &PTR_FUN_006d4be0;
    ppuVar5 = &PTR_FUN_006d4ac0;
    for (iVar3 = 0x47; iVar3 != 0; iVar3 = iVar3 + -1) {
      *ppuVar5 = *ppuVar4;
      ppuVar4 = ppuVar4 + 1;
      ppuVar5 = ppuVar5 + 1;
    }
  }
  else if (DAT_006d4d00 == 0xffff) {
    DAT_006d4d00 = 0;
    ppuVar4 = &PTR_FUN_006d4be0;
    ppuVar5 = &PTR_FUN_006d4ac0;
    for (iVar3 = 0x47; iVar3 != 0; iVar3 = iVar3 + -1) {
      *ppuVar5 = *ppuVar4;
      ppuVar4 = ppuVar4 + 1;
      ppuVar5 = ppuVar5 + 1;
    }
    FUN_005d70ce(&PTR_FUN_006d4ac0);
    iVar3 = FUN_005b0484(4,"DisablePSGP",&param_1,4);
    if (iVar3 == 0) {
      param_1 = 0;
    }
    iVar3 = FUN_005b0484(4,"DisableD3DXPSGP",&local_8,4);
    if (iVar3 != 0) {
      param_1 = local_8;
    }
    if (param_1 != 1) {
      if ((param_1 == 2) || (BVar1 = IsProcessorFeaturePresent(7), BVar1 == 0)) {
        uVar2 = FUN_005b05b6();
        if ((uVar2 & 8) == 0) {
          BVar1 = IsProcessorFeaturePresent(6);
          if (BVar1 != 0) {
            FUN_005d662e(&PTR_FUN_006d4ac0);
            DAT_006d4d00 = 3;
          }
        }
        else {
          FUN_005d679c(&PTR_FUN_006d4ac0);
          DAT_006d4d00 = 2;
        }
      }
      else {
        FUN_005d69e4(&PTR_FUN_006d4ac0);
        DAT_006d4d00 = 1;
      }
    }
  }
  return DAT_006d4d00;
}

