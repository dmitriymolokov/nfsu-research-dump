/* spd-match: far pct=11.01 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0048EB70 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern unsigned char *PTR_FUN_006c7d70;
int unaff_ESI;
void __fastcall FUN_0048eb70(uint val)

{
  undefined4 uVar1;
  undefined4 uVar2;

  undefined4 *puVar3;
  int iVar4;
  undefined4 *unaff_ESI;
  
  *(char *)((int)unaff_ESI + 5) = (char)val;
  *(undefined1 *)(unaff_ESI + 1) = 0x10;
  *(undefined1 *)((int)unaff_ESI + 6) = 0;
  *(undefined1 *)((int)unaff_ESI + 7) = 0;
  *unaff_ESI = &PTR_FUN_006c7d70;
  puVar3 = _malloc(val << 4);
  unaff_ESI[2] = puVar3;
  for (iVar4 = (val & 0xfffffff) << 2; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  puVar3 = (undefined4 *)unaff_ESI[2];
  uVar1 = puVar3[1];
  uVar2 = puVar3[2];
  unaff_ESI[8] = *puVar3;
  unaff_ESI[9] = uVar1;
  unaff_ESI[10] = uVar2;
  puVar3 = (undefined4 *)unaff_ESI[2];
  uVar1 = puVar3[1];
  uVar2 = puVar3[2];
  unaff_ESI[4] = *puVar3;
  unaff_ESI[5] = uVar1;
  unaff_ESI[6] = uVar2;
  return;
}
