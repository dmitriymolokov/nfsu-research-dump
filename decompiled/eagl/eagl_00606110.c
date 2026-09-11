/* spd-match: far pct=12.50 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00606110 */
#include <stdlib.h>
typedef unsigned int uint;
struct Box { uint pad[0x100]; };
uint * __fastcall FUN_00606110(struct Box *ecx, int edx) {
    uint *p = (uint *)((char*)ecx + 0x98);
    uint val = *p;
    if ((val & 0xff000000) == 0x25000000) {
        return (uint*)0x0;
    }
    return (uint*)0x1;
}
