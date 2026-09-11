/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00448070();
int __cdecl FUN_00594c60();
int __cdecl FUN_00594d40();
int unaff_EDI;
void __fastcall FUN_00447f90(undefined4 val, undefined4 param_1, undefined4 param_2, char *param_3, undefined4 param_4)

{
  char *pcVar1;
  char cVar2;

  char *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_EDI + 8) = val;
  *(undefined4 *)(unaff_EDI + 0xc) = param_1;
  *(undefined4 *)(unaff_EDI + 0x10) = param_2;
  *(undefined4 *)(unaff_EDI + 0x14) = param_4;
  cVar2 = *param_3;
  pcVar1 = (char *)(unaff_EDI + 0x18);
  *pcVar1 = cVar2;
  if (cVar2 != '\0') {
    pcVar3 = pcVar1;
    do {
      cVar2 = pcVar3[(int)(param_3 + (1 - (int)pcVar1))];
      pcVar3 = pcVar3 + 1;
      *pcVar3 = cVar2;
    } while (cVar2 != '\0');
  }
  *(undefined1 *)(unaff_EDI + 0x40) = 0;
  *(undefined4 *)(unaff_EDI + 0x8c) = 0;
  *(undefined4 *)(unaff_EDI + 0x90) = 0;
  *(undefined4 *)(unaff_EDI + 0xac) = 0;
  *(undefined4 *)(unaff_EDI + 0xa4) = 0;
  *(undefined4 *)(unaff_EDI + 0xa8) = 0;
  *(undefined4 *)(unaff_EDI + 0xb0) = 0;
  *(undefined4 *)(unaff_EDI + 0x94) = 0;
  *(undefined4 *)(unaff_EDI + 0x98) = 0;
  FUN_00448070(param_3);
  *(undefined1 *)(unaff_EDI + 0x40) = 0;
  iVar4 = FUN_00594c60(pcVar1,1,1);
  if (iVar4 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = ((int)*(uint *)(iVar4 + 4) < 0) - 1 & *(uint *)(iVar4 + 4);
    FUN_00594d40();
  }
  *(uint *)(unaff_EDI + 0xa0) = uVar5;
  if ((int)uVar5 < 0) {
    *(undefined4 *)(unaff_EDI + 0xa0) = 0;
  }
  *(undefined4 *)(unaff_EDI + 0x9c) = 0;
  if ((*(int *)(unaff_EDI + 0xa0) != 0) && (*(int *)(unaff_EDI + 0x14) != 0)) {
    *(int *)(unaff_EDI + 0xa0) = *(int *)(unaff_EDI + 0x14);
  }
  return;
}
