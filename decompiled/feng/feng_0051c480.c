/* spd-match: far pct=3.35 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0051C480 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_006f227c;
undefined4 * __fastcall FUN_0051c480(int * obj, int param_1, int param_2, int *param_3, uint *param_4, int param_5, uint *param_6, uint param_7)

{

  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  undefined4 *puVar9;
  
  puVar9 = (undefined4 *)0x0;
  iVar6 = 0;
  puVar1 = *(undefined4 **)(param_1 + 0x3c);
  do {
    if (puVar1 == (undefined4 *)(param_1 + 0x3c)) {
      if (puVar9 == (undefined4 *)0x0) {
        return (undefined4 *)0x0;
      }
      break;
    }
    if ((puVar1[2] == param_2) && (puVar9 = puVar1, obj != (int *)0x0)) {
      *obj = iVar6;
    }
    puVar1 = (undefined4 *)*puVar1;
    iVar6 = iVar6 + 1;
  } while (puVar9 == (undefined4 *)0x0);
  iVar6 = 0;
  if (0 < (int)puVar9[3]) {
    piVar8 = puVar9 + 4;
    do {
      puVar1 = *(undefined4 **)(param_1 + 0x34);
      for (iVar2 = 0; (puVar1 != (undefined4 *)0x0 && (iVar2 < *piVar8)); iVar2 = iVar2 + 1) {
        puVar1 = (undefined4 *)*puVar1;
      }
      piVar3 = _malloc(0xc);
      piVar3[2] = puVar1[8] * puVar1[7] * puVar1[6] * puVar1[5] * puVar1[4];
      puVar1 = *(undefined4 **)(param_5 + 4);
      *puVar1 = piVar3;
      *(int **)(param_5 + 4) = piVar3;
      piVar3[1] = (int)puVar1;
      *piVar3 = param_5;
      iVar6 = iVar6 + 1;
      piVar8 = piVar8 + 1;
    } while (iVar6 < (int)puVar9[3]);
  }
  uVar7 = puVar9[3];
  if (param_6 != (uint *)0x0) {
    *param_6 = uVar7;
  }
  if (uVar7 == 1) {
    iVar6 = puVar9[4];
    if (param_4 != (uint *)0x0) {
      *param_4 = 0;
    }
  }
  else if (((int)param_7 < 1) || ((int)uVar7 <= (int)param_7)) {
    uVar5 = DAT_006f227c ^ 0x1d872b41;
    uVar7 = DAT_006f227c % uVar7;
    uVar4 = uVar5 >> 5 ^ uVar5;
    DAT_006f227c = uVar4 << 0x1b ^ uVar4 ^ uVar5;
    if (param_4 != (uint *)0x0) {
      *param_4 = uVar7;
    }
    iVar6 = puVar9[uVar7 + 4];
  }
  else {
    iVar6 = puVar9[param_7 + 4];
    if (param_4 != (uint *)0x0) {
      *param_4 = param_7;
    }
  }
  if (param_3 != (int *)0x0) {
    *param_3 = iVar6;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x34);
  for (iVar2 = 0; (puVar1 != (undefined4 *)0x0 && (iVar2 < iVar6)); iVar2 = iVar2 + 1) {
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1;
}
