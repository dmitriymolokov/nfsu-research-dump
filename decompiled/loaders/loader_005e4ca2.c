/* spd-match: far pct=11.73 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_int */
#include "ghidra_compat.h"

int __cdecl FUN_005ba06e(...);
int __cdecl FUN_005ba07f(...);
int __cdecl FUN_005c50ee(...);
int __cdecl FUN_005d7665(...);
int __cdecl FUN_005d7700(...);
int __cdecl FUN_005d9bb3(...);
int __cdecl FUN_005d9cc7(...);
int __cdecl FUN_005d9de1(...);
int __cdecl FUN_005d9e57(...);
int __cdecl FUN_005e1f75(...);
int __cdecl FUN_005e293e(...);
int __cdecl FUN_005e4bb7(...);
int __cdecl FUN_00604269(...);
int __cdecl FUN_0060cd67(...);
int __cdecl FUN_00611e41(...);
int __cdecl FUN_00612900(...);
extern void LAB_005e4d38(...);
extern void LAB_005e4d50(...);
extern void LAB_005e4d52(...);
extern void LAB_005e4ddd(...);
extern void LAB_005e4ea6(...);
extern void LAB_005e4f49(...);
extern void LAB_005e4f53(...);
extern void LAB_005e4f65(...);
extern void LAB_005e4fa3(...);
extern void LAB_005e4fb5(...);

struct ThisCallBox {
  int FUN_005e4ca2(undefined4 param_2, int param_3, int param_4, undefined4 param_5, int param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9, uint param_10, undefined4 *param_11, int param_12);
};
int ThisCallBox::FUN_005e4ca2(undefined4 param_2, int param_3, int param_4, undefined4 param_5, int param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9, uint param_10, undefined4 *param_11, int param_12) {
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined1 local_18 [4];
  int local_14;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 0;
  if (((param_10 & 0xffffffc2) != 0) || (param_11 == (undefined4 *)0x0)) {
    return -0x7789f794;
  }
  if ((undefined4 *)((undefined4 *)this)[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)((undefined4 *)this)[1])(1);
  }
  if ((undefined4 *)((undefined4 *)this)[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)((undefined4 *)this)[2])(1);
  }
  _free((void *)((undefined4 *)this)[6]);
  *((undefined4 *)this) = param_2;
  ((undefined4 *)this)[5] = param_10;
  ((undefined4 *)this)[1] = 0;
  ((undefined4 *)this)[2] = 0;
  ((undefined4 *)this)[6] = 0;
  ((undefined4 *)this)[7] = 0;
  ((undefined4 *)this)[0xd] = 0;
  ((undefined4 *)this)[0xe] = 0;
  ((undefined4 *)this)[3] = param_9;
  ((undefined4 *)this)[0xc] = 0;
  ((undefined4 *)this)[0xf] = 0;
  ((undefined4 *)this)[0x10] = 0;
  ((undefined4 *)this)[0x11] = 0;
  ((undefined4 *)this)[0x12] = 0;
  ((undefined4 *)this)[0x13] = 0;
  ((undefined4 *)this)[0x14] = param_8;
  if (param_6 == 0) {
    iVar4 = FUN_005d7700(param_9,2,local_18);
    if (iVar4 < 0) {
      FUN_005d9de1(((undefined4 *)this),0,0xdb2,"unrecognized compiler target \'%s\'",((undefined4 *)this)[3]);
      return -0x7789f794;
    }
    ((undefined4 *)this)[4] = local_14;
    if (local_14 == -0x1ff00) {
      ((undefined4 *)this)[4] = 0xfffe0101;
      local_8 = 1;
    }
    if (((undefined4 *)this)[4] == -0xff00) {
      ((undefined4 *)this)[4] = 0xffff0101;
      local_c = 1;
    }
    uVar1 = ((undefined4 *)this)[4];
    if (uVar1 < 0xfffe0300) {
      if (uVar1 != 0xfffe02ff) {
        if (uVar1 == 0x54580100) goto LAB_005e4d38;
        if ((uVar1 != 0xfffe0101) && (uVar1 != 0xfffe0200)) goto LAB_005e4ddd;
      }
      pvVar2 = _malloc(0x150);
      if (pvVar2 == (void *)0x0) goto LAB_005e4d50;
      uVar3 = FUN_00611e41(param_8);
      goto LAB_005e4d52;
    }
    if (0xffff0100 < uVar1) {
      if (uVar1 < 0xffff0105) {
        ((undefined4 *)this)[5] = ((undefined4 *)this)[5] & 0xfffffff7;
        pvVar2 = _malloc(0x208);
        if (pvVar2 == (void *)0x0) goto LAB_005e4d50;
        uVar3 = FUN_00604269();
      }
      else {
        if ((uVar1 != 0xffff0200) && (uVar1 != 0xffff02ff)) goto LAB_005e4ddd;
        pvVar2 = _malloc(0x140);
        if (pvVar2 == (void *)0x0) goto LAB_005e4d50;
        uVar3 = FUN_0060cd67();
      }
      goto LAB_005e4d52;
    }
LAB_005e4ddd:
    ((undefined4 *)this)[2] = 0;
  }
  else {
    ((undefined4 *)this)[4] = 0x46580200;
LAB_005e4d38:
    pvVar2 = _malloc(0x110);
    if (pvVar2 == (void *)0x0) {
LAB_005e4d50:
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00612900();
    }
LAB_005e4d52:
    ((undefined4 *)this)[2] = uVar3;
  }
  if (((undefined4 *)this)[2] == 0) {
    return -0x7ff8fff2;
  }
  if (param_3 == 0) {
    puVar6 = ((undefined4 *)this) + 1;
    uVar3 = ((undefined4 *)this)[5];
    uVar5 = *((undefined4 *)this);
    FUN_005ba06e(uVar5,uVar3,puVar6);
    iVar4 = FUN_005c50ee(uVar5,uVar3,puVar6);
    FUN_005ba07f();
    if (-1 < iVar4) goto LAB_005e4ea6;
  }
  else {
    ((undefined4 *)this)[1] = param_3;
LAB_005e4ea6:
    if (local_8 != 0) {
      FUN_005d9e57(((undefined4 *)this),0,0xdb1,"vs_1_0 is no longer supported; using vs_1_1");
    }
    if (local_c != 0) {
      FUN_005d9e57(((undefined4 *)this),0,0xdb1,"ps_1_0 is no longer supported; using ps_1_1");
    }
    iVar4 = FUN_005e293e();
    if (-1 < iVar4) {
      if (param_6 == 0) {
        if (param_4 == 0) {
          iVar4 = FUN_005d9cc7(param_5,&param_4);
          if (iVar4 != 0) {
            uVar3 = 1;
            goto LAB_005e4f53;
          }
          FUN_005d9de1(((undefined4 *)this),0,0xdad,"overloaded function not found");
        }
        else {
          iVar4 = FUN_005d9bb3(param_4);
          if (iVar4 != 0) {
            uVar3 = 0;
LAB_005e4f53:
            iVar4 = FUN_005e1f75(param_4,iVar4,param_7,0,1,uVar3);
            goto LAB_005e4f65;
          }
          FUN_005d9de1(((undefined4 *)this),0,0xdad,"\'%s\': entrypoint not found",param_4);
        }
LAB_005e4f49:
        iVar4 = -0x7fffbffb;
      }
      else {
        iVar4 = FUN_005e4bb7(param_6);
LAB_005e4f65:
        if (-1 < iVar4) {
          if (((undefined4 *)this)[0xd] != 0) goto LAB_005e4f49;
          iVar4 = (**(code **)(*(int *)((undefined4 *)this)[2] + 0xc))(param_11,0);
          if (-1 < iVar4) {
            if (param_12 != 0) {
              iVar4 = param_12;
              uVar3 = (**(code **)(*(int *)*param_11 + 0xc))((int *)*param_11,param_12);
              iVar4 = FUN_005d7665(uVar3,iVar4);
              if (iVar4 < 0) goto LAB_005e4fa3;
            }
            iVar4 = 0;
          }
        }
      }
    }
LAB_005e4fa3:
    if (param_3 != 0) goto LAB_005e4fb5;
  }
  if ((undefined4 *)((undefined4 *)this)[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)((undefined4 *)this)[1])(1);
  }
LAB_005e4fb5:
  ((undefined4 *)this)[1] = 0;
  if ((undefined4 *)((undefined4 *)this)[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)((undefined4 *)this)[2])(1);
  }
  ((undefined4 *)this)[2] = 0;
  _free((void *)((undefined4 *)this)[6]);
  ((undefined4 *)this)[6] = 0;
  return iVar4;
}
