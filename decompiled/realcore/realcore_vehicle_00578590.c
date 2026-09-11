/* spd-match: far pct=11.06 flags=/Ob2 /c /nologo /TC method=m39 source=m39/m39/va_00578590 */
#include <windows.h>
extern int __stdcall FUN_00567160(void);
extern int __stdcall FUN_00592470(int, int, int);
extern int __stdcall FUN_00592280(int, int, int);
struct ThisBox { char pad[0x38]; int val34; int val30; int val28; int val20; };
void __fastcall FUN_00578590(int pThis, int edi) {
  int i, c, res;
  unsigned char *ptr;
  if (edi == 0) return;
  __try {
    if (*(int*)(pThis + 0x34)) {
      typedef void (__fastcall *call_t)(int);
      call_t f = (call_t)**(int**)(pThis + 0x34);
      f(1);
      *(int*)(pThis + 0x34) = 0;
    }
    i = -1; c = 0x42; ptr = (unsigned char*)0x6ba6b4;
    do { i = i * 33 + c; c = *++ptr; } while (c != 0);
    if (edi == i) {
      if (*(int*)(pThis + 0x30)) {
        int v = FUN_00567160();
        res = v ? FUN_00592470(v, pThis, *(int*)(pThis + 0x30)) : 0;
      } else res = 0;
    } else {
      int v = FUN_00567160();
      res = v ? FUN_00592280(v, pThis, edi) : 0;
    }
    *(int*)(pThis + 0x34) = res;
    *(int*)(pThis + 0x28) = 1;
    if (*(int*)(pThis + 0x20)) *(int*)(*(int*)(pThis + 0x20) + 12) = 1;
  } __except(1) {}
}
