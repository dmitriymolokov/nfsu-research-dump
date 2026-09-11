/* spd-match: far pct=14.58 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.6-control100/va_0047AC00 */
#include "ghidra_compat.h"
extern int __cdecl FUN_0047aa40(int, int);
extern int DAT_0073ad34;
extern float _DAT_006b716c;
extern float _DAT_006cc7b8;
int g_esi_state;
int __fastcall FUN_0047ac00(int obj, int param_1, int *param_2, int *param_3) {
  int iVar3 = FUN_0047aa40(param_1, *param_3);
  *param_3 = iVar3;
  if (iVar3 == 0) {
    *(int *)(g_esi_state + 0x70) = 0;
    return 0;
  }
  return 1;
}
