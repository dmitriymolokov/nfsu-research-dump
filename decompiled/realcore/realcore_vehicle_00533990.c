/* spd-match: far pct=30.14 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00533990 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00532640();
int __cdecl FUN_005336c0();
extern int DAT_006b63a8;
extern unsigned char *PTR_FUN_006be368;
void __fastcall FUN_00533990(undefined4 val)

{
  undefined4 uVar1;

  int extraout_EDX;
  undefined4 *unaff_ESI;
  
  FUN_005336c0(unaff_ESI,val);
  *unaff_ESI = &PTR_FUN_006be368;
  FUN_00532640();
  uVar1 = DAT_006b63a8;
  *(undefined1 *)(extraout_EDX + 0x78) = 1;
  unaff_ESI[0x89] = 1;
  unaff_ESI[0xa0] = 0;
  unaff_ESI[0xa1] = 0;
  *(undefined1 *)(unaff_ESI + 0xc1) = 0;
  unaff_ESI[0x86] = uVar1;
  return;
}
