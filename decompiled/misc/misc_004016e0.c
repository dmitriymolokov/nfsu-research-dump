/* spd-match: far pct=14.15 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_004057c0();
int __cdecl FUN_00405860();
int __cdecl FUN_004058d0();
int __cdecl FUN_00408b20();
int __cdecl FUN_0040a4e0();
int __cdecl FUN_0040abd0();
int __cdecl FUN_0040e6d0();
int __cdecl FUN_00410400();
int __cdecl FUN_00411030();
int __cdecl FUN_004130d0();
int __cdecl FUN_00419ea0();
int __cdecl FUN_004f0390();
int __cdecl FUN_004f3030();
int __cdecl FUN_004f5e90();
int __cdecl FUN_004f6170();
int __cdecl FUN_00573cb0();
extern int DAT_006f9228;
extern int DAT_00706498;
extern int DAT_0070649c;
extern int DAT_007064a0;
extern int DAT_0071abb8;
extern int DAT_0071abbc;
extern unsigned char *DAT_0071abd0;
extern code *DAT_0071ac90;
extern unsigned char *DAT_0073578c;
extern unsigned char *DAT_0073636c;
extern unsigned char *DAT_0073640c;
extern int DAT_0073650c;
extern int DAT_00736514;
extern int DAT_00736515;
extern unsigned char *DAT_00740460;
extern void LAB_004018fa(void);
extern char stack0xffffffa4;

undefined4 FUN_004016e0(void)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  int *piStack_b0;
  int *piStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int *piStack_98;
  int *piStack_94;
  int *piStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  int *piStack_84;
  undefined4 uStack_80;
  undefined4 **ppuStack_7c;
  undefined4 *puStack_78;
  undefined4 *puStack_74;
  undefined4 *puStack_70;
  undefined4 *puStack_6c;
  undefined4 *puStack_68;
  undefined4 *puStack_64;
  undefined4 local_50 [19];
  
  if (DAT_0073636c == (int *)0x0) {
    return 0;
  }
  puStack_64 = (undefined4 *)0x4016fd;
  FUN_00408b20();
  puStack_64 = (undefined4 *)0x0;
  puStack_68 = (undefined4 *)0x401709;
  FUN_0040abd0();
  puStack_64 = (undefined4 *)0x401718;
  FUN_0040e6d0();
  puStack_68 = DAT_00740460;
  local_50[1] = 0;
  local_50[2] = 0;
  local_50[3] = 0;
  local_50[4] = 0;
  local_50[6] = 0;
  local_50[7] = 0;
  local_50[8] = 0;
  local_50[9] = 0;
  local_50[0xb] = 0;
  local_50[0xc] = 0;
  local_50[0xd] = 0;
  local_50[0xe] = 0;
  local_50[0] = 0x3f800000;
  local_50[5] = 0x3f800000;
  local_50[10] = 0x3f800000;
  local_50[0xf] = 0x3f800000;
  puVar3 = local_50;
  puVar4 = DAT_00740460;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puStack_64 = puStack_68 + 0x10;
  puStack_6c = puStack_68 + 0x20;
  puStack_70 = (undefined4 *)0x40178a;
  FUN_004016e0();
  puStack_70 = DAT_00740460 + 0x10;
  puStack_74 = DAT_00740460;
  puStack_78 = DAT_00740460 + 0x20;
  puVar3 = (undefined4 *)&stack0xffffffa4;
  puVar4 = puStack_70;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  ppuStack_7c = (undefined4 **)0x4017ac;
  FUN_004016e0();
  ppuStack_7c = &puStack_68;
  uStack_80 = 0x4017b8;
  FUN_00410400();
  ppuStack_7c = (undefined4 **)0x0;
  uStack_80 = 7;
  piStack_84 = DAT_0073636c;
  uStack_88 = 0x4017cc;
  (**(code **)(*DAT_0073636c + 0xe4))();
  uStack_88 = 0;
  uStack_8c = 0xe;
  piStack_90 = DAT_0073636c;
  piStack_94 = (int *)0x4017dd;
  (**(code **)(*DAT_0073636c + 0xe4))();
  piStack_94 = DAT_0073636c;
  piStack_98 = (int *)0x4017eb;
  (**(code **)(*DAT_0073636c + 0xa4))();
  if (DAT_006f9228 != 0) {
    if (DAT_0073578c != 0) {
      piStack_98 = (int *)0x401803;
      FUN_004f5e90();
    }
    if ((DAT_006f9228 != 0) && (DAT_0073578c != 0)) {
      puVar1 = (undefined1 *)(DAT_0073578c + 4);
      *puVar1 = 1;
      piStack_98 = (int *)0x401824;
      FUN_004f0390();
      *puVar1 = 0;
      piStack_98 = (int *)DAT_007064a0;
      uStack_9c = DAT_0070649c;
      uStack_a0 = 0x401839;
      FUN_004f3030();
    }
  }
  piStack_98 = DAT_0073636c;
  uStack_9c = 0x40184a;
  (**(code **)(*DAT_0073636c + 0xa8))();
  uStack_9c = 0;
  uStack_a0 = 0;
  uStack_a4 = 0;
  uStack_a8 = 0;
  piStack_ac = DAT_0073636c;
  piStack_b0 = (int *)0x40185d;
  iVar2 = (**(code **)(*DAT_0073636c + 0x44))();
  if (iVar2 == -0x7789f798) {
    piStack_b0 = DAT_0073636c;
    uStack_b4 = 0x40186f;
    iVar2 = (**(code **)(*DAT_0073636c + 0xc))();
    if (iVar2 == -0x7789f797) {
      piStack_b0 = (int *)0x40187b;
      FUN_0040a4e0();
    }
  }
  piStack_b0 = (int *)0x0;
  uStack_b4 = 0x3f800000;
  uStack_b8 = 0;
  uStack_bc = 7;
  uStack_c0 = 0;
  uStack_c4 = 0;
  (**(code **)(*DAT_0073636c + 0xac))(DAT_0073636c);
  if (DAT_0073640c != (undefined4 *)0x0) {
    if (DAT_0073640c == &DAT_0071abb8) goto LAB_004018fa;
    (**(code **)(*(int *)DAT_0073640c[6] + 0x108))((int *)DAT_0073640c[6]);
    (*(code *)DAT_0073640c[0x37])();
  }
  DAT_0073640c = &DAT_0071abb8;
  (*DAT_0071ac90)();
  (**(code **)(*DAT_0073636c + 0x15c))(DAT_0073636c,DAT_0071abbc);
  (**(code **)(*DAT_0071abd0 + 0x100))(DAT_0071abd0,&uStack_c4,0);
LAB_004018fa:
  FUN_004f6170();
  FUN_00405860();
  FUN_004058d0();
  FUN_004057c0();
  DAT_00736514 = 0;
  DAT_00736515 = 0;
  FUN_00419ea0();
  DAT_0073650c = 1;
  FUN_00573cb0();
  FUN_004130d0(&DAT_00706498,0);
  FUN_00411030();
  (**(code **)(*DAT_0073636c + 0xe4))(DAT_0073636c,7,1);
  (**(code **)(*DAT_0073636c + 0xe4))(DAT_0073636c,0xe,1);
  return 0;
}
