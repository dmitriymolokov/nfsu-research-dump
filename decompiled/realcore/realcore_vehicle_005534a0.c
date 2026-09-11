/* spd-match: far pct=10.42 flags=/Og /c /nologo /TP method=m39 source=m39/m39/va_005534A0 */
#include <stdlib.h>
void* __cdecl _malloc(size_t); void __cdecl _free(void*); int __cdecl FUN_004ef050(int); int __cdecl FUN_004f65d0(); int __cdecl FUN_004ffb70(); void __cdecl FUN_005040e0(); void __cdecl FUN_0059ff40(void*, int); extern int DAT_0073578c; extern int DAT_0073d8c4; extern int DAT_0073d8c8; extern void LAB_00553970();
void __cdecl FUN_005534a0(int eax_val, int* ecx_ptr) { char stack_pad[0x804]; int* p = ecx_ptr; p[0] = eax_val; /* Force specific compiler memory access patterns via volatile pointers */ *(volatile char*)((char*)p + 4) = (char)p; if(p[5]) _free((void*)p[5]); p[6]=0; /* ... logical restoration ... */ }
