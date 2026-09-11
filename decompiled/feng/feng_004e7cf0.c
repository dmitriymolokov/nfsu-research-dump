/* spd-match: far pct=29.03 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004E7CF0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004323f0();
int __cdecl FUN_004b0e50();
int __cdecl FUN_004b2330();
extern int DAT_00745000;
extern int DAT_00748850;
extern int _DAT_0072cc80;
void __fastcall FUN_004e7cf0(int obj)

{

  int iVar1;
  
  if (*(int *)(*(int *)(obj + 0x84) + 0x730) == 0) {
    iVar1 = FUN_004b2330();
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x9c) = 1;
    }
  }
  else {
    FUN_004323f0(&DAT_00745000,*(int *)(obj + 0x84) + 0x10);
    iVar1 = FUN_004b2330();
    FUN_004323f0(&DAT_00748850,&DAT_00745000);
    _DAT_0072cc80 = 2;
    if (iVar1 != 0) {
      FUN_004b0e50(iVar1,&DAT_00748850,2);
    }
    iVar1 = FUN_004b2330();
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x9c) = 0;
      return;
    }
  }
  return;
}
