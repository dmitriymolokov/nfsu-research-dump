/* Decompiled from Speed.exe @ 0054b310 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0054b310(void)

{
  int iVar1;
  
  if (DAT_0073d8d0 == 0) {
    return -1;
  }
  FUN_00664990(DAT_0073d8d0);
  iVar1 = FUN_00664ac0(DAT_0073d8d0,DAT_007346cc,DAT_006f1f60,FUN_0054c9a0,&DAT_0073d868);
  if (-1 < iVar1) {
    _DAT_0073dda4 = DAT_0073dda0;
    DAT_0073dda0 = 3;
    iVar1 = 0;
  }
  return iVar1;
}

