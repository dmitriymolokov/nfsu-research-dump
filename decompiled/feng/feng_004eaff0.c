/* spd-match: far pct=6.53 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004EAFF0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004c96c0();
int __cdecl FUN_004f0800();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f6360();
int __cdecl FUN_00504990();
extern int DAT_007341bc;
extern int DAT_0073578c;
extern int DAT_00735dc4;
extern int DAT_00746104;
extern int DAT_0075f2b5;
extern int DAT_0076027f;
extern unsigned char *DAT_007677a8;
extern int DAT_00777b50;
undefined4 __fastcall FUN_004eaff0(int obj, uint param_1)

{
  int iVar1;

  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  
  iVar1 = DAT_0073578c;
  if ((DAT_007341bc == 0) &&
     (((DAT_007677a8 == 0 || ((int *)(DAT_007677a8 + 0x58a0) == (int *)0x0)) ||
      (*(int *)(DAT_007677a8 + 0x58a0) != 0x71)))) {
    pcVar2 = (char *)0x0;
  }
  else {
    pcVar2 = &DAT_0075f2b5;
  }
  bVar5 = *pcVar2 == '\x02';
  uVar3 = CONCAT31((int3)((uint)pcVar2 >> 8),bVar5);
  if (param_1 < 0xd6d4315e) {
    if (param_1 == 0xd6d4315d) {
      if (!bVar5) {
        uVar3 = FUN_004f6360(*(undefined4 *)(obj + 0xc));
        return uVar3;
      }
    }
    else if (param_1 == 0x1c8ace) {
      if (!bVar5) {
        DAT_00777b50 = 1;
        uVar3 = FUN_004f6360(*(undefined4 *)(obj + 0xc));
        return uVar3;
      }
    }
    else {
      if (param_1 == 0x74fd9de5) {
        uVar3 = FUN_004f6360(*(undefined4 *)(obj + 0xc));
        return uVar3;
      }
      if ((param_1 == 0xa936c3a2) && (!bVar5)) {
        if (DAT_0076027f == '\0') {
          DAT_0076027f = 1;
          DAT_00735dc4 = 1;
          uVar3 = FUN_004f6360(*(undefined4 *)(obj + 0xc));
          return uVar3;
        }
        FUN_004c96c0(0x6c6603df);
        uVar3 = FUN_00504990(1,"MU_Garage.fng",0);
        return uVar3;
      }
    }
  }
  else if (param_1 == 0xf20e404a) {
    uVar3 = *(undefined4 *)(obj + 0xc);
    if (DAT_0073578c != 0) {
      iVar4 = FUN_004f3f90(&DAT_00746104);
      uVar3 = 0;
      if ((iVar4 != 0) && (uVar3 = 0, *(int *)(iVar4 + 0x18) != 0)) {
        uVar3 = FUN_004f0800(*(undefined4 *)(iVar1 + 8),*(int *)(iVar4 + 0x18));
      }
    }
  }
  else if (param_1 == 0xf9a69dbe) {
    uVar3 = FUN_004f6360(*(undefined4 *)(obj + 0xc));
    return uVar3;
  }
  return uVar3;
}
