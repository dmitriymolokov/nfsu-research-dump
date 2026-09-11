/* spd-match: far pct=23.75 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_p3/buckets/ptr_arith_misc_p2/batches/attempt2_retry8 */
#include "ghidra_compat.h"

unsigned int __cdecl rsqrtss(unsigned __int64, unsigned __int64);

int __cdecl FUN_005b5e96(...);
int __cdecl FUN_005b70ac(...);
int __cdecl FUN_005b907a(...);

struct ThisCallBox {
  void FUN_005b97bb();
};
void ThisCallBox::FUN_005b97bb() {
  int iVar1;
  void *_Memory;
  
  if (*(int *)(((int)this) + 0x30) != 0) {
    FUN_005b70ac(1);
    *(undefined4 *)(((int)this) + 0x30) = 0;
  }
  if (*(int *)(((int)this) + 0x2c) != 0) {
    FUN_005b907a(1);
    *(undefined4 *)(((int)this) + 0x2c) = 0;
  }
  iVar1 = *(int *)(((int)this) + 0x34);
  while (iVar1 != 0) {
    _Memory = *(void **)(((int)this) + 0x34);
    *(undefined4 *)(((int)this) + 0x34) = *(undefined4 *)((int)_Memory + 0x34);
    *(undefined4 *)((int)_Memory + 0x34) = 0;
    FUN_005b97bb();
    _free(_Memory);
    iVar1 = *(int *)(((int)this) + 0x34);
  }
  FUN_005b5e96();
  return;
}
