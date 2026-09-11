/* spd-match: far pct=16.59 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_int_uint */
#include "ghidra_compat.h"

#ifndef ZEXT48
#define ZEXT48(x) ((unsigned __int64)(unsigned int)(x))
#endif

int __cdecl FUN_005d9de1(...);
int __cdecl FUN_005d65b0(...);
int __cdecl FUN_005da768(...);
int __cdecl FUN_005e4ca2(...);
int __cdecl FUN_005e5022(...);
extern void LAB_005e51ff(...);
extern void LAB_005e520a(...);

struct ThisCallBox {
  int FUN_005e505d(undefined4 param_2, undefined4 param_3, int param_4, undefined4 param_5, undefined4 param_6, undefined4 *param_7, undefined4 *param_8);
};
int ThisCallBox::FUN_005e505d(undefined4 param_2, undefined4 param_3, int param_4, undefined4 param_5, undefined4 param_6, undefined4 *param_7, undefined4 *param_8) {
  char *pcVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  
  do {
    iVar6 = param_4;
    if (param_7 != (undefined4 *)0x0) {
      *param_7 = 0;
    }
    if (param_8 != (undefined4 *)0x0) {
      *param_8 = 0;
    }
    iVar4 = FUN_005da768(iVar6);
    if (iVar4 != 0) {
      iVar6 = FUN_005e4ca2(param_2,param_3,0,0,iVar6,0,0,param_5,param_6,param_7,param_8);
      return iVar6;
    }
    if (*(int *)(iVar6 + 4) != 0xc) {
      FUN_005d9de1(((undefined4)this),iVar6,0,"internal error: expression expected");
      return -0x7fffbffb;
    }
    iVar4 = iVar6;
    if (1 < (uint)(*(int *)(iVar6 + 0x18) * *(int *)(iVar6 + 0x14))) {
      pcVar5 = "expressions returning objects in an array or struct not yet implemented";
      goto LAB_005e520a;
    }
    do {
      if (*(int *)(iVar4 + 0x1c) != 0) break;
      iVar4 = *(int *)(iVar4 + 0x20);
    } while (*(int *)(iVar4 + 4) == 0xc);
    do {
      if (*(int *)(iVar4 + 4) != 1) break;
      iVar4 = *(int *)(iVar4 + 8);
    } while (iVar4 != 0);
    if (iVar4 == 0) goto LAB_005e51ff;
    if ((*(int *)(iVar4 + 4) == 0xc) && (*(int *)(iVar4 + 0x1c) == 0x1b)) {
      iVar6 = FUN_005e5022(param_2,param_3,*(undefined4 *)(*(int *)(iVar4 + 0x24) + 0x20),
                           *(undefined4 *)(*(int *)(iVar4 + 0x24) + 0x24),0,
                           *(undefined4 *)(*(int *)(iVar4 + 0x20) + 0x18),param_6,param_7,param_8);
      return iVar6;
    }
    if (*(int *)(iVar4 + 4) != 0xd) goto LAB_005e51ff;
  } while ((*(int *)(iVar4 + 0x10) == 4) &&
          (param_4 = *(int *)(iVar4 + 0x18), *(int *)(*(int *)(iVar4 + 0x18) + 4) == 0xc));
  if (*(int *)(iVar4 + 0x10) == 5) {
    if (param_7 != (undefined4 *)0x0) {
      piVar3 = *(int **)(iVar4 + 0x18);
      *param_7 = (unsigned int)(piVar3);
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    if (param_8 != (undefined4 *)0x0) {
      *param_8 = 0;
    }
  }
  else {
    if (((*(int *)(iVar4 + 0x10) != 6) || (*(int *)(iVar4 + 0x20) != 9)) ||
       (pcVar5 = *(char **)(iVar4 + 0x28), pcVar5 == (char *)0x0)) {
LAB_005e51ff:
      pcVar5 = "non-trivial object expressions not yet implemented";
LAB_005e520a:
      FUN_005d9de1(((undefined4)this),iVar6,0xdac,pcVar5);
      return -0x7fffbfff;
    }
    if (param_7 != (undefined4 *)0x0) {
      pcVar1 = pcVar5 + 1;
      do {
        cVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      iVar6 = FUN_005d65b0(pcVar5 + (1 - (int)pcVar1),param_7);
      if (iVar6 < 0) {
        return iVar6;
      }
      piVar3 = (int *)*param_7;
      uVar7 = (**(code **)(*piVar3 + 0x10))(piVar3);
      puVar10 = *(undefined4 **)(iVar4 + 0x28);
      puVar8 = (undefined4 *)(**(code **)(*piVar3 + 0xc))(piVar3);
      for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar8 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar10;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
    }
    if (param_8 != (undefined4 *)0x0) {
      *param_8 = 1;
    }
  }
  return 0;
}
