/* spd-match: far pct=12.74 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004D7EB0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004d8040();
int __cdecl FUN_004d80e0();
int __cdecl FUN_0059e5c0();
int __cdecl FUN_005a03d0();
int __cdecl FUN_005a1550();
extern int DAT_00735ec1;
extern int DAT_0075eef8;
extern int DAT_007677ac;
undefined4 __fastcall FUN_004d7eb0(int obj)

{
  char cVar1;

  int iVar2;
  uint uVar3;
  uint local_1c [5];
  byte local_5;
  
  if ((((DAT_007677ac == 0) && (DAT_00735ec1 == '\0')) && (obj != 0)) &&
     (local_5 = *(byte *)(obj + 0x11), 1 < local_5)) {
    uVar3 = (uint)local_5;
    cVar1 = FUN_0059e5c0();
    if (cVar1 == '\0') {
      iVar2 = FUN_005a03d0();
      cVar1 = FUN_005a1550(&DAT_0075eef8,iVar2);
      local_1c[0] = (uint)(cVar1 != '\0');
      cVar1 = FUN_005a1550(&DAT_0075eef8,iVar2);
      local_1c[1] = (uint)(cVar1 != '\0');
      cVar1 = FUN_005a1550(&DAT_0075eef8,iVar2);
      local_1c[2] = (uint)(cVar1 != '\0');
      cVar1 = FUN_005a1550(&DAT_0075eef8,iVar2);
      local_1c[3] = (uint)(cVar1 != '\0');
      cVar1 = FUN_005a1550(&DAT_0075eef8,iVar2);
      local_1c[4] = (uint)(cVar1 != '\0');
      if ((local_1c[uVar3] == 0) &&
         ((iVar2 != 0 ||
          (((2 < local_5 || (cVar1 = FUN_004d8040(), cVar1 == '\0')) &&
           (cVar1 = FUN_004d80e0(), cVar1 == '\0')))))) {
        return 1;
      }
    }
  }
  return 0;
}
