/* spd-match: far pct=12.26 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0057BB10 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00567c70();
int __cdecl FUN_00578060();
extern int DAT_006f227c;
extern unsigned char *PTR_FUN_006ba388;
undefined4 * __fastcall FUN_0057bb10(undefined4 val, undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;

  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  
  FUN_00578060(param_1,val,0);
  *param_1 = &PTR_FUN_006ba388;
  puVar1 = param_1 + 0x24;
  *puVar1 = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  iVar2 = *(int *)(param_1[0xc] + 8);
  iVar3 = *(int *)(param_1[0xc] + 0xc);
  if (iVar2 != 0) {
    iVar8 = *(int *)(iVar2 + 0xc);
    if ((iVar8 != 0) && (iVar4 = FUN_00567c70(), **(int **)(iVar8 + 0x2c) == iVar4)) {
      uVar5 = DAT_006f227c ^ 0x1d872b41;
      uVar6 = uVar5 >> 5 ^ uVar5;
      uVar9 = DAT_006f227c & 1;
      DAT_006f227c = uVar6 << 0x1b ^ uVar6 ^ uVar5;
      if (uVar9 != 0) {
        uVar7 = FUN_00567c70();
        *puVar1 = uVar7;
        iVar8 = FUN_00567c70();
        if (iVar8 != param_1[0x25]) {
          param_1[0x25] = iVar8;
          param_1[0x26] = 0xffffffff;
        }
        *(undefined4 **)(iVar2 + 0x10) = puVar1;
        *(undefined4 *)(iVar2 + 0x14) = 1;
        if (((iVar3 != 0) && (iVar8 = *(int *)(iVar3 + 0xc), iVar8 != 0)) &&
           (iVar4 = FUN_00567c70(), **(int **)(iVar8 + 0x2c) == iVar4)) {
          *(undefined4 **)(iVar3 + 0x10) = puVar1;
          *(undefined4 *)(iVar3 + 0x14) = 1;
        }
      }
    }
    uVar5 = DAT_006f227c;
    iVar8 = *(int *)(iVar2 + 0xc);
    if ((iVar8 != 0) && (iVar4 = FUN_00567c70(), **(int **)(iVar8 + 0x2c) == iVar4)) {
      uVar9 = uVar5 ^ 0x1d872b41;
      uVar6 = uVar9 >> 5 ^ uVar9;
      DAT_006f227c = uVar6 << 0x1b ^ uVar6 ^ uVar9;
      if ((uVar5 & 1) != 0) {
        uVar7 = FUN_00567c70();
        *puVar1 = uVar7;
        iVar8 = FUN_00567c70();
        if (iVar8 != param_1[0x25]) {
          param_1[0x25] = iVar8;
          param_1[0x26] = 0xffffffff;
        }
        *(undefined4 **)(iVar2 + 0x10) = puVar1;
        *(undefined4 *)(iVar2 + 0x14) = 1;
        if (((iVar3 != 0) && (iVar2 = *(int *)(iVar3 + 0xc), iVar2 != 0)) &&
           (iVar8 = FUN_00567c70(), **(int **)(iVar2 + 0x2c) == iVar8)) {
          *(undefined4 **)(iVar3 + 0x10) = puVar1;
          *(undefined4 *)(iVar3 + 0x14) = 1;
        }
      }
    }
  }
  *(undefined4 *)(param_1[0xc] + 0x14) = 0;
  return param_1;
}
