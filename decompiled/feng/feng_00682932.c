/* spd-match: far pct=8.42 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.G.1-filter100/va_00682932 */
#include "ghidra_compat.h"
extern int DAT_006eb720;
void __cdecl FUN_006826fa(void*, void*);
void __cdecl FUN_00682932(unsigned short *param_1, int param_2, int param_3) {
  unsigned int xor_val = DAT_006eb720 ^ *(unsigned int*)((char*)&param_1 - 4);
  int ebx = 0x6ec1e0;
  if (param_2 == 0) return;
  if (param_2 < 0) { param_2 = -param_2; ebx = 0x6ec340; }
  if (param_3 == 0) *param_1 = 0;
  while (param_2 != 0) {
    unsigned int uVar2 = param_2 & 7;
    param_2 >>= 3;
    ebx += 0x54;
    if (uVar2 != 0) {
      unsigned short *puVar4 = (unsigned short *)(ebx + uVar2 * 12);
      if (*puVar4 > 0x7fff) {
        unsigned short local_10[8];
        *(unsigned int*)&local_10[0] = *(unsigned int*)puVar4;
        *(unsigned int*)&local_10[2] = *(unsigned int*)(puVar4 + 2);
        *(unsigned int*)&local_10[4] = *(unsigned int*)(puVar4 + 4);
        (*(unsigned int*)&local_10[0])--;
        puVar4 = local_10;
      }
      FUN_006826fa(param_1, puVar4);
    }
  }
}
