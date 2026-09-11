/* Decompiled from Speed.exe @ 00673e5b */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* Library Function - Single Match
    __strcats
   
   Library: Visual Studio 2003 Release */

void __strcats(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (0 < param_2) {
    puVar1 = &param_2;
    iVar2 = param_2;
    do {
      puVar1 = puVar1 + 1;
      FUN_0067e1e0(param_1,*puVar1);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

