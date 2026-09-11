/* spd-match: far pct=19.23 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_006169A4 */
#include <memory.h>
#include <stdlib.h>
typedef unsigned int uint;
extern int __stdcall FUN_0061556b(uint, uint *, uint *, int, int);
int __fastcall FUN_006169a4(int arg_this) {
  uint *src_ptr = *(uint **)(arg_this + 0x98);
  uint val_reg = *src_ptr;
  int local_var_stack[32];
  int *p_out = &local_var_stack[0];
  if ((val_reg & 0xFF000000) == 0x21000000) {
      if (!FUN_0061556b((val_reg & 0x00FFFFFF) | 0x20000000, src_ptr, (uint *)p_out, 2, 1)) return 0;
  } else if ((val_reg & 0xFF000000) == 0x20000000) {
      if (!FUN_0061556b((val_reg & 0x00FFFFFF) | 0x21000000, src_ptr, (uint *)p_out, 2, 1)) return 1;
  }
  return 0;
}
