/* spd-match: far pct=12.86 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0041F570 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00567220();
extern unsigned char *DAT_007349b4;
extern int DAT_007349b8;
void __fastcall FUN_0041f570(undefined4 * obj)

{
  int iVar1;

  int iVar2;
  bool bVar3;
  
  iVar1 = DAT_007349b4;
  iVar2 = *(int *)(DAT_007349b4 + 0x18);
  *obj = *(undefined4 *)(DAT_007349b4 + 0x10);
  *(undefined4 **)(iVar1 + 0x10) = obj;
  iVar2 = iVar2 + -1;
  bVar3 = DAT_007349b8 != 0;
  *(int *)(iVar1 + 0x18) = iVar2;
  if (bVar3) {
    if (iVar2 == 0) {
      FUN_00567220();
      DAT_007349b4 = 0;
      return;
    }
    DAT_007349b8 = 1;
  }
  return;
}
