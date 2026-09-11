/* Decompiled from Speed.exe @ 00648517 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_00648517(int param_1)

{
  undefined2 uVar1;
  int local_8;
  
  if (DAT_00712018 != param_1) {
    for (local_8 = 0; local_8 < 0xff; local_8 = local_8 + 1) {
      uVar1 = (&DAT_006e8130)[local_8 * 4];
      (&DAT_006e8130)[local_8 * 4] = (&DAT_006e8132)[local_8 * 4];
      (&DAT_006e8132)[local_8 * 4] = uVar1;
      uVar1 = (&DAT_006e8930)[local_8 * 4];
      (&DAT_006e8930)[local_8 * 4] = (&DAT_006e8932)[local_8 * 4];
      (&DAT_006e8932)[local_8 * 4] = uVar1;
      uVar1 = (&DAT_006e9130)[local_8 * 4];
      (&DAT_006e9130)[local_8 * 4] = (&DAT_006e9132)[local_8 * 4];
      (&DAT_006e9132)[local_8 * 4] = uVar1;
    }
    DAT_00712018 = param_1;
  }
  return;
}

