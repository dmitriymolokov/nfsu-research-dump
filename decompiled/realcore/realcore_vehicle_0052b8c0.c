/* spd-match: far pct=12.61 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
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
int __cdecl FUN_00674898();
extern int DAT_006f4f40;
extern int DAT_00705978;
extern int DAT_00744220;
extern int _DAT_006cc9f0;
extern int _DAT_00705970;
extern unsigned char *PTR_s_ENV_STATIC_006f81c0;
extern void LAB_00684d8b(void);
extern char stack0xffffffe4;
int unaff_EBX;
void *ExceptionList;

void __fastcall FUN_0052b8c0(int *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *unaff_EBX;
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
  _DAT_00705970 = *(float *)(param_1[0x8d] + 0x3d4) * _DAT_006cc9f0;
  FUN_00532840();
  puVar4 = local_18;
  *(undefined1 *)(param_1 + 0x6e2) = 0;
  (**(code **)(*param_1 + 0x38))(puVar4,9);
  if (DAT_00705978 != '\0') {
    FUN_00532840();
  }
  pvVar2 = (void *)FUN_00674898();
  FUN_0064b510(&stack0xffffffe4);
  FUN_0064b580();
  iVar3 = (**(code **)*unaff_EBX)(0x18,4,0xffffffff);
  FUN_0064b5a0();
  local_18[0] = 0;
  if (iVar3 != 0) {
    puVar1 = (undefined4 *)(iVar3 + 4);
    *puVar1 = 0xc;
    if ((int)puVar4 < 0) {
      puVar4 = (undefined4 *)0x0;
    }
    else if (0x7fff < (int)puVar4) {
      puVar4 = (undefined4 *)0x7fff;
    }
    *(undefined4 **)(iVar3 + 8) = puVar4;
    *(undefined4 *)(iVar3 + 0xc) = 0x1000;
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0x14) = 0;
    iVar5 = FUN_0064c1a0(&DAT_00744220,puVar1,iVar3);
    if (iVar5 < 0) {
      FUN_0064c000(&PTR_s_ENV_STATIC_006f81c0);
      FUN_0064c1a0(&DAT_00744220,puVar1,iVar3);
    }
    param_1[0x6e4] = iVar3;
    ExceptionList = pvVar2;
    return;
  }
  param_1[0x6e4] = 0;
  ExceptionList = pvVar2;
  return;
}
