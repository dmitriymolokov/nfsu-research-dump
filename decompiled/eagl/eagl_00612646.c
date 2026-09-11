/* spd-match: far pct=59.65 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00612646 */
#include "ghidra_compat.h"
extern int __cdecl FUN_0061193a(int val);
int __fastcall FUN_00612646(int *eax, int *ecx) {
    int count = eax[1];
    int i = 0;
    if (count > 0) {
        int *arr = (int *)(eax[2]);
        int *vec = (int *)(ecx[5]);
        do {
            int *ptr = (int *)(vec[arr[i]]);
            if (ptr[1] != -1) {
                int res = FUN_0061193a(ptr[1]);
                if (res < 0) return res;
                return 0;
            }
            i++;
        } while (i < count);
    }
    return 0;
}
