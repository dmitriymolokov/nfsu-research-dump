/* Decompiled from Speed.exe @ 00680174 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* Library Function - Single Match
    __isatty
   
   Library: Visual Studio 2003 Release */

int __cdecl __isatty(int _FileHandle)

{
  if (DAT_00793224 <= (uint)_FileHandle) {
    return 0;
  }
  return (int)*(char *)((&DAT_00793240)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x24) & 0x40
  ;
}

