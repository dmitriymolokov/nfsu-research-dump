/* spd-match: far pct=6.57 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_006538b0();
int __cdecl FUN_00653d10();
int __cdecl FUN_00654210();
int __cdecl FUN_00654cd0();
extern unsigned char *DAT_00714068;
extern unsigned char *DAT_0071406c;
extern unsigned char *DAT_00714070;
extern int DAT_00714074;
extern int DAT_00714075;
int unaff_retaddr;

int FUN_00654880(undefined1 *param_1,undefined4 *param_2)

{
  int iVar1;
  HWND pHVar2;
  int iVar3;
  uint uVar4;
  undefined1 *unaff_retaddr;
  undefined4 uStack_90;
  undefined4 auStack_78 [4];
  byte bStack_68;
  uint uStack_60;
  undefined4 uStack_40;
  undefined4 *puStack_8;
  int *piStack_4;
  
  uStack_90 = 0;
  *param_2 = 0;
  DAT_0071406c = (int *)0x0;
  DAT_00714070 = (int *)0x0;
  iVar1 = Ordinal_1(0,&DAT_00714068);
  if (iVar1 == 0) {
    pHVar2 = GetForegroundWindow();
    if (pHVar2 == (HWND)0x0) {
      pHVar2 = GetDesktopWindow();
    }
    (**(code **)(*DAT_00714068 + 0x18))(DAT_00714068,pHVar2,2);
    auStack_78[0] = 0x60;
    iVar1 = (**(code **)(*DAT_00714068 + 0x10))(DAT_00714068,auStack_78);
    if (iVar1 == 0) {
      *puStack_8 = uStack_40;
      DAT_00714074 = bStack_68 >> 5 & 1;
      FUN_00654cd0(&uStack_90,0x24);
      uStack_90 = 0x24;
      iVar1 = (**(code **)(*DAT_00714068 + 0xc))(DAT_00714068,&uStack_90,&DAT_0071406c,0);
      if (-1 < iVar1) {
        if (uStack_60 < 0xac45) {
          uVar4 = uStack_60;
          if (uStack_60 == 0) {
            uVar4 = 0x2b11;
          }
        }
        else {
          uVar4 = 0xac44;
        }
        *unaff_retaddr = 0;
        iVar3 = FUN_006538b0(1,uVar4);
        if (-1 < iVar3) {
          if (param_1 != (undefined1 *)0x0) {
            *param_1 = 1;
          }
          *unaff_retaddr = 1;
        }
        iVar3 = FUN_006538b0(2,uVar4);
        if (-1 < iVar3) {
          if (param_1 != (undefined1 *)0x0) {
            param_1[1] = 1;
          }
          *unaff_retaddr = 2;
        }
        iVar3 = FUN_006538b0(4,uVar4);
        if (-1 < iVar3) {
          if (param_1 != (undefined1 *)0x0) {
            param_1[2] = 1;
          }
          *unaff_retaddr = 4;
        }
        iVar3 = FUN_006538b0(6,uVar4);
        if (-1 < iVar3) {
          if (param_1 != (undefined1 *)0x0) {
            param_1[3] = 1;
          }
          *unaff_retaddr = 5;
        }
        FUN_00654210(1);
        *piStack_4 = (int)DAT_00714075;
        FUN_00653d10();
      }
    }
    else {
      iVar1 = -1;
    }
  }
  else if (iVar1 == -0x7787fff6) {
    iVar1 = -0x12;
    DAT_00714068 = (int *)0x0;
  }
  else {
    DAT_00714068 = (int *)0x0;
    iVar1 = ((iVar1 != -0x7787ff88) - 1 & 0xfffffff7) - 1;
  }
  if (DAT_00714070 != (int *)0x0) {
    (**(code **)(*DAT_00714070 + 8))(DAT_00714070);
    DAT_00714070 = (int *)0x0;
  }
  if (DAT_0071406c != (int *)0x0) {
    (**(code **)(*DAT_0071406c + 8))(DAT_0071406c);
    DAT_0071406c = (int *)0x0;
  }
  if (DAT_00714068 != (int *)0x0) {
    (**(code **)(*DAT_00714068 + 8))(DAT_00714068);
  }
  DAT_00714068 = (int *)0x0;
  return iVar1;
}
