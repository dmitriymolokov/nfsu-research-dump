/* spd-match: far pct=13.64 flags=/O1 /Gr /c /nologo /TC method=m39 source=m39/m39/va_00420B40 */
#include <windows.h>
void FUN_00420b40(int param_1, int *param_2) {
  int i, n = *(int*)(param_1 + 0x1c);
  if (n > 0) {
    int* edx = (int*)(param_1 + 0x2c0);
    int* ecx = (int*)(param_1 + 0x288);
    do {
      int* eax = (int*)(edx[-0xa6]);
      float f1 = *(float*)((char*)eax + 0x64);
      float f2 = *(float*)((char*)eax + 0x68);
      ecx[-2] = *(int*)((char*)eax + 0x60);
      ecx[-1] = *(int*)&f1;
      ecx[0] = *(int*)&f2;
      edx[0] = *(int*)((char*)eax + 0x814);
      ecx += 4; edx += 1; i++;
    } while(i < n);
  }
}
