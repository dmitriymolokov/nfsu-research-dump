/* spd-match: far pct=26.67 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00574120 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0040a880();
extern unsigned char *DAT_0073b260;
int unaff_EDI;
undefined4 __fastcall FUN_00574120(int val)

{
  undefined4 *puVar1;

  undefined4 *puVar2;
  int unaff_EDI;
  
  puVar1 = *(undefined4 **)(&DAT_0073b260 + val * 0x18c);
  puVar2 = (undefined4 *)FUN_0040a880();
  while( true ) {
    if (puVar1 == puVar2) {
      return 0;
    }
    if (puVar1[2] == unaff_EDI) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return 1;
}
