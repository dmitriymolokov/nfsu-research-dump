/* Decompiled from Speed.exe @ 0067972e */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* Library Function - Single Match
    _setSBCS
   
   Library: Visual Studio 2003 Release */

void __cdecl setSBCS(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_00792fe0;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_007930e4 = 0;
  DAT_00792fc8 = 0;
  DAT_00792fc0 = 0;
  DAT_007930f0 = 0;
  DAT_007930f4 = 0;
  DAT_007930f8 = 0;
  return;
}

