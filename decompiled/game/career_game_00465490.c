/* spd-match: far pct=0.00 M4.0.2-CE */
/* Decompiled from Speed.exe @ 00465490 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#ifndef M4_02_NAN_PRED
#define M4_02_NAN_PRED
#undef NAN
#define NAN(x) ((x)!=(x))
#endif

uint __fastcall FUN_00465490(int param_1)

{
  float fVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x3b8);
  if ((uVar2 != 0) && (uVar2 != 0x7fffffff)) {
    fVar1 = (float)*(int *)(param_1 + 0x3b8) * _DAT_006cca38;
    uVar2 = CONCAT22((short)(uVar2 >> 0x10),
                     (ushort)(fVar1 < DAT_006cc7a4) << 8 |
                     (ushort)(NAN(fVar1) || NAN(DAT_006cc7a4)) << 10 |
                     (ushort)(fVar1 == DAT_006cc7a4) << 0xe);
    if (fVar1 >= DAT_006cc7a4 && (fVar1 == DAT_006cc7a4) == 0) {
      if ((*(int *)(param_1 + 0x3bc) != 0) && (*(int *)(param_1 + 0x3bc) != 0x7fffffff)) {
        return 0;
      }
      return 1;
    }
  }
  return uVar2 & 0xffffff00;
}

