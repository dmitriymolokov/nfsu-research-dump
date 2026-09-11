/* spd-match: far pct=23.31 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0044E2B0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0044a080();
int __cdecl FUN_00458f10();
extern unsigned char *PTR_LAB_006c91bc;
void __fastcall FUN_0044e2b0(undefined4 * obj, undefined4 param_1, undefined4 param_2, undefined4 param_3)

{

  int iVar1;
  undefined4 *puVar2;
  
  FUN_0044a080(param_3);
  *obj = &PTR_LAB_006c91bc;
  obj[0x71] = 0;
  obj[0x72] = 0;
  puVar2 = obj + 8;
  for (iVar1 = 0x70; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_00458f10(0,0);
  *(undefined1 *)(obj + 0x7c) = 1;
  *(undefined1 *)((int)obj + 0x1f2) = 1;
  *(undefined1 *)((int)obj + 0x1f1) = 1;
  obj[4] = 0;
  obj[0x79] = 0;
  obj[0x7b] = 0;
  obj[0x7a] = 0;
  *(undefined1 *)((int)obj + 499) = 0;
  obj[0x7e] = param_1;
  obj[0x7d] = param_2;
  return;
}
