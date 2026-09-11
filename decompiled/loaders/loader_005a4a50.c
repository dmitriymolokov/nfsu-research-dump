/* Decompiled from Speed.exe @ 005a4a50 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_005a4a50(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  void *pvVar2;
  
  if (DAT_0073496c == 0) {
    DAT_00733f74 = 1;
    DAT_00733f70 = 0;
    FUN_00648cf0();
    DAT_00712020 = &LAB_005a4980;
    DAT_00712024 = FUN_005a49f0;
    FUN_00638ee0(&LAB_005a4930,&LAB_005a4980,FUN_005a49f0);
    pvVar2 = _malloc(0x134);
    if (pvVar2 == (void *)0x0) {
      DAT_00733f6c = (undefined4 *)0x0;
    }
    else {
      DAT_00733f6c = (undefined4 *)FUN_005a4540();
    }
    *DAT_00733f6c = param_3;
    FUN_005a4670(param_2);
    if (((DAT_006f1dd8 != 0) && (*(int *)(DAT_007356a8 + 0x104) != 0)) &&
       (piVar1 = *(int **)(*(int *)(DAT_007356a8 + 0x104) + 0x14), piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 0xa0))();
    }
    if (DAT_007363b4 != '\0') {
      SuspendThread(DAT_0070f460);
    }
  }
  return;
}

