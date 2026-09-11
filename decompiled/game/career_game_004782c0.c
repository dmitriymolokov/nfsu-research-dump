/* spd-match: far pct=7.41 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004782C0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00584b80();
extern int DAT_007000e4;
extern int _DAT_006cc9f8;
extern int _DAT_006ccab4;
void __fastcall FUN_004782c0(int obj)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;

  FUN_00584b80(*(int *)(obj + 0x58) + 0x30,*(int *)(obj + 0x58) + 0x90);
  iVar2 = *(int *)(obj + 0x28);
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(undefined4 *)(iVar2 + 0x20) = 0;
  uVar1 = *(undefined4 *)(*(int *)(obj + 0x58) + 0x2b0);
  iVar2 = *(int *)(obj + 0x38);
  *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(*(int *)(obj + 0x58) + 0x2c0);
  *(undefined4 *)(iVar2 + 0x28) = uVar1;
  iVar2 = *(int *)(obj + 0x2c);
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(undefined4 *)(iVar2 + 0x20) = 0;
  uVar1 = *(undefined4 *)(*(int *)(obj + 0x58) + 0x2b4);
  iVar2 = *(int *)(obj + 0x3c);
  *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(*(int *)(obj + 0x58) + 0x2c4);
  *(undefined4 *)(iVar2 + 0x28) = uVar1;
  iVar2 = *(int *)(obj + 0x30);
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(undefined4 *)(iVar2 + 0x20) = 0;
  uVar1 = *(undefined4 *)(*(int *)(obj + 0x58) + 0x2b8);
  iVar2 = *(int *)(obj + 0x40);
  *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(*(int *)(obj + 0x58) + 0x2c8);
  *(undefined4 *)(iVar2 + 0x28) = uVar1;
  iVar2 = *(int *)(obj + 0x34);
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(undefined4 *)(iVar2 + 0x20) = 0;
  uVar1 = *(undefined4 *)(*(int *)(obj + 0x58) + 700);
  iVar2 = *(int *)(obj + 0x44);
  *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(*(int *)(obj + 0x58) + 0x2cc);
  *(undefined4 *)(iVar2 + 0x28) = uVar1;
  fVar3 = DAT_007000e4;
  if (DAT_007000e4 == _DAT_006cc9f8) {
    fVar3 = *(float *)(*(int *)(obj + 0x58) + 0x3a0);
  }
  *(float *)(*(int *)(obj + 0x48) + 0x14) = fVar3 * _DAT_006ccab4;
  iVar2 = *(int *)(obj + 0x4c);
  uVar1 = *(undefined4 *)(*(int *)(obj + 0x58) + 0x398);
  *(undefined4 *)(iVar2 + 0x3c) = uVar1;
  *(undefined4 *)(iVar2 + 0x38) = uVar1;
  *(undefined4 *)(iVar2 + 0x44) = 3;
  *(undefined4 *)(iVar2 + 0x14) = 0x3f800000;
  *(undefined4 *)(iVar2 + 0x58) = 0;
  return;
}
