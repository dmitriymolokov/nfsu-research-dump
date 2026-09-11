/* spd-match: far pct=5.47 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_0057C110 */
#include <windows.h>
extern void* __stdcall FUN_00577d10(int hash);
extern int DAT_0073b128;
extern void* DAT_0073b138;
extern int DAT_0073b118;
void __stdcall FUN_0057c110(int param_1) {
  int h;
  unsigned char *ptr;
  char *str = "TrainCar";
  int ecx = 0x6cac00;
  int ebp = -1;
  unsigned char al = 0x54;
  void *node = 0;
  h = -1;
  do {
    ebp = ebp * 0x21 + al;
    al = *(unsigned char*)(++ecx);
  } while (al != 0);
  if (ebp == DAT_0073b128) {
    node = &DAT_0073b118;
  } else {
    if (DAT_0073b138 == &DAT_0073b138) goto LAB_0057c166;
    do {
      node = FUN_00577d10(ebp);
      if (node != 0) break;
      if (*(void**)node == &DAT_0073b138) goto LAB_0057c166;
    } while(1);
  }
LAB_0057c166:
  if (param_1 != 0) {
    unsigned int *pu = (unsigned int *)(*(int *)(*(int *)(param_1 + 0x20) + 0x14) + 0x34);
    *pu &= 0xffffff7f;
  }
}
