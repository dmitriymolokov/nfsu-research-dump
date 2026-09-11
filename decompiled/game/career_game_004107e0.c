/* spd-match: far pct=24.43 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004107E0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00567160();
extern int DAT_007363bc;
extern int DAT_007363c4;
extern int DAT_007363c8;
extern int DAT_007363cc;
extern int DAT_007363d0;
extern int DAT_0078a4a0;
extern int DAT_0078a4a4;
extern int _DAT_0078a4a8;
extern int _DAT_0078a4ac;
extern int _DAT_0078a4b0;
extern int _DAT_0078a4b4;
extern int _DAT_0078a4b8;
extern int _DAT_0078a4bc;
extern int _DAT_0078a4c0;
extern int _DAT_0078a4c4;
extern int _DAT_0078a4c8;
extern int _DAT_0078a4cc;
extern int _DAT_0078a4d0;
extern int _DAT_0078a4d4;
extern int _DAT_0078a4d8;
extern int _DAT_0078a4dc;
undefined4 __fastcall FUN_004107e0(undefined4 * obj, undefined4 param_1)

{

  int iVar1;
  undefined4 *puVar2;
  
  DAT_007363bc = FUN_00567160();
  DAT_007363c8 = 0;
  DAT_007363cc = 0;
  DAT_007363d0 = 0;
  DAT_007363c4 = param_1;
  if (obj != (undefined4 *)0x0) {
    puVar2 = &DAT_0078a4a0;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *obj;
      obj = obj + 1;
      puVar2 = puVar2 + 1;
    }
    return 1;
  }
  DAT_0078a4a0 = 0x3f800000;
  DAT_0078a4a4 = 0;
  _DAT_0078a4a8 = 0;
  _DAT_0078a4ac = 0;
  _DAT_0078a4b0 = 0;
  _DAT_0078a4b4 = 0x3f800000;
  _DAT_0078a4b8 = 0;
  _DAT_0078a4bc = 0;
  _DAT_0078a4c0 = 0;
  _DAT_0078a4c4 = 0;
  _DAT_0078a4c8 = 0x3f800000;
  _DAT_0078a4cc = 0;
  _DAT_0078a4d0 = 0;
  _DAT_0078a4d4 = 0;
  _DAT_0078a4d8 = 0;
  _DAT_0078a4dc = 0x3f800000;
  return 1;
}
