/* spd-match: far pct=60.71 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004FF780 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern unsigned char *PTR_FUN_006c17f4;
extern unsigned char *PTR_FUN_006c2c48;
extern unsigned char *PTR_LAB_006c2c4c;
void __fastcall FUN_004ff780(undefined4 * obj)

{

  *obj = &PTR_FUN_006c17f4;
  obj[1] = 0xabadcafe;
  obj[2] = 0xabadcafe;
  obj[3] = 0;
  obj[4] = 0;
  obj[0x10] = 0;
  obj[0x11] = 0;
  obj[0xf] = 0;
  obj[0xe] = &PTR_LAB_006c2c4c;
  obj[0x12] = &PTR_LAB_006c2c4c;
  obj[0x14] = 0;
  obj[0x15] = 0;
  obj[0x13] = 0;
  obj[0x1c] = 0;
  obj[0x1d] = 0;
  obj[0x1b] = 0;
  obj[0x1a] = &PTR_FUN_006c2c48;
  obj[0x21] = 0;
  obj[0x22] = 0;
  obj[0x24] = &PTR_LAB_006c2c4c;
  obj[0x26] = 0;
  obj[0x27] = 0;
  obj[0x25] = 0;
  obj[7] = 0xff;
  *(undefined1 *)(obj + 5) = 0;
  *(undefined1 *)((int)obj + 0x15) = 0;
  *(undefined1 *)((int)obj + 0x16) = 0;
  *(undefined1 *)((int)obj + 0x17) = 0;
  obj[6] = 0;
  obj[0xb] = 0;
  obj[0xc] = 0;
  obj[0xd] = 0;
  obj[0x16] = 0;
  obj[0x17] = 0;
  obj[0x18] = 0;
  obj[0x19] = 0;
  obj[0x20] = 0;
  obj[0x23] = 0;
  obj[0x1e] = 0;
  obj[0x1f] = 0;
  return;
}
