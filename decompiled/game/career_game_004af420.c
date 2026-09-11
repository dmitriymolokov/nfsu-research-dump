/* Decompiled from Speed.exe @ 004af420 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


undefined * FUN_004af420(void)

{
  undefined *puVar1;
  int unaff_ESI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00688d0e;
  local_10 = ExceptionList;
  if ((DAT_00792fa0 & 1) == 0) {
    DAT_00792fa0 = DAT_00792fa0 | 1;
    local_8 = 0;
    ExceptionList = &local_10;
    _eh_vector_constructor_iterator_(&DAT_0078f620,0x1cc0,2,FUN_004aefa0,FUN_004af020);
    _atexit((_func_4879 *)&LAB_006964a0);
  }
  if ((unaff_ESI == 1) || (puVar1 = &DAT_007912e0, unaff_ESI != 2)) {
    puVar1 = &DAT_0078f620;
  }
  ExceptionList = local_10;
  return puVar1;
}

