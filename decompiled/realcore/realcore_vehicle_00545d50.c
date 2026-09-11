/* spd-match: far pct=9.38 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00545D50 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0053e400();
int __cdecl FUN_00566e60();
extern int DAT_007364f0;
extern int DAT_00740418;
extern unsigned char *DAT_0074041c;
void __fastcall FUN_00545d50(int obj)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;

  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  int local_14;
  int local_10;
  int local_8;
  
  local_8 = *(int *)(obj + 0x10);
  if (0 < local_8) {
    piVar8 = (int *)(*(int *)(obj + 8) + 0x1c);
    do {
      local_14 = *piVar8;
      local_10 = 1;
      if (0 < local_14) {
        puVar7 = (undefined4 *)(piVar8[3] + 8);
        do {
          if (((((undefined4 **)DAT_00740418 == &DAT_00740418) ||
               (*(int *)(DAT_0074041c + 0x70) == 0)) ||
              (iVar6 = *(int *)(*(int *)(DAT_0074041c + 0x70) + 0x74), iVar6 == 0)) ||
             ((iVar4 = FUN_0053e400(puVar7[-2],iVar6,0), iVar6 = DAT_007364f0, iVar4 == 0 ||
              (piVar1 = *(int **)(iVar4 + 4), piVar1 == (int *)0x0)))) {
            puVar7[-1] = 0;
            *puVar7 = 0;
            local_10 = 0;
          }
          else {
            puVar7[-1] = piVar1;
            iVar4 = *piVar1;
            if ((*(int *)(iVar6 + 0x10) == 0) && ((*(byte *)(iVar6 + 0x14) & 1) != 0)) {
              FUN_00566e60();
            }
            puVar2 = *(undefined4 **)(iVar6 + 0x10);
            iVar5 = *(int *)(iVar6 + 0x18) + 1;
            if (puVar2 != (undefined4 *)0x0) {
              uVar3 = *puVar2;
              if (*(int *)(iVar6 + 0x1c) < iVar5) {
                *(int *)(iVar6 + 0x1c) = iVar5;
              }
              *(int *)(iVar6 + 0x18) = iVar5;
              *(undefined4 *)(iVar6 + 0x10) = uVar3;
              if (((*(byte *)(iVar6 + 0x14) & 2) != 0) &&
                 (iVar6 = *(int *)(iVar6 + 0x28) >> 2, puVar9 = puVar2, 0 < iVar6)) {
                for (; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *puVar9 = 0;
                  puVar9 = puVar9 + 1;
                }
              }
            }
            *puVar2 = *(undefined4 *)(iVar4 + 0x18);
            *puVar7 = puVar2;
          }
          puVar7 = puVar7 + 4;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
      }
      piVar8[4] = local_10;
      piVar8[5] = 0;
      piVar8 = piVar8 + 0xd;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}
