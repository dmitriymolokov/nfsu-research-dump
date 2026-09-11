/* Decompiled from Speed.exe @ 00655880 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_00655880(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < DAT_007160d8) {
    puVar2 = &DAT_007160e0;
    do {
      iVar1 = (&DAT_007163dc)[*(ushort *)((int)puVar2 + -2)];
      if (*(short *)(puVar2 + -1) == 0) {
        (**(code **)(iVar1 + 0x58))
                  ((uint)*(ushort *)((int)puVar2 + -2),*puVar2,*(undefined4 *)(iVar1 + 0x5c));
      }
      else {
        (**(code **)(iVar1 + 0x54))(*puVar2,*(undefined4 *)(iVar1 + 0x5c));
      }
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 2;
    } while (iVar3 < DAT_007160d8);
  }
  DAT_007160d8 = 0;
  return;
}

