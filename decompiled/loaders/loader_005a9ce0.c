/* spd-match: far pct=9.38 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.6-control100/va_005A9CE0 */
#include "ghidra_compat.h"
int __cdecl FUN_005461c0(int,int,int);
int __cdecl FUN_00567c70(int);
int __cdecl FUN_0057cbf0(void);
int __cdecl FUN_0057cc70(int);
int __cdecl FUN_005a8400(void);
int __cdecl FUN_005a8490(void);
int __cdecl FUN_005a8a50(void*);
int __cdecl FUN_005a8e90(void*);
int __cdecl FUN_005a96b0(void);
int __cdecl FUN_005a9930(void);
int __cdecl FUN_005a9b50(void);
int __cdecl FUN_005aa800(void);
extern int DAT_006b7e14; extern int DAT_006c7a28; extern int DAT_006c7a38;
extern char s_GLOSS_006c3ce0[];
struct FrameBuffer { int stack_arr[104]; int v1a4; int v1a0[104]; };
int __cdecl FUN_005a9ce0(int param_1) {
  struct FrameBuffer f; int local_384[8]; int local_3a0 = 0;
  int iVar4 = FUN_005461c0(*(int*)(param_1 + 0x444), 0, 0);
  if (*(int*)(param_1 + 0x444) == 0 || iVar4 == 0) return 1;
  if (*(int*)(param_1 + 0x4c4) == 0) return 1;
  return 0;
}
