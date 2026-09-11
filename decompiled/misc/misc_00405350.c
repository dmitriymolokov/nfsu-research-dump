/* spd-match: far pct=19.61 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.6-c3-ctx/va_00405350 */
#include <windows.h>
extern int __cdecl FUN_004053f0();
extern int __cdecl FUN_00671077(char*, const char*, void*);
void __fastcall FUN_00405350(int esi_obj, char* edi_path) {
    char local_buffer[2048];
    if (edi_path != NULL && *edi_path != 0) {
        char* p = edi_path;
        while (*p != 0) {
            if (*p == '%') {
                FUN_00671077(local_buffer, edi_path, (void*)((char*)&esi_obj + 0x80c));
                edi_path = local_buffer + 0x14;
                break;
            }
            p++;
        }
    }
    *(int*)(esi_obj + 8) = (esi_obj + 0xc);
    FUN_004053f0();
}
