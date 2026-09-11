/* Decompiled from Speed.exe @ 0064f900 */
/* Module: Audio */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0064f900(uint param_1,undefined4 *param_2)

{
  ushort uVar1;
  float fVar2;
  float fVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  puVar4 = param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  if (DAT_00713ee4 == '\0') {
    return 0xfffffff6;
  }
  if (-1 < (int)param_1) {
    iVar5 = FUN_00650020(param_1 & 0xff);
    if (iVar5 != 0) {
      iVar6 = FUN_00655000(param_1);
      if (iVar6 == 0) {
        *param_2 = 3;
        return 0;
      }
      if (*(char *)(iVar6 + 0x24) == '\0') {
        *param_2 = 0;
        return 0;
      }
      if (*(int *)(iVar5 + 0x140) == iVar6) {
        *param_2 = 2;
        uVar1 = *(ushort *)(iVar5 + 0x38);
      }
      else {
        *param_2 = 1;
        uVar1 = *(ushort *)(iVar5 + 0x3c);
      }
      param_2 = (undefined4 *)(uint)uVar1;
      fVar2 = _DAT_006cc844 / (float)(int)param_2;
      fVar3 = (float)*(int *)(iVar6 + 0x14);
      if (*(int *)(iVar6 + 0x14) < 0) {
        fVar3 = fVar3 + _DAT_006cc858;
      }
      puVar4[1] = (int)ROUND(fVar3 * fVar2);
      iVar5 = *(int *)(iVar6 + 0x18) - *(int *)(iVar6 + 0x14);
      fVar3 = (float)iVar5;
      if (iVar5 < 0) {
        fVar3 = fVar3 + _DAT_006cc858;
      }
      puVar4[2] = (int)ROUND(fVar3 * fVar2);
      fVar3 = (float)*(int *)(iVar6 + 0x1c);
      if (*(int *)(iVar6 + 0x1c) < 0) {
        fVar3 = fVar3 + _DAT_006cc858;
      }
      puVar4[3] = (int)ROUND(fVar3 * fVar2);
      return 0;
    }
  }
  return 0xfffffff8;
}

