/* spd-match: far pct=4.55 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004830F0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int unaff_SI;
void __fastcall FUN_004830f0(undefined4 * obj, undefined4 param_1, undefined4 *param_2, undefined4 param_3)

{
  undefined4 uVar1;

  undefined2 unaff_SI;
  
  uVar1 = *param_2;
  *(undefined2 *)((int)obj + 0x2e) = unaff_SI;
  obj[9] = uVar1;
  *obj = 0;
  obj[1] = 0;
  obj[2] = 0;
  obj[3] = 0;
  *(undefined2 *)(obj + 0xb) = 0;
  obj[10] = param_3;
  uVar1 = param_2[1];
  obj[0x16] = param_3;
  obj[0x15] = uVar1;
  obj[0xc] = 0;
  obj[0xd] = 0;
  obj[0xe] = 0;
  obj[0xf] = 0;
  *(undefined2 *)(obj + 0x17) = 0;
  *(undefined2 *)((int)obj + 0x5e) = unaff_SI;
  obj[0x21] = param_2[2];
  obj[0x18] = 0;
  obj[0x19] = 0;
  obj[0x1a] = 0;
  obj[0x1b] = 0;
  obj[0x22] = param_3;
  *(undefined2 *)(obj + 0x23) = 0;
  *(undefined2 *)((int)obj + 0x8e) = unaff_SI;
  return;
}
