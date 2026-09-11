/* spd-match: far pct=5.19 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_2_2 */
#include "ghidra_compat.h"

int __cdecl FUN_0040cb70();
int __cdecl FUN_0046a440();
int __cdecl FUN_00566e60();
int __cdecl FUN_00571c20();
int __cdecl FUN_00571ea0();
extern unsigned char *DAT_0072cbf4;
extern int DAT_00736014;
extern unsigned char *DAT_00779c70;
extern int DAT_0077b140;
extern void LAB_006864b8(void);
void *ExceptionList;

void FUN_0046a6e0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *local_20;
  int local_1c;
  undefined4 *local_18;
  undefined2 local_14 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar1 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006864b8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00571ea0(0,"AllTrackPolygonCollisionBodies");
  if ((*(char *)(iVar1 + 0x3e) != '\0') || (*(char *)(iVar1 + 0x3f) != '\0')) {
    FUN_00571c20(iVar1,&DAT_00736014,4,4,1);
  }
  if (*(char *)(iVar1 + 0x3d) == '\0') {
    if (DAT_00779c70 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)(DAT_00779c70 + -4);
    }
    piVar4 = (int *)FUN_0040cb70();
    while (piVar3 != piVar4) {
      if (*(char *)((int)piVar3 + 0x15) == '\x03') {
        local_1c = *(int *)(piVar3[0x18] + 0xc) - DAT_0077b140 >> 5;
        FUN_00571c20(iVar1,&local_1c,2,2,0);
        local_18 = (undefined4 *)(uint)*(ushort *)(piVar3 + 6);
        FUN_00571c20(iVar1,&local_18,2,2,0);
        (**(code **)(*piVar3 + 4))(iVar1);
      }
      if (piVar3[1] == 0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)(piVar3[1] + -4);
      }
    }
    local_20 = (undefined4 *)0xffff;
    FUN_00571c20(iVar1,&local_20,2,2,0);
  }
  else {
    while( true ) {
      FUN_00571c20(iVar1,(int)&param_1 + 2,2,2,0);
      if ((*(unsigned short *)((unsigned char *)&(param_1) + 2)) == 0xffff) break;
      local_1c = (uint)(*(unsigned short *)((unsigned char *)&(param_1) + 2)) * 0x20 + DAT_0077b140;
      FUN_00571c20(iVar1,local_14,2,2,0);
      iVar6 = DAT_0072cbf4;
      local_18 = (undefined4 *)(DAT_0072cbf4 + 0x10);
      if ((*(int *)(DAT_0072cbf4 + 0x10) == 0) && ((*(byte *)(DAT_0072cbf4 + 0x14) & 1) != 0)) {
        FUN_00566e60();
      }
      local_20 = (undefined4 *)*local_18;
      iVar2 = *(int *)(iVar6 + 0x18) + 1;
      if (local_20 != (undefined4 *)0x0) {
        puVar7 = (undefined4 *)*local_20;
        if (*(int *)(iVar6 + 0x1c) < iVar2) {
          *(int *)(iVar6 + 0x1c) = iVar2;
        }
        *(int *)(iVar6 + 0x18) = iVar2;
        *local_18 = puVar7;
        local_18 = puVar7;
        if (((*(byte *)(iVar6 + 0x14) & 2) != 0) &&
           (iVar6 = *(int *)(iVar6 + 0x28) >> 2, puVar7 = local_20, 0 < iVar6)) {
          for (; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar7 = 0;
            puVar7 = puVar7 + 1;
          }
        }
      }
      piVar3 = (int *)0x0;
      local_8 = 0;
      if (local_20 != (undefined4 *)0x0) {
        piVar3 = (int *)FUN_0046a440(local_20,local_14[0],local_1c);
      }
      local_8 = 0xffffffff;
      (**(code **)(*piVar3 + 4))(iVar1);
    }
  }
  iVar6 = *(char *)(iVar1 + 0x40) * 0x10;
  *(int *)(iVar6 + iVar1 + 0x58) = *(int *)(iVar1 + 0x150) - *(int *)(iVar6 + 0x58 + iVar1);
  cVar5 = *(char *)(iVar1 + 0x40) + -1;
  *(char *)(iVar1 + 0x40) = cVar5;
  if ((int)cVar5 < *(int *)(iVar1 + 0x44)) {
    *(undefined4 *)(iVar1 + 0x44) = 0xffffffff;
  }
  ExceptionList = local_10;
  return;
}
