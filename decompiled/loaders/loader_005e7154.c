/* Decompiled from Speed.exe @ 005e7154 */
/* Module: Loader */
/* Ghidra DecompileAll */


int __thiscall
FUN_005e7154(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,short *param_5,
            int param_6,int *param_7,undefined4 *param_8,int *param_9)

{
  undefined4 *puVar1;
  short sVar2;
  short *psVar3;
  int *piVar4;
  short *psVar5;
  int iVar6;
  char *pcVar7;
  
  piVar4 = param_9;
  psVar3 = param_5;
  psVar5 = param_5;
  do {
    sVar2 = *psVar5;
    psVar5 = (short *)((int)psVar5 + 1);
  } while ((char)sVar2 != '\0');
  if ((uint)((int)psVar5 - (int)((int)param_5 + 1)) < 3) {
    FUN_005b1f01(param_2,param_4,0x7d5,"invalid register, input, or constant name \'%s\'",param_5);
    return -0x7fffbffb;
  }
  *param_7 = 0;
  *param_8 = 0;
  *param_9 = 0;
  if (*param_5 == DAT_006a3654) {
    *param_7 = 1;
    iVar6 = FUN_005e54f8(param_5);
    if (iVar6 == 0) {
      iVar6 = FUN_005e5221(psVar3 + 1,(int)&param_7 + 3,(int)&param_5 + 3);
      if (iVar6 < 0) {
        pcVar7 = "Invalid input register \'%s\' specified";
        goto LAB_005e71e8;
      }
      *piVar4 = *(int *)(param_1 + 0x58);
      FUN_005e7078(psVar3,*(undefined4 *)(param_1 + 0x58),1);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
    }
    else {
      *piVar4 = *(int *)(iVar6 + 4);
    }
    if (param_6 == 0) {
      return 0;
    }
    pcVar7 = "addressing operations are not allowed on input registers \'%s\'";
  }
  else if (*param_5 == DAT_006a3650) {
    *param_7 = 0;
    iVar6 = FUN_005e54f8(param_5);
    if (iVar6 == 0) {
      *piVar4 = *(int *)(param_1 + 0x5c);
      FUN_005e7078(psVar3,*(undefined4 *)(param_1 + 0x5c),1);
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
    }
    else {
      *piVar4 = *(int *)(iVar6 + 4);
    }
    if (param_6 == 0) {
      return 0;
    }
    pcVar7 = "addressing operations not allowed on temporary registers \'%s\'";
  }
  else {
    sVar2 = *param_5;
    if (((sVar2 == DAT_006a37d4) || (sVar2 == DAT_006a37d0)) || (sVar2 == DAT_006a37cc)) {
      if (*param_5 == DAT_006a37d0) {
        *param_7 = 0xe;
      }
      else {
        *param_7 = (-(uint)(*param_5 != DAT_006a37cc) & 0xfffffffb) + 7;
      }
      iVar6 = FUN_005e54f8(param_5);
      if (iVar6 == 0) {
        iVar6 = FUN_005e8b19(param_4,psVar3,&param_8);
        if (iVar6 < 0) {
          return iVar6;
        }
        if (param_8 == (undefined4 *)0x0) {
          FUN_005b1f01(param_2,param_4,0x7d5,
                       "constant register \'%s\' must be defined as a variable \'%s\'",psVar3,
                       psVar3 + 1);
          return -0x7fffbffb;
        }
        *piVar4 = *(int *)(param_1 + 0x54);
        FUN_005e7078(psVar3,*(undefined4 *)(param_1 + 0x54),param_8);
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (int)param_8;
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
      }
      else {
        *piVar4 = *(int *)(iVar6 + 4);
        param_8 = *(undefined4 **)(iVar6 + 8);
      }
      if (param_6 == 0) {
        return 0;
      }
      puVar1 = *(undefined4 **)(param_6 + 0x18);
      if (param_8 < puVar1) {
        FUN_005b1f01(param_2,param_4,0x7d5,
                     "constant register address out of bounds on constant \'%s\', size %d, offset %d"
                     ,psVar3,param_8,puVar1);
        return -0x7fffbffb;
      }
      *piVar4 = *piVar4 + (int)puVar1;
      return 0;
    }
    pcVar7 = 
    "\'%s\' is not a valid register name.  Registers must start with v_, r_, c_, b_, or i_ depending on the register type."
    ;
  }
LAB_005e71e8:
  FUN_005b1f01(param_2,param_4,0x7d5,pcVar7,psVar3);
  return -0x7fffbffb;
}

