/* spd-match: far pct=9.32 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00472600 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00571c20();
int __cdecl FUN_00571d90();
int __cdecl FUN_00571ea0();
void __fastcall FUN_00472600(int obj)

{

  char cVar1;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  int local_4;
  
  FUN_00571ea0(unaff_ESI,"GJKWitness");
  FUN_00571c20(obj,unaff_ESI + 0x10,4,0xffffffff,0);
  FUN_00571c20(obj,unaff_ESI + 0x14,1,1,0);
  FUN_00571c20(obj,unaff_ESI + 0x15,1,1,0);
  FUN_00571c20(obj,unaff_ESI + 0x20,0xc,0xffffffff,0);
  FUN_00571c20(obj,unaff_ESI + 0x30,0xc,0xffffffff,0);
  iVar3 = unaff_ESI + 0x124;
  iVar2 = unaff_ESI + 0xa0;
  local_4 = 4;
  do {
    FUN_00571c20(obj,iVar2 + -0x40,0xc,0xffffffff,0);
    FUN_00571c20(obj,iVar2,0xc,0xffffffff,0);
    FUN_00571c20(obj,iVar3 + -0x14,4,4,1);
    FUN_00571c20(obj,iVar3,4,4,1);
    iVar2 = iVar2 + 0x10;
    iVar3 = iVar3 + 4;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  FUN_00571c20(obj,unaff_ESI + 0x100,0xc,0xffffffff,0);
  FUN_00571c20(obj,unaff_ESI + 0xe0,0xc,0xffffffff,0);
  FUN_00571c20(obj,unaff_ESI + 0xf0,0xc,0xffffffff,0);
  FUN_00571c20(obj,unaff_ESI + 0x138,4,4,1);
  FUN_00571c20(obj,unaff_ESI + 0x120,4,4,1);
  FUN_00571c20(obj,unaff_ESI + 0x134,4,4,1);
  FUN_00571c20(obj,unaff_ESI + 0x40,0xc,0xffffffff,0);
  FUN_00571c20(obj,unaff_ESI + 0x50,0xc,0xffffffff,0);
  FUN_00571d90();
  FUN_00571d90();
  FUN_00571d90();
  FUN_00571d90();
  iVar3 = *(char *)(obj + 0x40) * 0x10;
  *(int *)(iVar3 + obj + 0x58) = *(int *)(obj + 0x150) - *(int *)(iVar3 + 0x58 + obj);
  cVar1 = *(char *)(obj + 0x40) + -1;
  *(char *)(obj + 0x40) = cVar1;
  if ((int)cVar1 < *(int *)(obj + 0x44)) {
    *(undefined4 *)(obj + 0x44) = 0xffffffff;
  }
  return;
}
