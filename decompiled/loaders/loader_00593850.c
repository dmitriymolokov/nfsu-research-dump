/* Decompiled from Speed.exe @ 00593850 */
/* Module: Loader */
/* Ghidra DecompileAll */


void __fastcall FUN_00593850(int param_1)

{
  byte *pbVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    pbVar1 = (byte *)(*(int *)(param_1 + 0x10) + 0xe);
    *pbVar1 = *pbVar1 & 0xef;
    puVar2 = *(undefined4 **)(param_1 + 0x14);
    if (puVar2 != (undefined4 *)0x0) {
      FUN_00591c90(puVar2);
      iVar4 = DAT_007344c8;
      iVar3 = *(int *)(DAT_007344c8 + 0x18);
      *puVar2 = *(undefined4 *)(DAT_007344c8 + 0x10);
      *(int *)(iVar4 + 0x18) = iVar3 + -1;
      *(undefined4 **)(iVar4 + 0x10) = puVar2;
    }
  }
  return;
}

