/* Decompiled from Speed.exe @ 00475bf0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __fastcall FUN_00475bf0(float *param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  float10 fVar7;
  int local_54;
  float *local_4c;
  float local_30;
  float local_2c;
  float local_28;
  float local_18;
  
  uVar3 = *(undefined4 *)(param_3 + 0x1c);
  iVar4 = *(int *)(param_3 + 0x14);
  local_54 = param_3 + 0xe0;
  iVar6 = 0;
  local_4c = param_1;
  do {
    pfVar5 = *(float **)(param_3 + 0x18);
    local_30 = -*pfVar5 + *(float *)(iVar6 + 0x10 + (int)pfVar5);
    local_2c = *(float *)(iVar6 + 0x14 + (int)pfVar5) + -pfVar5[1];
    local_28 = *(float *)(iVar6 + 0x18 + (int)pfVar5) + -pfVar5[2];
    local_18 = local_28;
    thunk_FUN_005abda2(param_2,&local_30,*(int *)(param_3 + 0x14) + 0x30);
    fVar1 = *(float *)(iVar4 + 0x24);
    fVar2 = *(float *)(iVar4 + 0x28);
    *param_2 = *(float *)(iVar4 + 0x20) + *param_2;
    param_2[1] = fVar1 + param_2[1];
    param_2[2] = fVar2 + param_2[2];
    fVar7 = (float10)FUN_00440a40(uVar3,param_2,0,local_54,0);
    fVar7 = (float10)FUN_00577060(*(undefined4 *)(param_3 + 0x20),uVar3,(float)fVar7,param_2,0,
                                  local_54,0);
    *local_4c = (float)fVar7;
    iVar6 = iVar6 + 0x30;
    local_54 = local_54 + 0x10;
    local_4c = local_4c + 1;
    param_2 = param_2 + 4;
  } while (iVar6 < 0xc0);
  return;
}

