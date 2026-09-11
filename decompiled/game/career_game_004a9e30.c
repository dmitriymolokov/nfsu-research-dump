/* spd-match: far pct=10.00 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.G.1-filter100/va_004A9E30 */
#include <windows.h>
#pragma pack(push, 1)
struct Entry { short val1; char val2; char val3; int val4; };
#pragma pack(pop)
int __fastcall FUN_004a9e30(int edx_reg, int base_ptr) {
  int i = 0;
  struct Entry *ptr = (struct Entry *)(base_ptr + 2);
  extern int ebx_val, esi_val, edi_val;
  while (i < 0x140) {
    if (ptr->val1 == (short)ebx_val && (char)ptr->val2 == (char)edi_val && (char)ptr->val3 == (char)esi_val) {
      return (int)((char *)ptr - 2);
    }
    ptr++;
    i++;
  }
  return 0;
}
