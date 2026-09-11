/* spd-match: far pct=16.48 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004FEBB0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern unsigned char *DAT_006f9fdc;
extern unsigned char *PTR_FUN_006c1810;
extern unsigned char *PTR_LAB_006c2c4c;
void __fastcall FUN_004febb0(undefined4 * obj)

{
  int iVar1;

  obj[1] = 0xabadcafe;
  obj[2] = 0xabadcafe;
  obj[4] = 0;
  obj[5] = 0;
  obj[7] = 0;
  *(undefined2 *)(obj + 8) = 0;
  obj[9] = 0;
  obj[10] = 0;
  obj[0xb] = 0;
  obj[0xc] = 0;
  *obj = &PTR_FUN_006c1810;
  obj[0xf] = 0;
  obj[0x10] = 0;
  obj[0xe] = 0;
  obj[0xd] = &PTR_LAB_006c2c4c;
  obj[0x13] = 0;
  obj[0x14] = 0;
  obj[0x12] = 0;
  obj[0x11] = &PTR_LAB_006c2c4c;
  iVar1 = DAT_006f9fdc + 1;
  obj[3] = DAT_006f9fdc;
  DAT_006f9fdc = iVar1;
  return;
}
