/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0045cff0();
int __cdecl FUN_0045d540();
uint __fastcall FUN_0045d130(int obj, undefined4 param_1, undefined4 param_2, char param_3)

{
  char cVar1;

  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *unaff_EDI;
  uint local_4;
  
  if (((*unaff_EDI != 1) || (iVar2 = *(int *)(obj + 0x394), iVar2 < 0xb)) || (0x10 < iVar2)) {
    uVar3 = FUN_0045cff0(param_1,obj,param_2);
    return uVar3 & 0xffffff00;
  }
  local_4 = 1;
  iVar4 = iVar2;
  do {
    iVar4 = iVar4 + -1;
    iVar2 = iVar2 + 1;
    iVar5 = iVar4;
    iVar6 = iVar2;
    if (param_3 != '\0') {
      iVar5 = iVar2;
      iVar6 = iVar4;
    }
    cVar1 = FUN_0045d540(unaff_EDI,param_1,param_2);
    if (cVar1 != '\0') {
      *(int *)(obj + 0x394) = iVar6;
      unaff_EDI[1] = 0;
      *(undefined1 *)(unaff_EDI + 3) = 0;
      unaff_EDI[2] = 0;
      *unaff_EDI = 1;
      return 1;
    }
    cVar1 = FUN_0045d540(unaff_EDI,param_1,param_2);
    if (cVar1 != '\0') {
      *(int *)(obj + 0x394) = iVar5;
      unaff_EDI[1] = 0;
      *(undefined1 *)(unaff_EDI + 3) = 0;
      unaff_EDI[2] = 0;
      *unaff_EDI = 1;
      return 1;
    }
    local_4 = local_4 + 1;
  } while ((int)local_4 < 6);
  return local_4 & 0xffffff00;
}
