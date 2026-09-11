/* spd-match: far pct=12.06 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_cdecl_uchar */
#include "ghidra_compat.h"

int __cdecl _fseek(FILE *, long, int);
long __cdecl _ftell(FILE *);
int __cdecl _fclose(FILE *);

int __cdecl FUN_00421ae0(...);
int __cdecl FUN_00421bc0(...);
int __cdecl FUN_00423f20(...);
int __cdecl FUN_00435b30(...);
int __cdecl FUN_00435b90(...);
int __cdecl FUN_0047bae0(...);
int __cdecl FUN_0047ef00(...);
int __cdecl FUN_0047f310(...);
int __cdecl FUN_0047f4c0(...);
int __cdecl FUN_0051ee20(...);
extern int DAT_006f08a0;
extern unsigned char *DAT_0073619c;
extern void LAB_0068972b(...);
void *ExceptionList;

struct ThisCallBox {
  undefined4 FUN_00423530(undefined4 param_2, undefined4 param_3);
};
undefined4 ThisCallBox::FUN_00423530(undefined4 param_2, undefined4 param_3) {
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pvVar1 = ExceptionList;
  local_8 = 0xffffffff;
  puStack_c = (unsigned char *)(unsigned int)&LAB_0068972b;
  local_10 = ExceptionList;
  switch(param_2) {
  case 1:
    if ((undefined4 *)((undefined4 *)this)[0xe] != (undefined4 *)0x0) {
      ExceptionList = &local_10;
      (*(code *)**(undefined4 **)((undefined4 *)this)[0xe])(1);
      ((undefined4 *)this)[0xe] = 0;
    }
    break;
  case 2:
  case 0xd:
  case 0xf:
    break;
  case 3:
    ExceptionList = &local_10;
    if (*DAT_0073619c != 4) {
      ExceptionList = &local_10;
      if (((undefined4 *)this)[0xf] == 0) {
        ExceptionList = &local_10;
        FUN_0047bae0();
        pvVar1 = _malloc(0x30);
        local_8 = 0;
        if (pvVar1 == (void *)0x0) {
          uVar2 = 0;
        }
        else {
          uVar2 = FUN_0047ef00(pvVar1,1);
        }
        ((undefined4 *)this)[0xf] = uVar2;
      }
      local_8 = 0xffffffff;
      if (((undefined4 *)this)[0xf] != 0) {
        FUN_0047f310(((undefined4 *)this)[0xf]);
      }
      if (*(char *)((int)((undefined4 *)this) + 0x25) != '\0') {
        *(undefined1 *)((int)((undefined4 *)this) + 0x25) = 0;
        ((undefined4 *)this)[8] = *((undefined4 *)this);
        FUN_0051ee20();
        FUN_00421ae0(7);
      }
    }
    if (((undefined4 *)this)[0xf] != 0) {
      uVar4 = FUN_0047f4c0();
      if ((int)uVar4 != 0) {
        (**(code **)*(undefined4 *)((ulonglong)uVar4 >> 0x20))(1);
        ((undefined4 *)this)[0xf] = 0;
      }
    }
    iVar3 = FUN_00435b30(DAT_0073619c);
    if (iVar3 == 0) {
      ExceptionList = local_10;
      return 1;
    }
    iVar3 = FUN_00435b90(DAT_0073619c);
    if (DAT_006f08a0 <= *(int *)(iVar3 + 0x5c) + *(int *)(iVar3 + 0x58)) {
      ExceptionList = local_10;
      return 1;
    }
    FUN_00423f20();
    ExceptionList = local_10;
    return 1;
  case 4:
    ExceptionList = &local_10;
    iVar3 = FUN_00435b30(DAT_0073619c);
    if (iVar3 == 0) {
      ExceptionList = local_10;
      return 1;
    }
    FUN_00423f20();
    ExceptionList = local_10;
    return 1;
  case 5:
    ExceptionList = &local_10;
    ((undefined4 *)this)[7] = param_3;
    if (*(char *)(((undefined4 *)this) + 9) == '\0') {
      *(undefined1 *)(((undefined4 *)this) + 9) = 1;
      ((undefined4 *)this)[8] = *((undefined4 *)this);
      FUN_0051ee20();
      FUN_00421ae0(7);
      ExceptionList = local_10;
      return 1;
    }
  default:
    ExceptionList = pvVar1;
    return 0;
  case 7:
    ExceptionList = &local_10;
    FUN_00421ae0(6);
    ExceptionList = local_10;
    return 1;
  case 9:
    ExceptionList = &local_10;
    FUN_00421ae0(0);
    FUN_00421bc0(9,param_3);
    ExceptionList = local_10;
    return 1;
  case 10:
    ExceptionList = &local_10;
    FUN_00421ae0(0);
    FUN_00421bc0(10,0);
  }
  ExceptionList = local_10;
  return 1;
}
