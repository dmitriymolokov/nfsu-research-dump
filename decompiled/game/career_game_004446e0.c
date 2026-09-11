/* spd-match: far pct=7.79 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004446E0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00448070();
int __cdecl FUN_00448110();
int __cdecl FUN_004482f0();
extern unsigned char *DAT_00735554;
void __fastcall FUN_004446e0(int obj)

{

  int iVar1;
  int unaff_ESI;
  
  *(int *)(obj + 0x10) = *(int *)(obj + 0x10) + 1;
  *(undefined4 *)(unaff_ESI + 0xc) = 2;
  iVar1 = FUN_004482f0(*(int *)(unaff_ESI + 0x10) * 0x40 + 0x14 + obj,4,0x20,
                       *(undefined4 *)(unaff_ESI + 0x14),*(undefined4 *)(unaff_ESI + 0x18));
  *(int *)(unaff_ESI + 0x28) = iVar1;
  DAT_00735554 = DAT_00735554 + 1;
  *(undefined4 *)(iVar1 + 0x9c) = *(undefined4 *)(unaff_ESI + 0x2c);
  FUN_00448070(unaff_ESI);
  FUN_00448110();
  return;
}
