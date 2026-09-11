/* spd-match: far pct=49.25 flags=/O1 /c /nologo /TP method=m39 source=m39/m39/va_00613593 */
#include <stddef.h>
extern void __stdcall FUN_005d77e9(int);
extern void *PTR_FUN_006a6130;
struct MyStruct { int data[16]; };
void * __stdcall FUN_00613593(MyStruct *pThis, int p1, int p2, int p3, int p4, int p5) {
  FUN_005d77e9(0x12);
  pThis->data[4] = p1;
  pThis->data[5] = p2;
  pThis->data[6] = p3;
  pThis->data[7] = p4;
  pThis->data[10] = p5;
  *(int*)pThis = (int)&PTR_FUN_006a6130;
  pThis->data[8] = 0xf0000;
  pThis->data[9] = 0xe40000;
  return pThis;
}
