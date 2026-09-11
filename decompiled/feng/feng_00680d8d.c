/* Decompiled from Speed.exe @ 00680d8d */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __sopen
   
   Library: Visual Studio 2003 Release */

int __cdecl __sopen(char *_Filename,int _OpenFlag,int _ShareFlag,...)

{
  int iVar1;
  undefined4 in_stack_00000010;
  undefined1 local_24 [4];
  undefined4 local_20 [5];
  undefined4 uStack_c;
  undefined4 local_8;
  
  uStack_c = 0x680d99;
  local_20[0] = 0;
  local_8 = 0;
  iVar1 = FUN_00680aa6(local_20,local_24,_Filename,_OpenFlag,in_stack_00000010);
  local_8 = 0xffffffff;
  FUN_00680dd2();
  return iVar1;
}

