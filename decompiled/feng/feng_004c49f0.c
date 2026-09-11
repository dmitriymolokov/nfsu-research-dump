/* spd-match: far pct=14.63 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004C49F0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_004c49f0(int obj)

{

  if (*(int *)(obj + 4) != 1) {
    switch(*(undefined4 *)(obj + 8)) {
    case 0:
      return 0xe8e55af1;
    case 1:
      return 0x7a19a47c;
    case 2:
      return 0x89f7493e;
    case 3:
      return 0xbd4e5637;
    case 4:
      return 0x61cffe8;
    case 5:
      return 0x789301b4;
    default:
      return 0;
    }
  }
  return 0xe2c9114b;
}
