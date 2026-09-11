/* Decompiled from Speed.exe @ 005c7b70 */
/* Module: Loader */
/* Ghidra DecompileAll */


int __thiscall
FUN_005c7b70(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = _malloc(0x70);
  if (pvVar1 == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_005c5250();
  }
  *(int *)(param_1 + 0x50) = iVar2;
  if (iVar2 == 0) {
    iVar2 = -0x7ff8fff2;
  }
  else {
    iVar2 = FUN_005c549b(param_2,param_3,param_1,param_1 + 4);
    if (-1 < iVar2) {
      iVar2 = FUN_005c6feb(param_4);
      if (-1 < iVar2) {
        *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x50);
        *(undefined4 *)(param_1 + 0x58) = param_5;
        iVar2 = 0;
      }
    }
  }
  return iVar2;
}

