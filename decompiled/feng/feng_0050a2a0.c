/* spd-match: far pct=20.32 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0050A2A0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004f0800();
int __cdecl FUN_004f3f90();
int __cdecl FUN_00504320();
extern int DAT_006f1dd8;
extern int DAT_006f8864;
extern int DAT_006f889c;
extern unsigned char *DAT_007356a8;
extern int DAT_00735730;
extern int DAT_0073578c;
extern int DAT_00746104;
extern void LAB_0050a33f(void);
undefined4 __fastcall FUN_0050a2a0(int obj)

{
  int iVar1;

  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  
  iVar1 = *(int *)(obj + 0x40);
  if (*(int *)(iVar1 + 0x10) == 0) {
    return 0;
  }
  uVar2 = 0;
  switch(*(undefined4 *)(iVar1 + 8)) {
  case 0:
    uVar2 = 0x41;
    break;
  case 1:
    uVar2 = 0x49;
    break;
  case 2:
    uVar2 = 0x42;
    break;
  case 3:
    uVar2 = 0x43;
    break;
  case 4:
    uVar2 = 0x44;
    break;
  case 5:
    uVar2 = 0x48;
    break;
  case 6:
    uVar2 = 0x45;
    break;
  case 7:
    uVar2 = 0x46;
    break;
  case 8:
    uVar2 = 0x47;
  }
  if (DAT_006f1dd8 != 0) {
    if (uVar2 < 0x12) {
      piVar5 = *(int **)(DAT_007356a8 + 0xc0);
      if (piVar5 == (int *)0x0) goto LAB_0050a33f;
    }
    else {
      if ((0x52 < uVar2) || (piVar5 = *(int **)(DAT_007356a8 + 0xbc), piVar5 == (int *)0x0))
      goto LAB_0050a33f;
      uVar2 = uVar2 - 0x12;
    }
    (**(code **)(*piVar5 + 0x14))(uVar2);
  }
LAB_0050a33f:
  DAT_006f8864 = *(undefined4 *)(iVar1 + 8);
  DAT_00735730 = *(undefined4 *)(iVar1 + 0xc);
  DAT_006f889c = DAT_006f8864;
  FUN_00504320(*(undefined4 *)(obj + 0xc));
  iVar1 = DAT_0073578c;
  uVar4 = *(undefined4 *)(obj + 0xc);
  if (DAT_0073578c != 0) {
    iVar3 = FUN_004f3f90(&DAT_00746104);
    uVar4 = 0;
    if (iVar3 != 0) {
      uVar4 = 0;
      if (*(int *)(iVar3 + 0x18) != 0) {
        uVar4 = FUN_004f0800(*(undefined4 *)(iVar1 + 8),*(int *)(iVar3 + 0x18));
      }
    }
  }
  return uVar4;
}
