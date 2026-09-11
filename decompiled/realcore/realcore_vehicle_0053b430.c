/* spd-match: far pct=14.29 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_0053B430 */
#include <windows.h>
typedef struct { int data[0x100]; int c_idx; int p_idx; } Obj;
int __cdecl FUN_00539ac0();
int __cdecl FUN_00539b70();
void __fastcall FUN_0053b430(Obj *this) {
    if (this->c_idx != this->p_idx) {
        this->p_idx = this->c_idx;
    }
    FUN_00539ac0();
    FUN_00539b70();
}
