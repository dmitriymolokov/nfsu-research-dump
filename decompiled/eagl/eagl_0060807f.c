/* spd-match: far pct=20.00 flags=/Ob2 /c /nologo /TP method=m39 source=m39/m39/va_0060807F */
#include <windows.h>
extern void __cdecl FUN_005fbec8(void* obj, int a, int b, const char* msg);
int FUN_0060807f(void* ecx, int param1, int* arr1, int count1, int* arr2, int count2) {
  unsigned int i = 0;
  if (count1 == 0) return 0;
  do {
    int* entry = *(int**)((char*)arr1 + i * 4);
    if (entry && *entry) {
       unsigned int type = *entry & 0xff000000;
       if (type == 0x40000000 || type == 0x44000000 || type == 0x48000000 || type == 0x4c000000) continue;
       if (type == 0xe1000000) continue;
    }
    i++;
  } while (i < (unsigned int)count1);
  return 0;
}
