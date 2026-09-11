/* spd-match: far pct=25.76 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00504890 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004323f0();
int __cdecl FUN_004b0e50();
int __cdecl FUN_004b2330();
extern int DAT_00748850;
extern int _DAT_0072cc80;
void __fastcall FUN_00504890(int obj)

{

  int iVar1;
  
  FUN_004323f0(obj + 0x10,obj + 0x730);
  iVar1 = FUN_004b2330();
  FUN_004323f0(&DAT_00748850,obj + 0x730);
  _DAT_0072cc80 = 2;
  if (iVar1 != 0) {
    FUN_004b0e50(iVar1,&DAT_00748850,2);
  }
  return;
}
