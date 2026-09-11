/* spd-match: far pct=8.12 flags=/Ob2 /c /nologo /TP method=m39 source=m39/m39/va_0060213B */
#include "ghidra_compat.h"
int __cdecl FUN_005faf39(int *p1, int p2, int p3, int p4);
struct ThisCallBox {
  int FUN_0060213b(int *param_2, int *param_3, unsigned int *param_4);
};
int ThisCallBox::FUN_0060213b(int *param_2, int *param_3, unsigned int *param_4) {
  int iVar8;
  int *piVar6 = param_3;
  unsigned int local_10 = 0;
  int local_c = 1;
  int *p_base = (int *)((int)this + 0x14);
  do {
    if ((*piVar6 != -1) && (local_c < 4)) {
      int *piVar4 = piVar6;
      for (iVar8 = 4 - local_c; iVar8 > 0; iVar8--) {
        piVar4++;
        if ((*piVar4 != -1) && (*(double *)(*(int *)(*p_base + *piVar6 * 4) + 0x10) == *(double *)(*(int *)(*p_base + *piVar4 * 4) + 0x10))) {
          *piVar4 = -1;
          *(unsigned int *)(local_10 + (int)param_4) |= *(unsigned int *)((int)param_4 - (int)param_3 + (int)piVar4);
        }
      }
    }
    local_c++;
    local_10 += 4;
    piVar6++;
  } while (local_c < 5);
  return 0;
}
