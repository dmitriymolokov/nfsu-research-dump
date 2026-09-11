/* Decompiled from Speed.exe @ 00577060 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00577060(undefined1 *param_1,float *param_2,float param_3,int param_4,
                    undefined4 *param_5,undefined4 *param_6,char *param_7)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  char local_41;
  float local_40;
  float local_3c;
  undefined4 local_38;
  int local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  *param_1 = 0;
  iVar4 = DAT_0073b14c;
  if (DAT_0073b14c == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = DAT_0073b14c + -4;
  }
  local_34 = FUN_0040cb70();
  while (iVar3 != local_34) {
    if (*(int *)(iVar3 + 4) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar3 + 4) + -4;
    }
  }
  local_28 = *param_2;
  local_24 = param_2[1];
  local_30 = param_2[2];
  local_2c = param_2[3];
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = iVar4 + -4;
  }
  if (iVar4 != local_34) {
    do {
      if ((((*(float *)(iVar4 + 0xc) < local_30) && (local_28 < *(float *)(iVar4 + 0x14))) &&
          (*(float *)(iVar4 + 0x10) < local_2c)) && (local_24 < *(float *)(iVar4 + 0x18))) {
        *param_1 = 1;
        local_41 = '\0';
        fVar5 = (float10)FUN_00577370(iVar4,param_4,&local_38,&local_20,&local_41);
        local_40 = (float)fVar5;
        if (local_41 != '\0') {
          local_3c = *(float *)(param_4 + 8) + _DAT_006cc7bc;
          fVar1 = param_3;
          if (local_3c <= param_3) {
            fVar1 = param_3 - _DAT_006ccbe4;
          }
          fVar2 = local_40;
          if (local_3c <= local_40) {
            fVar2 = local_40 - _DAT_006ccbe4;
          }
          if ((fVar1 < fVar2) || ((param_7 != (char *)0x0 && (*param_7 == '\0')))) {
            if (param_5 != (undefined4 *)0x0) {
              *param_5 = local_38;
            }
            if (param_6 != (undefined4 *)0x0) {
              *param_6 = local_20;
              param_6[1] = local_1c;
              param_6[2] = local_18;
            }
            param_3 = local_40;
            if (param_7 != (char *)0x0) {
              *param_7 = local_41;
            }
          }
        }
      }
      if (*(int *)(iVar4 + 4) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(iVar4 + 4) + -4;
      }
    } while (iVar4 != local_34);
  }
  return (float10)param_3;
}

