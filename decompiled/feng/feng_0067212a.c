/* spd-match: far pct=0.00 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8r/buckets/r_12/attempt1_baseline */
#include "ghidra_compat.h"

typedef void _func_void_void_ptr(void);
int unaff_EDI;

void __ArrayUnwind(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4)

{
  void *unaff_EDI;
  
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*param_4)(unaff_EDI);
  }
  return;
}
