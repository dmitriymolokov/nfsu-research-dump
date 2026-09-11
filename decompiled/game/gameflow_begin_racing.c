/* Decompiled from Speed.exe @ 00449870 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00449870(void)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  float10 fVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = DAT_0073578c;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006897c3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((DAT_007183c8 != 0) && (ExceptionList = &local_c, DAT_0073578c != 0)) {
    ExceptionList = &local_c;
    iVar2 = FUN_004f3f90(&DAT_00746104);
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x18) != 0)) {
      FUN_004eebf0(*(undefined4 *)(iVar1 + 8),*(int *)(iVar2 + 0x18));
    }
  }
  DAT_00735564 = 0;
  if ((DAT_00735568 != 0) || (DAT_0073556c != 0)) {
    FUN_00408610();
    DAT_00735568 = 0;
    DAT_0073556c = 0;
    _DAT_00735570 = 0;
  }
  FUN_004655f0();
  FUN_00466970();
  FUN_0046ac40();
  FUN_004412b0(&DAT_0077b130);
  FUN_00576f80();
  FUN_004764e0();
  FUN_00546590();
  FUN_004432a0(&DAT_007372b0);
  FUN_004435e0();
  FUN_004430b0(DAT_0078a2fc != 1);
  FUN_00591d90();
  DAT_00735ee4 = 0;
  FUN_00455530();
  pvVar3 = _malloc(0xb0);
  local_4 = 1;
  if (pvVar3 == (void *)0x0) {
    DAT_007361f0 = 0;
  }
  else {
    DAT_007361f0 = FUN_00421c70(pvVar3);
  }
  local_4 = 0xffffffff;
  FUN_00480020(&DAT_007789f0);
  FUN_00444af0();
  FUN_00444480();
  _DAT_007360d8 = "Track";
  fVar4 = (float10)FUN_00585fa0();
  _DAT_0072cbd0 = (float)fVar4;
  _DAT_0072cbe0 = 0;
  _DAT_0077a90c = "GameFlowBeginRacing";
  DAT_0077a904 = &LAB_00449840;
  if (DAT_0077a918 != '\0') {
    DAT_0077a918 = '\0';
  }
  ExceptionList = local_c;
  return;
}

