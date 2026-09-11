/* spd-match: far pct=15.15 flags=/O1 /c /nologo /TC method=m39 source=m39/3.9.26.55/va_00480190 */
#include "ghidra_compat.h"

extern float DAT_007372b0;

float __fastcall FUN_00480190(void* obj, uint val)
{
    unsigned char* p = (unsigned char*)obj;
    uint count = *(uint*)(p + 0xcb0);
    uint v2 = (int)val < 0 ? 0 : val;
    if (v2 > count) v2 = count;
    
    return *(float*)(p + v2 * 0x4c + 0xd8);
}
