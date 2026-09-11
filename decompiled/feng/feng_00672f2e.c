/* spd-match: far pct=5.19 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8r/buckets/r_13/attempt3_c2520 */
#include "ghidra_compat.h"

extern int _DAT_006ccaf8;

int FUN_00672f2e(int param_1,uint param_2)

{
  int iVar1;
  int iStack_8;
  
  if (((*(unsigned short *)((unsigned char *)&param_2 + 2)) & 0x7ff0) == 0x7ff0) {
    iVar1 = __sptype();
    if (iVar1 == 1) {
      return 0x200;
    }
    if (iVar1 == 2) {
      iStack_8 = 4;
    }
    else {
      if (iVar1 != 3) {
        return 1;
      }
      iStack_8 = 2;
    }
    return iStack_8;
  }
  if (((param_2 & 0x7ff00000) == 0) && (((param_2 & 0xfffff) != 0 || (param_1 != 0)))) {
    return (-(uint)((param_2 & 0x80000000) != 0) & 0xffffff90) + 0x80;
  }
  if ((double)(__int64)CONCAT26((*(unsigned short *)((unsigned char *)&param_2 + 2)),
                       CONCAT24((undefined2)param_2,param_1)) == _DAT_006ccaf8) {
    return (-(uint)((param_2 & 0x80000000) != 0) & 0xffffffe0) + 0x40;
  }
  return (-(uint)((param_2 & 0x80000000) != 0) & 0xffffff08) + 0x100;
}
