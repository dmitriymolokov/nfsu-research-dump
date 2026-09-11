/* Decompiled from Speed.exe @ 0064ccc0 */
/* Module: Audio */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0064ccc0(ushort *param_1)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  ushort *extraout_EDX;
  undefined1 *puVar4;
  
  iVar3 = *(int *)((uint)*param_1 + (int)param_1);
  puVar4 = (undefined1 *)((uint)*param_1 + (int)param_1);
  if ((iVar3 == 1) && ((char)param_1[1] == '\0')) {
    *(undefined1 *)((int)param_1 + 3) = 0;
    *(float *)(param_1 + 6) = *(float *)(param_1 + 10);
    *(float *)(param_1 + 2) = *(float *)(param_1 + 0xc);
    fVar1 = (*(float *)(param_1 + 0xe) - *(float *)(param_1 + 10)) / *(float *)(param_1 + 0xc);
    *(float *)(param_1 + 4) = fVar1;
    *(float *)(param_1 + 4) = fVar1 * _DAT_00713ca0;
    goto LAB_0064cda7;
  }
  if (((iVar3 == 3) && ((char)param_1[1] != '\x03')) &&
     ((short)(ushort)*(byte *)((int)param_1 + 3) < (short)param_1[9])) {
    bVar2 = (byte)param_1[9];
    *(byte *)((int)param_1 + 3) = bVar2;
    fVar1 = *(float *)(param_1 + (uint)bVar2 * 4 + 0xc);
    *(float *)(param_1 + 2) = fVar1;
    fVar1 = (*(float *)(param_1 + (uint)bVar2 * 4 + 0xe) - *(float *)(param_1 + 6)) / fVar1;
    *(float *)(param_1 + 4) = fVar1;
    *(float *)(param_1 + 4) = fVar1 * _DAT_00713ca0;
    goto LAB_0064cda7;
  }
  if ((iVar3 == 1) || (iVar3 == 3)) {
    bVar2 = *(byte *)((int)param_1 + 3);
    if ((byte)param_1[8] <= bVar2) goto LAB_0064cd9a;
    fVar1 = *(float *)(param_1 + 2) - _DAT_00713ca0;
    *(float *)(param_1 + 2) = fVar1;
    if (fVar1 < DAT_006cc7a4 == (fVar1 == DAT_006cc7a4)) {
      *(float *)(param_1 + 6) = *(float *)(param_1 + 4) + *(float *)(param_1 + 6);
      goto LAB_0064cda7;
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_1 + (uint)bVar2 * 4 + 0xe);
    *(byte *)((int)param_1 + 3) = bVar2 + 1;
    if ((byte)(bVar2 + 1) < (byte)param_1[8]) {
      FUN_0064cc90(param_1);
      param_1 = extraout_EDX;
      goto LAB_0064cda7;
    }
  }
  else {
LAB_0064cd9a:
    if (iVar3 == 2) goto LAB_0064cda7;
  }
  param_1[6] = 0;
  param_1[7] = 0;
LAB_0064cda7:
  *(undefined1 *)(param_1 + 1) = *puVar4;
  return (int)ROUND(*(float *)(param_1 + 6));
}

