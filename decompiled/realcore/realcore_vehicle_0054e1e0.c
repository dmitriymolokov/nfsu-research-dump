/* Decompiled from Speed.exe @ 0054e1e0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


bool FUN_0054e1e0(undefined4 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 local_20;
  undefined4 local_1f;
  
  DAT_00734f74 = FUN_00663540();
  if (DAT_00734f74 == 0) {
    return false;
  }
  local_20 = 0;
  puVar3 = &local_1f;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(undefined1 *)((int)puVar3 + 2) = 0;
  uVar1 = FUN_00662670(param_1,param_2,param_2);
  FUN_0067101f(&local_20,"%s:%u:%u",uVar1);
  FUN_006635d0(DAT_00734f74,0x102,&local_20);
  return DAT_00734f74 != 0;
}

