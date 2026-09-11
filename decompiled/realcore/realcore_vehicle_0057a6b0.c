/* Decompiled from Speed.exe @ 0057a6b0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


uint FUN_0057a6b0(void)

{
  uint uVar1;
  int unaff_ESI;
  
  uVar1 = FUN_00647b70();
  if (uVar1 == 6) {
    return CONCAT31((int3)((uint)*(int *)(unaff_ESI + 0x1d4) >> 8),
                    *(int *)(*(int *)(*(int *)(*(int *)(unaff_ESI + 0x1d4) + 0x90) + 0x14) + 4) == 1
                   );
  }
  return uVar1 & 0xffffff00;
}

