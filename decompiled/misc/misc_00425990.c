/* Decompiled from Speed.exe @ 00425990 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00425990(int param_1)

{
  void *pvVar1;
  int *piVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0068606d;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(undefined4 **)(param_1 + 0x830) != (undefined4 *)0x0) {
    ExceptionList = &local_10;
    (**(code **)**(undefined4 **)(param_1 + 0x830))(1);
  }
  if ((*(int *)(*(int *)(param_1 + 0x14) + 4) == 1) &&
     (*(char *)(*(int *)(param_1 + 0x14) + 0x734) == '\0')) {
    _DAT_00700d54 = 0xffffffff;
    _DAT_007361d8 = 0;
  }
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x2c))(1);
  }
  if (*(undefined4 **)(param_1 + 0x34) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x34))(1);
  }
  if (*(undefined4 **)(param_1 + 0x3c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x3c))(1);
  }
  if (*(undefined4 **)(param_1 + 0x82c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x82c))(1);
  }
  pvVar1 = *(void **)(param_1 + 0x868);
  if (pvVar1 != (void *)0x0) {
    *(undefined4 *)((int)pvVar1 + 0xe0) = 0;
    FUN_0058db20();
    FUN_0058d520();
    _free(pvVar1);
    *(undefined4 *)(param_1 + 0x868) = 0;
  }
  FUN_00571250(*(undefined4 *)(param_1 + 0x4d4));
  pvVar1 = *(void **)(param_1 + 0x4d4);
  if (pvVar1 != (void *)0x0) {
    FUN_0056c140(pvVar1);
    _free(pvVar1);
  }
  *(undefined4 *)(param_1 + 0x4d4) = 0;
  if (*(int *)(param_1 + 0x878) != 0) {
    FUN_0051d950(param_1);
    *(undefined4 *)(param_1 + 0x878) = 0;
  }
  FUN_0058dfa0();
  iVar3 = *(int *)(param_1 + 0x7e0);
  if (0 < iVar3) {
    piVar2 = (int *)(param_1 + 0x560);
    do {
      *(char *)(*piVar2 + 8) = *(char *)(*piVar2 + 8) + -1;
      piVar2 = piVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  ExceptionList = local_10;
  return;
}

