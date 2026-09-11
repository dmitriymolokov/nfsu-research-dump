/* Decompiled from Speed.exe @ 005ab080 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Removing unreachable block (ram,0x005ab0cf) */
/* WARNING: Removing unreachable block (ram,0x005ab127) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005ab080(int param_1)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  int iVar7;
  uint uVar8;
  
  iVar4 = DAT_007361f8;
  iVar7 = 4;
  pfVar6 = (float *)(param_1 + 0x30);
  do {
    uVar2 = *(uint *)(iVar4 + 0x2d0);
    fVar1 = pfVar6[8];
    uVar8 = uVar2 ^ 0x1d872b41;
    uVar5 = uVar8 >> 5 ^ uVar8;
    *(uint *)(iVar4 + 0x2d0) = uVar5 << 0x1b ^ uVar5 ^ uVar8;
    fVar3 = (float)(uVar2 % 0x7fffffff) * _DAT_006b5e7c * fVar1;
    pfVar6[0x2c] = ((fVar3 + fVar3) - fVar1) + *pfVar6;
    uVar2 = *(uint *)(iVar4 + 0x2d0);
    fVar1 = pfVar6[9];
    uVar8 = uVar2 ^ 0x1d872b41;
    uVar5 = uVar8 >> 5 ^ uVar8;
    *(uint *)(iVar4 + 0x2d0) = uVar5 << 0x1b ^ uVar5 ^ uVar8;
    iVar7 = iVar7 + -1;
    fVar3 = (float)(uVar2 % 0x7fffffff) * _DAT_006b5e7c * fVar1;
    pfVar6[0x2d] = ((fVar3 + fVar3) - fVar1) + pfVar6[1];
    pfVar6 = pfVar6 + 2;
  } while (iVar7 != 0);
  return;
}

