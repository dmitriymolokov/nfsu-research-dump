/* spd-match: far pct=11.29 M4.0.2-CE */
/* Decompiled from Speed.exe @ 00424160 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


undefined4  FUN_00424160(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = (undefined1 *)&LAB_006896eb;
  local_10 = ExceptionList;
  switch(param_2) {
  case 1:
    break;
  case 2:
    ExceptionList = &local_10;
    FUN_0049e3e0(*(undefined4 *)(param_1 + 0x48));
    if (*(undefined4 **)(param_1 + 0x40) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x40))(1);
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
    if (*(undefined4 **)(param_1 + 0x30) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x30))(1);
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    *(undefined4 *)(param_1 + 0xac) = 0;
    FUN_00574190();
    ExceptionList = local_10;
    return 1;
  case 3:
    if (DAT_006f08a4 < *(int *)(DAT_007345d0 + 0xa0)) {
      return 1;
    }
  case 0xb:
    ExceptionList = &local_10;
    if (*(undefined4 **)(param_1 + 0x30) != (undefined4 *)0x0) {
      ExceptionList = &local_10;
      (**(code **)**(undefined4 **)(param_1 + 0x30))(1);
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    cVar2 = FUN_005729d0();
    if (cVar2 != '\0') {
      pvVar3 = _malloc(0x34);
      if (pvVar3 != (void *)0x0) {
        uVar4 = FUN_0047e270(*(undefined4 *)(DAT_007361f8 + 0x28 + *(int *)(param_1 + 0xac) * 4));
        *(undefined4 *)(param_1 + 0x30) = uVar4;
        ExceptionList = local_10;
        return 1;
      }
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    ExceptionList = local_10;
    return 1;
  default:
    return 0;
  case 8:
    ExceptionList = &local_10;
    FUN_00495e20();
    if (DAT_0078a320 == 1) {
      FUN_00495ec0();
    }
    FUN_00421ae0(0);
    FUN_00421bc0(8,0);
    ExceptionList = local_10;
    return 1;
  case 9:
    ExceptionList = &local_10;
    FUN_00421ae0(0);
    FUN_00421bc0(9,param_3);
    ExceptionList = local_10;
    return 1;
  case 10:
    ExceptionList = &local_10;
    FUN_00421ae0(0);
    FUN_00421bc0(10,0);
    ExceptionList = local_10;
    return 1;
  case 0xc:
    ExceptionList = &local_10;
    FUN_00421ae0(5);
    ExceptionList = local_10;
    return 1;
  case 0xd:
    return 1;
  }
  param_2 = 0;
  ExceptionList = &local_10;
  if (0 < *(int *)(DAT_007361f8 + 0x18)) {
    iVar5 = 0x28;
    ExceptionList = &local_10;
    do {
      iVar1 = *(int *)(*(int *)(iVar5 + DAT_007361f8) + 0x868);
      if ((iVar1 != 0) && (FUN_0058dc10(), *(char *)(iVar1 + 8) != '\0')) {
        *(undefined1 *)(iVar1 + 8) = 0;
      }
      param_2 = param_2 + 1;
      iVar5 = iVar5 + 4;
    } while (param_2 < *(int *)(DAT_007361f8 + 0x18));
  }
  iVar5 = 0;
  if (0 < DAT_007361c4) {
    do {
      FUN_0042c6d0((&DAT_007361bc)[iVar5],0,0);
      iVar5 = iVar5 + 1;
    } while (iVar5 < DAT_007361c4);
  }
  if (DAT_00735ed0 != 0) {
    FUN_004f61f0();
  }
  *(undefined4 *)(param_1 + 0xac) = 0;
  if (*(undefined4 **)(param_1 + 0x3c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x3c))(1);
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  if (DAT_0077981c == 0) {
    FUN_00444590();
  }
  else {
    DAT_00779818 = DAT_0077981c;
    FUN_0047ba30(DAT_0077981c);
  }
  pvVar3 = _malloc(0x2c);
  local_8 = 0;
  if (pvVar3 == (void *)0x0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    ExceptionList = local_10;
    return 1;
  }
  uVar4 = FUN_0047f680(pvVar3,1);
  *(undefined4 *)(param_1 + 0x40) = uVar4;
  ExceptionList = local_10;
  return 1;
}

