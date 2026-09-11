/* spd-match: far pct=12.82 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004DCEA0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004f78e0();
extern int DAT_0073ad3c;
extern unsigned char *PTR_FUN_006c3ba8;
void __fastcall FUN_004dcea0(undefined4 val)

{

  int iVar1;
  undefined4 *unaff_ESI;
  undefined4 *puVar2;
  
  FUN_004f78e0(unaff_ESI,val);
  *unaff_ESI = &PTR_FUN_006c3ba8;
  unaff_ESI[0x10] = 0;
  unaff_ESI[0x14] = 0;
  puVar2 = unaff_ESI + 0x15;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  unaff_ESI[0x1d] = 1;
  unaff_ESI[0x1e] = 0;
  unaff_ESI[0x1f] = 0;
  unaff_ESI[0x20] = 0;
  *(undefined1 *)(unaff_ESI + 0x21) = 0;
  unaff_ESI[0x10] = DAT_0073ad3c;
  *(undefined1 *)(unaff_ESI + 0x12) = 0;
  unaff_ESI[0x11] = 0;
  return;
}
