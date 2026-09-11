/* Decompiled from Speed.exe @ 005c8062 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 __fastcall FUN_005c8062(undefined4 *param_1)

{
  if ((LPCVOID)param_1[2] != (LPCVOID)0x0) {
    UnmapViewOfFile((LPCVOID)param_1[2]);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  if ((HANDLE)param_1[1] != (HANDLE)0xffffffff) {
    CloseHandle((HANDLE)param_1[1]);
    param_1[1] = 0xffffffff;
  }
  if ((HANDLE)*param_1 != (HANDLE)0xffffffff) {
    CloseHandle((HANDLE)*param_1);
    *param_1 = 0xffffffff;
  }
  return 0;
}

