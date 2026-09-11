/* spd-match: far pct=12.50 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.6-control100/va_00572B50 */
#include <windows.h>

void* __stdcall FUN_00572b50(char* p_base, int* p_offset, int* p_count) {
  int offset = (int)p_offset;
  int* head = (int*)(offset + 0x70);
  int* curr = (int*)*(head);
  while (curr != head) {
    char* s1 = (char*)((int)curr + 8);
    char* s2 = p_base;
    char c1, c2;
    do {
      c1 = *s1++;
      c2 = *s2++;
      if (!c1 || !c2) break;
    } while (c1 == c2);
    if (c1 == c2) {
      if (*p_count == 0) return curr;
      (*p_count)--;
    }
    curr = (int*)*curr;
  }
  return 0;
}
