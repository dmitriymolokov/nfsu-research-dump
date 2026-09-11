/* Decompiled from Speed.exe @ 005d5835 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005d5835(int param_1,undefined4 param_2,float *param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  if (param_3 == (float *)0x0) {
    return 0x8876086c;
  }
  iVar3 = FUN_005d1d40(param_2,1,0);
  if (iVar3 != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x8c) + *(int *)(iVar3 + 4) * 4);
    iVar5 = *(int *)(iVar2 + 0x38);
    if (iVar5 == 0) {
      iVar6 = *(int *)(param_1 + 0x2c);
    }
    else {
      iVar6 = *(int *)(*(int *)(param_1 + 0xc) + 8);
    }
    piVar4 = (int *)(*(int *)(iVar2 + 0x24) + *(int *)(iVar3 + 8) + iVar6);
    if ((((piVar4[4] == 0) || (*(int *)(iVar3 + 0x18) != -1)) && (-1 < piVar4[1])) &&
       (((piVar4[1] < 4 && (piVar4[5] == 1)) && (piVar4[6] == 1)))) {
      iVar6 = *piVar4;
      if (iVar6 == 1) {
        if (iVar5 == 0) {
          iVar5 = *(int *)(param_1 + 0x2c);
        }
        else {
          iVar5 = *(int *)(*(int *)(param_1 + 0xc) + 8);
        }
        fVar1 = (float)(*(int *)(*(int *)(iVar2 + 0x28) + *(int *)(iVar3 + 0xc) + iVar5) != 0);
      }
      else if (iVar6 == 2) {
        if (iVar5 == 0) {
          iVar5 = *(int *)(param_1 + 0x2c);
        }
        else {
          iVar5 = *(int *)(*(int *)(param_1 + 0xc) + 8);
        }
        fVar1 = (float)*(int *)(*(int *)(iVar2 + 0x28) + *(int *)(iVar3 + 0xc) + iVar5);
      }
      else {
        if (iVar6 != 3) {
          return 0x8876086c;
        }
        if (iVar5 == 0) {
          iVar5 = *(int *)(param_1 + 0x2c);
        }
        else {
          iVar5 = *(int *)(*(int *)(param_1 + 0xc) + 8);
        }
        fVar1 = *(float *)(*(int *)(iVar2 + 0x28) + *(int *)(iVar3 + 0xc) + iVar5);
      }
      *param_3 = fVar1;
      return 0;
    }
  }
  return 0x8876086c;
}

