/* spd-match: far pct=12.50 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004BB1C0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004b93a0();
int __cdecl FUN_004b93d0();
int __cdecl FUN_004b9500();
int __cdecl FUN_004b9750();
int __cdecl FUN_004b99c0();
int __cdecl FUN_004f6360();
extern int DAT_00758a14;
extern int DAT_00777b4c;
extern int DAT_00777cc8;
extern void LAB_004bb244(void);
void __fastcall FUN_004bb1c0(uint val, int param_1)

{
  char cVar1;

  if (val < 0x78451235) {
    if (val == 0x78451234) {
      FUN_004b9750(param_1 + 0x88);
      *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x48);
      FUN_004b99c0(param_1 + 0x88);
      return;
    }
    if ((val != 0xc407210) && (val != 0x406415e3)) {
      return;
    }
    cVar1 = FUN_004b93a0();
    if (cVar1 != '\0') goto LAB_004bb244;
  }
  else {
    if (val == 0x911ab364) {
      if (DAT_00777cc8 != 4) {
        return;
      }
      cVar1 = FUN_004b93d0();
      if (cVar1 != '\0') {
        if (DAT_00777b4c != 4) {
          FUN_004f6360(*(undefined4 *)(param_1 + 0xc));
          return;
        }
        FUN_004f6360(*(undefined4 *)(param_1 + 0xc));
        return;
      }
      FUN_004b9750(param_1 + 0x88);
      return;
    }
    if (val != 0xaa3f4777) {
      return;
    }
  }
  FUN_004b9500(param_1 + 0x88,DAT_00758a14);
  cVar1 = FUN_004b93a0();
  if (cVar1 == '\0') {
    return;
  }
LAB_004bb244:
  *(undefined1 *)(param_1 + 0xa5) = 1;
  return;
}
