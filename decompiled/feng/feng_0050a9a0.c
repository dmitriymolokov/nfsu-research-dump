/* Decompiled from Speed.exe @ 0050a9a0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0050a9a0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0068731e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_006c01cc;
  local_4 = 2;
  FUN_00504450();
  FUN_004323f0(&DAT_00745000,&DAT_00745720);
  iVar3 = FUN_004b2330();
  FUN_004323f0(&DAT_00748850,&DAT_00745720);
  _DAT_0072cc80 = 2;
  if (iVar3 != 0) {
    FUN_004b0e50(iVar3,&DAT_00748850,2);
  }
  if ((*(int *)(DAT_007356a8 + 0x104) != 0) &&
     (piVar1 = *(int **)(*(int *)(DAT_007356a8 + 0x104) + 0x24), piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0xa0))();
  }
  FUN_004f84d0();
  piVar1 = (int *)param_1[0x11];
  while (piVar1 != param_1 + 0x11) {
    iVar3 = *piVar1;
    piVar2 = (int *)piVar1[1];
    *piVar2 = iVar3;
    *(int **)(iVar3 + 4) = piVar2;
    _free(piVar1);
    piVar1 = (int *)param_1[0x11];
  }
  local_4 = 0xffffffff;
  FUN_004f7b50();
  ExceptionList = pvStack_c;
  return;
}

