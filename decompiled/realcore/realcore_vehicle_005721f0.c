/* spd-match: far pct=22.32 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_005721F0 */
#include <windows.h>
extern void __fastcall FUN_00572380(void* pThis);
extern void __fastcall FUN_00572690(void* pThis);
extern void __fastcall FUN_00572ac0(void* pThis);
extern void __fastcall FUN_005722d0(void* pThis);
extern void __fastcall FUN_00572530(void* pThis);
extern void __stdcall FUN_005734a0(void* pArg);
extern int DAT_00734574;
extern int DAT_0073c17c;
extern int DAT_006f08a4;
struct Object { int p0; int p1; int pad[2]; int p4; int p5; int p6; int pad2[35]; int p_a4; };
void __fastcall FUN_005721f0(struct Object* pThis) {
  if (pThis->p1 != 0) { FUN_00572380(pThis); if (pThis->p1 != 0) FUN_00572690(pThis); }
  if (pThis->p0 != 0) {
    if (pThis->p4 == 0) {
      if (pThis->p5 != 0) {
        int val = DAT_00734574 & 0x80000003;
        pThis->p6 = (val != 0) ? 1 : 0;
      }
    } else { pThis->p6 = 1; }
    FUN_00572ac0(pThis);
  }
  FUN_005722d0(pThis);
  FUN_00572530(pThis);
  FUN_005734a0(&DAT_0073c17c);
}
