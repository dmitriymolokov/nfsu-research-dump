/* spd-match: far pct=10.61 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_8/p0/buckets/p0_09/attempt3/ole_cast */
#include "ghidra_compat.h"

struct COleDataObject {
  COleDataObject(COleDataObject *);
};

extern void *PTR_FUN_006a9798;

struct ThisCallBox {
  undefined4 * FUN_0064894b(undefined4 *param_2);
};
undefined4 * ThisCallBox::FUN_0064894b(undefined4 *param_2) {
  *((undefined4 *)this) = (undefined4)(unsigned long)&PTR_FUN_006a9798;
  COleDataObject::COleDataObject((COleDataObject *)(((undefined4 *)this) + 2));
  ((undefined4 *)this)[2] = *param_2;
  ((undefined4 *)this)[3] = param_2[1];
  ((undefined4 *)this)[4] = param_2[2];
  ((undefined4 *)this)[5] = param_2[3];
  ((undefined4 *)this)[6] = 0;
  ((undefined4 *)this)[1] = 0;
  return ((undefined4 *)this);
}
