/* spd-match: far pct=23.53 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004DC580 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004f78e0();
extern int DAT_0073578c;
extern int DAT_0073ad3c;
extern unsigned char *PTR_FUN_006c3be0;
void __fastcall FUN_004dc580(undefined4 val)

{
  int iVar1;

  undefined4 *unaff_ESI;
  bool bVar2;
  
  FUN_004f78e0(unaff_ESI,val);
  *unaff_ESI = &PTR_FUN_006c3be0;
  unaff_ESI[0x10] = 0;
  unaff_ESI[0x14] = 0;
  unaff_ESI[0x15] = 0;
  unaff_ESI[0x16] = 0;
  unaff_ESI[0x17] = 0;
  unaff_ESI[0x18] = 0;
  unaff_ESI[0x19] = 0;
  unaff_ESI[0x1a] = 0;
  unaff_ESI[0x1b] = 0;
  unaff_ESI[0x1c] = 0;
  unaff_ESI[0x10] = DAT_0073ad3c;
  iVar1 = DAT_0073578c;
  bVar2 = DAT_0073578c != 0;
  unaff_ESI[0x11] = 0;
  *(undefined1 *)(unaff_ESI + 0x12) = 0;
  if (bVar2) {
    *(undefined4 *)(*(int *)(iVar1 + 8) + 0xd0) = 0;
  }
  unaff_ESI[0x1b] = 0;
  return;
}
