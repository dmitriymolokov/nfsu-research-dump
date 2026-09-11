/* Decompiled from Speed.exe @ 0051ca30 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_0051ca30(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  void *_Memory;
  int *piStack_14;
  undefined4 *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0068535e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_006bf5a4;
  local_4 = 0;
  local_10 = param_1;
  if ((undefined4 *)param_1[0x28] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x28])(1);
    param_1[0x28] = 0;
  }
  _Memory = DAT_007356ac;
  if (DAT_007356ac != (void *)0x0) {
    FUN_00536570(DAT_007356ac);
    _free(_Memory);
    DAT_007356ac = (void *)0x0;
  }
  if ((undefined4 *)param_1[0x30] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x30])(1);
    param_1[0x30] = 0;
  }
  if ((undefined4 *)param_1[0x2f] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2f])(1);
    param_1[0x2f] = 0;
  }
  if ((undefined4 *)param_1[0x40] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x40])(1);
    param_1[0x40] = 0;
  }
  piVar1 = (int *)param_1[0x23];
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0) {
      FUN_0064bbd0();
    }
    FUN_0064b510(&piStack_14);
    FUN_0064b580();
    (**(code **)(*piStack_14 + 4))(piVar1);
    FUN_0064b5a0();
    param_1[0x23] = 0;
  }
  piVar1 = (int *)param_1[0x39];
  local_4 = 0xffffffff;
  while (piVar1 != param_1 + 0x39) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    if (piVar1 + -0x9c != (int *)0x0) {
      (**(code **)piVar1[-0x9c])(1);
    }
    piVar1 = (int *)param_1[0x39];
  }
  ExceptionList = pvStack_c;
  return;
}

