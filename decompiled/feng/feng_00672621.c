/* Decompiled from Speed.exe @ 00672621 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 thunk_FUN_006725f7(LPCSTR param_1)

{
  BOOL BVar1;
  ulong uVar2;
  
  BVar1 = DeleteFileA(param_1);
  if (BVar1 == 0) {
    uVar2 = GetLastError();
  }
  else {
    uVar2 = 0;
  }
  if (uVar2 != 0) {
    __dosmaperr(uVar2);
    return 0xffffffff;
  }
  return 0;
}

