/* Decompiled from Speed.exe @ 0068141d */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* Library Function - Single Match
    __IncMan
   
   Library: Visual Studio 2003 Release */

void __IncMan(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(param_1 + (param_2 / 0x20) * 4);
  iVar1 = ___addl(*puVar3,1 << (0x1fU - (char)(param_2 % 0x20) & 0x1f),puVar3);
  iVar2 = param_2 / 0x20 + -1;
  if (-1 < iVar2) {
    puVar3 = (undefined4 *)(param_1 + iVar2 * 4);
    do {
      if (iVar1 == 0) {
        return;
      }
      iVar1 = ___addl(*puVar3,1,puVar3);
      iVar2 = iVar2 + -1;
      puVar3 = puVar3 + -1;
    } while (-1 < iVar2);
  }
  return;
}

