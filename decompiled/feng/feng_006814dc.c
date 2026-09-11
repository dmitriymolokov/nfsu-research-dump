/* Decompiled from Speed.exe @ 006814dc */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* Library Function - Single Match
    __CopyMan
   
   Library: Visual Studio 2003 Release */

void __CopyMan(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = 3;
  param_1 = param_1 - (int)param_2;
  do {
    *(undefined4 *)(param_1 + (int)param_2) = *param_2;
    param_2 = param_2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

