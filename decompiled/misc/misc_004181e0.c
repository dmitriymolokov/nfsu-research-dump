/* Decompiled from Speed.exe @ 004181e0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_004181e0(int param_1)

{
  int iVar1;
  
  FUN_004f9340(param_1 + 0x26c);
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    FUN_004f68c0(0x20,"Player_DATA_0%d",iVar1);
    FUN_004f67f0(&DAT_006b9172);
  } while (iVar1 < 5);
  return;
}

