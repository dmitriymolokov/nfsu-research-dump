/* Decompiled from Speed.exe @ 00669660 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4
FUN_00669660(int param_1,char *param_2,char *param_3,undefined4 *param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != 0) {
    iVar3 = *(int *)(param_1 + 0x28);
    iVar1 = *(int *)(param_1 + 0x2c);
    if (iVar3 != iVar1) {
      while (((((*(char *)(iVar3 + 0x28) == '\0' || (*(int *)(iVar3 + 0xfc) != 0)) ||
               ((param_2 != (char *)0x0 &&
                ((*param_2 != '\0' && (iVar2 = FUN_00668fb0(), iVar2 != 0)))))) ||
              ((param_3 != (char *)0x0 &&
               ((*param_3 != '\0' && (iVar2 = FUN_00668fb0(), iVar2 != 0)))))) ||
             (*(int *)(iVar3 + 0xf4) == 0))) {
        iVar3 = iVar3 + 0x104;
        if (iVar3 == iVar1) {
          return param_5;
        }
      }
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = *(undefined4 *)(iVar3 + 0xf8);
      }
      param_5 = *(undefined4 *)(iVar3 + 0xf4);
    }
  }
  return param_5;
}

