/* Decompiled from Speed.exe @ 00673f51 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* Library Function - Single Match
    ___lc_lctostr
   
   Library: Visual Studio 2003 Release */

void ___lc_lctostr(undefined4 param_1,int param_2)

{
  FUN_0067e1d0(param_1,param_2);
  if (*(char *)(param_2 + 0x40) != '\0') {
    __strcats(param_1,2,&DAT_006b7e1c,(char *)(param_2 + 0x40));
  }
  if (*(char *)(param_2 + 0x80) != '\0') {
    __strcats(param_1,2,&DAT_006bd5a0,(char *)(param_2 + 0x80));
  }
  return;
}

