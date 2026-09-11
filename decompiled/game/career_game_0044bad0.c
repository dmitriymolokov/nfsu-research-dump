/* Decompiled from Speed.exe @ 0044bad0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


bool __fastcall FUN_0044bad0(int param_1,undefined1 *param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0xb);
  if (cVar1 == '\x02') {
    *param_2 = 1;
    return true;
  }
  if (cVar1 == '\x05') {
    *param_2 = 0;
  }
  return cVar1 == '\x05';
}

