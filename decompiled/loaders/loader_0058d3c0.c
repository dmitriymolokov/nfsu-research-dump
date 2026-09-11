/* Decompiled from Speed.exe @ 0058d3c0 */
/* Module: Loader */
/* Ghidra DecompileAll */


bool __fastcall FUN_0058d3c0(int *param_1)

{
  if (*param_1 == 0x504d4f43) {
    return (char)param_1[1] == '\x01';
  }
  if (*param_1 == 0x5a4c444a) {
    return (char)param_1[1] == '\x02';
  }
  return false;
}

