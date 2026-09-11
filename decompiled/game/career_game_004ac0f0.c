/* spd-match: far pct=9.60 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004AC0F0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004ac0b0();
int __cdecl FUN_004ac1f0();
int __cdecl FUN_004ac5a0();
int __cdecl FUN_004b26f0();
int __cdecl FUN_004f42f0();
int __cdecl FUN_0057f2b0();
extern unsigned char *DAT_0075eef8;
extern int DAT_0075f23c;
extern int DAT_0076027c;
void __fastcall FUN_004ac0f0(int val, int param_1, int param_2, int param_3)

{

  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  iVar1 = 0;
  piVar3 = (int *)(param_1 + 0x237c);
  do {
    if (val == *piVar3) {
      uVar2 = FUN_004ac0b0(param_2,param_3);
      FUN_004ac5a0(uVar2,param_2,param_3);
      return;
    }
    iVar1 = iVar1 + 1;
    piVar3 = piVar3 + 0xd2;
  } while (iVar1 < 0x14);
  iVar1 = 0;
  piVar3 = (int *)(param_1 + 0x61dc);
  do {
    if (val == *piVar3) {
      uVar2 = FUN_004f42f0("DUMMY_SKIN%d",param_2 + 1);
      *(undefined4 *)(param_3 + 0x444) = uVar2;
      uVar2 = FUN_004f42f0("DUMMY_WHEEL%d",param_2 + 1);
      *(undefined4 *)(param_3 + 0x448) = uVar2;
      FUN_004ac1f0(param_3);
      FUN_004b26f0();
      iVar1 = 0;
      piVar3 = (int *)(param_1 + 0x61e4);
      while ((val != piVar3[-2] || (*piVar3 != 8))) {
        iVar1 = iVar1 + 1;
        piVar3 = piVar3 + 4;
        if (0xe < iVar1) {
          return;
        }
      }
      puVar4 = (undefined4 *)(param_3 + 8);
      for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = 2;
        puVar4 = puVar4 + 1;
      }
      FUN_0057f2b0(1);
      return;
    }
    iVar1 = iVar1 + 1;
    piVar3 = piVar3 + 4;
  } while (iVar1 < 0xf);
  if (((&DAT_0076027c)[param_2 * 0x7ca2] != 0) && (val == (&DAT_0075f23c)[param_2 * 0x3e51])) {
    FUN_004ac5a0(&DAT_0075eef8 + param_2 * 0x3e51,param_2,param_3);
  }
  return;
}
