/* spd-match: far pct=26.04 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00546060 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0053e400();
int __cdecl FUN_0053e560();
int __cdecl FUN_0053ebc0();
extern int DAT_00740420;
void __fastcall FUN_00546060(int val)

{

  int iVar1;
  int iVar2;
  
  if ((((val != 0) && (iVar1 = FUN_0053e560(&DAT_00740420,val), iVar1 != 0)) &&
      (*(char *)(iVar1 + 0x8b) == '\0')) &&
     (((*(int *)(iVar1 + 0x9c) != 0 && (iVar2 = FUN_0053e400(), iVar2 != 0)) &&
      (*(short *)(iVar2 + 0xe) = *(short *)(iVar2 + 0xe) + -1, *(short *)(iVar2 + 0xe) == 0)))) {
    if ((*(byte *)(iVar2 + 0xd) & 0x10) != 0) {
      *(byte *)(iVar2 + 0xd) = *(byte *)(iVar2 + 0xd) | 0x20;
      return;
    }
    FUN_0053ebc0(iVar1);
  }
  return;
}
