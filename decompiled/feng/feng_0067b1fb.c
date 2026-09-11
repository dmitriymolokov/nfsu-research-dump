/* spd-match: far pct=2.25 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_8r/buckets/r_14/baseline_thiscall */
#include "ghidra_compat.h"

int __cdecl FUN_006731bd(...);
int __cdecl FUN_00673252(...);
int __cdecl FUN_0067b33e(...);
extern int DAT_006ac868;

struct _ptiddata_overlay {
  void *_terminate;
  void *_unexpected;
};
struct _ptiddata_overlay *__cdecl __getptd(void);

struct ThisCallBox {
  undefined4 FUN_0067b1fb(void *param_2, int param_3, void *param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7);
};
undefined4 ThisCallBox::FUN_0067b1fb(void *param_2, int param_3, void *param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7) {
  struct _ptiddata_overlay *p_Var1;
  undefined1 local_30 [8];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = (undefined *)&DAT_006ac868;
  uStack_c = 0x67b207;
  local_24 = 0;
  local_28 = *(undefined4 *)(param_3 + -4);
  local_20 = ((undefined4)this);
  FUN_006731bd(local_30,*(undefined4 *)((int)param_2 + 0x18));
  __getptd();
  __getptd();
  p_Var1 = __getptd();
  p_Var1->_terminate = param_2;
  p_Var1 = __getptd();
  p_Var1->_unexpected = param_4;
  local_8 = (undefined *)0x1;
  local_20 = FUN_00673252(param_3,param_5,((undefined4)this),param_6,param_7);
  local_8 = (undefined *)0xffffffff;
  FUN_0067b33e();
  return local_20;
}
