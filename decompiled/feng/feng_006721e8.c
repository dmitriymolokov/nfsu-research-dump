/* Decompiled from Speed.exe @ 006721e8 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall `eh vector constructor iterator'(void *,unsigned int,int,void (__thiscall*)(void
   *),void (__thiscall*)(void *))
   
   Library: Visual Studio 2003 Release */

void _eh_vector_constructor_iterator_
               (void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4,
               _func_void_void_ptr *param_5)

{
  void *unaff_EDI;
  undefined4 local_24;
  
  for (local_24 = 0; local_24 < param_3; local_24 = local_24 + 1) {
    (*param_4)(unaff_EDI);
  }
  FUN_00672232();
  return;
}

