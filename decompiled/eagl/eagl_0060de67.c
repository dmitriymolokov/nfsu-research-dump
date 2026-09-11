/* spd-match: far pct=12.12 flags=/O1 /c /nologo /TP method=m39 source=m39/m39/va_0060DE67 */
#include "ghidra_compat.h"
extern int FUN_005f7709();
struct ThisCallBox { int FUN_0060de67(int* param_2, int param_3, int param_4); };
int ThisCallBox::FUN_0060de67(int *param_2, int param_3, int param_4) {
  int *p = (int*)this;
  int ecx = p[0x26];
  int esi = (int)this;
  int i = 0;
  if (param_4 <= 0) return 0;
  int* p_ecx = *(int**)(esi + 0x98);
  int* piVar2 = *(int**)(*(int*)(p_ecx + 0x10));
  int* edx = *(int**)(esi + 0x14);
  int* edi = (int*)(edx + (*piVar2 * 4));
  int* p_loop = *(int**)(p_ecx + 8);
  do {
    if (edi[0] == *(int*)(edx + (*p_loop * 4)) && edi[2] == *(int*)(edx + (*p_loop * 4) + 8)) break;
    i++;
    p_loop += param_3;
  } while (i < param_4);
  return 0;
}
