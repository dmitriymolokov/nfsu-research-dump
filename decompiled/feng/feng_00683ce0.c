/* Decompiled from Speed.exe @ 00683ce0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


int fn_00683ce0(void)

{
  int iVar1;
  
  iVar1 = func_0x00684843();
  if (iVar1 != 0) {
    __lock(3);
    iVar1 = FID_conflict___getch_lk();
    FUN_0067733f(3);
    return iVar1;
  }
  return 0;
}

