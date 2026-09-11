/* Decompiled from Speed.exe @ 00679519 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* Library Function - Single Match
    void __cdecl _inconsistency(void)
   
   Library: Visual Studio 2003 Release */

void __cdecl _inconsistency(void)

{
  if (PTR_terminate_006ebb00 != (undefined *)0x0) {
    (*(code *)PTR_terminate_006ebb00)();
  }
  terminate();
  return;
}

