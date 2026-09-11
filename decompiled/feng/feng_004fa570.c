/* spd-match: far pct=37.85 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004FA570 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004fa650();
int __cdecl FUN_004fec30();
extern unsigned char *PTR_FUN_006c183c;
void __fastcall FUN_004fa570(undefined4 val, int param_1)

{
  undefined4 uVar1;

  undefined4 *unaff_ESI;
  
  FUN_004fec30(unaff_ESI,param_1,val);
  *unaff_ESI = &PTR_FUN_006c183c;
  uVar1 = *(undefined4 *)(param_1 + 0x58);
  unaff_ESI[0x17] = 0;
  unaff_ESI[0x18] = 0;
  unaff_ESI[0x19] = 0;
  unaff_ESI[0x16] = uVar1;
  unaff_ESI[0x1a] = *(undefined4 *)(param_1 + 0x68);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  unaff_ESI[0x1c] = 0;
  unaff_ESI[0x1d] = 0;
  unaff_ESI[0x1e] = 0;
  unaff_ESI[0x1f] = 0;
  unaff_ESI[0x1b] = uVar1;
  unaff_ESI[0x20] = *(undefined4 *)(param_1 + 0x80);
  uVar1 = *(undefined4 *)(param_1 + 0x84);
  unaff_ESI[0x22] = 0;
  unaff_ESI[0x23] = 0;
  unaff_ESI[0x24] = 0;
  unaff_ESI[0x25] = 0;
  unaff_ESI[0x26] = 0;
  unaff_ESI[0x27] = 0;
  unaff_ESI[0x21] = uVar1;
  unaff_ESI[0x28] = 0x3f800000;
  unaff_ESI[0x29] = 0xbab60b61;
  unaff_ESI[0x2d] = 0xff;
  unaff_ESI[0x2c] = 0xff;
  unaff_ESI[0x2b] = 0xff;
  unaff_ESI[0x2a] = 0xff;
  unaff_ESI[0x2e] = *(undefined4 *)(param_1 + 0xb8);
  unaff_ESI[0x2f] = *(undefined4 *)(param_1 + 0xbc);
  unaff_ESI[0x30] = *(undefined4 *)(param_1 + 0xc0);
  FUN_004fa650();
  return;
}
