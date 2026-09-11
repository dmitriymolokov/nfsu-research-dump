/* spd-match: far pct=11.88 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00588470 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00571c20();
int __cdecl FUN_00571ea0();
void __fastcall FUN_00588470(int obj)

{

  int iVar1;
  char cVar2;
  int unaff_ESI;
  undefined4 *puVar3;
  
  FUN_00571ea0(0,"Suspension");
  FUN_00571c20(unaff_ESI,obj + 0x1c,4,0xffffffff,0);
  FUN_00571c20(unaff_ESI,obj + 0x20,4,0xffffffff,0);
  if (*(char *)(unaff_ESI + 0x3d) != '\0' || *(char *)(unaff_ESI + 0x3c) != '\0') {
    *(undefined4 *)(obj + 0x24) = 0;
    *(undefined4 *)(obj + 0x30) = 0;
    *(undefined4 *)(obj + 0x34) = 0;
    *(undefined4 *)(obj + 0x38) = 0;
    *(undefined4 *)(obj + 0x3c) = 0;
    puVar3 = (undefined4 *)(obj + 0x40);
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)(obj + 0x80) = 0;
    *(undefined4 *)(obj + 0xb0) = 0;
  }
  iVar1 = *(char *)(unaff_ESI + 0x40) * 0x10;
  *(int *)(iVar1 + unaff_ESI + 0x58) =
       *(int *)(unaff_ESI + 0x150) - *(int *)(iVar1 + 0x58 + unaff_ESI);
  cVar2 = *(char *)(unaff_ESI + 0x40) + -1;
  *(char *)(unaff_ESI + 0x40) = cVar2;
  if ((int)cVar2 < *(int *)(unaff_ESI + 0x44)) {
    *(undefined4 *)(unaff_ESI + 0x44) = 0xffffffff;
  }
  return;
}
