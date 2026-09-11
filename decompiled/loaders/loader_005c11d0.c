/* Decompiled from Speed.exe @ 005c11d0 */
/* Module: Loader */
/* Ghidra DecompileAll */


int __thiscall FUN_005c11d0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  
  iVar3 = FUN_005c0e2d(param_3,&param_3);
  if (iVar3 < 0) {
    FUN_005ba1d9(param_1,0,0xbf2,"array dimensions must be literal scalar expressions");
  }
  else {
    pvVar4 = _malloc(0x18);
    if (pvVar4 == (void *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_005d8062(0,param_3);
    }
    if (iVar3 != 0) {
      piVar1 = &param_2;
      iVar2 = param_2;
      while ((iVar2 != 0 && (*(int *)(*piVar1 + 4) == 7))) {
        piVar1 = (int *)(*piVar1 + 0x10);
        iVar2 = *piVar1;
      }
      *(int *)(iVar3 + 0x10) = *piVar1;
      *piVar1 = iVar3;
      return param_2;
    }
  }
  return 0;
}

