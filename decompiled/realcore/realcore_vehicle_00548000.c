/* spd-match: far pct=11.43 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00548000 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00438980();
int __cdecl FUN_0043b850();
int __cdecl FUN_0043d2d0();
int __cdecl FUN_005483a0();
int __cdecl FUN_005488d0();
extern int DAT_006f3d9c;
extern int DAT_007361f8;
extern int DAT_007402b0;
void __fastcall FUN_00548000(undefined4 val, undefined4 param_1)

{

  int iVar1;
  int iVar2;
  
  if (DAT_007361f8 != 0) {
    iVar1 = FUN_00438980(&DAT_007402b0);
    FUN_005488d0(0x20);
    iVar2 = FUN_0043b850(iVar1);
    if ((iVar2 != 0) && (*(float *)(iVar2 + 0x1a4) < 0.0)) {
      *(undefined4 *)(iVar2 + 0x1a4) = 0;
      FUN_0043d2d0(iVar1,val,param_1);
      if (iVar1 == DAT_006f3d9c) {
        FUN_005483a0(0);
      }
    }
  }
  return;
}
