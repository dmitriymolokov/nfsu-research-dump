/* spd-match: far pct=5.47 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0040C910 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0040db20();
int __cdecl FUN_0040f1e0();
int __cdecl FUN_0053f500();
int __cdecl FUN_0053f540();
extern int DAT_00700e80;
extern int DAT_00700e90;
extern int DAT_00706898;
extern int DAT_0071abb8;
extern int DAT_0078a4e0;
extern unsigned char *PTR_DAT_00706798;
extern unsigned char *PTR_DAT_00706818;
void __fastcall FUN_0040c910(uint val, undefined4 param_1, int param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)

{
  int *piVar1;
  int iVar2;

  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int *local_10;
  int local_c;
  int local_8;
  
  piVar1 = *(int **)(param_2 + 0xc);
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    if (((val & 0x200) == 0) || (DAT_00700e80 == 0)) {
      if (DAT_00700e90 == 0) {
        *(undefined **)(iVar2 + 0x38) = &DAT_00706898;
      }
    }
    else if (DAT_00700e90 == 0) {
      *(undefined ***)(iVar2 + 0x38) = &PTR_DAT_00706818;
    }
    else {
      *(undefined ***)(iVar2 + 0x38) = &PTR_DAT_00706798;
    }
    local_10 = *(int **)(iVar2 + 0x3c);
    if (*(int *)(iVar2 + 0x38) != 0) {
      piVar4 = *(int **)(*(int *)(iVar2 + 0x38) + *local_10 * 4);
      if (piVar4 != (int *)0x0) {
        local_10 = piVar4;
      }
      *(undefined4 *)(iVar2 + 0x38) = 0;
    }
    if (*(int *)(param_2 + 0x10) != 0) {
      FUN_0053f540();
    }
    if ((local_10[4] != 0) && (local_8 = 0, 0 < *(int *)(iVar2 + 0x10))) {
      local_c = 0;
      do {
        iVar6 = *(int *)(iVar2 + 0x14) + local_c;
        if (((((val & 4) != 0) || ((*(byte *)(iVar6 + 0x38) & 1) != 0)) ||
            (iVar3 = FUN_0040db20(param_1), iVar3 != 0)) &&
           (iVar3 = *(int *)(piVar1[0xb] + 4 + (uint)*(byte *)(iVar6 + 0x1c) * 8),
           *(int *)(iVar3 + 0x24) != DAT_0078a4e0)) {
          uVar5 = 0;
          if (*(byte *)(iVar6 + 0x20) != 0xff) {
            uVar5 = *(undefined4 *)(piVar1[0xf] + 4 + (uint)*(byte *)(iVar6 + 0x20) * 8);
          }
          piVar4 = local_10;
          if (((*local_10 == 1) && (1 < (uint)local_10[3])) && (*(char *)(iVar3 + 0x56) != '\0')) {
            piVar4 = &DAT_0071abb8;
          }
          FUN_0040f1e0(iVar6,piVar1,*(undefined4 *)(iVar6 + 0x38),piVar4,param_3,param_4,uVar5,
                       param_5);
        }
        local_8 = local_8 + 1;
        local_c = local_c + 0x3c;
      } while (local_8 < *(int *)(iVar2 + 0x10));
    }
    FUN_0053f500();
  }
  return;
}
