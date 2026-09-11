/* Decompiled from Speed.exe @ 00513780 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_00513780(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  undefined *puVar4;
  undefined1 local_740 [16];
  undefined4 local_730;
  int local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_006887db;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_004f78e0(param_1,param_2);
  local_14 = 0;
  *param_1 = &PTR_LAB_006c01ac;
  param_1[0x10] = DAT_006fb038;
  DAT_006fb038 = 0;
  FUN_004b2520();
  DAT_0073576c = (char *)0x0;
  FUN_0051bad0(&DAT_007449c8);
  if (DAT_00735e5c != '\0') {
    iVar2 = FUN_004f65d0();
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x1c) = 0xff;
    }
    DAT_00735770 = DAT_00735e50;
  }
  FUN_0051ae90();
  iVar2 = 0;
  do {
    if ((&DAT_00744ab0)[iVar2 * 2] == extraout_ECX) {
      iVar2 = *(int *)(&DAT_00744ab4 + iVar2 * 8);
      goto LAB_00513841;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x1b);
  iVar2 = 0;
LAB_00513841:
  iVar2 = (&DAT_006f88f8)[iVar2];
  if ((0 < iVar2) && (*(int *)(DAT_007356a8 + 0x104) != 0)) {
    puVar4 = (undefined *)0x0;
    if (0 < iVar2) {
      puVar4 = (&PTR_s_Ghetto_Fabolous_006f872c)[iVar2 * 2];
    }
    piVar1 = *(int **)(*(int *)(DAT_007356a8 + 0x104) + 0x24);
    if (puVar4 == (undefined *)0xffffffff) {
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x90))(0x59);
      }
    }
    else if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x98))(0x59,puVar4);
    }
    if ((_DAT_006cc960 < *(float *)(*(int *)(DAT_007356a8 + 8) + 4)) && (DAT_007356ac != 0)) {
      FUN_00536870(0xbf800000);
    }
  }
  if ((DAT_0073576c != (char *)0x0) && (*DAT_0073576c != '\0')) {
    FUN_0051bc80(*(undefined4 *)(DAT_0073576c + 0x35c),*(undefined4 *)(DAT_0073576c + 0x36c));
    iVar2 = FUN_004f3f90(&DAT_00746104);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + 0x14);
    }
    *(undefined4 *)(iVar2 + 0x9c) = 1;
    FUN_00417600();
    FUN_004ac5a0(DAT_0073576c + 4,0,local_740);
    if (((DAT_0073576c[0x450] & 1U) != 0) && (iVar2 = FUN_00504630(0xc,local_730), iVar2 != 0)) {
      FUN_0057ea50();
      local_24 = iVar2;
      FUN_0057ea80(local_740);
    }
    iVar2 = FUN_004b2330();
    FUN_004323f0(&DAT_00748850,local_740);
    _DAT_0072cc80 = 2;
    if (iVar2 != 0) {
      FUN_004b0e50(iVar2,&DAT_00748850,2);
    }
  }
  DAT_00735768 = 1;
  iVar3 = FUN_004f3f90(&DAT_00746104);
  iVar2 = DAT_0073578c;
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0x18) != 0)) {
    if (DAT_0073578c == 0) {
      ExceptionList = local_1c;
      return param_1;
    }
    iVar3 = FUN_004f3f90(&DAT_00746104);
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x18) != 0)) {
      FUN_004eebf0(*(undefined4 *)(iVar2 + 8),*(int *)(iVar3 + 0x18));
    }
  }
  if (DAT_0073578c != 0) {
    iVar3 = *(int *)(DAT_0073578c + 8);
    iVar2 = iVar3 + 0xdc;
    if ((iVar2 == 0) || (iVar2 = FUN_004fd1e0(iVar2), iVar2 == 0)) {
      FUN_004eede0(iVar3,"DummyMagazineBack.fng",0x10,0);
    }
  }
  ExceptionList = local_1c;
  return param_1;
}

