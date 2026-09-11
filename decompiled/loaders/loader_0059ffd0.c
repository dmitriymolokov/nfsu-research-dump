/* Decompiled from Speed.exe @ 0059ffd0 */
/* Module: Loader */
/* Ghidra DecompileAll */


int FUN_0059ffd0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 8;
  do {
    FUN_004a9990();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *(undefined4 *)(param_1 + 0xae0) = *(undefined4 *)(param_2 + 0xae0);
  return param_1;
}

