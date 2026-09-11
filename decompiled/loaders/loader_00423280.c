/* spd-match: far pct=10.34 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_uchar_int */
#include "ghidra_compat.h"

int __cdecl FUN_00421aa0(...);
int __cdecl FUN_00421ae0(...);
int __cdecl FUN_00421bc0(...);
int __cdecl FUN_00434b50(...);
int __cdecl FUN_00448370(...);
int __cdecl FUN_00448440(...);
int __cdecl FUN_0047bae0(...);
int __cdecl FUN_0047eae0(...);
int __cdecl FUN_0047ef00(...);
int __cdecl FUN_00495e20(...);
int __cdecl FUN_00495ec0(...);
extern unsigned char *DAT_0073619c;
extern int DAT_0078a320;
extern void LAB_00423468(...);
extern void LAB_0042347b(...);
extern void LAB_006896eb(...);
void *ExceptionList;

struct ThisCallBox {
  undefined4 FUN_00423280(undefined4 param_2, undefined4 param_3);
};
undefined4 ThisCallBox::FUN_00423280(undefined4 param_2, undefined4 param_3) {
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar4 = (int *)(unsigned int)(DAT_0073619c);
  local_8 = 0xffffffff;
  puStack_c = (unsigned char *)(unsigned int)&LAB_006896eb;
  local_10 = ExceptionList;
  switch(param_2) {
  case 1:
    ExceptionList = &local_10;
    if (*(undefined4 **)(((int)this) + 0x34) != (undefined4 *)0x0) {
      ExceptionList = &local_10;
      (**(code **)**(undefined4 **)(((int)this) + 0x34))(1);
      *(undefined4 *)(((int)this) + 0x34) = 0;
    }
    if (*(undefined4 **)(((int)this) + 0x40) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(((int)this) + 0x40))(1);
      *(undefined4 *)(((int)this) + 0x40) = 0;
    }
    FUN_0047bae0();
    if (*(int *)(((int)this) + 0x3c) == 0) {
      pvVar1 = _malloc(0x30);
      local_8 = 0;
      if (pvVar1 == (void *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_0047ef00(pvVar1,1);
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(((int)this) + 0x3c) = uVar2;
    }
    if ((*(int *)(*(int *)(((int)this) + 0x3c) + 0x20) == 0) ||
       (*(int *)(*(int *)(((int)this) + 0x3c) + 0x1c) == 0)) {
      if (*(int *)(((int)this) + 0x38) == 0) {
        iVar3 = FUN_00448440("GLOBAL\\PRERACEANIM.LZC");
        if (iVar3 == 0) {
          FUN_00434b50(DAT_0073619c,3);
          FUN_00421ae0(4);
          FUN_00495e20();
          ExceptionList = local_10;
          return 1;
        }
        pvVar1 = _malloc(0xbc);
        if (pvVar1 == (void *)0x0) {
          *(undefined4 *)(((int)this) + 0x38) = 0;
          FUN_00495e20();
          ExceptionList = local_10;
          return 1;
        }
        uVar2 = FUN_0047eae0();
        *(undefined4 *)(((int)this) + 0x38) = uVar2;
        FUN_00495e20();
        ExceptionList = local_10;
        return 1;
      }
    }
    else if (*(undefined4 **)(((int)this) + 0x38) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(((int)this) + 0x38))(1);
      *(undefined4 *)(((int)this) + 0x38) = 0;
    }
    FUN_00495e20();
    ExceptionList = local_10;
    return 1;
  case 2:
    ExceptionList = &local_10;
    if (*(undefined4 **)(((int)this) + 0x38) != (undefined4 *)0x0) {
      ExceptionList = &local_10;
      (**(code **)**(undefined4 **)(((int)this) + 0x38))(1);
      *(undefined4 *)(((int)this) + 0x38) = 0;
    }
    iVar3 = FUN_00448440("GLOBAL\\PRERACEANIM.LZC");
    if (iVar3 != 0) {
      FUN_00448370();
    }
    ExceptionList = local_10;
    return 1;
  case 3:
    break;
  case 4:
    ExceptionList = &local_10;
    if (DAT_0078a320 == 1) {
      ExceptionList = &local_10;
      FUN_00495ec0();
      piVar4 = (int *)(unsigned int)(DAT_0073619c);
    }
    goto LAB_0042347b;
  case 5:
    *(undefined4 *)(((int)this) + 0x1c) = param_3;
    *(undefined1 *)(((int)this) + 0x25) = 1;
    return 1;
  default:
    return 0;
  case 10:
    ExceptionList = &local_10;
    FUN_00421ae0(0);
    FUN_00421bc0(10,0);
    ExceptionList = local_10;
    return 1;
  }
  if (*DAT_0073619c != 2) {
    return 1;
  }
  if (*(int *)(((int)this) + 0x3c) == 0) {
    return 1;
  }
  if (*(int *)(*(int *)(((int)this) + 0x3c) + 0x1c) == 0) {
    ExceptionList = &local_10;
    if (*(int *)(((int)this) + 0x38) != 0) {
      iVar3 = *(int *)(*(int *)(((int)this) + 0x38) + 0xb8);
      ExceptionList = &local_10;
      goto LAB_00423468;
    }
  }
  else {
    ExceptionList = &local_10;
    iVar3 = FUN_00421aa0();
LAB_00423468:
    if (iVar3 == 0) {
      ExceptionList = local_10;
      return 1;
    }
  }
  if (DAT_0078a320 == 1) {
    FUN_00495ec0();
  }
LAB_0042347b:
  FUN_00434b50(piVar4,3);
  FUN_00421ae0(4);
  ExceptionList = local_10;
  return 1;
}
