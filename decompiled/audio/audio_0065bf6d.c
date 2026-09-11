/* spd-match: far pct=11.11 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.G.1-filter100/va_0065BF6D */
#include <stddef.h>
void __cpuid(int* info, int function_id);
void FUN_0065bf6d(int* result, int function_id) {
    int regs[4];
    __cpuid(regs, function_id);
    result[0] = regs[0];
    result[1] = regs[1];
    result[2] = regs[2];
    result[3] = regs[3];
}
