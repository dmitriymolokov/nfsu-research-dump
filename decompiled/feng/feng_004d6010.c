/* Decompiled from Speed.exe @ 004d6010 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 * FUN_004d6010(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined1 local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00688528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f78e0(param_1,param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_006c3e5c;
  iVar2 = FUN_004f3f90(&DAT_00746104);
  iVar1 = DAT_0073578c;
  if (((iVar2 != 0) && (*(int *)(iVar2 + 0x18) != 0)) && (DAT_0073578c != 0)) {
    iVar2 = FUN_004f3f90(&DAT_00746104);
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x18) != 0)) {
      FUN_004eebf0(*(undefined4 *)(iVar1 + 8),*(int *)(iVar2 + 0x18));
    }
  }
  iVar2 = FUN_004f3f90(&DAT_00746104);
  iVar1 = DAT_0073578c;
  if (((iVar2 != 0) && (*(int *)(iVar2 + 0x18) != 0)) && (DAT_0073578c != 0)) {
    iVar2 = FUN_004f3f90(&DAT_00746104);
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x18) != 0)) {
      FUN_004eebf0(*(undefined4 *)(iVar1 + 8),*(int *)(iVar2 + 0x18));
    }
  }
  if (DAT_00735e24 == 0) {
    if (DAT_00734998 != 0) {
      ppuVar3 = (undefined **)"intSSX";
      goto LAB_004d6120;
    }
  }
  else {
    if (DAT_00735e24 == 1) {
      if (DAT_00734998 == 0) {
        ppuVar3 = (undefined **)&DAT_006c3e80;
      }
      else {
        ppuVar3 = (undefined **)"intNFL";
      }
      goto LAB_004d6120;
    }
    if (DAT_00735e24 != 2) {
      ppuVar3 = &PTR_DAT_006c3e74;
      goto LAB_004d6120;
    }
  }
  ppuVar3 = (undefined **)"NASCAR";
LAB_004d6120:
  FUN_004f68c0(0x40,ppuVar3);
  FUN_004ce690(local_4c);
  ExceptionList = local_c;
  return param_1;
}

