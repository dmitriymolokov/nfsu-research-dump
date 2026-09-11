/* Decompiled from Speed.exe @ 00422130 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00422130(void)

{
  void *pvVar1;
  int iVar2;
  int unaff_EDI;
  int local_8;
  
  if (*(undefined4 **)(unaff_EDI + 0x38) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(unaff_EDI + 0x38))(1);
    *(undefined4 *)(unaff_EDI + 0x38) = 0;
  }
  if (*(undefined4 **)(unaff_EDI + 0x34) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(unaff_EDI + 0x34))(1);
    *(undefined4 *)(unaff_EDI + 0x34) = 0;
  }
  if (*(undefined4 **)(unaff_EDI + 0x3c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(unaff_EDI + 0x3c))(1);
    *(undefined4 *)(unaff_EDI + 0x3c) = 0;
  }
  if (*(undefined4 **)(unaff_EDI + 0x40) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(unaff_EDI + 0x40))(1);
    *(undefined4 *)(unaff_EDI + 0x40) = 0;
  }
  local_8 = 0;
  if (0 < DAT_007361c4) {
    do {
      FUN_00431100();
      local_8 = local_8 + 1;
    } while (local_8 < DAT_007361c4);
  }
  FUN_00422b70(unaff_EDI);
  FUN_00402cf0(&DAT_0078e9e0);
  pvVar1 = DAT_0073619c;
  if (DAT_0073619c != (void *)0x0) {
    if (*(void **)((int)DAT_0073619c + 0x564) != (void *)0x0) {
      _free(*(void **)((int)DAT_0073619c + 0x564));
    }
    DAT_0073619c = (void *)0x0;
    _free(pvVar1);
  }
  pvVar1 = DAT_007361f8;
  DAT_0073619c = (void *)0x0;
  if (DAT_007361f8 != (void *)0x0) {
    FUN_0041f9b0(DAT_007361f8);
    _free(pvVar1);
  }
  pvVar1 = DAT_007345d0;
  DAT_007361f8 = (void *)0x0;
  if (DAT_007345d0 != (void *)0x0) {
    FUN_005720f0(DAT_007345d0);
    _free(pvVar1);
  }
  pvVar1 = *(void **)(unaff_EDI + 0x48);
  DAT_007345d0 = (void *)0x0;
  if (pvVar1 != (void *)0x0) {
    if (DAT_00735ed0 != (undefined4 *)0x0) {
      (**(code **)*DAT_00735ed0)(1);
    }
    DAT_00735ed0 = (undefined4 *)0x0;
    _free(pvVar1);
  }
  iVar2 = DAT_007361c4;
  *(undefined4 *)(unaff_EDI + 0x48) = 0;
  while (iVar2 != 0) {
    pvVar1 = (void *)(&DAT_007361b8)[iVar2];
    if (pvVar1 != (void *)0x0) {
      FUN_0042bb60(pvVar1);
      _free(pvVar1);
      iVar2 = DAT_007361c4;
    }
  }
  FUN_00444590();
  return;
}

