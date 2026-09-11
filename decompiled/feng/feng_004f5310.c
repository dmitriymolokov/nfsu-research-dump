/* spd-match: far pct=29.17 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

int __cdecl FUN_004ee840(...);
int __cdecl FUN_004f5b90(...);
extern void *PTR_LAB_006c1b18;

struct ThisCallBox {
  undefined4 * FUN_004f5310(byte param_2);
};
undefined4 * ThisCallBox::FUN_004f5310(byte param_2) {
  void *_Memory;
  
  *((undefined4 *)this) = (unsigned int)&PTR_LAB_006c1b18;
  if ((undefined4 *)((undefined4 *)this)[3] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)((undefined4 *)this)[3])(1);
  }
  FUN_004f5b90(((undefined4 *)this));
  _Memory = (void *)((undefined4 *)this)[2];
  if (_Memory != (void *)0x0) {
    FUN_004ee840(_Memory);
    _free(_Memory);
  }
  if ((param_2 & 1) != 0) {
    _free(((undefined4 *)this));
  }
  return ((undefined4 *)this);
}
