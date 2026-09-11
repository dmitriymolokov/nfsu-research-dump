/* spd-match: far pct=23.40 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0050AB90 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0050aa90();
int __cdecl FUN_005a0350();
int __cdecl FUN_005a08b0();
int __cdecl FUN_005a1520();
extern int DAT_0073440c;
extern int DAT_00735ec1;
extern int DAT_00745e40;
extern int DAT_0075eef8;
undefined1 __fastcall FUN_0050ab90(int obj)

{
  char cVar1;

  int iVar2;
  int extraout_ECX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  
  if ((DAT_00735ec1 == '\0') && (*(int *)(obj + 0x90) == 0)) {
    if (DAT_00745e40 == 1) {
      cVar1 = FUN_0050aa90(obj,unaff_EDI,unaff_ESI);
      if (cVar1 != '\0') {
        return 0;
      }
      if (DAT_0073440c == '\0') {
        FUN_005a0350();
        FUN_005a08b0();
        iVar2 = FUN_005a1520(&DAT_0075eef8);
        if (iVar2 < extraout_ECX) {
          return 0;
        }
      }
    }
    return 1;
  }
  return 1;
}
