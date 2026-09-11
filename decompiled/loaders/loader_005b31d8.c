/* Decompiled from Speed.exe @ 005b31d8 */
/* Module: Loader */
/* Ghidra DecompileAll */


int FUN_005b31d8(int *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int local_8;
  
  piVar4 = param_4;
  piVar3 = param_3;
  iVar2 = param_2;
  iVar5 = *(int *)(param_2 + 4);
  local_8 = 0;
  if (iVar5 == 1) {
    *param_3 = 1;
    *param_4 = 0;
    while (((((*(int *)(param_2 + 4) == 1 && (iVar5 = *(int *)(param_2 + 8), iVar5 != 0)) &&
             (*(int *)(iVar5 + 4) == 5)) &&
            ((*(int *)(iVar5 + 0x10) == 1 && (iVar5 = *(int *)(iVar5 + 0x18), iVar5 != 0)))) &&
           ((*(int *)(iVar5 + 4) == 10 && (*(int *)(iVar5 + 0x20) != 0))))) {
      iVar5 = FUN_005b31d8(param_1,*(int *)(iVar5 + 0x20),&param_3,&param_4);
      if (iVar5 < 0) {
        return iVar5;
      }
      *piVar4 = *piVar4 + (int)param_3 * (int)param_4;
      param_2 = *(int *)(param_2 + 0xc);
      if (param_2 == 0) {
        return iVar5;
      }
    }
  }
  else {
    if (iVar5 == 7) {
      piVar1 = (int *)(param_2 + 0x14);
      param_2 = 0;
      if (*piVar1 != 0) {
        do {
          local_8 = FUN_005b31d8(param_1,*(undefined4 *)(iVar2 + 0x10),piVar3,piVar4);
          if (local_8 < 0) {
            return local_8;
          }
          param_2 = param_2 + 1;
        } while (param_2 < *(uint *)(iVar2 + 0x14));
      }
      *piVar4 = *(int *)(iVar2 + 0x14) * *piVar3 * *piVar4;
      *piVar3 = 1;
      return local_8;
    }
    if ((iVar5 == 8) && (iVar5 = *(int *)(param_2 + 0x10), -1 < iVar5)) {
      if (iVar5 < 3) {
        *param_3 = *(int *)(param_2 + 0x18);
        iVar5 = *(int *)(param_2 + 0x1c);
      }
      else {
        if (iVar5 != 3) {
          return -0x7fffbffb;
        }
        iVar5 = 1;
        *param_3 = 1;
      }
      *param_4 = iVar5;
      iVar5 = *param_3;
      param_3 = (int *)0x0;
      if (iVar5 * *param_4 == 0) {
        return 0;
      }
      do {
        iVar5 = *(int *)(*param_1 + 8);
        *(undefined4 *)(iVar5 + 0x10) = 0;
        *(undefined4 *)(iVar5 + 0x14) = 0;
        *(undefined4 *)(iVar5 + 0x18) = 0;
        *(undefined4 *)(iVar5 + 0x1c) = 0;
        switch(*(undefined4 *)(param_2 + 0x14)) {
        case 0:
          *(undefined4 *)(*(int *)(*param_1 + 8) + 0x10) = 0;
          break;
        case 1:
        case 2:
        case 3:
        case 4:
          *(undefined4 *)(*(int *)(*param_1 + 8) + 0x10) = 1;
          break;
        case 5:
        case 6:
        case 7:
        case 8:
          *(undefined4 *)(*(int *)(*param_1 + 8) + 0x10) = 2;
          break;
        case 9:
        case 10:
        case 0xb:
        case 0xc:
          *(undefined4 *)(*(int *)(*param_1 + 8) + 0x10) = 3;
          break;
        case 0xd:
        case 0xe:
        case 0xf:
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x19:
        case 0x1a:
        case 0x1b:
        case 0x1c:
          *(undefined4 *)(*(int *)(*param_1 + 8) + 0x10) = 5;
          break;
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x18:
          *(undefined4 *)(*(int *)(*param_1 + 8) + 0x10) = 4;
          break;
        default:
          goto LAB_005b338c;
        }
        param_3 = (int *)((int)param_3 + 1);
        *param_1 = *(int *)(*param_1 + 0xc);
        if ((uint)(*piVar3 * *param_4) <= param_3) {
          return 0;
        }
      } while( true );
    }
  }
LAB_005b338c:
  return -0x7fffbffb;
}

