/* spd-match: far pct=20.39 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005A5510 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_0077af30;
void __fastcall FUN_005a5510(int val, int *param_1, undefined4 *param_2, undefined4 *param_3, undefined4 param_4, undefined1 param_5)

{

  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((int)param_2 < 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (&DAT_0077af30)[(int)param_2];
  }
  iVar1 = (**(code **)(*param_1 + 0x2c))(val * 0x88 + 0x27c + iVar1);
  param_1[param_1[1] + 2] = iVar1;
  iVar1 = param_1[param_1[1] + 2];
  *(undefined4 *)(iVar1 + 0x58) = param_4;
  *(short *)(iVar1 + 0x5e) = (short)val;
  *(char *)(iVar1 + 0x5c) = (char)param_2;
  *(undefined1 *)(iVar1 + 0x60) = param_5;
  *(undefined4 *)(iVar1 + 4) = *param_2;
  puVar3 = (undefined4 *)(iVar1 + 8);
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  iVar1 = param_1[1];
  if (0 < iVar1) {
    *(int *)(param_1[iVar1 + 2] + 0x68) = param_1[iVar1 + 1];
    *(int *)(param_1[param_1[1] + 1] + 0x6c) = param_1[param_1[1] + 2];
  }
  param_1[1] = param_1[1] + 1;
  return;
}
