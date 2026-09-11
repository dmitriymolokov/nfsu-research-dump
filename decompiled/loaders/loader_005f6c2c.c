/* spd-match: far pct=5.61 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_005f57dd();
extern void LAB_005f6c72(void);
extern void LAB_005f6c89(void);

int FUN_005f6c2c(uint param_1,int *param_2)

{
  int *piVar1;
  short sVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined2 *puVar7;
  int local_8;
  
  iVar6 = param_1;
  if (param_2 == (int *)0x0) {
    return -0x7789f794;
  }
  iVar4 = FUN_005f57dd(&local_8);
  if (iVar4 < 0) {
    return iVar4;
  }
  uVar5 = *(uint *)(local_8 + 8) & 0xffff0000;
  if (uVar5 == 0xfffe0000) {
    bVar3 = true;
LAB_005f6c89:
    iVar4 = *(int *)(local_8 + 0xc);
    if (iVar4 != 0) {
      if (*(uint *)(param_1 + 8) < (uint)(*(int *)(local_8 + 0x10) + iVar4 * 0x14))
      goto LAB_005f6c72;
      piVar1 = (int *)(param_1 + 0xc);
      param_1 = 0;
      if (iVar4 != 0) {
        puVar7 = (undefined2 *)(*piVar1 + *(int *)(local_8 + 0x10) + 8);
        do {
          iVar4 = *(int *)(puVar7 + 4);
          if (iVar4 != 0) {
            sVar2 = puVar7[-2];
            if (sVar2 == 2) {
              if (bVar3) {
                iVar4 = (**(code **)(*param_2 + 0x178))();
              }
              else {
                iVar4 = (**(code **)(*param_2 + 0x1b4))
                                  (param_2,puVar7[-1],*(int *)(iVar6 + 0xc) + iVar4,*puVar7);
              }
            }
            else if ((sVar2 == 1) && (bVar3)) {
              iVar4 = (**(code **)(*param_2 + 0x180))
                                (param_2,puVar7[-1],*(int *)(iVar6 + 0xc) + iVar4,*puVar7);
            }
            else {
              if ((sVar2 != 0) || (!bVar3)) goto LAB_005f6c72;
              iVar4 = (**(code **)(*param_2 + 0x188))
                                (param_2,puVar7[-1],*(int *)(iVar6 + 0xc) + iVar4,*puVar7);
            }
            if (iVar4 < 0) {
              return iVar4;
            }
          }
          param_1 = param_1 + 1;
          puVar7 = puVar7 + 10;
        } while (param_1 < *(uint *)(local_8 + 0xc));
      }
    }
    iVar6 = 0;
  }
  else {
    if (uVar5 == 0xffff0000) {
      bVar3 = false;
      goto LAB_005f6c89;
    }
LAB_005f6c72:
    iVar6 = -0x7789f4a7;
  }
  return iVar6;
}
