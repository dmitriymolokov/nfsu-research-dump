/* spd-match: far pct=10.05 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005869C0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00571c20();
int __cdecl FUN_00571ea0();
void __fastcall FUN_005869c0(int obj)

{

  int iVar1;
  char cVar2;
  int unaff_EBX;
  undefined4 *puVar3;
  
  FUN_00571ea0(0,"Wheel");
  FUN_00571c20(unaff_EBX,obj + 0x24,4,0xffffffff,0);
  FUN_00571c20(unaff_EBX,obj + 0x28,4,0xffffffff,0);
  FUN_00571c20(unaff_EBX,obj + 0x110,4,4,1);
  FUN_00571c20(unaff_EBX,obj + 0x180,4,0xffffffff,0);
  if (*(char *)(unaff_EBX + 0x3d) != '\0' || *(char *)(unaff_EBX + 0x3c) != '\0') {
    puVar3 = (undefined4 *)(obj + 0x30);
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    puVar3 = (undefined4 *)(obj + 0x70);
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    puVar3 = (undefined4 *)(obj + 0xb0);
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)(obj + 0xf0) = 0;
    *(undefined4 *)(obj + 0xf4) = 0;
    *(undefined4 *)(obj + 0xf8) = 0;
    *(undefined4 *)(obj + 0xfc) = 0;
    *(undefined4 *)(obj + 0x100) = 0;
    *(undefined4 *)(obj + 0x104) = 0;
    *(undefined4 *)(obj + 0x108) = 0;
    *(undefined4 *)(obj + 0x10c) = 0;
    *(undefined4 *)(obj + 0x118) = 0;
    *(undefined4 *)(obj + 0x11c) = 0;
    *(undefined4 *)(obj + 0x120) = 0;
    *(undefined4 *)(obj + 0x124) = 0;
    *(undefined4 *)(obj + 0x128) = 0;
    *(undefined4 *)(obj + 300) = 0;
    *(undefined4 *)(obj + 0x130) = 0;
    *(undefined4 *)(obj + 0x134) = 0;
    *(undefined4 *)(obj + 0x138) = 0;
    *(undefined4 *)(obj + 0x13c) = 0;
    *(undefined4 *)(obj + 0x140) = 0;
    *(undefined4 *)(obj + 0x144) = 0;
    *(undefined4 *)(obj + 0x148) = 0;
    *(undefined4 *)(obj + 0x14c) = 0;
    *(undefined4 *)(obj + 0x150) = 0;
    *(undefined1 *)(obj + 0x154) = 0;
    *(undefined1 *)(obj + 0x155) = 0;
    *(undefined2 *)(obj + 0x156) = 0;
    *(undefined4 *)(obj + 0x158) = 0;
    *(undefined4 *)(obj + 0x160) = 0;
    *(undefined4 *)(obj + 0x164) = 0;
    *(undefined4 *)(obj + 0x168) = 0;
    *(undefined4 *)(obj + 0x170) = 0;
    *(undefined4 *)(obj + 0x174) = 0;
    *(undefined4 *)(obj + 0x178) = 0;
    *(undefined4 *)(obj + 0x17c) = 0;
    *(undefined4 *)(obj + 0x16c) = 0;
  }
  iVar1 = *(char *)(unaff_EBX + 0x40) * 0x10;
  *(int *)(iVar1 + unaff_EBX + 0x58) =
       *(int *)(unaff_EBX + 0x150) - *(int *)(iVar1 + 0x58 + unaff_EBX);
  cVar2 = *(char *)(unaff_EBX + 0x40) + -1;
  *(char *)(unaff_EBX + 0x40) = cVar2;
  if ((int)cVar2 < *(int *)(unaff_EBX + 0x44)) {
    *(undefined4 *)(unaff_EBX + 0x44) = 0xffffffff;
  }
  return;
}
