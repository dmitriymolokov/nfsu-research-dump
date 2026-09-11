/* Decompiled from Speed.exe @ 0055a340 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_0055a340(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  
  iVar1 = param_1[0x10];
  iVar4 = *(int *)(&DAT_006b62b4 + *(int *)(iVar1 + 0xd0) * 4);
  uVar2 = *(uint *)(iVar1 + 0xd8);
  uVar3 = uVar2 & 0x80000003;
  bVar5 = uVar3 == 0;
  if ((int)uVar3 < 0) {
    bVar5 = (uVar3 - 1 | 0xfffffffc) == 0xffffffff;
  }
  if ((((bVar5) && ((int)uVar2 % 100 != 0)) || ((int)uVar2 % 400 == 0)) &&
     (*(int *)(iVar1 + 0xd0) == 2)) {
    iVar4 = iVar4 + 1;
  }
  *(int *)(iVar1 + 0xd4) = *(int *)(iVar1 + 0xd4) + param_2;
  iVar1 = param_1[0x10];
  if (iVar4 < *(int *)(iVar1 + 0xd4)) {
    *(undefined4 *)(iVar1 + 0xd4) = 1;
    (**(code **)(*param_1 + 0x10))();
    return;
  }
  if (*(int *)(iVar1 + 0xd4) < 1) {
    *(int *)(iVar1 + 0xd4) = iVar4;
  }
  (**(code **)(*param_1 + 0x10))();
  return;
}

