/* Decompiled from Speed.exe @ 00438300 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00438300(float param_1)

{
  int iVar1;
  int unaff_ESI;
  
  if (_DAT_00700a58 < param_1) {
    FUN_00437fe0();
    iVar1 = FUN_00674898();
    *(int *)(unaff_ESI + 0x234) = iVar1 + DAT_0073ad34;
    *(int *)(unaff_ESI + 0x23c) = DAT_0073ad34 + 10000;
  }
  return;
}

