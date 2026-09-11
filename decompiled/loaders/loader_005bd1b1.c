/* Decompiled from Speed.exe @ 005bd1b1 */
/* Module: Loader */
/* Ghidra DecompileAll */


int __thiscall FUN_005bd1b1(int param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  
  pvVar1 = _malloc(0x14);
  if (pvVar1 == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_005d78db(0,*(undefined4 *)(param_1 + 0x10),"UsageType");
  }
  if (iVar2 == 0) {
    FUN_005ba2ce(0);
    iVar2 = -0x7ff8fff2;
  }
  else {
    *(int *)(param_1 + 0x10) = iVar2;
    if (param_2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar3 = FUN_005d7885(param_2);
      *(int *)(iVar2 + 8) = iVar3;
      if (iVar3 == 0) {
        FUN_005ba2ce(0);
        iVar2 = -0x7ff8fff2;
      }
      else {
        iVar2 = FUN_005bbdd0(iVar3,*(undefined4 *)(iVar3 + 0x18));
        if (-1 < iVar2) {
          *(byte *)(iVar3 + 0x11) = *(byte *)(iVar3 + 0x11) & 0xf1;
          iVar2 = 0;
        }
      }
    }
  }
  return iVar2;
}

