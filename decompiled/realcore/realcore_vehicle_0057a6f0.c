/* Decompiled from Speed.exe @ 0057a6f0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


uint fn_0057a6f0(void)

{
  int iVar1;
  uint uVar2;
  int unaff_ESI;
  
  uVar2 = FUN_00647b70();
  if (uVar2 == 6) {
    iVar1 = *(int *)(*(int *)(*(int *)(unaff_ESI + 0x1d4) + 0x90) + 0x1c);
    return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 != 0);
  }
  return uVar2 & 0xffffff00;
}

