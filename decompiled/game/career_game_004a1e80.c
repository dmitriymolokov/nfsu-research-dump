/* spd-match: far pct=15.07 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004A1E80 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004a1ee0();
int __cdecl FUN_004f68a0();
int __cdecl FUN_00586580();
extern int DAT_006cc568;
void __fastcall FUN_004a1e80(int obj, int param_1)

{

  int iVar1;
  undefined1 local_20 [32];
  
  if ((*(char *)(param_1 + 0xd) != '\0') && (iVar1 = (int)*(char *)(param_1 + 9), 1 < iVar1)) {
    *(int *)(obj + 0x34) =
         *(int *)(param_1 + 0x88 + iVar1 * 4) - *(int *)(param_1 + 0x84 + iVar1 * 4);
    FUN_00586580(local_20);
    FUN_004f68a0(&DAT_006cc568,local_20);
    FUN_004a1ee0();
  }
  return;
}
