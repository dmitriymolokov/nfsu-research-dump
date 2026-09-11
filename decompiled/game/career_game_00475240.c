/* spd-match: far pct=14.07 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00475240 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00571c20();
int __cdecl FUN_00571ea0();
void __fastcall FUN_00475240(int obj)

{

  char cVar1;
  int iVar2;
  int unaff_ESI;
  int iVar3;
  int local_8;
  int local_4;
  
  FUN_00571ea0(0,"Mellovator");
  FUN_00571c20(unaff_ESI,obj + 0x24,0x10,0xffffffff,0);
  local_4 = obj + 0xe0;
  local_8 = obj + 0x94;
  iVar2 = 0;
  iVar3 = obj + 0x44;
  do {
    FUN_00571c20(unaff_ESI,iVar3 + -0x10,4,0xffffffff,0);
    FUN_00571c20(unaff_ESI,iVar3,4,0xffffffff,0);
    FUN_00571c20(unaff_ESI,iVar3 + 0x10,4,0xffffffff,0);
    FUN_00571c20(unaff_ESI,iVar3 + 0x20,1,4,0);
    FUN_00571c20(unaff_ESI,local_8 + -0x20,8,0xffffffff,0);
    FUN_00571c20(unaff_ESI,local_8,8,0xffffffff,0);
    FUN_00571c20(unaff_ESI,obj + 0xb4 + iVar2,1,1,0);
    FUN_00571c20(unaff_ESI,iVar3 + 0x74,1,4,0);
    FUN_00571c20(unaff_ESI,iVar3 + 0x84,4,0xffffffff,0);
    FUN_00571c20(unaff_ESI,local_4,0xc,0xffffffff,0);
    iVar2 = iVar2 + 1;
    local_4 = local_4 + 0x10;
    local_8 = local_8 + 8;
    iVar3 = iVar3 + 4;
  } while (iVar2 < 4);
  FUN_00571c20(unaff_ESI,obj + 0x120,4,0xffffffff,0);
  FUN_00571c20(unaff_ESI,obj + 0x124,1,4,1);
  FUN_00571c20(unaff_ESI,obj + 0x128,4,0xffffffff,0);
  FUN_00571c20(unaff_ESI,obj + 300,4,0xffffffff,0);
  FUN_00571c20(unaff_ESI,obj + 0x130,2,2,0);
  FUN_00571c20(unaff_ESI,obj + 0x134,1,4,1);
  FUN_00571c20(unaff_ESI,obj + 0x138,4,0xffffffff,0);
  FUN_00571c20(unaff_ESI,obj + 0x13c,4,0xffffffff,0);
  FUN_00571c20(unaff_ESI,obj + 0x140,4,0xffffffff,0);
  FUN_00571c20(unaff_ESI,obj + 400,4,0xffffffff,0);
  FUN_00571c20(unaff_ESI,obj + 0x194,4,4,0);
  iVar3 = *(char *)(unaff_ESI + 0x40) * 0x10 + 0x4c + unaff_ESI;
  *(int *)(iVar3 + 0xc) = *(int *)(unaff_ESI + 0x150) - *(int *)(iVar3 + 0xc);
  cVar1 = *(char *)(unaff_ESI + 0x40) + -1;
  *(char *)(unaff_ESI + 0x40) = cVar1;
  if ((int)cVar1 < *(int *)(unaff_ESI + 0x44)) {
    *(undefined4 *)(unaff_ESI + 0x44) = 0xffffffff;
  }
  return;
}
