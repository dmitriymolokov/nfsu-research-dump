/* Decompiled from Speed.exe @ 00682e40 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4
FUN_00682e40(uint *param_1,uint param_2,uint *param_3,uint param_4,int param_5,int param_6)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int local_10;
  
  uVar5 = param_4 * param_5 + param_2;
  if (param_2 < uVar5) {
    param_4 = param_2 + (int)param_3 * 4;
    do {
      param_3 = param_1;
      if (param_2 < param_4) {
        local_10 = ((param_4 - param_2) - 1 >> 3) + 1;
        puVar6 = (uint *)(param_2 + 4);
        do {
          puVar2 = (uint *)((int)puVar6 + param_5);
          uVar3 = *puVar6;
          uVar4 = *(uint *)(param_5 + -4 + (int)puVar6);
          puVar1 = puVar6 + -1;
          puVar6 = puVar6 + 2;
          local_10 = local_10 + -1;
          *param_3 = ((*puVar1 & 0xff00ff) + (uVar4 & 0xff00ff) + (*puVar2 & 0xff00ff) + 0x20002 +
                      (uVar3 & 0xff00ff) & 0x3fc03fc |
                     (*puVar1 & 0xff00) + (uVar4 & 0xff00) + (*puVar2 & 0xff00) + 0x200 +
                     (uVar3 & 0xff00) & 0x3fc00) >> 2;
          param_3 = param_3 + 1;
        } while (local_10 != 0);
      }
      param_1 = (uint *)((int)param_1 + param_6);
      param_4 = param_4 + param_5 * 2;
      param_2 = param_2 + param_5 * 2;
    } while (param_2 < uVar5);
  }
  return 0;
}

