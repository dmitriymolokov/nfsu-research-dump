/* spd-match: far pct=6.19 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004ABE00 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_004abe00(undefined4 * obj)

{

  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = obj + 2;
  iVar3 = 10;
  do {
    iVar1 = 0;
    do {
      puVar2[iVar1 + 0xb8] = 0;
      puVar2[iVar1 + 0xc3] = 0;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0xb);
    *puVar2 = 0;
    puVar2 = puVar2 + 0xce;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar2 = obj + 0x80e;
  iVar3 = 0x14;
  do {
    iVar1 = 0;
    do {
      puVar2[iVar1 + 0xb8] = 0;
      puVar2[iVar1 + 0xc3] = 0;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0xb);
    *puVar2 = 0;
    puVar2 = puVar2 + 0xd2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  obj[0x1876] = 0;
  *obj = 0;
  obj[1] = 0;
  return;
}
