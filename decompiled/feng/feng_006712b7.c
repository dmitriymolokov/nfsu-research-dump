/* Decompiled from Speed.exe @ 006712b7 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _flsall
   
   Library: Visual Studio 2003 Release */

int __cdecl flsall(int param_1)

{
  void *_File;
  int iVar1;
  int _Index;
  undefined4 local_24;
  undefined4 local_20;
  
  local_20 = 0;
  local_24 = 0;
  __lock(1);
  for (_Index = 0; _Index < DAT_00794360; _Index = _Index + 1) {
    _File = *(void **)(DAT_00793350 + _Index * 4);
    if ((_File != (void *)0x0) && ((*(byte *)((int)_File + 0xc) & 0x83) != 0)) {
      __lock_file2(_Index,_File);
      iVar1 = *(int *)(DAT_00793350 + _Index * 4);
      if ((*(uint *)(iVar1 + 0xc) & 0x83) != 0) {
        if (param_1 == 1) {
          iVar1 = __fflush_lk(iVar1);
          if (iVar1 != -1) {
            local_20 = local_20 + 1;
          }
        }
        else if ((param_1 == 0) && ((*(uint *)(iVar1 + 0xc) & 2) != 0)) {
          iVar1 = __fflush_lk(iVar1);
          if (iVar1 == -1) {
            local_24 = -1;
          }
        }
      }
      FUN_00671357();
    }
  }
  FUN_00671383();
  if (param_1 != 1) {
    local_20 = local_24;
  }
  return local_20;
}

