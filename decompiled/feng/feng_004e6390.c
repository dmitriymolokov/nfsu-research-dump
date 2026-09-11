/* spd-match: far pct=15.44 M4.0.2-CE */
/* Decompiled from Speed.exe @ 004e6390 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void 
FUN_004e6390(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  local_8 = param_1;
  if (param_2 == -0x367ca946) {
    iVar3 = FUN_004f3f90(&DAT_00746104);
    iVar1 = DAT_0073578c;
    if ((((iVar3 != 0) && (*(int *)(iVar3 + 0x18) != 0)) && (DAT_0073578c != 0)) &&
       ((iVar3 = FUN_004f3f90(&DAT_00746104), iVar3 != 0 && (*(int *)(iVar3 + 0x18) != 0)))) {
      FUN_004eebf0(*(undefined4 *)(iVar1 + 8),*(int *)(iVar3 + 0x18));
    }
    iVar1 = DAT_0073578c;
    DAT_0078eb04 = DAT_0078eb04 + 1;
    if (((DAT_0078eafc != '\0') && (DAT_0078eafc = '\0', DAT_0073578c != 0)) &&
       ((iVar3 = FUN_004f3f90(&DAT_00746104), iVar3 != 0 && (*(int *)(iVar3 + 0x18) != 0)))) {
      FUN_004f0800(*(undefined4 *)(iVar1 + 8),*(int *)(iVar3 + 0x18));
    }
    (**(code **)(*param_1 + 0x10))();
  }
  else if ((param_2 == 0x5eb8a6c7) || (param_2 == -0x3d132515)) {
    switch((int)DAT_006fa1a0) {
    case 0x1f:
      break;
    case 0x20:
      break;
    case 0x21:
      break;
    case 0x22:
      ;
    }
    FUN_004d9fa0(&local_10,&local_14,&local_18);
    FUN_005044b0(local_c,1);
    FUN_005044b0(local_10,1);
    FUN_005044b0(local_14,1);
    FUN_005044b0(local_18,1);
    FUN_004e56b0();
    FUN_005044b0(DAT_00735de8,0);
    if ((param_2 == -0x3d132515) && (DAT_00745e40 == 1)) {
      FUN_005a2620();
    }
    DAT_0078eafc = '\x01';
    *(undefined1 *)(local_8 + 0x26) = 1;
    param_1 = local_8;
  }
  iVar1 = *(int *)((int)param_1[0x10] + 8);
  FUN_004e2430(param_2,param_3,param_4,param_5);
  if (iVar1 == *(int *)((unsigned int)param_1[0x10] + 8)) {
    if ((DAT_0078eb00 != 0) && (0x1e < (unsigned int)DAT_0078eb04)) {
      DAT_0078eb00 = 0;
      cVar2 = FUN_004e62b0();
      if (cVar2 != '\0') {
        FUN_00504450();
        return;
      }
      FUN_00504450();
    }
    return;
  }
  DAT_0078eb04 = 0;
  DAT_0078eb00 = 1;
  return;
}

