/* spd-match: far pct=10.12 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005AA800 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_005461c0();
int __cdecl FUN_00567c70();
int __cdecl FUN_0057cc70();
int __cdecl FUN_005a9a90();
int __cdecl FUN_005a9af0();
int __cdecl FUN_005aa510();
int __cdecl FUN_005aa680();
undefined4 __fastcall FUN_005aa800(int obj)

{

  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  
  iVar1 = FUN_005461c0(*(undefined4 *)(obj + 0x448),0,0);
  if (iVar1 == 0) {
    return 1;
  }
  bVar9 = *(char *)(iVar1 + 0x4a) != ' ';
  uVar2 = FUN_005a9a90(0,0);
  iVar3 = FUN_005461c0(uVar2);
  uVar2 = FUN_005a9af0(0,0);
  iVar4 = FUN_005461c0(uVar2);
  if ((iVar3 != 0) && (iVar4 != 0)) {
    uVar8 = 0xffffffff;
    if (*(int *)(obj + 0x4f0) != 0) {
      uVar2 = 0;
      FUN_00567c70(0);
      iVar5 = FUN_0057cc70(uVar2);
      uVar2 = 0;
      FUN_00567c70(0);
      uVar6 = FUN_0057cc70(uVar2);
      uVar2 = 0;
      FUN_00567c70(0);
      uVar7 = FUN_0057cc70(uVar2);
      uVar2 = 0;
      FUN_00567c70(0);
      uVar8 = FUN_0057cc70(uVar2);
      uVar8 = ((iVar5 << 8 | uVar6) << 8 | uVar7) << 8 | uVar8;
    }
    if (bVar9) {
      if (*(char *)(iVar3 + 0x4a) == ' ') {
        return 0;
      }
      if (*(char *)(iVar4 + 0x4a) == ' ') {
        return 0;
      }
    }
    else {
      if (*(char *)(iVar3 + 0x4a) != ' ') {
        return 0;
      }
      if (*(char *)(iVar4 + 0x4a) != ' ') {
        return 0;
      }
    }
    if ((((*(short *)(iVar1 + 0x44) == *(short *)(iVar3 + 0x44)) &&
         (*(short *)(iVar1 + 0x44) == *(short *)(iVar4 + 0x44))) &&
        (*(short *)(iVar1 + 0x46) == *(short *)(iVar3 + 0x46))) &&
       (*(short *)(iVar1 + 0x46) == *(short *)(iVar4 + 0x46))) {
      if (bVar9) {
        uVar2 = FUN_005aa510(iVar1,iVar3,iVar4,uVar8);
        return uVar2;
      }
      uVar2 = FUN_005aa680();
      return uVar2;
    }
  }
  return 0;
}
