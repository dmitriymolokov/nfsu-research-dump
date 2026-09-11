/* spd-match: far pct=13.61 flags=/O2 /c /nologo /TP method=m39 source=m39/m39/va_0054AF80 */
#include <windows.h>
int __cdecl FUN_00449d80();
int __cdecl FUN_00565da0(const char*, int);
int __cdecl FUN_00567d30(int, int);
int __cdecl FUN_00664e00(int, int, void*, void*, int);
extern int DAT_0073d8d0;
extern void LAB_0054c2f0();
void __cdecl FUN_0054af80(int eax, int ecx, int param2) {
  int local_stack[2];
  if (eax && *(int*)(eax + 0x68)) {
    *(int*)(eax + 0x38) = ecx;
    *(int*)(eax + 0x3c) = param2;
    int edi = FUN_00449d80();
    unsigned char* s1 = (unsigned char*)edi;
    unsigned char* s2 = (unsigned char*)0x006c9af0;
    while (*s1 && *s2 && *s1 == *s2) { s1++; s2++; }
    int r = (*s1 - *s2);
    if (r == 0) r = 0;
    else if (FUN_00567d30(0x6c9ae4, edi) == 0) r = 1;
    else if (FUN_00567d30(0x6c9ae0, edi) == 0) r = 2;
    else if (FUN_00567d30(0x6c9adc, edi) == 0) r = 3;
    else if (FUN_00567d30(0x6c9ad8, edi) == 0) r = 4;
    else if (FUN_00567d30(0x6c9ad4, edi) == 0) r = 5;
    else if (FUN_00567d30(0x6c9ad0, edi) == 0) r = 6;
    else if (FUN_00567d30(0x6c9acc, edi) == 0) r = 7;
    else if (FUN_00567d30(0x6c9ac8, edi) == 0) r = 8;
    FUN_00565da0("NAME=%d", r);
    if (DAT_0073d8d0) FUN_00664e00(DAT_0073d8d0, 0x6e657773, local_stack, LAB_0054c2f0, 0);
  }
}
