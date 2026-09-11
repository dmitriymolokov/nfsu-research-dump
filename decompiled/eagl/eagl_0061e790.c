/* Decompiled from Speed.exe @ 0061e790 */
/* Module: EAGL */
/* Ghidra DecompileAll */


undefined4 FUN_0061e790(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined1 local_10 [8];
  undefined4 local_8;
  
  local_8 = 0;
  cVar1 = FUN_0061e6d0(param_1,param_2,local_10);
  if (cVar1 != '\0') {
    *param_3 = local_8;
    return 1;
  }
  return 0;
}

