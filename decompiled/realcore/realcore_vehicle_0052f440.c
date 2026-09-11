/* spd-match: far pct=17.84 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_0052F440 */
#include "ghidra_compat.h"
int __cdecl FUN_0064c000(void* p);
int __cdecl FUN_0064c1a0(void* p1, int* p2);
extern int DAT_007441f0;
extern unsigned char *PTR_s_SCRAPE_SMOKABLE_006f8188;
void __fastcall FUN_0052f440(int eax_val, int edx_param, int ecx_param, int ebx_param, int ebp_param, int* esi_ptr) {
  int iVar;
  if (eax_val < 0) eax_val = 0; else if (eax_val > 0x7fff) eax_val = 0x7fff;
  esi_ptr[1] = eax_val;
  if (ecx_param < 0) ecx_param = 0; else if (ecx_param > 0x2328) ecx_param = 0x2328;
  esi_ptr[2] = ecx_param;
  if (edx_param < 0) edx_param = 0; else if (edx_param > 0xffff) edx_param = 0xffff;
  esi_ptr[3] = edx_param;
  if (ebx_param < 0) ebx_param = 0; else if (ebx_param > 0x10) ebx_param = 0x10;
  esi_ptr[4] = ebx_param;
  if (ebp_param < 0) ebp_param = 0; else if (ebp_param > 0x7f) ebp_param = 0x7f;
  esi_ptr[5] = ebp_param;
  iVar = FUN_0064c1a0(&DAT_007441f0, &esi_ptr[1]);
  if (iVar < 0) {
    FUN_0064c000(&PTR_s_SCRAPE_SMOKABLE_006f8188);
    FUN_0064c1a0(&DAT_007441f0, &esi_ptr[1]);
  }
}
