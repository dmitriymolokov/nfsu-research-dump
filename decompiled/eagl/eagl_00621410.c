/* spd-match: far pct=12.98 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_00621410 */
#include "ghidra_compat.h"
void * __stdcall FUN_00621390(void *p1, void *p2);
void __stdcall FUN_006212a0(void *p1);
void __stdcall FUN_00622c60(void *p1, int p2);
void __stdcall FUN_00622c10(void *p1);
void __stdcall FUN_00623500(void *p1);
extern void (*PTR_FUN_006dfaa0)(void *, int);
void __cdecl FUN_00621410(unsigned int p1, unsigned int p2) {
  unsigned int *ebp_ptr;
  unsigned int *esi, *ebx;
  ebp_ptr = (unsigned int *)FUN_00621390((void *)p2, (void *)(p1 + 4));
  if (ebp_ptr == 0) return;
  while (*ebp_ptr != 0) {
    unsigned int current = *ebp_ptr;
    unsigned int opcode = current >> 16;
    unsigned int size = current & 0xFFFF;
    FUN_006212a0(ebp_ptr);
    if (opcode == 0x40 || opcode == 0x41) {
      esi = ebp_ptr + 1;
      while (*esi != 0) {
        unsigned int sub_op = *esi >> 16;
        if (sub_op == 4 && esi[9] == 1) {
          esi[9] = 0;
          FUN_00622c60((void *)(esi[4] + 4), 0);
          esi[4] = 0;
          PTR_FUN_006dfaa0((void *)esi[4], 8);
        } else if (sub_op == 0x4b && esi[9] == 1) {
          unsigned int tmp = esi[4];
          FUN_00622c10(&tmp);
          esi[4] = 0xFFFFFFFF;
          esi[10] = 0xFFFFFFFF;
        }
        esi += (*esi & 0xFFFF);
      }
    }
    ebp_ptr += size;
  }
}
