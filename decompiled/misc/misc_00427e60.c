/* spd-match: far pct=27.36 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.3-r2/va_00427E60 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
/* M4.1.3-r2 try1: callee stdcall decls */
#include "ghidra_compat.h"

void __stdcall FUN_00427c50(undefined4 *param_1, float param_2, undefined2 param_3);
void __stdcall FUN_00443a10(float *param_1, float *param_2);
extern int DAT_006b7b5c;
extern int DAT_007372b0;
extern int DAT_0073ad34;
void __fastcall FUN_00427e60(undefined4 val, int param_1, undefined4 param_2, undefined4 param_3)

{
  undefined4 uVar1;

  FUN_00427c50((undefined4 *)param_2, (float)(int)param_3, (undefined2)val);
  FUN_00443a10((float *)&DAT_007372b0, (float *)(param_1 + 0x60));
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x2c))(1);
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x30))();
  uVar1 = DAT_006b7b5c;
  if ((char)param_3 != '\0') {
    *(undefined4 *)(param_1 + 0x884) = DAT_0073ad34;
    *(undefined4 *)(param_1 + 0x888) = uVar1;
    return;
  }
  *(undefined4 *)(param_1 + 0x884) = 0;
  return;
}
