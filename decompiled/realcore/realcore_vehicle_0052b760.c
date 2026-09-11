/* spd-match: far pct=11.04 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_0052bb40();
int __cdecl FUN_00532640();
int __cdecl FUN_00532670();
int __cdecl FUN_00532840();
int __cdecl FUN_0064b510();
int __cdecl FUN_0064b580();
int __cdecl FUN_0064b5a0();
int __cdecl FUN_0064c000();
int __cdecl FUN_0064c1a0();
extern int DAT_006f4f40;
extern int DAT_00744220;
extern int _DAT_006cc9f0;
extern int _DAT_00705970;
extern unsigned char *PTR_s_ENV_STATIC_006f81c0;
extern void LAB_00684d8b(void);
extern char stack0xffffffe4;
int unaff_EBX;
int unaff_ESI;
void *ExceptionList;

void __fastcall FUN_0052b760(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *unaff_EBX;
  void *unaff_ESI;
  undefined4 local_18 [3];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00684d8b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_1[0x6e4] != 0) {
    ExceptionList = &pvStack_c;
    FUN_0052bb40();
  }
  local_18[0] = DAT_006f4f40;
  FUN_00532640();
  FUN_00532670(0x3f800000,0x3f800000,1,0);
  param_1[0x6e0] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x6e2) = 0;
  _DAT_00705970 = *(float *)(param_1[0x8d] + 0x3d4) * _DAT_006cc9f0;
  FUN_00532840();
  puVar3 = local_18;
  (**(code **)(*param_1 + 0x38))(puVar3,9);
  FUN_0064b510(&stack0xffffffe4);
  FUN_0064b580();
  iVar2 = (**(code **)*unaff_EBX)(0x18,4,0xffffffff);
  FUN_0064b5a0();
  local_18[0] = 0;
  if (iVar2 != 0) {
    puVar1 = (undefined4 *)(iVar2 + 4);
    *puVar1 = 0xb;
    if ((int)puVar3 < 0) {
      puVar3 = (undefined4 *)0x0;
    }
    else if (0x7fff < (int)puVar3) {
      puVar3 = (undefined4 *)0x7fff;
    }
    *(undefined4 **)(iVar2 + 8) = puVar3;
    *(undefined4 *)(iVar2 + 0xc) = 0x1000;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
    iVar4 = FUN_0064c1a0(&DAT_00744220,puVar1,iVar2);
    if (iVar4 < 0) {
      FUN_0064c000(&PTR_s_ENV_STATIC_006f81c0);
      FUN_0064c1a0(&DAT_00744220,puVar1,iVar2);
    }
    param_1[0x6e4] = iVar2;
    ExceptionList = unaff_ESI;
    return;
  }
  param_1[0x6e4] = 0;
  ExceptionList = unaff_ESI;
  return;
}
