/* Decompiled from Speed.exe @ 0061a393 */
/* Module: EAGL */
/* Ghidra DecompileAll */


int __thiscall FUN_0061a393(int param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = FUN_0061a36a(param_2 | param_3);
  if (-1 < iVar2) {
    if (((param_2 | param_3) & 0x2000) != 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x14) + param_4 * 4);
      iVar1 = *(int *)(iVar2 + 0xc);
      uVar3 = *(uint *)(iVar2 + 8) & 0x7ff;
      uVar4 = uVar3 | 0xb0000000;
      if (iVar1 != 0) {
        if (iVar1 == 1) {
          uVar4 = uVar3 | 0xb0550000;
        }
        else if (iVar1 == 2) {
          uVar4 = uVar3 | 0xb0aa0000;
        }
        else if (iVar1 == 3) {
          uVar4 = uVar3 | 0xb0ff0000;
        }
      }
      FUN_0061a36a(uVar4);
    }
    iVar2 = 0;
  }
  return iVar2;
}

