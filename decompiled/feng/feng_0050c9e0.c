/* spd-match: far pct=3.27 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_1 */
#include "ghidra_compat.h"

int __cdecl FUN_0040a880();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f78e0();
int __cdecl FUN_004f8370();
int __cdecl FUN_004f8960();
int __cdecl FUN_005043f0();
int __cdecl FUN_0050c870();
int __cdecl FUN_0050c930();
int __cdecl FUN_0050ce30();
int __cdecl FUN_0050cf90();
int __cdecl FUN_0053e400();
int __cdecl FUN_0057ce10();
extern int DAT_006b6b30;
extern int DAT_006c0c74;
extern int DAT_00735740;
extern int DAT_0073ad40;
extern int DAT_00744368;
extern int DAT_00746104;
extern int _DAT_00746de0;
extern unsigned char *PTR_FUN_006c01ec;
extern void LAB_0050cb36(void);
extern void LAB_0050cc61(void);
extern void LAB_0050cd1e(void);
extern void LAB_00688e96(void);
void *ExceptionList;

undefined4 * FUN_0050c9e0(undefined4 *param_1,int ******param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 *puVar3;
  int *****_Memory;
  char cVar4;
  int iVar5;
  int ******ppppppiVar6;
  int *****pppppiVar7;
  int ******ppppppiVar8;
  int *****pppppiVar9;
  int *piVar10;
  uint uVar11;
  char *pcVar12;
  undefined *puVar13;
  int ****ppppiVar14;
  int local_41c [255];
  undefined4 *local_20;
  int *****local_1c;
  int *****local_18;
  int *****local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  local_c = &LAB_00688e96;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004f78e0(param_1,param_2);
  puVar3 = param_1 + 0x11;
  *param_1 = &PTR_FUN_006c01ec;
  *puVar3 = puVar3;
  param_1[0x12] = puVar3;
  local_20 = param_1 + 0x13;
  (*(unsigned char *)&(local_8)) = 1;
  (local_8 = ((unsigned int)(local_8) & 0xff));
  FUN_004f8370(local_20,"master_thumb","thumb");
  local_8 = CONCAT31(((unsigned int)(local_8) >> 8),2);
  iVar5 = FUN_004f3f90(&DAT_00746104);
  if (((iVar5 != 0) && (*(int *)(iVar5 + 0x18) != 0)) && (*(int **)(iVar5 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar5 + 0x14) + 8))(0xe8e61aab,0,0,*(int *)(iVar5 + 0x18));
  }
  FUN_005043f0("MU_GarageRimsBrowser.fng");
  FUN_005043f0("MU_GarageRimsStyleBrowser.fng");
  FUN_005043f0("MU_GarageRimsBrandBrowser.fng");
  ppppppiVar8 = DAT_0073ad40;
  local_18 = (int *****)&local_18;
  local_14 = (int *****)&local_18;
  local_8 = CONCAT31(((unsigned int)(local_8) >> 8),3);
  ppppiVar14 = (int ****)0xffffffff;
  pcVar12 = "WHEEL_MANUFACTURERS";
  uVar11 = 0x57;
  do {
    pbVar1 = (byte *)(pcVar12 + 1);
    ppppiVar14 = (int ****)((int)ppppiVar14 * 0x21 + uVar11);
    pcVar12 = pcVar12 + 1;
    uVar11 = (uint)*pbVar1;
  } while (*pbVar1 != 0);
  param_2 = DAT_0073ad40;
  ppppppiVar6 = (int ******)FUN_0040a880();
  local_1c = (int *****)ppppppiVar6;
  if (ppppppiVar8 != ppppppiVar6) {
    do {
      pppppiVar7 = param_2[3];
      pppppiVar9 = pppppiVar7 + (int)param_2[4] * 0xc;
      if ((ppppiVar14 != (int ****)0x0) &&
         (pppppiVar7 = (int *****)FUN_0053e400(ppppiVar14,pppppiVar7,4),
         ppppppiVar6 = (int ******)local_1c, pppppiVar7 == (int *****)0x0)) break;
      if (pppppiVar7 < pppppiVar9) {
        if ((ppppiVar14 == (int ****)0x0) || (pppppiVar7[1] == ppppiVar14)) goto LAB_0050cb36;
        break;
      }
      param_2 = (int ******)*param_2;
    } while (param_2 != ppppppiVar6);
  }
  pppppiVar7 = (int *****)0x0;
LAB_0050cb36:
  if (pppppiVar7 != (int *****)0x0) {
    ppppppiVar8 = (int ******)FUN_0040a880();
    param_2 = (int ******)local_41c;
    local_1c = (int *****)ppppppiVar8;
    do {
      pppppiVar9 = (int *****)FUN_0050c870();
      for (ppppppiVar6 = (int ******)local_18; ppppppiVar6 != ppppppiVar8;
          ppppppiVar6 = (int ******)*ppppppiVar6) {
        if (ppppppiVar6[2] == pppppiVar9) goto LAB_0050cc61;
      }
      ppppppiVar8 = _malloc(0x10);
      pppppiVar9 = (int *****)FUN_0050c870();
      ppppppiVar8[2] = pppppiVar9;
      ppppppiVar8[3] = pppppiVar7;
      *local_14 = (int ****)ppppppiVar8;
      ppppppiVar8[1] = local_14;
      *ppppppiVar8 = (int *****)&local_18;
      ppppiVar14 = pppppiVar7[2];
      local_14 = (int *****)ppppppiVar8;
      cVar4 = FUN_0050c930();
      if (cVar4 == '\0') {
        pcVar12 = "VISUAL_RIMS_BRAND_";
        iVar5 = -1;
        uVar11 = 0x56;
        do {
          iVar5 = iVar5 * 0x21 + uVar11;
          pbVar1 = (byte *)(pcVar12 + 1);
          uVar11 = (uint)*pbVar1;
          pcVar12 = pcVar12 + 1;
        } while (*pbVar1 != 0);
        ppppiVar14 = *pppppiVar7;
        bVar2 = *(byte *)ppppiVar14;
        while (bVar2 != 0) {
          iVar5 = iVar5 * 0x21 + (uint)bVar2;
          pbVar1 = (byte *)((int)ppppiVar14 + 1);
          ppppiVar14 = (int ****)((int)ppppiVar14 + 1);
          bVar2 = *pbVar1;
        }
        *param_2 = (int *****)iVar5;
      }
      else {
        piVar10 = &DAT_00744368;
        do {
          if ((((int ****)piVar10[-1] == ppppiVar14) || ((int ****)*piVar10 == ppppiVar14)) ||
             ((int ****)piVar10[1] == ppppiVar14)) break;
          piVar10 = piVar10 + 6;
        } while ((int)piVar10 < 0x7449c8);
        pcVar12 = "VISUAL_RIMS_BRAND_";
        iVar5 = -1;
        uVar11 = 0x56;
        do {
          iVar5 = iVar5 * 0x21 + uVar11;
          pbVar1 = (byte *)(pcVar12 + 1);
          uVar11 = (uint)*pbVar1;
          pcVar12 = pcVar12 + 1;
        } while (*pbVar1 != 0);
        puVar13 = &DAT_006c0c74;
        uVar11 = 0x4e;
        do {
          iVar5 = iVar5 * 0x21 + uVar11;
          pbVar1 = puVar13 + 1;
          uVar11 = (uint)*pbVar1;
          puVar13 = puVar13 + 1;
        } while (*pbVar1 != 0);
        *param_2 = (int *****)iVar5;
      }
      param_2 = param_2 + 1;
      ppppppiVar8 = (int ******)local_1c;
LAB_0050cc61:
      pcVar12 = "WHEEL_MANUFACTURERS";
      iVar5 = -1;
      uVar11 = 0x57;
      do {
        iVar5 = iVar5 * 0x21 + uVar11;
        pbVar1 = (byte *)(pcVar12 + 1);
        uVar11 = (uint)*pbVar1;
        pcVar12 = pcVar12 + 1;
      } while (*pbVar1 != 0);
      pppppiVar7 = (int *****)FUN_0057ce10(iVar5,0xffffffff,0,pppppiVar7,0xffffffff);
    } while (pppppiVar7 != (int *****)0x0);
  }
  if ((int ******)local_18 != &local_18) {
    do {
      _Memory = local_18;
      pppppiVar7 = (int *****)*local_18;
      pppppiVar9 = (int *****)local_18[1];
      *pppppiVar9 = (int ****)pppppiVar7;
      pppppiVar7[1] = (int ****)pppppiVar9;
      FUN_0050ce30("MU_GarageRimsStyleBrowser.fng",local_18[2]);
      _free(_Memory);
    } while ((int ******)local_18 != &local_18);
  }
  if (DAT_00735740 == 0) {
    param_1[0x10] = param_1[0x11];
  }
  else {
    for (puVar3 = (undefined4 *)param_1[0x11]; puVar3 != param_1 + 0x11;
        puVar3 = (undefined4 *)*puVar3) {
      if (puVar3[2] == DAT_00735740) {
        param_1[0x10] = puVar3;
        goto LAB_0050cd1e;
      }
    }
    param_1[0x10] = (undefined4 *)param_1[0x11];
  }
LAB_0050cd1e:
  FUN_004f8960();
  FUN_0050cf90();
  _DAT_00746de0 = DAT_006b6b30;
  *(undefined1 *)(param_1 + 8) = 1;
  if ((int ******)local_18 != &local_18) {
    do {
      pppppiVar7 = (int *****)*local_18;
      pppppiVar9 = (int *****)local_18[1];
      *pppppiVar9 = (int ****)pppppiVar7;
      pppppiVar7[1] = (int ****)pppppiVar9;
      _free(local_18);
    } while ((int ******)local_18 != &local_18);
  }
  ExceptionList = local_10;
  return param_1;
}
