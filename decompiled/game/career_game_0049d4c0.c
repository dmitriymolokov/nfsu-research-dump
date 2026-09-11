/* Decompiled from Speed.exe @ 0049d4c0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049d4c0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBX;
  bool bVar3;
  undefined1 local_20 [32];
  
  iVar1 = *(int *)(param_1 + 0xd0 + unaff_EBX * 4);
  puVar2 = DAT_00735710;
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x400000;
    puVar2 = DAT_00735710;
    bVar3 = DAT_00735710 != (undefined4 *)0x0;
    *(undefined4 *)(iVar1 + 0x5c) = 0xf9d7f4c2;
    if (bVar3) {
      (**(code **)*puVar2)(iVar1);
      puVar2 = DAT_00735710;
    }
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xfffffffd | 0x400000;
  }
  if ((float)*(int *)(&DAT_00777b80 + *(char *)(param_2 + 10) * 0x15c) * _DAT_006cca38 <=
      DAT_006cc7a4) {
    iVar1 = *(int *)(param_1 + 0xf8 + unaff_EBX * 4);
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x400000;
      *(undefined4 *)(iVar1 + 0x5c) = 0x61c9b7a2;
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(iVar1);
      }
      *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xfffffffd | 0x400000;
    }
    return;
  }
  FUN_00586580(local_20);
  FUN_004f68a0(local_20);
  return;
}

