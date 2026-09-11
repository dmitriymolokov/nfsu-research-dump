/* Decompiled from Speed.exe @ 004c9bd0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004c9bd0(void)

{
  int unaff_EBX;
  int iVar1;
  
  FUN_004f9340(unaff_EBX + 0x8c);
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    FUN_004f68c0(0x20,"Player_DATA_0%d",iVar1);
    FUN_004f67f0(&DAT_006b9172);
  } while (iVar1 < 5);
  return;
}

