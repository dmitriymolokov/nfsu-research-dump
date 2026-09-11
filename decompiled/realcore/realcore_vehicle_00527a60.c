/* spd-match: far pct=21.48 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00527A60 */
#include <windows.h>
extern void *PTR_FUN_006befb4; extern void *PTR_LAB_006bef88; extern void *PTR_LAB_006be7c4; extern void *PTR_LAB_006bee78; extern void LAB_00684a8f();
void __stdcall FUN_0064bbd0(); void __stdcall FUN_0064b510(void **); void __stdcall FUN_0064b580(); void __stdcall FUN_0064b5a0();
void __stdcall FUN_00527a60(int *param_1) {
  void *local_10;
  __try {
    *(int **)param_1 = (int *)&PTR_FUN_006befb4;
    *(int **)(param_1 + 8) = (int *)&PTR_LAB_006bef88;
    if (*(int **)(param_1 + 0x8c) != 0) {
      int *esi = *(int **)(param_1 + 0x8c);
      if (*esi != 0) FUN_0064bbd0();
      FUN_0064b510(&local_10);
      FUN_0064b580();
      (*(void (__stdcall **)(int *))(*(int *)local_10 + 4))(esi);
      FUN_0064b5a0();
    }
    *(int **)(param_1 + 8) = (int *)&PTR_LAB_006be7c4;
    *(int **)param_1 = (int *)&PTR_LAB_006bee78;
  } __finally {
  }
}
