/* Decompiled from Speed.exe @ 004b4590 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Removing unreachable block (ram,0x004b45cb) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004b4590(void)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  int unaff_ESI;
  
  uVar5 = DAT_006f227c % 0x7fffffff;
  uVar3 = DAT_006f227c ^ 0x1d872b41;
  uVar2 = uVar3 >> 5 ^ uVar3;
  DAT_006f227c = uVar2 << 0x1b ^ uVar2 ^ uVar3;
  fVar1 = (float)uVar5 * _DAT_006b5e7c;
  iVar4 = 0;
  pfVar6 = (float *)(&DAT_0077a400 + unaff_ESI * 0x28);
  do {
    if (fVar1 < *pfVar6 != (fVar1 == *pfVar6)) {
      if (iVar4 != -1) {
        return iVar4;
      }
      return 0;
    }
    iVar4 = iVar4 + 1;
    pfVar6 = pfVar6 + 1;
  } while (iVar4 < 10);
  return 0;
}

