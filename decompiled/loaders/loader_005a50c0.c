/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00571c20();
int __cdecl FUN_00571ea0();
int __cdecl FUN_005a70f0();
void __fastcall FUN_005a50c0(int obj)

{
  int *piVar1;
  int iVar2;

  char cVar3;
  int iVar4;
  int unaff_EDI;
  
  iVar4 = 0;
  FUN_00571ea0(0,"FuturePoints");
  if ((*(char *)(obj + 0x3d) != '\0' || *(char *)(obj + 0x3c) != '\0') &&
     (iVar2 = *(int *)(unaff_EDI + 0xa8), iVar2 != 0)) {
    *(undefined1 *)(iVar2 + 0x18) = 1;
    *(undefined2 *)(iVar2 + 0x1e) = 0;
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x10) = 0;
  }
  FUN_00571c20(obj,unaff_EDI + 0xb8,4,4,0);
  FUN_00571c20(obj,unaff_EDI + 0xbc,1,1,0);
  FUN_00571c20(obj,unaff_EDI + 0xc0,4,4,0);
  piVar1 = (int *)(unaff_EDI + 4);
  FUN_00571c20(obj,piVar1,4,4,0);
  FUN_00571c20(obj,unaff_EDI + 0xac,4,4,0);
  if (0 < *piVar1) {
    do {
      FUN_005a70f0();
      iVar4 = iVar4 + 1;
    } while (iVar4 < *piVar1);
  }
  FUN_00571c20(obj,unaff_EDI + 0xb0,1,1,0);
  iVar4 = 0;
  do {
    FUN_00571c20(obj,unaff_EDI + 0xb1 + iVar4,1,1,0);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 6);
  iVar4 = *(char *)(obj + 0x40) * 0x10;
  *(int *)(iVar4 + obj + 0x58) = *(int *)(obj + 0x150) - *(int *)(iVar4 + 0x58 + obj);
  cVar3 = *(char *)(obj + 0x40) + -1;
  *(char *)(obj + 0x40) = cVar3;
  if ((int)cVar3 < *(int *)(obj + 0x44)) {
    *(undefined4 *)(obj + 0x44) = 0xffffffff;
  }
  return;
}
