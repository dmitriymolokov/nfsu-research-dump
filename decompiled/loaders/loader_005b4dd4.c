/* Decompiled from Speed.exe @ 005b4dd4 */
/* Module: Loader */
/* Ghidra DecompileAll */
/* M2 Pass B: __stdcall + goto FAIL/END → single ret 4 */


int __stdcall FUN_005b4dd4(uint param_1)
{
  int iVar1;
  
  if (((param_1 & 0x7fffffff) == param_1) || (*(int *)~param_1 != 1)) {
    goto FAIL;
  }
  iVar1 = ((int *)~param_1)[1];
  goto END;
FAIL:
  iVar1 = 0;
END:
  return iVar1;
}
