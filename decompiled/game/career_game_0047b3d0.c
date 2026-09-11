/* spd-match: far pct=8.78 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0047B3D0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00628b30();
extern int DAT_006fc5f8;
extern int DAT_006fceb8;
extern int DAT_006fd4b8;
extern int DAT_006fdab8;
extern int DAT_006fe378;
extern int DAT_006fec38;
extern int DAT_006ff4f8;
extern int DAT_006ffdc0;
extern int DAT_006ffdc4;
extern int DAT_006ffdc8;
extern int DAT_007364dc;
extern int DAT_00779a58;
extern int DAT_00779a5c;
extern int DAT_00779a60;
extern int DAT_00779a64;
extern int DAT_00779a80;
extern int DAT_00779a84;
extern int DAT_00779a88;
extern void LAB_0047b4d9(void);
undefined4 __fastcall FUN_0047b3d0(int obj)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;

  int iVar4;
  int iVar5;
  undefined *puVar6;
  
  if (*(int *)(obj + 0x74) == DAT_007364dc) {
    return 1;
  }
  *(int *)(obj + 0x74) = DAT_007364dc;
  *(undefined4 *)(obj + 0x70) = *(undefined4 *)(obj + 100);
  uVar1 = *(undefined4 *)(obj + 0x1c);
  uVar2 = *(undefined4 *)(obj + 0x14);
  if ((*(int **)(obj + 0x3c) != (int *)0x0) && (DAT_006ffdc4 != 0)) {
    (**(code **)(**(int **)(obj + 0x3c) + 0x18))(*(undefined4 *)(obj + 100),uVar2,0);
  }
  if ((*(int **)(obj + 0x40) != (int *)0x0) && (DAT_006ffdc8 != 0)) {
    (**(code **)(**(int **)(obj + 0x40) + 0x18))(*(undefined4 *)(obj + 100),uVar2,0);
  }
  if ((*(int **)(obj + 0x38) != (int *)0x0) && (DAT_006ffdc0 != 0)) {
    (**(code **)(**(int **)(obj + 0x38) + 0x18))(*(undefined4 *)(obj + 100),uVar2,0);
  }
  FUN_00628b30(uVar2,uVar1,0);
  if ((*(byte *)(obj + 0x34) & 1) == 0) {
    return 0;
  }
  iVar4 = *(int *)(*(int *)(*(int *)(obj + 0xc) + 0x20) + 8);
  iVar5 = *(int *)(*(int *)(obj + 0xc) + 0x10);
  iVar3 = *(int *)(obj + 0x1c);
  if (iVar5 != DAT_00779a60) {
    if (iVar5 == DAT_00779a58) {
      puVar6 = &DAT_006fceb8;
      goto LAB_0047b4d9;
    }
    if (iVar5 == DAT_00779a88) {
      puVar6 = &DAT_006fd4b8;
      goto LAB_0047b4d9;
    }
    if (iVar5 == DAT_00779a5c) {
      puVar6 = &DAT_006fdab8;
      goto LAB_0047b4d9;
    }
    if (iVar5 == DAT_00779a64) {
      puVar6 = &DAT_006fe378;
      goto LAB_0047b4d9;
    }
    if (iVar5 == DAT_00779a84) {
      puVar6 = &DAT_006fec38;
      goto LAB_0047b4d9;
    }
    puVar6 = &DAT_006ff4f8;
    if (iVar5 == DAT_00779a80) goto LAB_0047b4d9;
  }
  puVar6 = &DAT_006fc5f8;
LAB_0047b4d9:
  if (0 < iVar4) {
    iVar5 = iVar3;
    do {
      FUN_0047b3d0(iVar5,puVar6 + (iVar5 - iVar3),iVar5);
      iVar5 = iVar5 + 0x40;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return 0;
}
