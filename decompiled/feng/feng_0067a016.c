/* Decompiled from Speed.exe @ 0067a016 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* Library Function - Single Match
    __fassign
   
   Library: Visual Studio 2003 Release */

void __cdecl __fassign(int flag,char *argument,char *number)

{
  undefined4 local_c;
  undefined4 local_8;
  
  if (flag != 0) {
    FUN_0068170f(&local_c);
    *(undefined4 *)argument = local_c;
    *(undefined4 *)(argument + 4) = local_8;
    return;
  }
  FUN_00681752(&flag,number);
  *(int *)argument = flag;
  return;
}

