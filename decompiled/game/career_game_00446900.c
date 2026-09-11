/* spd-match: far pct=44.29 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00446900 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00446900(int obj)

{
  int iVar1;

  *(int *)obj = obj;
  *(int *)(obj + 4) = obj;
  iVar1 = obj + 8;
  *(int *)iVar1 = iVar1;
  *(int *)(obj + 0xc) = iVar1;
  iVar1 = obj + 0x10;
  *(int *)iVar1 = iVar1;
  *(int *)(obj + 0x14) = iVar1;
  iVar1 = obj + 0x18;
  *(int *)iVar1 = iVar1;
  *(int *)(obj + 0x1c) = iVar1;
  iVar1 = obj + 0x20;
  *(int *)iVar1 = iVar1;
  *(int *)(obj + 0x24) = iVar1;
  iVar1 = obj + 0x28;
  *(int *)iVar1 = iVar1;
  *(int *)(obj + 0x2c) = iVar1;
  iVar1 = obj + 0x30;
  *(int *)iVar1 = iVar1;
  *(int *)(obj + 0x34) = iVar1;
  iVar1 = obj + 0x38;
  *(int *)iVar1 = iVar1;
  *(int *)(obj + 0x3c) = iVar1;
  iVar1 = obj + 0x40;
  *(int *)iVar1 = iVar1;
  *(int *)(obj + 0x44) = iVar1;
  return;
}
