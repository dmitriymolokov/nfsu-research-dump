/* Decompiled from Speed.exe @ 0045a5a4 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void fn_0045a5a4(void)

{
  code *pcVar1;
  char in_OF;
  
  pcVar1 = (code *)swi(4);
  if (in_OF == '\x01') {
    (*pcVar1)();
  }
  func_0x0045a65b();
  return;
}

