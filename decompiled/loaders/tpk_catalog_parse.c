/* spd-match: far pct=5.08 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.G.45-s0/va_005453D0 */
#include <windows.h>

extern void __stdcall FUN_00545900(int, int, int);

int * FUN_005453d0(int *param_1) {
  int *piVar2 = 0;
  int *piVar5 = (int *)((char *)param_1 + 8);
  int *piVar6 = (int *)((char *)param_1 + param_1[1] + 8);
  int local_2c = 0, local_14 = 0, local_10 = 0;

  if (piVar5 < piVar6) {
    do {
      int iVar1 = *piVar5;
      if (iVar1 == 0x33310001) piVar2 = piVar5 + 2;
      else if (iVar1 == 0x33310002) piVar2[29] = (int)(piVar5 + 2);
      else if (iVar1 == 0x33310003) piVar2[30] = (int)(piVar5 + 2);
      else if (iVar1 == 0x33310004) {
        local_2c = (int)((unsigned int)(piVar5[1] * 0x8421085) >> 6);
        local_10 = (int)(piVar5 + 2);
      } else if (iVar1 == 0x33310005) {
        local_14 = (int)(piVar5 + 2);
        local_2c = (int)((unsigned int)piVar5[1] >> 5);
      }
      piVar5 = (int *)((char *)piVar5 + piVar5[1] + 8);
    } while (piVar5 < piVar6);
  }
  if (local_10 && local_14) {
    FUN_00545900(local_10, local_14, local_2c);
    piVar2[27] = 1;
    return piVar2;
  }
  return 0;
}
