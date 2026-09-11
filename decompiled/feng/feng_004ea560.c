/* Decompiled from Speed.exe @ 004ea560 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004ea560(void)

{
  int iVar1;
  int iStack00000004;
  
  iVar1 = 1;
  iStack00000004 = 10;
  do {
    FUN_004f42f0("STATSTYPE_DATA_%02d",iVar1,&DAT_006b9172);
    FUN_004f6850();
    FUN_004f42f0("STATS_DATA_%02d",iVar1,&DAT_006b9172);
    FUN_004f6850();
    iVar1 = iVar1 + 1;
    iStack00000004 = iStack00000004 + -1;
  } while (iStack00000004 != 0);
  return;
}

