/* Decompiled from Speed.exe @ 00439860 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00439860(int param_1,float param_2)

{
  uint uVar1;
  int local_8;
  
  *(undefined4 *)(param_1 + 0x188) = 0;
  for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
    if (((*(float *)(&DAT_006b7998 + local_8 * 4) == DAT_006cc7a4) &&
        (0 < *(int *)(param_1 + 0x18c + local_8 * 4))) ||
       ((DAT_006cc7a4 < param_2 &&
        (*(float *)(&DAT_006b7998 + local_8 * 4) <
         ((float)*(int *)(param_1 + 0x18c + local_8 * 4) / param_2) * _DAT_006cc8b0)))) {
      uVar1 = FUN_00439980(local_8);
      *(uint *)(param_1 + 0x188) = *(uint *)(param_1 + 0x188) | uVar1;
    }
  }
  return *(undefined4 *)(param_1 + 0x188);
}

