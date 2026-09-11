/* spd-match: far pct=5.51 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00577920 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00577d10();
extern unsigned char *PTR_FUN_006ba6b8;
int __fastcall FUN_00577920(byte * obj, byte *param_1, undefined4 *param_2)

{
  byte *pbVar1;
  int *piVar2;
  byte bVar3;
  int *piVar4;

  int iVar5;
  int iVar6;
  undefined8 uVar7;
  
  *param_2 = &PTR_FUN_006ba6b8;
  iVar6 = -1;
  bVar3 = *param_1;
  while (bVar3 != 0) {
    iVar6 = iVar6 * 0x21 + (uint)bVar3;
    pbVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    bVar3 = *pbVar1;
  }
  iVar5 = -1;
  bVar3 = *obj;
  while (bVar3 != 0) {
    iVar5 = iVar5 * 0x21 + (uint)bVar3;
    pbVar1 = obj + 1;
    obj = obj + 1;
    bVar3 = *pbVar1;
  }
  param_2[3] = iVar5;
  param_2[4] = iVar6;
  uVar7 = FUN_00577d10(iVar5);
  iVar5 = (int)((ulonglong)uVar7 >> 0x20);
  iVar6 = (int)uVar7;
  *(int *)(iVar5 + 0x18) = iVar6;
  *(undefined4 *)(iVar5 + 0x14) = *(undefined4 *)(iVar6 + 0x1c);
  *(int *)(iVar6 + 0x1c) = *(int *)(iVar6 + 0x1c) + 1;
  iVar6 = *(int *)(iVar5 + 0x18);
  if (*(char *)(iVar6 + 0x18) != '\0') {
    piVar4 = *(int **)(iVar6 + 0x30);
    piVar2 = (int *)(iVar5 + 4);
    *piVar4 = (int)piVar2;
    *(int **)(iVar6 + 0x30) = piVar2;
    *(int **)(iVar5 + 8) = piVar4;
    *piVar2 = iVar6 + 0x2c;
  }
  return iVar5;
}
