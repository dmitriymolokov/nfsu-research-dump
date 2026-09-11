/* Decompiled from Speed.exe @ 006118de */
/* Module: EAGL */
/* Ghidra DecompileAll */


void __fastcall FUN_006118de(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint local_8;
  
  iVar1 = *(int *)(param_1 + 0x98);
  uVar2 = *(uint *)(iVar1 + 0xc);
  local_8 = 0;
  if (uVar2 != 0) {
    piVar3 = *(int **)(iVar1 + 0x10);
    do {
      if ((*(byte *)(*(int *)(*(int *)(param_1 + 0x14) + *piVar3 * 4) + 0x1b) & 2) == 0) break;
      local_8 = local_8 + 1;
      piVar3 = piVar3 + 1;
    } while (local_8 < uVar2);
  }
  FUN_0061af1a(((local_8 != uVar2) - 1U & 0x40) + 0xf,*(undefined4 *)(iVar1 + 0x10),
               *(undefined4 *)(iVar1 + 8),uVar2,*(undefined4 *)(iVar1 + 4),0,0);
  return;
}

