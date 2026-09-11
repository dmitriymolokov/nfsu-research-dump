/* Decompiled from Speed.exe @ 005e8b19 */
/* Module: Loader */
/* Ghidra DecompileAll */


int __thiscall FUN_005e8b19(int *param_1,undefined4 *param_2,short *param_3,undefined4 *param_4)

{
  short *psVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  short **ppsVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  short *local_24 [8];
  
  psVar1 = param_3;
  puVar4 = param_2;
  ppsVar5 = local_24;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppsVar5 = (short *)*puVar4;
    puVar4 = puVar4 + 1;
    ppsVar5 = ppsVar5 + 1;
  }
  local_24[2] = param_3 + 1;
  local_24[0] = (short *)0xa;
  iVar2 = FUN_005be628(1,local_24,0,0,param_1[1],2,&param_3,0);
  if (iVar2 == 0) {
    uVar6 = FUN_005e8a64(*(undefined4 *)(param_3 + 0x10),param_4,0);
    piVar3 = (int *)((ulonglong)uVar6 >> 0x20);
    if ((int)uVar6 < 0) {
      return (int)uVar6;
    }
    if (*psVar1 == DAT_006a37d0) {
      if (((*piVar3 != 1) || (iVar2 = *(int *)(param_3 + 0x10), *(int *)(iVar2 + 4) != 8)) ||
         ((*(int *)(iVar2 + 0x10) != 0 || (*(int *)(iVar2 + 0x14) != 0)))) {
        pcVar8 = "boolean constant register \'%s\' must be defined as a variable of type bool only";
        uVar7 = 0xb54;
LAB_005e8bf4:
        FUN_005b1f01(*(int *)(*param_1 + 4) + 4,param_2,uVar7,pcVar8,psVar1);
        return -0x7fffbffb;
      }
    }
    else if ((*psVar1 == DAT_006a37cc) &&
            ((((*piVar3 != 1 || (iVar2 = *(int *)(param_3 + 0x10), *(int *)(iVar2 + 4) != 8)) ||
              (*(int *)(iVar2 + 0x10) != 1)) ||
             ((*(int *)(iVar2 + 0x14) != 4 || (*(uint *)(iVar2 + 0x1c) < 3)))))) {
      pcVar8 = 
      "integer constant register \'%s\' must be defined as a variable of type int3 or int4 only";
      uVar7 = 0xb55;
      goto LAB_005e8bf4;
    }
  }
  else {
    *param_4 = 0;
  }
  return 0;
}

