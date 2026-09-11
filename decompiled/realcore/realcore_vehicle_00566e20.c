/* Decompiled from Speed.exe @ 00566e20 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void __fastcall FUN_00566e20(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  for (; param_2 != 0; param_2 = *(int *)(param_2 + 8)) {
    iVar1 = *(int *)(param_2 + 0x28);
    *(undefined4 *)(param_2 + 0x10) = 0;
    if (*(int *)(param_2 + 0x24) != 0) {
      iVar4 = *(int *)(param_2 + 0x24) + -1;
      puVar3 = (undefined4 *)(param_2 + 0x30);
      *(undefined4 **)(param_2 + 0x10) = puVar3;
      puVar2 = puVar3;
      if (0 < iVar4) {
        do {
          iVar4 = iVar4 + -1;
          puVar3 = (undefined4 *)((int)puVar2 + iVar1);
          *puVar2 = puVar3;
          puVar2 = puVar3;
        } while (iVar4 != 0);
      }
      *puVar3 = 0;
    }
  }
  return;
}

