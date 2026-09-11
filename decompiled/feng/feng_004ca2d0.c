/* Decompiled from Speed.exe @ 004ca2d0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


bool FUN_004ca2d0(void)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  pcVar2 = (char *)FUN_00565b60(0xf660,0,0,0);
  FUN_004ab120(&DAT_00748f80,0xf660);
  iVar3 = FUN_00565b60(0xf660,0,0,0);
  FUN_004ab120(&DAT_007588c4,0xf660);
  bVar1 = false;
  iVar4 = 0;
  iVar3 = iVar3 - (int)pcVar2;
  do {
    if (*pcVar2 != pcVar2[iVar3]) {
      bVar1 = true;
      break;
    }
    iVar4 = iVar4 + 1;
    pcVar2 = pcVar2 + 1;
  } while (iVar4 < 0xf660);
  FUN_00565ce0();
  FUN_00565ce0();
  return !bVar1;
}

