/* Decompiled from Speed.exe @ 004b0e50 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004b0e50(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  
  FUN_004af0e0();
  FUN_004f68c0(0x20,"CAR_NAME_%s",*param_2 * 0xc90 + DAT_00734588);
  uVar2 = FUN_004fd230();
  iVar3 = *(int *)(param_1 + 0x6c);
  if (iVar3 != 0) {
    *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) | 0x400000;
    puVar1 = DAT_00735710;
    bVar4 = DAT_00735710 != (undefined4 *)0x0;
    *(undefined4 *)(iVar3 + 0x5c) = uVar2;
    if (bVar4) {
      (**(code **)*puVar1)(iVar3);
    }
    *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) & 0xfffffffd | 0x400000;
  }
  if (DAT_00777b4c != 1) {
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar3 = FUN_004f65d0();
      if (iVar3 != 0) {
        iVar3 = FUN_004ffb70();
        if (iVar3 != 0) goto LAB_004b0fa7;
      }
    }
    if (DAT_0073578c == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_004ef050(0x13c45e);
    }
LAB_004b0fa7:
    FUN_004f6910(iVar3);
    FUN_004b1590(param_1,param_2);
    return;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar3 = FUN_004f65d0();
    if (iVar3 != 0) {
      iVar3 = FUN_004ffb70();
      if (iVar3 != 0) goto LAB_004b0f12;
    }
  }
  if (DAT_0073578c == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_004ef050(0x13c45e);
  }
LAB_004b0f12:
  FUN_004f6970(iVar3);
  if (((DAT_0073494c != 0) || (DAT_00735ec1 != '\0')) ||
     (uVar2 = DAT_0076026c, DAT_0073440c != '\0')) {
    uVar2 = 1000000000;
  }
  FUN_004f6850("Cash: %d",uVar2);
  FUN_004b1590(param_1,param_2);
  return;
}

