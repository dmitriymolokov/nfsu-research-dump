/* Decompiled from Speed.exe @ 00442150 */
/* Module: Career_Game */
/* Ghidra DecompileVAs */


/* WARNING: Removing unreachable block (ram,0x004421b9) */

void FUN_00442150(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  uVar3 = 0;
  if (DAT_00736154 != 0) {
    do {
      puVar1 = (undefined4 *)(iVar2 + DAT_00736150);
      FUN_00443a10(&DAT_007372b0,
                   (uint)*(ushort *)((int)puVar1 + 6) * 0x88 + 0x27c +
                   (&DAT_0077af30)[*(byte *)((int)puVar1 + 10)]);
      *puVar1 = 0;
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x20;
    } while (uVar3 < DAT_00736154);
  }
  return;
}

