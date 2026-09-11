/* spd-match: far pct=19.61 M4.0.2-CE */
/* Decompiled from Speed.exe @ 00434590 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void __thiscall FUN_00434590(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = (undefined1 *)&LAB_00689773;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00434a80();
  FUN_00435d30(param_1);
  FUN_00434b50(param_1,param_2);
  if ((DAT_0078a368 == 0) || (DAT_0078a320 != 2)) {
    iVar2 = *(int *)(param_1 + 0x30);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x16c);
  }
  iVar2 = *(int *)(iVar2 + 0x10);
  if (*(char *)(iVar2 + 0x424) == -1) {
    FUN_0057f2b0(1);
  }
  cVar1 = *(char *)(iVar2 + 0x424);
  pvVar3 = _malloc(0x804);
  uStack_4 = 0;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00432e80(pvVar3,(int)cVar1);
  }
  *(undefined4 *)(param_1 + 0x564) = uVar4;
  ExceptionList = pvStack_c;
  return;
}

