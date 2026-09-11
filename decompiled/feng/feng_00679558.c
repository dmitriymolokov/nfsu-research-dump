/* Decompiled from Speed.exe @ 00679558 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* Library Function - Single Match
    _siglookup
   
   Library: Visual Studio 2003 Release */

void __cdecl siglookup(void)

{
  uint uVar1;
  uint in_EDX;
  int unaff_ESI;
  
  uVar1 = in_EDX;
  do {
    if (*(int *)(uVar1 + 4) == unaff_ESI) {
      return;
    }
    uVar1 = uVar1 + 0xc;
  } while (uVar1 < in_EDX + DAT_006eb83c * 0xc);
  return;
}

