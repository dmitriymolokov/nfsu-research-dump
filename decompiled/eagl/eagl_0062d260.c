/* spd-match: far pct=14.10 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_0062D260 */
#include "ghidra_compat.h"
extern unsigned char **DAT_0070d364;
extern float _DAT_006a81f8;
extern float _DAT_006a8200;
void __fastcall FUN_0062d260(int esi) {
  int edi, base_addr, vtbl_ptr;
  unsigned short count;
  edi = *(int *)(esi + 0xc);
  count = *(unsigned short *)(edi + 0xe);
  if (count != 0) {
    vtbl_ptr = *(int *)DAT_0070d364;
    base_addr = ((int (__stdcall *)(int))(*(int **)vtbl_ptr)[5])(count << 4);
    *(int *)(esi + 0x18) = base_addr;
    *(int *)(esi + 0x14) = base_addr;
    base_addr = ((int (__stdcall *)(int))(*(int **)vtbl_ptr)[5])(count << 4);
    *(int *)(esi + 0x24) = base_addr;
    *(int *)(esi + 0x20) = base_addr;
    base_addr = ((int (__stdcall *)(int))(*(int **)vtbl_ptr)[5])(count * 0x30);
    *(int *)(esi + 0x2c) = base_addr;
  }
}
