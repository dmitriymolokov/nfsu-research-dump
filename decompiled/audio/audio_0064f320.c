/* Decompiled from Speed.exe @ 0064f320 */
/* Module: Audio */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0064f320(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int local_1c;
  undefined1 local_18 [5];
  undefined1 local_13;
  
  if (DAT_00713ee4 == '\0') {
    return -10;
  }
  FUN_0064f210();
  _DAT_006e9a9c = &LAB_0064ecc0;
  _DAT_006e9aa0 = &LAB_0064ecc0;
  _DAT_006e9aac = &LAB_0064f290;
  _DAT_006e9ab0 = &LAB_0064f290;
  _DAT_006e9abc = &LAB_0064edf0;
  _DAT_006e9ac0 = &LAB_0064edf0;
  _DAT_006e9acc = FUN_0064ee30;
  _DAT_006e9ad0 = FUN_0064ee30;
  DAT_00713f34 = FUN_0064f210;
  _DAT_006e9adc = &LAB_0064eef0;
  _DAT_006e9ae0 = &LAB_0064eef0;
  FUN_0064e520();
  DAT_00713c8c = param_1;
  param_1 = param_1 + param_3 * 0x60;
  DAT_00713c78 = (undefined1)param_3;
  FUN_0064fbd0(local_18);
  iVar3 = 0;
  local_13 = 0;
  uVar4 = (param_2 + param_3 * -0x60) / param_3 & 0x7ffffffc;
  if (0 < param_3) {
    local_1c = 0;
    do {
      piVar1 = (int *)(local_1c + DAT_00713c8c);
      *piVar1 = (int)DAT_00713c94;
      piVar1[1] = 0;
      if (DAT_00713c94 != (int *)0x0) {
        *(int **)((int)DAT_00713c94 + 4) = piVar1;
      }
      DAT_00713c94 = piVar1;
      iVar2 = FUN_00650c80(local_18,3,0x2d,param_1,uVar4);
      piVar1[6] = iVar2;
      param_1 = param_1 + uVar4;
      piVar1[0xe] = 0x7fff;
      piVar1[0x14] = 0x7fff;
      piVar1[0xc] = 0x1000;
      piVar1[0xd] = 0x1000;
      piVar1[2] = iVar3;
      iVar3 = iVar3 + 1;
      local_1c = local_1c + 0x60;
      piVar1[0xf] = 0;
      piVar1[0x10] = 0;
      piVar1[0x11] = 0;
      piVar1[0x12] = 0xffff;
      piVar1[0x13] = 0;
    } while (iVar3 < param_3);
  }
  FUN_0064c5a0(&LAB_0064f0e0);
  FUN_0064e540();
  iVar3 = FUN_0064fba0(3,0x2d);
  return uVar4 - iVar3;
}

