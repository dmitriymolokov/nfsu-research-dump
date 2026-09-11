/* spd-match: far pct=5.00 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8r/buckets/r_14/attempt1_recipe */
#include "ghidra_compat.h"

typedef struct m375_r14_ptiddata {
  void *_terminate;
  void *_unexpected;
} *m375_r14_ptiddata;
#define _ptiddata m375_r14_ptiddata
typedef struct m375_r14_tryblock {
  int tryLow;
  int tryHigh;
  int nCatches;
} m375_r14_tryblock;


float10 __fload(uint param_1,int param_2)

{
  float10 fVar1;
  
  if ((((uint)param_2 >> 16) & 0xffff & 0x7ff0) == 0x7ff0) {
    fVar1 = (float10)(__int64)CONCAT28((((uint)param_2 >> 16) & 0xffff) | 0x7fff,
                              CONCAT44(param_2 << 0xb | param_1 >> 0x15,param_1));
  }
  else {
    fVar1 = (float10)(double)(__int64)CONCAT26(((uint)param_2 >> 16) & 0xffff,
                                      CONCAT24((undefined2)param_2,param_1));
  }
  return fVar1;
}
