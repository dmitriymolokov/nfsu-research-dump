/* spd-match: far pct=9.47 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_1 */
#include "ghidra_compat.h"

int __cdecl FUN_004ef050();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f42f0();
int __cdecl FUN_004f65d0();
int __cdecl FUN_004f78e0();
int __cdecl FUN_004fd1e0();
int __cdecl FUN_004ffb00();
int __cdecl FUN_004ffb70();
extern unsigned char *DAT_0073578c;
extern int DAT_00746104;
extern unsigned char *PTR_FUN_006c316c;
extern void LAB_004e2be1(void);
extern void LAB_004e2c29(void);
extern void LAB_004e2c44(void);
extern void LAB_004e2cb6(void);
extern void LAB_004e2cfe(void);
extern void LAB_004e2d19(void);
extern void LAB_004e2d8b(void);
extern void LAB_004e2dd3(void);
extern void LAB_004e2dee(void);
extern void LAB_004e2e60(void);
extern void LAB_004e2ea8(void);
extern void LAB_004e2ebf(void);
extern void LAB_004e2fc6(void);
extern void LAB_004e2ffe(void);
extern void LAB_004e301c(void);
extern void LAB_00687048(void);
void *ExceptionList;

undefined4 * FUN_004e2a00(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00687048;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f78e0(param_1,param_2);
  *param_1 = &PTR_FUN_006c316c;
  *(undefined1 *)(param_1 + 8) = 1;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  local_4 = 0;
  if (((param_1[3] == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
     (iVar2 = FUN_004ffb70(), iVar2 == 0)) {
    if (DAT_0073578c == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_004ef050(0xda96ef8f);
    }
  }
  param_1[0x10] = iVar2;
  if (((param_1[3] == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
     (iVar2 = FUN_004ffb70(), iVar2 == 0)) {
    if (DAT_0073578c == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_004ef050(0xda9a39d5);
    }
  }
  param_1[0x11] = iVar2;
  if (((param_1[3] == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
     (iVar2 = FUN_004ffb70(), iVar2 == 0)) {
    if (DAT_0073578c == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_004ef050(0x80b4bcff);
    }
  }
  param_1[0x12] = iVar2;
  iVar3 = FUN_004f3f90(&DAT_00746104);
  iVar2 = DAT_0073578c;
  if ((iVar3 == 0) || (iVar3 = *(int *)(iVar3 + 0x18), iVar3 == 0)) {
    if (DAT_0073578c == 0) {
      iVar3 = 0;
    }
    else {
      iVar1 = *(int *)(DAT_0073578c + 8);
      if (iVar1 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_004fd1e0(iVar1 + 0xdc);
        if (iVar3 == 0) {
          iVar3 = FUN_004fd1e0(iVar1 + 0xec);
        }
      }
    }
  }
  param_1[0x13] = iVar3;
  param_1[0x14] = 0;
  if (param_1[3] == 0) {
LAB_004e2c29:
    iVar3 = 0;
    if (iVar2 == 0) goto LAB_004e2c44;
    uVar4 = FUN_004ef050(0xa817ae3d);
    iVar3 = DAT_0073578c;
  }
  else {
    iVar3 = FUN_004f3f90(&DAT_00746104);
    iVar2 = DAT_0073578c;
    if ((iVar3 != 0) && (iVar3 = *(int *)(iVar3 + 0x18), iVar3 != 0)) {
LAB_004e2be1:
      (*(unsigned char *)&(local_4)) = 1;
      FUN_004ffb00(iVar3);
      local_4 = (uint)((unsigned int)(local_4) >> 8) << 8;
      iVar2 = DAT_0073578c;
      goto LAB_004e2c29;
    }
    iVar3 = DAT_0073578c;
    if (DAT_0073578c != 0) {
      iVar1 = *(int *)(DAT_0073578c + 8);
      if ((iVar1 == 0) ||
         (((iVar3 = FUN_004fd1e0(iVar1 + 0xdc), iVar3 == 0 &&
           (iVar3 = FUN_004fd1e0(iVar1 + 0xec), iVar3 == 0)) || (iVar3 == 0)))) goto LAB_004e2c29;
      goto LAB_004e2be1;
    }
LAB_004e2c44:
    uVar4 = 0;
  }
  param_1[0x15] = uVar4;
  if (param_1[3] == 0) {
LAB_004e2cfe:
    iVar2 = 0;
    if (iVar3 == 0) goto LAB_004e2d19;
    uVar4 = FUN_004ef050(0xa817ae3e);
    iVar2 = DAT_0073578c;
  }
  else {
    iVar2 = FUN_004f3f90(&DAT_00746104);
    iVar3 = DAT_0073578c;
    if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + 0x18), iVar2 != 0)) {
LAB_004e2cb6:
      (*(unsigned char *)&(local_4)) = 2;
      FUN_004ffb00(iVar2);
      local_4 = (uint)((unsigned int)(local_4) >> 8) << 8;
      iVar3 = DAT_0073578c;
      goto LAB_004e2cfe;
    }
    iVar2 = DAT_0073578c;
    if (DAT_0073578c != 0) {
      iVar1 = *(int *)(DAT_0073578c + 8);
      if (((iVar1 == 0) ||
          ((iVar2 = FUN_004fd1e0(iVar1 + 0xdc), iVar2 == 0 &&
           (iVar2 = FUN_004fd1e0(iVar1 + 0xec), iVar2 == 0)))) || (iVar2 == 0)) goto LAB_004e2cfe;
      goto LAB_004e2cb6;
    }
LAB_004e2d19:
    uVar4 = 0;
  }
  param_1[0x16] = uVar4;
  if (param_1[3] == 0) {
LAB_004e2dd3:
    iVar3 = 0;
    if (iVar2 == 0) goto LAB_004e2dee;
    uVar4 = FUN_004ef050(0xa817ae3f);
    iVar3 = DAT_0073578c;
  }
  else {
    iVar3 = FUN_004f3f90(&DAT_00746104);
    iVar2 = DAT_0073578c;
    if ((iVar3 != 0) && (iVar3 = *(int *)(iVar3 + 0x18), iVar3 != 0)) {
LAB_004e2d8b:
      (*(unsigned char *)&(local_4)) = 3;
      FUN_004ffb00(iVar3);
      local_4 = (uint)((unsigned int)(local_4) >> 8) << 8;
      iVar2 = DAT_0073578c;
      goto LAB_004e2dd3;
    }
    iVar3 = DAT_0073578c;
    if (DAT_0073578c != 0) {
      iVar1 = *(int *)(DAT_0073578c + 8);
      if ((iVar1 == 0) ||
         (((iVar3 = FUN_004fd1e0(iVar1 + 0xdc), iVar3 == 0 &&
           (iVar3 = FUN_004fd1e0(iVar1 + 0xec), iVar3 == 0)) || (iVar3 == 0)))) goto LAB_004e2dd3;
      goto LAB_004e2d8b;
    }
LAB_004e2dee:
    uVar4 = 0;
  }
  param_1[0x17] = uVar4;
  if (param_1[3] == 0) {
LAB_004e2ea8:
    if (iVar3 != 0) {
      uVar4 = FUN_004ef050(0xa817ae40);
      goto LAB_004e2ebf;
    }
  }
  else {
    iVar2 = FUN_004f3f90(&DAT_00746104);
    iVar3 = DAT_0073578c;
    if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + 0x18), iVar2 != 0)) {
LAB_004e2e60:
      (*(unsigned char *)&(local_4)) = 4;
      FUN_004ffb00(iVar2);
      local_4 = (uint)((unsigned int)(local_4) >> 8) << 8;
      iVar3 = DAT_0073578c;
      goto LAB_004e2ea8;
    }
    if (DAT_0073578c != 0) {
      iVar1 = *(int *)(DAT_0073578c + 8);
      if (((iVar1 == 0) ||
          ((iVar2 = FUN_004fd1e0(iVar1 + 0xdc), iVar2 == 0 &&
           (iVar2 = FUN_004fd1e0(iVar1 + 0xec), iVar2 == 0)))) || (iVar2 == 0)) goto LAB_004e2ea8;
      goto LAB_004e2e60;
    }
  }
  uVar4 = 0;
LAB_004e2ebf:
  param_1[0x18] = uVar4;
  iVar2 = FUN_004f3f90(&DAT_00746104);
  if (((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + 0x18), iVar2 != 0)) ||
     (((DAT_0073578c != 0 && (iVar3 = *(int *)(DAT_0073578c + 8), iVar3 != 0)) &&
      ((iVar2 = FUN_004fd1e0(iVar3 + 0xdc), iVar2 != 0 ||
       (iVar2 = FUN_004fd1e0(iVar3 + 0xec), iVar2 != 0)))))) {
    (*(unsigned char *)&(local_4)) = 5;
    FUN_004ffb00(iVar2);
    local_4 = (uint)((unsigned int)(local_4) >> 8) << 8;
  }
  iVar2 = 0;
  param_2 = param_1 + 0x19;
  do {
    iVar3 = param_1[3];
    iVar2 = iVar2 + 1;
    uVar4 = FUN_004f42f0("VINYL_THUMB_%d",iVar2);
    if (iVar3 == 0) {
LAB_004e2ffe:
      if (((DAT_0073578c == 0) || (iVar3 = FUN_004ef050(uVar4), iVar3 == 0)) ||
         (*(int *)(iVar3 + 0x18) != 1)) goto LAB_004e301c;
    }
    else {
      iVar3 = FUN_004f3f90(&DAT_00746104);
      if ((iVar3 != 0) && (iVar3 = *(int *)(iVar3 + 0x18), iVar3 != 0)) {
LAB_004e2fc6:
        (*(unsigned char *)&(local_4)) = 6;
        FUN_004ffb00(iVar3);
        local_4 = (uint)((unsigned int)(local_4) >> 8) << 8;
        goto LAB_004e2ffe;
      }
      if (DAT_0073578c != 0) {
        iVar1 = *(int *)(DAT_0073578c + 8);
        if ((iVar1 == 0) ||
           ((iVar3 = FUN_004fd1e0(iVar1 + 0xdc), iVar3 == 0 &&
            (iVar3 = FUN_004fd1e0(iVar1 + 0xec), iVar3 == 0)))) goto LAB_004e2ffe;
        goto LAB_004e2fc6;
      }
LAB_004e301c:
      iVar3 = 0;
    }
    *param_2 = iVar3;
    param_2 = param_2 + 1;
    if (3 < iVar2) {
      ExceptionList = local_c;
      return param_1;
    }
  } while( true );
}
