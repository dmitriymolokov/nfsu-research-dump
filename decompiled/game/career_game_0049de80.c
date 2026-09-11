/* Decompiled from Speed.exe @ 0049de80 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049de80(float param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  int unaff_EBX;
  int unaff_EDI;
  bool bVar4;
  undefined1 auStack_8 [8];
  
  iVar2 = *(int *)(unaff_EBX + 0xd0 + unaff_EDI * 4);
  if (iVar2 != 0) {
    *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) | 0x400000;
    puVar3 = DAT_00735710;
    bVar4 = DAT_00735710 != (undefined4 *)0x0;
    *(undefined4 *)(iVar2 + 0x5c) = 0x50b14e9;
    if (bVar4) {
      (**(code **)*puVar3)(iVar2);
    }
    *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) & 0xfffffffd | 0x400000;
  }
  pcVar1 = (char *)((int)param_1 + 10);
  param_1 = 0.0;
  if (0 < (int)(&DAT_00777cc8)[*pcVar1 * 0x57]) {
    param_1 = ((float)(int)(&DAT_00777cc4)[*pcVar1 * 0x57] /
              (float)(int)(&DAT_00777cc8)[*pcVar1 * 0x57]) * _DAT_006cc9f8;
  }
  FUN_0059fc90(param_1);
  FUN_004f68a0(&DAT_006c77e4,auStack_8);
  return;
}

