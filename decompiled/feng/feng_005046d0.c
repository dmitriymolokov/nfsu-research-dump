/* spd-match: far pct=18.23 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005046D0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004323f0();
int __cdecl FUN_004acce0();
int __cdecl FUN_004b0150();
int __cdecl FUN_004b0e50();
int __cdecl FUN_004b2330();
int __cdecl FUN_00504450();
int __cdecl FUN_00504550();
int __cdecl FUN_00504630();
int __cdecl FUN_0057ea80();
int __cdecl FUN_0057f2b0();
extern int DAT_00748850;
extern int _DAT_0072cc80;
extern void LAB_00504753(void);
void __fastcall FUN_005046d0(uint val, int param_1, int param_2)

{

  int iVar1;
  
  *(uint *)(param_2 + 0x18 + param_1 * 4) = val;
  if (param_1 == 8) {
    FUN_00504550();
    FUN_00504450();
    iVar1 = FUN_004b2330();
  }
  else {
    if (param_1 != 2) goto LAB_00504753;
    if (0 < (int)val) {
      FUN_004acce0(0xc,val & 0xff);
      FUN_00504630();
    }
    FUN_00504450();
    iVar1 = FUN_004b2330();
  }
  if (iVar1 != 0) {
    FUN_004b0150();
  }
LAB_00504753:
  iVar1 = FUN_00504630(0xc,*(undefined4 *)(param_2 + 0x20));
  if (iVar1 != 0) {
    *(int *)(param_2 + 0x48c) = iVar1;
    *(char *)(param_2 + 0x648) = *(char *)(param_2 + 0x648) + '\x01';
    FUN_0057ea80(param_2 + 0x10);
  }
  FUN_0057f2b0(1);
  iVar1 = FUN_004b2330();
  FUN_004323f0(&DAT_00748850,param_2 + 0x10);
  _DAT_0072cc80 = 2;
  if (iVar1 != 0) {
    FUN_004b0e50(iVar1,&DAT_00748850,2);
  }
  return;
}
