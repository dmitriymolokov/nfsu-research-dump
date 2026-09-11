/* Decompiled from Speed.exe @ 00426110 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void __fastcall FUN_00426110(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  int unaff_ESI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0068668e;
  local_c = ExceptionList;
  if (param_1 == *(int *)(unaff_ESI + 0x28)) {
    return;
  }
  ExceptionList = &local_c;
  if (*(undefined4 **)(unaff_ESI + 0x34) != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    (**(code **)**(undefined4 **)(unaff_ESI + 0x34))(1);
  }
  *(undefined4 *)(unaff_ESI + 0x34) = 0;
  *(int *)(unaff_ESI + 0x28) = param_1;
  switch(param_1) {
  case 0:
    puVar1 = (undefined4 *)FUN_00567160();
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = 0;
      *puVar1 = &PTR_FUN_006caaf0;
      puVar1[2] = unaff_ESI + 0x40;
      *(undefined4 **)(unaff_ESI + 0x34) = puVar1;
      *(undefined4 *)(*(int *)(unaff_ESI + 0x3c) + 0x60) = 0;
      break;
    }
    goto LAB_004261fd;
  case 1:
    pvVar4 = _malloc(0x90);
    uStack_4 = 0;
    if (pvVar4 == (void *)0x0) {
      iVar3 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(unaff_ESI + 0xc);
      iVar3 = unaff_ESI;
      uVar2 = FUN_0057f130(uVar5);
      iVar3 = FUN_00476840(pvVar4,uVar2,uVar5,iVar3);
    }
    *(int *)(unaff_ESI + 0x34) = iVar3;
    *(undefined4 *)(iVar3 + 0x78) = *(undefined4 *)(unaff_ESI + 0x478);
    *(undefined4 *)(*(int *)(unaff_ESI + 0x3c) + 0x60) = 1;
    break;
  case 2:
    pvVar4 = _malloc(0x24);
    if (pvVar4 != (void *)0x0) {
      uVar5 = FUN_005753c0();
      *(undefined4 *)(unaff_ESI + 0x34) = uVar5;
      *(undefined4 *)(*(int *)(unaff_ESI + 0x3c) + 0x60) = 0;
      break;
    }
LAB_004261fd:
    *(undefined4 *)(unaff_ESI + 0x34) = 0;
    *(undefined4 *)(*(int *)(unaff_ESI + 0x3c) + 0x60) = 0;
    break;
  case 3:
    iVar3 = FUN_00567160();
    uStack_4 = 1;
    if (iVar3 == 0) {
      *(undefined4 *)(unaff_ESI + 0x34) = 0;
      *(undefined4 *)(*(int *)(unaff_ESI + 0x3c) + 0x60) = 1;
    }
    else {
      uVar5 = FUN_004740d0(iVar3,unaff_ESI,*(undefined4 *)(unaff_ESI + 0x20));
      *(undefined4 *)(unaff_ESI + 0x34) = uVar5;
      *(undefined4 *)(*(int *)(unaff_ESI + 0x3c) + 0x60) = 1;
    }
    break;
  case 4:
    pvVar4 = _malloc(0x48);
    uStack_4 = 2;
    if (pvVar4 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_00463260(pvVar4);
    }
    *(undefined4 *)(unaff_ESI + 0x34) = uVar5;
    *(undefined4 *)(*(int *)(unaff_ESI + 0x3c) + 0x60) = 0;
  }
  FUN_00469f30();
  *(undefined4 *)(*(int *)(unaff_ESI + 0x34) + 4) = *(undefined4 *)(unaff_ESI + 0x30);
  ExceptionList = local_c;
  return;
}

