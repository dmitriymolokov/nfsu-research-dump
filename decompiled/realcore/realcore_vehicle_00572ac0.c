/* spd-match: far pct=11.59 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00572AC0 */
#include <windows.h>
extern int DAT_006f08a4;
extern void __stdcall FUN_00494b90(void);
void __fastcall FUN_00572ac0(int ebx) {
  int count = *(int*)(ebx + 0x40b0);
  if (count != 0) {
    int idx = *(int*)(ebx + 0x40b4);
    int* base = (int*)(ebx + 0x40bc);
    if (idx >= 0) {
      while (idx >= 0 && base[idx * 4] >= DAT_006f08a4) {
        idx--;
      }
    }
    if (idx < 0) idx = 0;
    if (idx < count) {
      do {
        int val = base[idx * 4];
        if (val > DAT_006f08a4) break;
        if (val == DAT_006f08a4) {
           FUN_00494b90();
        }
        idx++;
      } while (idx < count);
    }
    if (idx >= count) idx = count - 1;
    *(int*)(ebx + 0x40b4) = idx;
  }
}
