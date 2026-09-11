/* spd-match: far pct=2.41 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004444F0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 *puRam00000000;
undefined4 *puRam00000004;
int iRam00000000;

int unaff_EDI;
void __fastcall FUN_004444f0(int obj)

{
  undefined4 *puVar1;

  undefined4 *puVar2;
  undefined4 *puVar3;
  int unaff_EDI;
  
  puVar3 = (undefined4 *)(obj + 0x590);
  for (puVar2 = *(undefined4 **)(obj + 0x590); puVar2 != puVar3; puVar2 = (undefined4 *)*puVar2)
  {
    if (unaff_EDI == *(short *)(puVar2 + 2)) {
      return;
    }
  }
  puVar2 = _malloc(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puRam00000004 = *(undefined4 **)(obj + 0x594);
    *puRam00000004 = 0;
    *(undefined4 *)(obj + 0x594) = 0;
    puRam00000000 = puVar3;
    return;
  }
  *(short *)(puVar2 + 2) = (short)unaff_EDI;
  puVar1 = *(undefined4 **)(obj + 0x594);
  *puVar1 = puVar2;
  *(undefined4 **)(obj + 0x594) = puVar2;
  *puVar2 = puVar3;
  puVar2[1] = puVar1;
  return;
}
