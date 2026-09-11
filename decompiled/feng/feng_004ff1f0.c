/* Decompiled from Speed.exe @ 004ff1f0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004ff1f0(int param_1,int param_2,float *param_3,char param_4)

{
  int iVar1;
  float *pfVar2;
  uint uVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  do {
    if (iVar1 == 0) {
      if (param_4 != '\0') {
        iVar1 = FUN_004ff560(param_1);
        pfVar2 = (float *)(iVar1 + *(int *)(extraout_ECX + 0x2c));
        *pfVar2 = *(float *)(iVar1 + *(int *)(extraout_ECX + 0x2c)) + *param_3;
        pfVar2[1] = param_3[1] + pfVar2[1];
        pfVar2[2] = param_3[2] + pfVar2[2];
        return;
      }
      iVar1 = FUN_004ff560(param_1);
      pfVar2 = (float *)(iVar1 + *(int *)(extraout_ECX_00 + 0x2c));
      *pfVar2 = *param_3;
      pfVar2[1] = param_3[1];
      pfVar2[2] = param_3[2];
      return;
    }
    uVar3 = 0;
    if (*(uint *)(iVar1 + 0x1c) != 0) {
      iVar4 = *(int *)(iVar1 + 0x20) + 4;
      do {
        if ((int)*(char *)(iVar4 + 3) == *(int *)(&DAT_006b66e4 + param_2 * 4)) {
          iVar4 = uVar3 * 0x38 + *(int *)(iVar1 + 0x20);
          if (iVar4 != 0) {
            if (param_4 == '\0') {
              *(float *)(iVar4 + 0x18) = *param_3;
              *(float *)(iVar4 + 0x1c) = param_3[1];
              *(float *)(iVar4 + 0x20) = param_3[2];
            }
            else {
              *(float *)(iVar4 + 0x18) = *param_3 + *(float *)(iVar4 + 0x18);
              *(float *)(iVar4 + 0x1c) = param_3[1] + *(float *)(iVar4 + 0x1c);
              *(float *)(iVar4 + 0x20) = param_3[2] + *(float *)(iVar4 + 0x20);
            }
            *(byte *)(iVar4 + 3) = *(byte *)(iVar4 + 3) & 0x7f;
          }
          break;
        }
        uVar3 = uVar3 + 1;
        iVar4 = iVar4 + 0x38;
      } while (uVar3 < *(uint *)(iVar1 + 0x1c));
    }
    iVar1 = *(int *)(iVar1 + 4);
  } while( true );
}

