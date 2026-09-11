/* Decompiled from Speed.exe @ 004f76c0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 FUN_004f76c0(int param_1,float *param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (param_1 != 0) {
    switch(*(undefined4 *)(param_1 + 0x18)) {
    case 1:
    case 7:
    case 9:
    case 10:
    case 0xb:
      FUN_004f6d10(param_2,param_2 + 1);
      FUN_004f6e10(param_1,param_2 + 2,param_2 + 3);
      return 1;
    case 2:
      FUN_004f6d10(param_2,param_2 + 1);
      FUN_004f6e10(param_1,param_2 + 2,param_2 + 3);
      return 1;
    case 3:
    case 4:
    case 6:
      FUN_004f6d10(param_2,param_2 + 1);
      FUN_004f6e10(param_1,param_2 + 2,param_2 + 3);
      return 1;
    case 5:
      bVar2 = false;
      break;
    default:
      return 0;
    }
    for (iVar1 = *(int *)(param_1 + 0x60); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      cVar3 = FUN_004f76c0(iVar1,&local_10);
      if (cVar3 != '\0') {
        if (bVar2) {
          if (local_10 < *param_2) {
            *param_2 = local_10;
          }
          if (param_2[2] < local_8) {
            param_2[2] = local_8;
          }
          if (local_c < param_2[1]) {
            param_2[1] = local_c;
          }
          if (param_2[3] < local_4) {
            param_2[3] = local_4;
          }
        }
        else {
          *param_2 = local_10;
          param_2[1] = local_c;
          param_2[2] = local_8;
          param_2[3] = local_4;
        }
        bVar2 = true;
      }
    }
  }
  return 1;
}

