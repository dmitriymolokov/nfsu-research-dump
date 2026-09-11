/* spd-match: far pct=12.26 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004648C0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00465150();
int __cdecl FUN_00571c20();
int __cdecl FUN_00571d90();
int __cdecl FUN_00571ea0();
void __fastcall FUN_004648c0(int obj)

{

  char cVar1;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  int local_4;
  
  FUN_00571ea0(0,"CarState");
  FUN_00571c20(obj,unaff_ESI + 0x10,0xc,0xffffffff,0);
  if (*(char *)(obj + 0x3d) != '\0' || *(char *)(obj + 0x3c) != '\0') {
    *(uint *)(unaff_ESI + 0x20) = *(uint *)(unaff_ESI + 0x20) & 0xfffffff0;
  }
  FUN_00571c20(obj,unaff_ESI + 0x20,0xc,0xffffffff,0);
  FUN_00571c20(obj,unaff_ESI + 0x30,0xc,0xffffffff,0);
  FUN_00571c20(obj,unaff_ESI + 0x40,0xc,0xffffffff,0);
  FUN_00571d90();
  FUN_00571c20(obj,unaff_ESI + 0x90,0xc,0xffffffff,0);
  FUN_00571c20(obj,unaff_ESI + 0xa0,0xc,0xffffffff,0);
  local_4 = unaff_ESI + 0x334;
  iVar2 = 0;
  iVar3 = unaff_ESI + 0x2c0;
  do {
    FUN_00571c20(obj,iVar3 + -0x10,4,0xffffffff,0);
    FUN_00571c20(obj,iVar3,4,0xffffffff,0);
    FUN_00571c20(obj,iVar3 + 0x10,4,0xffffffff,0);
    FUN_00571c20(obj,iVar3 + 0x30,4,0xffffffff,0);
    FUN_00571c20(obj,unaff_ESI + 0x310 + iVar2,1,1,1);
    FUN_00571c20(obj,iVar3 + 0x54,1,4,1);
    FUN_00571c20(obj,local_4,8,0xffffffff,0);
    FUN_00571c20(obj,iVar3 + 0x94,4,0xffffffff,0);
    FUN_00571c20(obj,iVar3 + 0x40,4,0xffffffff,0);
    FUN_00571c20(obj,iVar3 + 0xa4,4,0xffffffff,0);
    if (*(char *)(obj + 0x3d) != '\0' || *(char *)(obj + 0x3c) != '\0') {
      *(undefined4 *)(iVar3 + 100) = 1;
    }
    iVar2 = iVar2 + 1;
    local_4 = local_4 + 8;
    iVar3 = iVar3 + 4;
  } while (iVar2 < 4);
  iVar3 = 0;
  FUN_00571c20(obj,unaff_ESI + 0x374,2,2,0);
  FUN_00571c20(obj,unaff_ESI + 0x376,2,2,0);
  FUN_00571c20(obj,unaff_ESI + 0x378,4,0xffffffff,0);
  if (*(char *)(obj + 0x3d) != '\0' || *(char *)(obj + 0x3c) != '\0') {
    *(undefined4 *)(unaff_ESI + 0x380) = 0;
    *(undefined4 *)(unaff_ESI + 900) = 0;
    *(undefined4 *)(unaff_ESI + 0x388) = 0;
  }
  FUN_00571c20(obj,unaff_ESI + 0x390,4,0xffffffff,0);
  FUN_00571c20(obj,unaff_ESI + 0x394,4,0xffffffff,0);
  FUN_00571c20(obj,unaff_ESI + 0x398,1,4,1);
  FUN_00571c20(obj,unaff_ESI + 0x39c,4,0xffffffff,0);
  FUN_00571c20(obj,unaff_ESI + 0x3a0,4,0xffffffff,0);
  FUN_00571c20(obj,unaff_ESI + 0x3a8,1,4,0);
  FUN_00571c20(obj,unaff_ESI + 0x3ac,4,0xffffffff,0);
  FUN_00571c20(obj,unaff_ESI + 0x3b8,4,0xffffffff,0);
  FUN_00571c20(obj,unaff_ESI + 0x3bc,4,0xffffffff,0);
  FUN_00571c20(obj,unaff_ESI + 0x3c0,1,4,0);
  FUN_00571c20(obj,unaff_ESI + 0x3c4,4,0xffffffff,0);
  FUN_00571c20(obj,unaff_ESI + 0x3c8,4,4,1);
  FUN_00571c20(obj,unaff_ESI + 0x3cc,4,0xffffffff,0);
  FUN_00571c20(obj,unaff_ESI + 0x3d0,4,0xffffffff,0);
  if (*(char *)(obj + 0x3d) != '\0' || *(char *)(obj + 0x3c) != '\0') {
    *(undefined4 *)(unaff_ESI + 0x3e4) = 0;
    *(undefined4 *)(unaff_ESI + 1000) = 0;
    *(undefined4 *)(unaff_ESI + 0x3ec) = 0;
    *(undefined4 *)(unaff_ESI + 0x3f0) = 0;
    *(undefined4 *)(unaff_ESI + 0x3f8) = 0;
    *(undefined4 *)(unaff_ESI + 0x3fc) = 0;
    *(undefined4 *)(unaff_ESI + 0x400) = 0;
    *(undefined4 *)(unaff_ESI + 0x404) = 0;
    *(undefined4 *)(unaff_ESI + 0x40c) = 0;
    *(undefined4 *)(unaff_ESI + 0x410) = 0;
    *(undefined4 *)(unaff_ESI + 0x414) = 0;
    *(undefined4 *)(unaff_ESI + 0x418) = 0;
    *(undefined4 *)(unaff_ESI + 0x3e0) = 0x3f800000;
    *(undefined4 *)(unaff_ESI + 0x3f4) = 0x3f800000;
    *(undefined4 *)(unaff_ESI + 0x408) = 0x3f800000;
    *(undefined4 *)(unaff_ESI + 0x41c) = 0x3f800000;
    *(undefined4 *)(unaff_ESI + 0x38c) = 0;
    *(undefined1 *)(unaff_ESI + 0x420) = 0;
    *(int *)(unaff_ESI + 0x38c) = (int)*(char *)(unaff_ESI + 0x310);
    iVar2 = (int)*(char *)(unaff_ESI + 0x310) + (int)*(char *)(unaff_ESI + 0x311);
    *(int *)(unaff_ESI + 0x38c) = iVar2;
    iVar2 = iVar2 + *(char *)(unaff_ESI + 0x312);
    *(int *)(unaff_ESI + 0x38c) = iVar2;
    *(int *)(unaff_ESI + 0x38c) = *(char *)(unaff_ESI + 0x313) + iVar2;
    do {
      FUN_00465150(unaff_ESI);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 4);
  }
  iVar3 = *(char *)(obj + 0x40) * 0x10 + 0x4c + obj;
  *(int *)(iVar3 + 0xc) = *(int *)(obj + 0x150) - *(int *)(iVar3 + 0xc);
  cVar1 = *(char *)(obj + 0x40) + -1;
  *(char *)(obj + 0x40) = cVar1;
  if ((int)cVar1 < *(int *)(obj + 0x44)) {
    *(undefined4 *)(obj + 0x44) = 0xffffffff;
  }
  return;
}
