/* spd-match: far pct=7.43 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2446 */
#include "ghidra_compat.h"

extern unsigned char *DAT_00709d7c;
int unaff_EBP;
int unaff_EBX;
extern void LAB_006201b3(...);

struct ThisCallBox {
  undefined4 FUN_0061fea0(undefined4 param_2, undefined4 *param_3, int *param_4, int *param_5, undefined4 *param_6);
};
undefined4 ThisCallBox::FUN_0061fea0(undefined4 param_2, undefined4 *param_3, int *param_4, int *param_5, undefined4 *param_6) {
  undefined4 *puVar1;
  int iVar2;
  undefined4 *unaff_EBX;
  undefined4 *unaff_EBP;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((int *)(unsigned int)(DAT_00709d7c) == (int *)0x0) {
    return 0;
  }
  puVar1 = *(undefined4 **)(*(int *)(((int)this) + 0xc) + 0x38);
  if ((((*param_4 < 0x11) && (*param_5 == 0)) &&
      (iVar2 = (**(code **)(*DAT_00709d7c + 0x28))(DAT_00709d7c,param_2,param_3,puVar1,2,1,0x50),
      -1 < iVar2)) &&
     (iVar2 = (**(code **)(*DAT_00709d7c + 0x30))(DAT_00709d7c,param_2,param_3,puVar1,puVar1,0x50),
     -1 < iVar2)) {
    *param_6 = 0x50;
    *param_4 = 0x10;
    *param_5 = 0;
    return 1;
  }
  if (((*param_4 < 0x10) && (*param_5 < 2)) &&
     ((iVar2 = (**(code **)(*DAT_00709d7c + 0x28))(DAT_00709d7c,param_2,param_3,puVar1,2,1,0x49),
      -1 < iVar2 &&
      (iVar2 = (**(code **)(*DAT_00709d7c + 0x30))(DAT_00709d7c,param_2,param_3,puVar1,puVar1,0x49),
      -1 < iVar2)))) {
    *param_6 = 0x49;
    *param_4 = 0xf;
    *param_5 = 1;
    return 1;
  }
  if (*param_4 < 0x19) {
    if (((*param_5 == 0) &&
        (iVar2 = (**(code **)(*DAT_00709d7c + 0x28))(DAT_00709d7c,param_2,param_3,puVar1,2,1,0x4d),
        -1 < iVar2)) &&
       (iVar2 = (**(code **)(*DAT_00709d7c + 0x30))(DAT_00709d7c,param_2,param_3,puVar1,puVar1,0x4d)
       , -1 < iVar2)) {
      *param_6 = 0x4d;
      *param_4 = 0x18;
      *param_5 = 0;
      return 1;
    }
    if (*param_4 < 0x19) {
      if (((*param_5 < 9) &&
          (iVar2 = (**(code **)(*DAT_00709d7c + 0x28))(DAT_00709d7c,param_2,param_3,puVar1,2,1,0x4b)
          , -1 < iVar2)) &&
         (iVar2 = (**(code **)(*DAT_00709d7c + 0x30))
                            (DAT_00709d7c,param_2,param_3,puVar1,puVar1,0x4b), -1 < iVar2)) {
        *param_6 = 0x4b;
        *param_4 = 0x18;
        *param_5 = 8;
        return 1;
      }
      if (((*param_4 < 0x19) && (*param_5 < 5)) &&
         (iVar2 = (**(code **)(*DAT_00709d7c + 0x28))(DAT_00709d7c,param_2,param_3,puVar1,2,1,0x4f),
         -1 < iVar2)) {
        iVar2 = (**(code **)(*DAT_00709d7c + 0x30))(DAT_00709d7c,param_2,param_3,puVar1,puVar1,0x4f)
        ;
        if (-1 < iVar2) goto LAB_006201b3;
        iVar2 = (**(code **)(*DAT_00709d7c + 0x28))(DAT_00709d7c,param_2,param_3,puVar1,2,1,0x50);
        if ((-1 < iVar2) &&
           (iVar2 = (**(code **)(*DAT_00709d7c + 0x30))
                              (DAT_00709d7c,param_2,param_3,puVar1,puVar1,0x50), -1 < iVar2)) {
          *param_6 = 0x50;
          *param_4 = 0x10;
          *param_5 = 0;
          return 1;
        }
      }
    }
  }
  if (*param_4 < 0x21) {
    puVar3 = param_3;
    puVar4 = puVar1;
    iVar2 = (**(code **)(*DAT_00709d7c + 0x28))(DAT_00709d7c,param_2,param_3,puVar1,2,1,0x47);
    if (iVar2 < 0) {
      puVar3 = param_3;
      puVar4 = puVar1;
      iVar2 = (**(code **)(*DAT_00709d7c + 0x28))(DAT_00709d7c,param_2,param_3,puVar1,2,1,0x4b);
      if (iVar2 < 0) {
        iVar2 = (**(code **)(*DAT_00709d7c + 0x28))(DAT_00709d7c,param_2,param_3,puVar1,2,1,0x4f);
        if (iVar2 < 0) {
          puVar3 = param_3;
          puVar4 = puVar1;
          iVar2 = (**(code **)(*DAT_00709d7c + 0x28))(DAT_00709d7c,param_2,param_3,puVar1,2,1,0x4d);
          if ((-1 < iVar2) &&
             (iVar2 = (**(code **)(*DAT_00709d7c + 0x30))
                                (DAT_00709d7c,param_2,param_3,puVar1,puVar1,0x4d), -1 < iVar2)) {
            *puVar4 = 0x4d;
            *param_4 = 0x18;
            *puVar3 = 0;
            return 1;
          }
        }
        else {
          iVar2 = (**(code **)(*DAT_00709d7c + 0x30))
                            (DAT_00709d7c,param_2,param_3,puVar1,puVar1,0x4f);
          if (-1 < iVar2) {
LAB_006201b3:
            *unaff_EBX = 0x4f;
            *param_4 = 0x18;
            *unaff_EBP = 4;
            return 1;
          }
        }
      }
      else {
        iVar2 = (**(code **)(*DAT_00709d7c + 0x30))(DAT_00709d7c,param_2,param_3,puVar1,puVar1,0x4b)
        ;
        if (-1 < iVar2) {
          *puVar4 = 0x4b;
          *param_4 = 0x18;
          *puVar3 = 8;
          return 1;
        }
      }
    }
    else {
      iVar2 = (**(code **)(*DAT_00709d7c + 0x30))(DAT_00709d7c,param_2,param_3,puVar1,puVar1,0x47);
      if (-1 < iVar2) {
        *puVar4 = 0x47;
        *param_4 = 0x20;
        *puVar3 = 0;
        return 1;
      }
    }
  }
  return 0;
}
