/* Decompiled from Speed.exe @ 00536250 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_00536250(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 auStack_a8 [8];
  undefined1 local_7c [124];
  
  puVar1 = (undefined4 *)&stack0x00000008;
  puVar3 = (undefined4 *)(param_1 + 8);
  for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar1 = (undefined4 *)(param_1 + 0x14);
  puVar3 = auStack_a8;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar1 = (undefined4 *)FUN_005362a0(param_1,local_7c);
  puVar3 = (undefined4 *)(param_1 + 0x34);
  for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

