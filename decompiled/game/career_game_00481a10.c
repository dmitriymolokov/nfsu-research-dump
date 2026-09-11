/* Decompiled from Speed.exe @ 00481a10 */
/* Module: Career_Game */
/* Ghidra DecompileVAs */


void __fastcall FUN_00481a10(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0xc;
  puVar2 = (undefined4 *)(param_2 + 0x124);
  do {
    *(undefined4 *)(iVar1 + -0xc + *(int *)(param_2 + 0x4c)) = puVar2[-0x13];
    *(undefined4 *)(iVar1 + -8 + *(int *)(param_2 + 0x4c)) = *puVar2;
    *(undefined4 *)(*(int *)(param_2 + 0x4c) + -4 + iVar1) = puVar2[0x13];
    *(undefined4 *)(iVar1 + *(int *)(param_2 + 0x4c)) = puVar2[0x26];
    *(undefined4 *)(*(int *)(param_2 + 0x4c) + 4 + iVar1) = puVar2[0x39];
    *(undefined4 *)(*(int *)(param_2 + 0x4c) + 8 + iVar1) = puVar2[0x4c];
    *(undefined4 *)(*(int *)(param_2 + 0x4c) + 0xc + iVar1) = puVar2[0x5f];
    *(undefined4 *)(*(int *)(param_2 + 0x4c) + 0x10 + iVar1) = puVar2[0x72];
    *(undefined4 *)(*(int *)(param_2 + 0x4c) + 0x14 + iVar1) = puVar2[0x85];
    *(undefined4 *)(*(int *)(param_2 + 0x4c) + 0x18 + iVar1) = puVar2[0x98];
    iVar1 = iVar1 + 0x28;
    puVar2 = puVar2 + 0xbe;
  } while (iVar1 < 0xac);
  return;
}

