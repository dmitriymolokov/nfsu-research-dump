/* spd-match: far pct=12.31 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00432360 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004323f0();
void __fastcall FUN_00432360(undefined1 * obj)

{

  undefined1 *puVar1;
  int iVar2;
  undefined1 *unaff_ESI;
  
  *unaff_ESI = *obj;
  unaff_ESI[1] = obj[1];
  unaff_ESI[2] = obj[2];
  unaff_ESI[3] = obj[3];
  *(undefined4 *)(unaff_ESI + 4) = *(undefined4 *)(obj + 4);
  FUN_004323f0(unaff_ESI + 0x10,obj + 0x10);
  *(undefined4 *)(unaff_ESI + 0x730) = *(undefined4 *)(obj + 0x730);
  unaff_ESI[0x734] = obj[0x734];
  unaff_ESI[0x735] = obj[0x735];
  unaff_ESI[0x736] = obj[0x736];
  *(undefined4 *)(unaff_ESI + 0x738) = *(undefined4 *)(obj + 0x738);
  puVar1 = unaff_ESI + 0x73c;
  iVar2 = 0x10;
  do {
    *puVar1 = puVar1[(int)obj - (int)unaff_ESI];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}
