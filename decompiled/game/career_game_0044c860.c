/* Decompiled from Speed.exe @ 0044c860 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __thiscall FUN_0044c860(int param_1,int param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x28);
  if (iVar1 == 4) {
    uVar2 = FUN_00674898();
    *(undefined4 *)(param_1 + 0x424) = uVar2;
  }
  if (((param_2 == 0) || (*(int *)(param_2 + 0x18) == 0)) && (param_3 == '\0')) {
    iVar3 = FUN_00425150();
  }
  else {
    iVar3 = 1;
  }
  if (iVar3 != iVar1) {
    FUN_00426110();
  }
  if (iVar3 == 1) {
    uVar2 = FUN_00674898();
    *(undefined4 *)(param_1 + 0x428) = uVar2;
  }
  return;
}

