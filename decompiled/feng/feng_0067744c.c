/* Decompiled from Speed.exe @ 0067744c */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* Library Function - Single Match
    ___sbh_find_block
   
   Library: Visual Studio 2003 Release */

uint ___sbh_find_block(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_00793208;
  while( true ) {
    if (DAT_00793208 + DAT_00793204 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}

