/* Decompiled from Speed.exe @ 004c4830 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_004c4830(undefined4 *param_1)

{
  int *_Memory;
  int iVar1;
  int *piVar2;
  int iVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00687343;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_006c52f0;
  local_4 = 1;
  iVar3 = FUN_004f3f90(&DAT_00746104);
  iVar1 = DAT_0073578c;
  if ((((iVar3 != 0) && (*(int *)(iVar3 + 0x18) != 0)) && (DAT_0073578c != 0)) &&
     ((iVar3 = FUN_004f3f90(&DAT_00746104), iVar3 != 0 && (*(int *)(iVar3 + 0x18) != 0)))) {
    FUN_004eebf0(*(undefined4 *)(iVar1 + 8),*(int *)(iVar3 + 0x18));
  }
  DAT_0073570c = 0;
  if (DAT_0073578c != 0) {
    FUN_004f6010(DAT_0073578c);
  }
  FUN_00567000(DAT_00735708);
  if ((undefined4 *)param_1[0x10] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x10])(1);
  }
  _Memory = (int *)param_1[0x11];
  while (_Memory != param_1 + 0x11) {
    iVar1 = *_Memory;
    piVar2 = (int *)_Memory[1];
    *piVar2 = iVar1;
    *(int **)(iVar1 + 4) = piVar2;
    _free(_Memory);
    _Memory = (int *)param_1[0x11];
  }
  local_4 = 0xffffffff;
  FUN_004f7b50();
  ExceptionList = pvStack_c;
  return;
}

