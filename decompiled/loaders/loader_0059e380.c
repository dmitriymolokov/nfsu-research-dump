/* Decompiled from Speed.exe @ 0059e380 */
/* Module: Loader */
/* Ghidra DecompileAll */


void __fastcall FUN_0059e380(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_2 + 0x10) != 0) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(param_2 + 0xc) + iVar2;
      if (*(char *)(iVar1 + 0x31) == '\0') {
        *(undefined1 *)(iVar1 + 0x30) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x34;
    } while (uVar3 < *(uint *)(param_2 + 0x10));
  }
  return;
}

