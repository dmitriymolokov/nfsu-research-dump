/* Decompiled from Speed.exe @ 00551b40 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void __thiscall FUN_00551b40(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = param_1 == 1;
  iVar1 = *(int *)(param_2 + 0x7a0);
  *(bool *)(param_2 + 0x70) = bVar2;
  FUN_00550780();
  if ((bool)*(char *)(iVar1 + 0xd) != bVar2) {
    *(bool *)(iVar1 + 0xd) = bVar2;
    *(undefined1 *)(iVar1 + 0xe) = 1;
  }
  if (*(int *)(param_2 + 0x6c) == 0) {
    FUN_00552610(param_2,1);
    return;
  }
  FUN_00552bb0(param_2,1);
  return;
}

