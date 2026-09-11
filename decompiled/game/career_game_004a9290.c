/* spd-match: far pct=17.69 M4.0.2-CE */
/* Decompiled from Speed.exe @ 004a9290 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


undefined4 __fastcall FUN_004a9290(undefined4 *param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  pvVar1 = (void *)param_1[6];
  *param_1 = &PTR_FUN_006c65c0;
  if (pvVar1 != (void *)0x0) {
    FUN_00421900();
    _free(pvVar1);
  }
  pvVar1 = (void *)param_1[7];
  if (pvVar1 != (void *)0x0) {
    FUN_00421900();
    _free(pvVar1);
  }
  pvVar1 = (void *)param_1[8];
  if (pvVar1 != (void *)0x0) {
    FUN_00421900();
    _free(pvVar1);
  }
  pvVar1 = (void *)param_1[0xe];
  if (pvVar1 != (void *)0x0) {
    FUN_00421900();
    _free(pvVar1);
  }
  pvVar1 = (void *)param_1[9];
  if (pvVar1 != (void *)0x0) {
    FUN_00421900();
    _free(pvVar1);
  }
  pvVar1 = (void *)param_1[10];
  if (pvVar1 != (void *)0x0) {
    FUN_00421900();
    _free(pvVar1);
  }
  pvVar1 = (void *)param_1[0xb];
  if (pvVar1 != (void *)0x0) {
    FUN_00421900();
    _free(pvVar1);
  }
  pvVar1 = (void *)param_1[0xc];
  if (pvVar1 != (void *)0x0) {
    FUN_00421900();
    _free(pvVar1);
  }
  pvVar1 = (void *)param_1[0xd];
  if (pvVar1 != (void *)0x0) {
    FUN_00421900();
    _free(pvVar1);
  }
  pvVar1 = (void *)param_1[0xf];
  if (pvVar1 != (void *)0x0) {
    FUN_00421900();
    _free(pvVar1);
  }
  pvVar1 = (void *)param_1[0x10];
  if (pvVar1 != (void *)0x0) {
    FUN_00421900();
    _free(pvVar1);
  }
  pvVar1 = (void *)param_1[0x11];
  if (pvVar1 != (void *)0x0) {
    FUN_00421900();
    _free(pvVar1);
  }
  pvVar1 = (void *)param_1[0x12];
  if (pvVar1 != (void *)0x0) {
    FUN_00421900();
    _free(pvVar1);
  }
  pvVar1 = (void *)param_1[0x13];
  if (pvVar1 != (void *)0x0) {
    FUN_00421900();
    _free(pvVar1);
  }
  pvVar1 = (void *)param_1[0x14];
  if (pvVar1 != (void *)0x0) {
    FUN_004a8380();
    _free(pvVar1);
  }
  pvVar1 = (void *)param_1[0x15];
  if (pvVar1 != (void *)0x0) {
    FUN_004a8c50(pvVar1);
    _free(pvVar1);
  }
  pvVar1 = (void *)param_1[0x16];
  if (pvVar1 != (void *)0x0) {
    FUN_00421900();
    _free(pvVar1);
  }
  iVar2 = DAT_0073578c;
  uVar4 = param_1[4];
  if (DAT_0073578c != 0) {
    iVar3 = FUN_004f3f90(&DAT_00746104);
    uVar4 = 0;
    if ((iVar3 != 0) && (uVar4 = 0, *(int *)(iVar3 + 0x18) != 0)) {
      uVar4 = FUN_004eebf0(*(undefined4 *)(iVar2 + 8),*(int *)(iVar3 + 0x18));
    }
  }
  return uVar4;
}

