/* spd-match: far pct=23.42 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_005628A0 */
#include <windows.h>
extern int DAT_0073616c;
extern int DAT_00736168;
void __fastcall FUN_005628a0(int ecx_ptr) {
  int eax = 0;
  int esi = DAT_0073616c;
  *(int*)(ecx_ptr + 0x184) = 0;
  if (esi > 0) {
    int ebp = DAT_00736168;
    int edi = ebp;
    do {
      int edx = (ebp == 0 || eax < 0 || eax >= esi) ? 0 : edi;
      if ((*(unsigned int*)(ecx_ptr + 0x8c) & *(unsigned int*)(edx + 0x74)) != 0) {
        int count = *(int*)(ecx_ptr + 0x184);
        if (count < 0x3c) {
          *(int*)(ecx_ptr + count * 4 + 0x94) = eax;
          *(int*)(ecx_ptr + 0x184) = count + 1;
        }
      }
      eax++;
      edi += 0xfc;
    } while (eax < esi);
  }
  *(int*)(ecx_ptr + 0x88) = 0;
}
