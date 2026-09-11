/* spd-match: far pct=9.58 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004211F0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00421170();
int __cdecl FUN_00421c00();
int __cdecl FUN_0057c3b0();
int __cdecl FUN_0057c5a0();
int __cdecl FUN_00594120();
int __cdecl FUN_00594220();
extern int DAT_0073459c;
extern int DAT_007345a0;
extern unsigned char *DAT_007345d0;
extern int DAT_007361f0;
void __fastcall FUN_004211f0(int obj)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  char cVar4;

  uint uVar5;
  char local_4;
  
  uVar5 = FUN_00421170(obj);
  if (DAT_0073459c == 0) {
    if (DAT_007345a0 != 0) {
      FUN_0057c3b0(uVar5 & 0xffff,0x10,4);
    }
  }
  else {
    FUN_0057c5a0(4);
  }
  piVar2 = DAT_007345d0;
  local_4 = (char)uVar5;
  local_4 = (char)(uVar5 >> 8) + *(char *)(obj + 0x2d0) + local_4;
  if (DAT_007345d0[1] == 0) {
    if (*DAT_007345d0 != 0) {
      if ((*DAT_007345d0 == 0) || (DAT_007345d0[2] != 0)) {
        cVar4 = '\0';
      }
      else {
        cVar4 = FUN_00594220(8,2);
        if (*(int *)(piVar2[0x19] + 0x28) != 0) {
          piVar2[2] = 1;
        }
      }
      uVar3 = DAT_007361f0;
      if (cVar4 != local_4) {
        piVar2[3] = 1;
        FUN_00421c00(uVar3,0xb,0);
      }
    }
  }
  else if (DAT_007345d0[1] != 0) {
    piVar1 = DAT_007345d0 + 0x19;
    FUN_00594120(local_4,8);
    if (*(int *)(*piVar1 + 0x14) * 8 + -0x44 <= *(int *)(*piVar1 + 8)) {
      piVar2[1] = 0;
      return;
    }
  }
  return;
}
