/* spd-match: far pct=10.71 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0051C830 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00536870();
extern unsigned char *DAT_007356a8;
extern int DAT_007356ac;
extern int _DAT_006cc960;
extern unsigned char *PTR_s_Fabolous_006f8728;
void __fastcall FUN_0051c830(int obj, int param_1, int param_2, int param_3)

{
  int iVar1;
  int *piVar2;

  undefined *puVar3;
  
  iVar1 = *(int *)(obj + 0x104);
  if (iVar1 != 0) {
    if (param_1 == 0x59) {
      puVar3 = (undefined *)0x0;
      if (((0 < param_3) && (-1 < param_2)) && (param_2 < 2)) {
        puVar3 = (&PTR_s_Fabolous_006f8728)[param_2 + param_3 * 2];
      }
      piVar2 = *(int **)(iVar1 + 0x24);
      if (puVar3 == (undefined *)0xffffffff) {
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0x90))(0x59);
        }
      }
      else if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x98))(0x59,puVar3);
      }
    }
    else if (*(int **)(iVar1 + 0x24) != (int *)0x0) {
      (**(code **)(**(int **)(iVar1 + 0x24) + 0x90))(param_1);
    }
    if ((_DAT_006cc960 < *(float *)(*(int *)(DAT_007356a8 + 8) + 4)) && (DAT_007356ac != 0)) {
      FUN_00536870(0xbf800000);
    }
  }
  return;
}
