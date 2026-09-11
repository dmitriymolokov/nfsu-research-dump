/* spd-match: far pct=17.65 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005A2540 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004acb90();
int __cdecl FUN_004f42f0();
extern int DAT_00734588;
int unaff_ESI;
void __fastcall FUN_005a2540(int obj)

{

  int iVar1;
  int unaff_ESI;
  
  iVar1 = unaff_ESI * 0xc90 + DAT_00734588;
  if (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 0xc7c);
    *(int *)(obj + 0x1374) = *(int *)(obj + 0x1374) - iVar1;
    *(int *)(obj + 0x137c) = *(int *)(obj + 0x137c) + iVar1;
  }
  FUN_004f42f0("CAREER_CAR");
  FUN_004acb90();
  *(undefined2 *)(obj + 0x1384) = 1;
  return;
}
