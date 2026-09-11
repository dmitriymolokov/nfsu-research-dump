/* Decompiled from Speed.exe @ 004c9570 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined1 FUN_004c9570(void)

{
  char *pcVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  
  if (DAT_00735e38 == 0) {
    return 1;
  }
  pcVar1 = (char *)FUN_00565b60(0xf660,0,0,0);
  FUN_004ab120(&DAT_007588c4,0xf660);
  uVar3 = 0;
  iVar2 = 0;
  iVar4 = DAT_00735e38 - (int)pcVar1;
  do {
    if (*pcVar1 != pcVar1[iVar4]) {
      uVar3 = 1;
      break;
    }
    iVar2 = iVar2 + 1;
    pcVar1 = pcVar1 + 1;
  } while (iVar2 < 0xf660);
  FUN_00565ce0();
  if (DAT_00735e38 != 0) {
    FUN_00565ce0();
    DAT_00735e38 = 0;
  }
  return uVar3;
}

