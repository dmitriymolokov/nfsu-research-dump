/* spd-match: far pct=23.08 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0054B7B0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0054b700();
int __cdecl FUN_00664d40();
int __cdecl FUN_00666ea0();
extern int DAT_0073d868;
extern int DAT_0073d8d0;
extern int DAT_0073d8dc;
extern int DAT_0073dafc;
int __fastcall FUN_0054b7b0(undefined4 val)

{

  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0054b700(&DAT_0073d868,val);
  if (((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + 0x1f8), iVar1 != 0)) && (DAT_0073d8d0 != 0)) {
    if (iVar1 == -1) {
      iVar1 = DAT_0073dafc;
    }
    uVar2 = FUN_00664d40(DAT_0073d8d0,5,iVar1);
    iVar1 = FUN_00666ea0(DAT_0073d8dc,uVar2);
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  return 0;
}
