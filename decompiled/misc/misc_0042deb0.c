/* spd-match: far pct=13.76 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0042DEB0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00422c40();
int __cdecl FUN_0042c670();
int __cdecl FUN_0042c6d0();
int __cdecl FUN_0047ffe0();
int __cdecl FUN_00480000();
extern int DAT_0073495c;
extern unsigned char *DAT_007361f0;
extern int DAT_007796a8;
uint __fastcall FUN_0042deb0(int obj)

{
  int *piVar1;

  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int local_c [3];
  
  uVar2 = *(uint *)(DAT_007361f0 + 0x3c);
  if ((((uVar2 == 0) || (*(int *)(uVar2 + 0x20) == 0)) || (*(int *)(uVar2 + 0x1c) == 0)) &&
     (((uVar2 = *(uint *)(DAT_007361f0 + 0x40), uVar2 == 0 || (*(int *)(uVar2 + 0x1c) == 0)) &&
      (uVar2 = 0, DAT_0073495c != 0)))) {
    iVar3 = 0;
    if (*(int *)(obj + 0x27c) != 0) {
      iVar3 = *(int *)(*(int *)(obj + 0x27c) + 0xc);
    }
    if (*(int *)(obj + 0x278) == 6) {
      local_c[0] = 0;
      local_c[1] = 4;
      local_c[2] = 2;
      uVar2 = 0;
      while (piVar1 = local_c + uVar2, uVar2 = uVar2 + 1, iVar3 != *piVar1) {
        if (2 < (int)uVar2) {
          return uVar2;
        }
      }
      iVar3 = local_c[uVar2 % 3];
      if (iVar3 != 0) {
        puVar4 = (undefined4 *)(DAT_007361f0 + 0x30);
        if (*(undefined4 **)(DAT_007361f0 + 0x30) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)(DAT_007361f0 + 0x30))(1);
          *puVar4 = 0;
        }
      }
      uVar2 = FUN_0042c6d0(obj,iVar3,0);
      if (iVar3 == 0) {
        uVar2 = FUN_00422c40();
        return uVar2;
      }
    }
    else {
      if (0 < DAT_007796a8) {
        FUN_00480000();
        uVar2 = FUN_0042c670(0);
        return uVar2;
      }
      if (iVar3 != 2) {
        if (iVar3 == 3) {
          FUN_0047ffe0();
          uVar2 = FUN_0042c670(0);
          return uVar2;
        }
        if (iVar3 == 4) {
          uVar2 = FUN_0042c6d0(obj,2,0);
          return uVar2;
        }
        uVar2 = FUN_0042c6d0(obj,4,0);
        return uVar2;
      }
      uVar2 = FUN_0042c6d0(obj,3,0);
    }
  }
  return uVar2;
}
