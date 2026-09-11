/* spd-match: close pct=91.18 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_8/p1/buckets/p1_04/attempt2/typed_pointer_repairs */
#include "ghidra_compat.h"

double __cdecl _atof(const char *);
int __cdecl _isalnum(int);


struct ThisCallBox {
  undefined4 * FUN_005b1775(int param_2);
};
undefined4 * ThisCallBox::FUN_005b1775(int param_2) {
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)_malloc(param_2 + 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *((undefined4 *)this);
    *((undefined4 *)this) = (undefined4)(unsigned long)puVar1;
    puVar1 = puVar1 + 1;
  }
  return puVar1;
}
