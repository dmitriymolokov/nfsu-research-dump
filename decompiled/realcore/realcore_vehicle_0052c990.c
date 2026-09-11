/* spd-match: far pct=29.03 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_0052C990 */
#include "ghidra_compat.h"
extern unsigned char* PTR_FUN_006b9694;
extern unsigned char* PTR_FUN_006be7d4;
void FUN_0052c990(int* obj) {
  int* edx;
  *(int**)obj = (int*)PTR_FUN_006be7d4;
  ((char*)obj)[0xe4] = 4;
  ((char*)obj)[0xe6] = 0;
  ((char*)obj)[0xe7] = 0;
  obj[0x3a] = 0;
  obj[0x3b] = 0;
  edx = (int*)((char*)obj + 0xf4);
  obj[0x3c] = (int)edx;
  ((char*)obj)[0xe5] = 5;
  obj[0x38] = (int)PTR_FUN_006b9694;
  edx[0] = 0;
  edx[1] = 0;
  edx[2] = 0;
  edx[3] = 0;
  edx[4] = 0;
}
