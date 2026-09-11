/* spd-match: far pct=18.25 flags=/Ob2 /c /nologo /TC method=m39 source=m39/m39/va_006142B6 */
#include <windows.h>
extern int __cdecl FUN_006139d8(unsigned int *, void *, void *, unsigned int *, int *, void *, unsigned int);
extern int DAT_006a6598;
int FUN_006142b6(void *ecx_input) {
  int ebp_offsets[75];
  unsigned int esi = (*(unsigned int**)((char*)ecx_input + 0x98) == 0) ? 0 : *(unsigned int*)*(unsigned int**)((char*)ecx_input + 0x98);
  esi &= 0xffffff;
  if (FUN_006139d8((unsigned int*)((char*)ecx_input + 0x98), &DAT_006a6598, 0, (unsigned int*)&ebp_offsets[0], 0, 0, esi) != 0) {
    return -1;
  }
  return 0;
}
