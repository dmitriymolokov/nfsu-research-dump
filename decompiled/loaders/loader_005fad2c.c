/* Decompiled from Speed.exe @ 005fad2c */
/* Module: Loader */
/* Ghidra DecompileAll */


int __thiscall
FUN_005fad2c(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = FUN_005facd2(param_2,param_3,param_5);
  uVar4 = 0;
  if (-1 < iVar2) {
    if (*(int *)(param_1 + 0xc) != 0) {
      do {
        iVar2 = *(int *)(*(int *)(param_1 + 0x18) + uVar4 * 4);
        uVar3 = 0;
        if ((*(int *)(iVar2 + 0x24) == 0) && (*(int *)(iVar2 + 0x14) != 0)) {
          do {
            iVar1 = *(int *)(*(int *)(param_1 + 0x18) +
                            *(int *)(*(int *)(iVar2 + 0x18) + uVar3 * 4) * 4);
            if (param_5 == *(int *)(iVar2 + 0x30)) {
              if (*(int *)(iVar1 + 0x24) != 0) {
                *param_4 = *param_4 + -0x10000;
              }
            }
            else if (param_5 == *(int *)(iVar1 + 0x30)) {
              *param_4 = *param_4 + 0x10000;
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 < *(uint *)(iVar2 + 0x14));
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(param_1 + 0xc));
    }
    iVar2 = 0;
  }
  return iVar2;
}

