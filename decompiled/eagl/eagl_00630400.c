/* spd-match: far pct=25.70 flags=/O2 /c /nologo /TP method=m39 source=m39/m39/va_00630400 */
#include <windows.h>
struct FloatResult { float x, y, z, w; };
extern void __stdcall FUN_0062fff0(int offset, FloatResult* out);
void __stdcall FUN_00630400(int this_ptr, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7) {
  int iVar2 = *(int*)(param_3 + 0xc);
  unsigned int uVar3 = (unsigned char)(*(unsigned char*)(param_3 + 6));
  if (param_4 < param_5) {
    int count = param_5 - param_4;
    do {
      int iVar6 = 0;
      if (uVar3 != 0) {
        int iVar4 = 0;
        float* pfVar5 = (float*)(param_6 + 8);
        do {
          unsigned char bVar1 = *(unsigned char*)(iVar6 + iVar2);
          if ((*(unsigned int*)(param_7 + ((bVar1 >> 5) << 2)) & (1 << (bVar1 & 0x1f))) != 0) {
            FloatResult res;
            FUN_0062fff0(*(int*)(this_ptr + 0x10) + iVar4, &res);
            pfVar5[-2] += res.x;
            pfVar5[-1] += res.y;
            pfVar5[0] += res.z;
            pfVar5[1] += res.w;
          }
          iVar6++;
          iVar4 += 0x20;
          pfVar5 += 4;
        } while ((unsigned int)iVar6 < uVar3);
      }
      count--;
    } while (count != 0);
  }
}
