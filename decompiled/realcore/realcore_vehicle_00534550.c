/* spd-match: far pct=14.12 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00534550 */
#include <windows.h>
extern int __stdcall FUN_0064b510(void**);
extern int __stdcall FUN_0064b580(void);
extern int __stdcall FUN_0064b5a0(void);
extern int __stdcall FUN_0064c1a0(int*, int*, int);
extern int DAT_00744220;
void __fastcall FUN_00534550(int* obj) {
  int* local_ptr = 0;
  int esi = 0;
  __try {
    (*(void (__stdcall **)(void))(*obj + 0x3c))();
    FUN_0064b510((void**)&local_ptr);
    FUN_0064b580();
    esi = (*(int (__stdcall **)(int, int, int))(*local_ptr))(0x18, 4, -1);
    FUN_0064b5a0();
    if (esi != 0) {
       int* p = (int*)(esi + 4);
       *p = 3;
       *(int*)(esi + 8) = 0;
       *(int*)(esi + 0x14) = 1;
       FUN_0064c1a0(&DAT_00744220, p, esi);
       obj[0xa0] = esi;
    } else {
       obj[0xa0] = 0;
    }
  } __except(1) {}
}
