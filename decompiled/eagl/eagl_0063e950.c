/* spd-match: far pct=7.83 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8/p0/buckets/p0_15 */
#include "ghidra_compat.h"

typedef void __cdecl _StartAddress(void *);

int __cdecl FUN_0063e6f0();
extern unsigned char *PTR_FUN_006e80b0;
extern void LAB_0063e4d0(void);

undefined1
FUN_0063e950(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5,
            undefined4 param_6)

{
  undefined1 uVar1;
  uintptr_t uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uVar1 = 0;
  (*(code *)PTR_FUN_006e80b0)(1);
  uStack_8 = param_2;
  uStack_4 = param_3;
  uStack_c = 0;
  uStack_10 = __beginthreadex((void *)0x0,param_5,(_StartAddress *)&LAB_0063e4d0,&uStack_10,4,
                              (uint *)(param_1 + 8));
  if (uStack_10 != 0) {
    uVar1 = 1;
    *(uintptr_t *)(param_1 + 4) = uStack_10;
    FUN_0063e6f0(param_1,param_6);
    ResumeThread(*(HANDLE *)(param_1 + 4));
    while (uStack_10 != 0) {
      SleepEx(1,1);
    }
  }
  (*(code *)PTR_FUN_006e80b0)(0);
  return uVar1;
}
