/* spd-match: far pct=20.54 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004B0150 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004aea50();
extern int DAT_006fb02c;
extern int DAT_006fb034;
extern int DAT_00735e84;
extern int DAT_00735e88;
extern int DAT_0073ad3c;
extern int DAT_0074810c;
void __fastcall FUN_004b0150(int obj, undefined4 param_1, undefined4 param_2)

{
  int iVar1;

  undefined4 unaff_EDI;
  
  DAT_0074810c = DAT_0073ad3c;
  iVar1 = *(int *)(obj + 0x60);
  DAT_006fb02c = 0;
  DAT_00735e84 = 0;
  if ((*(int *)(iVar1 + 0x2c) != 2) && (*(int *)(iVar1 + 0x2c) != 0)) {
    *(undefined4 *)(iVar1 + 0x2c) = 3;
    *(undefined4 *)(iVar1 + 0x188) = 0;
  }
  iVar1 = *(int *)(obj + 0x60);
  if ((*(int *)(iVar1 + 0x2c) != 2) && (*(int *)(iVar1 + 0x2c) != 0)) {
    *(undefined4 *)(iVar1 + 0x2c) = 3;
    *(undefined4 *)(iVar1 + 0x184) = 0;
  }
  DAT_006fb034 = param_2;
  DAT_00735e88 = unaff_EDI;
  FUN_004aea50(obj + 0x80,unaff_EDI);
  return;
}
