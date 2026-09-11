/* spd-match: far pct=15.00 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004FD7C0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_004fd7c0(short * obj, int param_1)

{
  short sVar1;
  void *_Memory;

  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = (*(int *)(param_1 + 0x88) * *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x84)) * 0x30;
  _Memory = *(void **)(iVar6 + 0x20 + *(int *)(param_1 + 0x8c));
  iVar6 = iVar6 + *(int *)(param_1 + 0x8c);
  if (_Memory != (void *)0x0) {
    _free(_Memory);
    *(undefined4 *)(iVar6 + 0x20) = 0;
  }
  if (obj != (short *)0x0) {
    iVar2 = 0;
    sVar1 = *obj;
    while (sVar1 != 0) {
      iVar2 = iVar2 + 1;
      sVar1 = obj[iVar2];
    }
    uVar5 = iVar2 * 2 + 2;
    puVar3 = _malloc(uVar5);
    *(undefined4 **)(iVar6 + 0x20) = puVar3;
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar3 = *(undefined4 *)obj;
      obj = obj + 2;
      puVar3 = puVar3 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)puVar3 = (char)*obj;
      obj = (short *)((int)obj + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  return;
}
