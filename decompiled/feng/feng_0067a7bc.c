/* spd-match: far pct=7.14 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8r/buckets/r_13/attempt4_set_exp */
#include "ghidra_compat.h"

float10 __set_exp(undefined8 param_1,short param_2)

{
  double local_c;
  
  local_c = (double)(__int64)CONCAT26((param_2 + 0x3fe) * 0x10 | (*(undefined2 *)((char *)&param_1 + 6)) & 0x800f,
                             ((__int64)(*(undefined8 *)&param_1) & (__int64)0x0000ffffffffffff));
  return (float10)local_c;
}
