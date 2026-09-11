/* spd-match: far pct=16.45 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00562690 */
#include "ghidra_compat.h"
extern int DAT_00736168;
extern int DAT_0073616c;
void __cdecl FUN_00495f00(int, int);
int __cdecl FUN_004f42f0(const char*, int);
void __cdecl FUN_0054ae10(void*, int);
void LAB_00562910(void);
void __fastcall FUN_00562690(int val, int esi) {
  int* p = (int*)esi;
  int ebx = 0;
  int eax;
  p[0x22] += val;
  if (p[0x22] >= p[0x61]) p[0x22] = p[0x61] - 1;
  if (p[0x22] < 0) p[0x22] = 0;
  eax = *(int*)((char*)esi + p[0x22]*4 + 0x94);
  if (DAT_00736168 && eax >= 0 && eax < DAT_0073616c) ebx = eax * 0xfc + DAT_00736168;
  eax = FUN_004f42f0("%d", *(short*)(ebx + 0x6c));
  FUN_00495f00(eax, p[3]);
  if (*(short*)(ebx + 0x6c) >= 0x44c) {
    *(char*)(esi + 0x90) = 1;
    FUN_0054ae10(LAB_00562910, esi);
  }
}
