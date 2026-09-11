/* Decompiled from Speed.exe @ 00677404 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* Library Function - Single Match
    ___sbh_heap_init
   
   Library: Visual Studio 2003 Release */

undefined4 ___sbh_heap_init(undefined4 param_1)

{
  DAT_00793208 = HeapAlloc(DAT_0079321c,0,0x140);
  if (DAT_00793208 == (LPVOID)0x0) {
    return 0;
  }
  DAT_00793200 = 0;
  DAT_00793204 = 0;
  DAT_00793210 = DAT_00793208;
  DAT_0079320c = param_1;
  DAT_00793214 = 0x10;
  return 1;
}

