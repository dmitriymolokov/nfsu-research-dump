/* spd-match: far pct=0.00 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8r/buckets/r_12/attempt1_baseline */
#include "ghidra_compat.h"

typedef void _func_void_void_ptr(void);
int __cdecl FUN_00672232();
int unaff_EDI;

void _eh_vector_constructor_iterator_
               (void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4,
               _func_void_void_ptr *param_5)

{
  void *unaff_EDI;
  undefined4 local_24;
  
  for (local_24 = 0; local_24 < param_3; local_24 = local_24 + 1) {
    (*param_4)(unaff_EDI);
  }
  FUN_00672232();
  return;
}
