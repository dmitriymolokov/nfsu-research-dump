/* spd-match: far pct=15.58 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_0055D160 */
#include <windows.h>
extern int __cdecl FUN_004ef050(int);
extern int __cdecl FUN_004f3f90(void*);
extern int __cdecl FUN_004f65d0(void);
extern int __cdecl FUN_004f78e0(void*, void*);
extern int __cdecl FUN_004fd1e0(int);
extern int __cdecl FUN_004ffb70(int, int);
extern int __cdecl FUN_0055dc20(void*);
extern int __cdecl FUN_0055dcf0(void*);
extern int __cdecl FUN_00598420(void);
extern int DAT_007301cc;
extern int DAT_00734dbd;
extern int DAT_00734dc0;
extern unsigned char *DAT_0073578c;
extern int DAT_00746104;
extern unsigned char *PTR_FUN_006bc8e0;
void* FUN_0055d160(int* p_obj, int arg2) {
    int* res;
    __try {
        FUN_004f78e0(p_obj, (void*)arg2);
        *p_obj = (int)&PTR_FUN_006bc8e0;
        FUN_00598420();
        p_obj[0x1e] = 0x83015b7a;
        p_obj[0x20] = 0;
        ((char*)p_obj)[0x18] = 1;
        FUN_0055dc20(p_obj);
        FUN_0055dcf0(p_obj);
        ((char*)p_obj)[0x20] = 1;
        p_obj[0x15] = 0; p_obj[0x16] = 0; p_obj[0x17] = 0; p_obj[0x18] = 0;
        res = p_obj;
    }
    __except(EXCEPTION_EXECUTE_HANDLER) {
        res = p_obj;
    }
    return res;
}
