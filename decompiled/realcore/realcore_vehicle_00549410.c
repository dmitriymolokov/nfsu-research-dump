/* spd-match: far pct=17.57 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00549410 */
#include <memory.h>
#include <string.h>
typedef unsigned int uint;
typedef unsigned char byte;
extern int __stdcall FUN_00664160(int, void*, int);
void __fastcall FUN_00549410(uint val, char flag, void* src, int dst_ctx) {
    byte local_buffer[0x218];
    byte flag_byte = (flag == 0) ? 6 : 5;
    local_buffer[6] = flag_byte;
    memcpy(&local_buffer[16], src, val);
    *(unsigned short*)&local_buffer[12] = (unsigned short)val;
    FUN_00664160(dst_ctx, &local_buffer[12], 1);
}
