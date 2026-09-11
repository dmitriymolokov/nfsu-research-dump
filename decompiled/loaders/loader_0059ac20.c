/* Decompiled from Speed.exe @ 0059ac20 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Removing unreachable block (ram,0x0059ac5e) */

undefined1 __fastcall FUN_0059ac20(undefined4 param_1)

{
  int iVar1;
  float10 fVar2;
  undefined1 local_5;
  
  local_5 = 0;
  iVar1 = FUN_00421960(param_1);
  if (iVar1 == 4) {
    fVar2 = (float10)FUN_0041f5f0();
    local_5 = FUN_0059ad90((float)fVar2);
  }
  return local_5;
}

