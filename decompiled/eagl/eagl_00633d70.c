/* spd-match: far pct=9.38 flags=/O2 /c /nologo /TP method=m39 source=m39/m39/va_00633D70 */
#include <windows.h>
void (__stdcall * const FUN_00633500)(float, float, void*) = (void (__stdcall*)(float,float,void*))0x00633500;
void __stdcall FUN_00633d70(int this_ptr, int param_2) {
  if (*(char*)(this_ptr + 0x68) == 0) {
    *(int*)(this_ptr + 0x54) = -1;
    *(int*)(this_ptr + 0x58) = 0;
    *(int*)(this_ptr + 0x5c) = 0;
    *(int*)(this_ptr + 0x60) = 0;
    *(float*)(this_ptr + 0x64) = 1.0f;
    *(char*)(this_ptr + 0x68) = 1;
    return;
  }
  if (*(int*)(this_ptr + 0x54) != param_2) {
    float local_stack[4];
    FUN_00633500(0.0f, 0.0f, local_stack);
    int* pi = (int*)(*(int*)(this_ptr + 0x10) + *(int*)(this_ptr + 0x30) * 4);
    float f1 = (float)(*(unsigned short*)(*(int*)pi + 4) - 1);
    float f2 = (float)(*(unsigned short*)(*(int*)(pi + 1) + 4) - 1);
    FUN_00633500(f1, f2, local_stack);
    *(int*)(this_ptr + 0x54) = param_2;
  }
}
