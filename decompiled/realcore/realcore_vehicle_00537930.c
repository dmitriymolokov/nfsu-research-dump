/* spd-match: far pct=77.68 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00537930 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern unsigned char *PTR_LAB_006bde0c;
void __fastcall FUN_00537930(undefined4 * obj)

{

  *obj = &PTR_LAB_006bde0c;
  obj[0x23] = 0;
  obj[5] = 0;
  obj[6] = 0;
  obj[7] = 0;
  obj[8] = 0;
  obj[9] = 0;
  obj[0x25] = 0;
  *(undefined1 *)(obj + 0x69) = 0;
  obj[0x1f] = 0;
  *(undefined1 *)(obj + 4) = 0;
  obj[0x7f] = 0;
  obj[0x80] = 0;
  obj[0x7d] = 0;
  obj[0x7c] = 0;
  obj[0x97] = 2;
  obj[0xb1] = 0;
  *(undefined1 *)((int)obj + 0x1a5) = 0;
  obj[0xae] = 0;
  obj[0xaf] = 0;
  *(undefined1 *)(obj + 0xb0) = 0;
  return;
}
