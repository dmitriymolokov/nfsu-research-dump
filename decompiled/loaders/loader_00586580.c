/* spd-match: far pct=7.14 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.G.2-n5/va_00586580 */
#include <windows.h>
struct Args { int p1; int p2; int p3; int p4; };
extern int __cdecl FUN_00586090(int p1, int p2, int p3, int p4, int p5, int p6);
extern int __cdecl FUN_005864f0(int* p1, int* p2, int* p3, int* p4);
void __fastcall FUN_00586580(int val, int* edi_ptr, int p1) {
    int esi = *edi_ptr;
    if (esi == 0 || esi == 0x7fffffff) {
        FUN_00586090(p1, 0, 0, 0, val, (int)edi_ptr);
    } else {
        int l1, l2, l3;
        if (esi < 0) { *edi_ptr = -esi; FUN_005864f0(&l1, &l2, &l3, &p1); *edi_ptr = esi; }
        else { FUN_005864f0(&l1, &l2, &l3, &p1); }
    }
}
