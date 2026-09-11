/* spd-match: far pct=14.75 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00605D41 */
#include <windows.h>
extern void __cdecl FUN_005fbec8(void* instance, int id, int line, const char* fmt, ...);
int __fastcall FUN_00605d41(int ecx, int edx) {
  unsigned int* p_count;
  unsigned int* p_array;
  unsigned int i;
  unsigned int* p_val;
  unsigned int val;
  p_count = (unsigned int*)(ecx + 0x0C);
  p_array = *(unsigned int**)(ecx + 0x18);
  if (*p_count == 0) return 0;
  for (i = 0; i < *p_count; i++) {
    *(unsigned int*)(ecx + 0x94) = i;
    p_val = (unsigned int*)p_array[i];
    *(unsigned int**)(ecx + 0x98) = p_val;
    if (p_val && *p_val) {
      val = *p_val & 0xFF000000;
      if (val == 0x4A000000 || val == 0x42000000 || val == 0x43000000 || val == 0x46000000 || val == 0x47000000 || val == 0x4B000000 || val == 0x4E000000 || val == 0x4F000000) {
        return 0x80004005;
      }
    }
  }
  return 0;
}
