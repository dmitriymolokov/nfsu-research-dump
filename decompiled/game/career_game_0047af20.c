/* spd-match: far pct=8.05 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0047AF20 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0061e790();
int __cdecl FUN_0061eee0();
extern unsigned char *PTR_FUN_006c82f8;
extern unsigned char *PTR_FUN_006dfa9c;
int unaff_ESI;
undefined4 __fastcall FUN_0047af20(undefined4 val, undefined4 param_1)

{
  char cVar1;

  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int unaff_ESI;
  uint uStack_4;
  
  iVar2 = (*(code *)PTR_FUN_006dfa9c)(0x2c,"EAGL::DynamicLoader CAnimBank");
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0061eee0(param_1,val,0);
  }
  *(undefined4 *)(unaff_ESI + 0x1c) = uVar3;
  *(undefined4 *)(unaff_ESI + 0x20) = val;
  *(undefined4 *)(unaff_ESI + 8) = 1;
  puVar4 = _malloc(8);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = &PTR_FUN_006c82f8;
    puVar4[1] = 0;
  }
  *(undefined4 **)(unaff_ESI + 0x10) = puVar4;
  param_1 = 0;
  cVar1 = FUN_0061e790("AnimationBank",&param_1,&uStack_4);
  uStack_4 = -(uint)(cVar1 != '\0') & uStack_4;
  *(uint *)(unaff_ESI + 0x14) = uStack_4;
  (**(code **)**(undefined4 **)(unaff_ESI + 0x10))(uStack_4);
  return 0;
}
