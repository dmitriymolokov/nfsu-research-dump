/* spd-match: far pct=7.53 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00444340 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004443e0();
void __fastcall FUN_00444340(undefined4 * obj)

{
  undefined4 *puVar1;

  int iVar2;
  
  puVar1 = obj + 0x164;
  *puVar1 = puVar1;
  obj[0x165] = puVar1;
  *obj = 0;
  obj[1] = 0;
  obj[3] = 0;
  obj[4] = 0;
  obj[0x5f] = 0;
  obj[0x5d] = 0;
  *(undefined1 *)(obj + 0x5e) = 0;
  *(undefined1 *)((int)obj + 0x179) = 0;
  iVar2 = FUN_004443e0();
  *(undefined4 *)(iVar2 + 0xd4) = 0;
  *(undefined4 *)(iVar2 + 0xd8) = 0;
  *(undefined4 *)(iVar2 + 0xdc) = 0;
  *(undefined4 *)(iVar2 + 0xe0) = 0;
  *(undefined1 *)(iVar2 + 0xe4) = 0;
  *(undefined4 *)(iVar2 + 0x118) = 0;
  *(undefined4 *)(iVar2 + 0x11c) = 0;
  *(undefined4 *)(iVar2 + 0x120) = 0;
  *(undefined4 *)(iVar2 + 0x124) = 0;
  *(undefined1 *)(iVar2 + 0x128) = 0;
  *(undefined4 *)(iVar2 + 0x580) = 0;
  *(undefined4 *)(iVar2 + 0x584) = 0;
  *(undefined4 *)(iVar2 + 0x588) = 0;
  *(undefined4 *)(iVar2 + 0x58c) = 0;
  *(undefined4 *)(iVar2 + 0x598) = 0;
  return;
}
