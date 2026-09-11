/* Decompiled from Speed.exe @ 00560710 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


undefined4 * FUN_00560710(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00688528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f78e0(param_1,param_2);
  iVar2 = param_1[3];
  local_4 = 0;
  *param_1 = &PTR_FUN_006bc7e4;
  uVar1 = FUN_004fd230();
  if (iVar2 == 0) {
LAB_00560770:
    if (DAT_0073578c != 0) {
      iVar2 = FUN_004ef050(uVar1);
      if (iVar2 != 0) goto LAB_00560788;
    }
  }
  else {
    iVar2 = FUN_004f65d0();
    if (iVar2 == 0) goto LAB_00560770;
    iVar2 = FUN_004ffb70();
    if (iVar2 == 0) goto LAB_00560770;
LAB_00560788:
    if (*(int *)(iVar2 + 0x18) == 2) goto LAB_00560790;
  }
  iVar2 = 0;
LAB_00560790:
  param_1[0x10] = iVar2;
  ExceptionList = local_c;
  return param_1;
}

