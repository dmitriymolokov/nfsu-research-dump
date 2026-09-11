/* Decompiled from Speed.exe @ 005facd2 */
/* Module: Loader */
/* Ghidra DecompileAll */


int __thiscall FUN_005facd2(int param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  
  if (param_4 != *(int *)(param_2 + 0x30)) {
    *(int *)(param_2 + 0x30) = param_4;
    *param_3 = *param_3 + 1;
    uVar2 = 0;
    if (*(int *)(param_2 + 0x14) != 0) {
      do {
        iVar1 = FUN_005facd2(*(undefined4 *)
                              (*(int *)(param_1 + 0x18) +
                              *(int *)(*(int *)(param_2 + 0x18) + uVar2 * 4) * 4),param_3,param_4);
        if (iVar1 < 0) {
          return iVar1;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_2 + 0x14));
    }
  }
  return 0;
}

