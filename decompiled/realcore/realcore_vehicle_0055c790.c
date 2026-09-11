/* spd-match: far pct=8.04 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0055C790 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004dc6e0();
extern unsigned char *DAT_00734f90;
void __fastcall FUN_0055c790(int obj, undefined4 param_1, int param_2)

{

  int iVar1;
  char *pcVar2;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  *(undefined4 *)(obj + 0x50) = 0;
  do {
    if (*(int *)(obj + 0x40 + *(int *)(obj + 0x50) * 4) == param_2) break;
    iVar1 = *(int *)(obj + 0x50) + 1;
    *(int *)(obj + 0x50) = iVar1;
  } while (iVar1 < 4);
  pcVar2 = &DAT_00734f90 + *(int *)(obj + 0x50) * 0xd;
  iVar1 = 0;
  if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
    do {
      iVar1 = iVar1 + 1;
    } while (pcVar2[iVar1] != '\0');
    if (0 < iVar1) {
      local_14 = 0x9c7511d8;
      local_10 = 0x9c7511d8;
      local_8 = 0;
      local_4 = 0;
      local_24 = 0x81900702;
      local_20 = 0x639;
      local_1c = 3;
      local_18 = 0x541389e5;
      local_c = 0xb8a7c6cd;
      FUN_004dc6e0(&local_24,"GenericDialog.fng",*(undefined4 *)(obj + 0xc));
    }
  }
  return;
}
