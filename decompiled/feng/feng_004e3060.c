/* spd-match: far pct=7.35 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004E3060 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004ef050();
int __cdecl FUN_004f65d0();
int __cdecl FUN_004f6670();
int __cdecl FUN_004fea10();
int __cdecl FUN_004ff1f0();
int __cdecl FUN_004ffb70();
extern int DAT_0073578c;
extern int DAT_00735dec;
void __fastcall FUN_004e3060(int obj)

{
  char cVar1;

  int iVar2;
  int iVar3;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (((*(int *)(obj + 0xc) == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
     (iVar2 = FUN_004ffb70(), iVar2 == 0)) {
    if (DAT_0073578c == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_004ef050(0x9154922e);
    }
  }
  switch(DAT_00735dec) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  default:
    goto switchD_004e30ba_default;
  }
  iVar3 = FUN_004f6670();
  if (iVar3 != 0) {
    local_c = *(undefined4 *)(*(int *)(iVar3 + 0x2c) + 0x1c);
    local_8 = *(undefined4 *)(*(int *)(iVar2 + 0x2c) + 0x20);
    local_4 = *(undefined4 *)(*(int *)(iVar2 + 0x2c) + 0x24);
    if (*(int *)(iVar2 + 0x18) < 0x100) {
      cVar1 = FUN_004fea10();
      if (cVar1 == '\0') {
        *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) | 0x400000;
      }
      FUN_004ff1f0(iVar2,2,&local_c,0);
    }
  }
switchD_004e30ba_default:
  return;
}
