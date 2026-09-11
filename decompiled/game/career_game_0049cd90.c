/* spd-match: far pct=7.29 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0049CD90 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00497a00();
int __cdecl FUN_0049d1d0();
int __cdecl FUN_0049d3e0();
int __cdecl FUN_0049d940();
int __cdecl FUN_0049df30();
int __cdecl FUN_004f68a0();
int __cdecl FUN_004f6970();
extern int DAT_006ca778;
extern int DAT_00735710;
extern unsigned char *DAT_00777cbc;
extern unsigned char *PTR_LAB_006c7804;
void __fastcall FUN_0049cd90(int obj, int param_1)

{
  undefined4 *puVar1;

  int extraout_EDX;
  undefined4 uVar2;
  int extraout_EDX_00;
  int iVar3;
  int *piVar4;
  bool bVar5;
  int local_4;
  
  FUN_0049d3e0(obj);
  FUN_004f68a0(&PTR_LAB_006c7804,*(undefined4 *)(obj + 0x13c));
  piVar4 = (int *)(obj + 0xf8);
  local_4 = 2;
  do {
    iVar3 = piVar4[-10];
    if ((iVar3 != 0) &&
       (*(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) & 0xfffffffe | 0x400000,
       *(int *)(iVar3 + 0x18) == 5)) {
      uVar2 = *(undefined4 *)(iVar3 + 0x60);
      iVar3 = *(int *)(iVar3 + 0x5c);
      if (0 < iVar3) {
        do {
          FUN_004f6970(uVar2);
          uVar2 = *(undefined4 *)(extraout_EDX + 4);
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    iVar3 = *piVar4;
    if ((iVar3 != 0) &&
       (*(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) & 0xfffffffe | 0x400000,
       *(int *)(iVar3 + 0x18) == 5)) {
      uVar2 = *(undefined4 *)(iVar3 + 0x60);
      iVar3 = *(int *)(iVar3 + 0x5c);
      if (0 < iVar3) {
        do {
          FUN_004f6970(uVar2);
          uVar2 = *(undefined4 *)(extraout_EDX_00 + 4);
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    piVar4 = piVar4 + 1;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  FUN_0049d1d0(obj);
  FUN_0049d940(obj);
  iVar3 = *(int *)(obj + 0xd0);
  if (iVar3 != 0) {
    *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) | 0x400000;
    puVar1 = DAT_00735710;
    bVar5 = DAT_00735710 != (undefined4 *)0x0;
    *(undefined4 *)(iVar3 + 0x5c) = 0xd7d8ca79;
    if (bVar5) {
      (**(code **)*puVar1)(iVar3);
    }
    *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) & 0xfffffffd | 0x400000;
  }
  FUN_004f68a0(&DAT_006ca778,*(undefined4 *)(&DAT_00777cbc + *(char *)(param_1 + 10) * 0x15c));
  FUN_0049df30(param_1);
  FUN_00497a00();
  return;
}
