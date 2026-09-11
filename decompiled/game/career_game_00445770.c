/* spd-match: far pct=20.25 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00445770 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00565da0();
extern int DAT_006ca178;
extern int DAT_0078eb54;
extern int DAT_0078ef40;
extern int DAT_0078ef41;
extern int DAT_0078ef42;
undefined * __fastcall FUN_00445770(int val)

{

  int iVar1;
  undefined *puVar2;
  
  iVar1 = (((int)DAT_0078eb54) & 3) * 0x10;
  puVar2 = ((unsigned char *)&DAT_0078ef40) + iVar1;
  DAT_0078eb54 = ((int)DAT_0078eb54) + 1;
  if (val < 1) {
    *puVar2 = 0x2d;
    (&DAT_0078ef41)[iVar1] = 0x2d;
    (&DAT_0078ef42)[iVar1] = 0;
    return puVar2;
  }
  FUN_00565da0(&DAT_006ca178,(int)(char)((char)(val / 100) + '@'),val % 100);
  return puVar2;
}
