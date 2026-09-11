/* spd-match: far pct=3.03 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_p3/buckets/C2440_int_ptr_casts/batches/20260724T142005Z_w0_tp1 */
#include "ghidra_compat.h"

#ifndef ZEXT48
#define ZEXT48(x) ((unsigned __int64)(unsigned int)(x))
#endif


struct ThisCallBox {
  undefined4 FUN_005b1a04(char *param_2, int param_3, undefined4 param_4, undefined4 param_5, int param_6, int param_7);
};
undefined4 ThisCallBox::FUN_005b1a04(char *param_2, int param_3, undefined4 param_4, undefined4 param_5, int param_6, int param_7) {
  char cVar1;
  char *pcVar2;
  
  if ((param_6 != 0) && (param_7 != 0)) {
    if (param_3 == -1) {
      if (param_2 == (char *)0x0) {
        param_3 = 0;
      }
      else {
        pcVar2 = param_2;
        do {
          cVar1 = *pcVar2;
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        param_3 = (int)pcVar2 - (int)(param_2 + 1);
      }
    }
    if ((param_2 != (char *)0x0) || (param_3 == 0)) {
      *((undefined4 *)this) = (unsigned int)(param_2);
      ((undefined4 *)this)[6] = (unsigned int)(param_4);
      ((undefined4 *)this)[7] = (unsigned int)(param_5);
      ((undefined4 *)this)[0xb] = (unsigned int)(param_6);
      ((undefined4 *)this)[1] = (unsigned int)(param_2 + param_3);
      ((undefined4 *)this)[0xc] = (unsigned int)(param_7);
      return 0;
    }
  }
  return 0x80004005;
}
