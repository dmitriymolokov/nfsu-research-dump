/* spd-match: far pct=14.36 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00460E70 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00424f60();
int __cdecl FUN_004617d0();
int __cdecl FUN_00584360();
extern int DAT_006b7374;
extern int DAT_006b7378;
extern int DAT_006b737c;
extern unsigned char *PTR_FUN_006c8ad0;
int unaff_EDI;
void __fastcall FUN_00460e70(undefined4 * obj)

{
  undefined4 uVar1;
  undefined4 uVar2;

  undefined4 extraout_EDX;
  undefined4 unaff_EDI;
  
  FUN_00424f60();
  uVar2 = DAT_006b737c;
  uVar1 = DAT_006b7374;
  *obj = &PTR_FUN_006c8ad0;
  FUN_00584360(uVar1,uVar2);
  FUN_00584360(DAT_006b7378,DAT_006b737c);
  obj[0x7c] = unaff_EDI;
  *(undefined2 *)(obj + 0x98) = 0;
  obj[0x9a] = 0;
  obj[0x99] = 0x42340000;
  *(undefined1 *)(obj + 0x7d) = 0;
  obj[0x9b] = unaff_EDI;
  obj[0x9c] = 0xffffffff;
  obj[0x9d] = 0;
  FUN_004617d0();
  obj[0x9e] = 1;
  obj[0x75] = 1;
  *(undefined1 *)(obj + 0xae) = 1;
  obj[0x9f] = extraout_EDX;
  obj[0xa0] = extraout_EDX;
  obj[0xa1] = extraout_EDX;
  *(char *)(obj + 0xac) = (char)extraout_EDX;
  obj[0xad] = 0x3f800000;
  return;
}
