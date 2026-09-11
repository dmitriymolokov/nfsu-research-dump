/* Decompiled from Speed.exe @ 00675080 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* Library Function - Single Match
    __FF_MSGBANNER
   
   Library: Visual Studio 2003 Release */

void __cdecl __FF_MSGBANNER(void)

{
  if ((DAT_00717a7c == 1) || ((DAT_00717a7c == 0 && (DAT_006eb1b8 == 1)))) {
    FUN_00674f09(0xfc);
    if (DAT_00717b08 != (code *)0x0) {
      (*DAT_00717b08)();
    }
    FUN_00674f09(0xff);
  }
  return;
}

