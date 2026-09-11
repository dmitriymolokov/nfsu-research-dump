/* spd-match: far pct=7.72 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2069 */
#include "ghidra_compat.h"

int __cdecl FUN_0040a880();
int __cdecl FUN_0040cb70();
int __cdecl FUN_00566e60();
int __cdecl FUN_00571c20();
int __cdecl FUN_00571ea0();
int __cdecl FUN_00595530();
int __cdecl FUN_005962e0();
extern int DAT_0073168c;
extern unsigned char *DAT_00734464;
extern int DAT_0073446c;
extern int DAT_00734470;
extern int DAT_00737778;
extern unsigned char *DAT_00779c70;
extern void LAB_00596100(void);
extern void LAB_00686bf8(void);
void *ExceptionList;

void FUN_00595f70(uint param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  char cVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  uint uStack_18;
  undefined4 uStack_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00686bf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00571ea0(0,"AllSmokeables");
  FUN_00571c20(uVar1,&DAT_0073446c,4,4,1);
  if (*(char *)(uVar1 + 0x3d) == '\0') {
    if (DAT_00779c70 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)(DAT_00779c70 + -4);
    }
    piVar5 = (int *)FUN_0040cb70();
    while (piVar3 != piVar5) {
      if (*(char *)((int)piVar3 + 0x15) == '\x02') {
        param_1 = (piVar3[0x18] - DAT_00734470) / 0x70;
        FUN_00571c20(uVar1,&param_1,2,2,1);
        (**(code **)(*piVar3 + 4))(uVar1);
      }
      if (piVar3[1] == 0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)(piVar3[1] + -4);
      }
    }
    local_28 = (undefined4 *)0xffffffff;
    FUN_00571c20(uVar1,&local_28,2,2,1);
    if (DAT_00779c70 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)(DAT_00779c70 + -4);
    }
    while (piVar3 != piVar5) {
      if (*(char *)((int)piVar3 + 0x15) == '\x01') {
        iVar9 = piVar3[0x56];
        uStack_18 = (uint)*(ushort *)(piVar3 + 6);
        uStack_14 = *(undefined4 *)(piVar3[0x112] + 8);
        local_10 = (**(undefined4 * (**)())(*piVar3 + 0x78))();
        FUN_00571c20(uVar1,&uStack_18,2,2,0);
        FUN_00571c20(uVar1,iVar9 + 0x80,4,4,0);
        FUN_00571c20(uVar1,&uStack_14,4,4,0);
        FUN_00571c20(uVar1,&local_10,1,4,1);
        (**(code **)(*piVar3 + 4))(uVar1);
      }
      if (piVar3[1] == 0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)(piVar3[1] + -4);
      }
    }
    FUN_00571c20(uVar1,&local_28,2,2,1);
  }
  else {
    FUN_00595530();
    while( true ) {
      FUN_00571c20(uVar1,&param_1,2,2,0);
      iVar9 = DAT_00734464;
      if ((short)param_1 == -1) break;
      iVar7 = (param_1 & 0xffff) * 0x70 + DAT_00734470;
      local_28 = (undefined4 *)(DAT_00734464 + 0x10);
      if ((*(int *)(DAT_00734464 + 0x10) == 0) && ((*(byte *)(DAT_00734464 + 0x14) & 1) != 0)) {
        FUN_00566e60();
      }
      local_10 = (undefined4 *)*local_28;
      iVar2 = *(int *)(iVar9 + 0x18) + 1;
      if (local_10 != (undefined4 *)0x0) {
        puVar8 = (undefined4 *)*local_10;
        if (*(int *)(iVar9 + 0x1c) < iVar2) {
          *(int *)(iVar9 + 0x1c) = iVar2;
        }
        *(int *)(iVar9 + 0x18) = iVar2;
        *local_28 = puVar8;
        local_28 = puVar8;
        if (((*(byte *)(iVar9 + 0x14) & 2) != 0) &&
           (iVar9 = *(int *)(iVar9 + 0x28) >> 2, puVar8 = local_10, 0 < iVar9)) {
          for (; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar8 = 0;
            puVar8 = puVar8 + 1;
          }
        }
      }
      piVar3 = (int *)0x0;
      local_4 = 0;
      if (local_10 != (undefined4 *)0x0) {
        piVar3 = (int *)FUN_005962e0(local_10,iVar7);
      }
      local_4 = 0xffffffff;
      (**(code **)(*piVar3 + 4))(uVar1);
    }
    while( true ) {
      FUN_00571c20(uVar1,&param_1,2,2,0);
      if ((short)param_1 == -1) break;
      FUN_00571c20(uVar1,&local_24,4,4,0);
      FUN_00571c20(uVar1,&local_20,4,4,0);
      FUN_00571c20(uVar1,&local_1c,1,4,1);
      puVar8 = DAT_00737778;
      puVar4 = (undefined4 *)FUN_0040a880();
      for (; puVar8 != puVar4; puVar8 = (undefined4 *)*puVar8) {
        if (puVar8[0x20] == local_24) goto LAB_00596100;
      }
      puVar8 = (undefined4 *)0x0;
LAB_00596100:
      piVar3 = (int *)(*(code *)(&DAT_0073168c)[local_1c])(param_1 & 0xffff,puVar8,local_20);
      (**(code **)(*piVar3 + 4))(uVar1);
    }
  }
  iVar9 = *(char *)(uVar1 + 0x40) * 0x10 + 0x4c + uVar1;
  *(int *)(iVar9 + 0xc) = *(int *)(uVar1 + 0x150) - *(int *)(iVar9 + 0xc);
  cVar6 = *(char *)(uVar1 + 0x40) + -1;
  *(char *)(uVar1 + 0x40) = cVar6;
  if ((int)cVar6 < *(int *)(uVar1 + 0x44)) {
    *(undefined4 *)(uVar1 + 0x44) = 0xffffffff;
  }
  ExceptionList = local_c;
  return;
}
