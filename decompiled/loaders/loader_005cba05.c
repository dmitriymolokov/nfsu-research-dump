/* spd-match: far pct=15.83 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_8r/buckets/r_03/attempt3_005CBA05 */
#include "ghidra_compat.h"

unsigned int __cdecl rsqrtss(unsigned __int64, unsigned __int64);

extern int DAT_006a062c;
extern void LAB_005cbb6d(...);
extern void LAB_005cbceb(...);
extern void LAB_005cbcff(...);

struct ThisCallBox {
  undefined4 FUN_005cba05(char *param_2, char *param_3, int *param_4);
};
undefined4 ThisCallBox::FUN_005cba05(char *param_2, char *param_3, int *param_4) {
  char cVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  undefined2 *puVar9;
  int iVar10;
  undefined4 uVar11;
  char *pcVar12;
  undefined4 *puVar13;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  undefined4 *local_c;
  undefined1 *local_8;
  
  iVar8 = *(int *)(*(int *)(((int)this) + 0x8c) + *(int *)((int)param_3 + 4) * 4);
  iVar2 = *(int *)(iVar8 + 0x38);
  local_8 = (undefined1 *)0x0;
  local_c = (undefined4 *)0x0;
  if (iVar2 == 0) {
    iVar10 = *(int *)(((int)this) + 0x2c);
  }
  else {
    iVar10 = *(int *)(*(int *)(((int)this) + 0xc) + 8);
  }
  piVar4 = (int *)(*(int *)(iVar8 + 0x24) + *(int *)((int)param_3 + 8) + iVar10);
  if (iVar2 == 0) {
    iVar8 = *(int *)(((int)this) + 0x2c);
  }
  else {
    iVar8 = *(int *)(*(int *)(((int)this) + 0xc) + 8);
  }
  if (*(int *)(piVar4[2] + iVar8) == 0) {
    param_3 = (char *)0x0;
  }
  else {
    if (iVar2 == 0) {
      iVar8 = *(int *)(((int)this) + 0x2c);
    }
    else {
      iVar8 = *(int *)(*(int *)(((int)this) + 0xc) + 8);
    }
    param_3 = (char *)(unsigned int)(piVar4[2] + 4 + iVar8);
  }
  local_10 = *piVar4;
  uVar3 = piVar4[4];
  local_14 = piVar4[1];
  if ((param_2 == (char *)0x0) || (param_3 == (char *)0x0)) goto LAB_005cbceb;
  pcVar5 = param_2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  pcVar6 = param_3;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  local_8 = (unsigned char *)_malloc((size_t)(pcVar5 + (int)(pcVar6 + ((2 - (int)(param_3 + 1)) - (int)(param_2 + 1))
                                           )));
  if (local_8 == (undefined1 *)0x0) {
    uVar11 = 0x8007000e;
    goto LAB_005cbcff;
  }
  *local_8 = 0;
  pcVar5 = param_2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  pcVar6 = (char *)((unsigned char *)local_8 - 1);
  do {
    pcVar12 = pcVar6 + 1;
    pcVar6 = pcVar6 + 1;
  } while (*pcVar12 != '\0');
  pcVar12 = param_2;
  for (uVar7 = (uint)((int)pcVar5 - (int)param_2) >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar12;
    pcVar12 = pcVar12 + 4;
    pcVar6 = pcVar6 + 4;
  }
  puVar9 = (undefined2 *)((unsigned char *)local_8 - 1);
  for (uVar7 = (int)pcVar5 - (int)param_2 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar6 = *pcVar12;
    pcVar12 = pcVar12 + 1;
    pcVar6 = pcVar6 + 1;
  }
  do {
    pcVar5 = (char *)(unsigned int)((int)puVar9 + 1);
    puVar9 = (undefined2 *)((int)puVar9 + 1);
  } while (*pcVar5 != '\0');
  *puVar9 = DAT_006a062c;
  pcVar5 = param_3;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  pcVar6 = (char *)((unsigned char *)local_8 - 1);
  do {
    pcVar12 = pcVar6 + 1;
    pcVar6 = pcVar6 + 1;
  } while (*pcVar12 != '\0');
  pcVar12 = param_3;
  for (uVar7 = (uint)((int)pcVar5 - (int)param_3) >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar12;
    pcVar12 = pcVar12 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar7 = (int)pcVar5 - (int)param_3 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar6 = *pcVar12;
    pcVar12 = pcVar12 + 1;
    pcVar6 = pcVar6 + 1;
  }
  if (uVar3 == 0) {
LAB_005cbb6d:
    if (local_10 == 1) {
      if (uVar3 == 0) {
        uVar11 = (**(code **)(*param_4 + 0x58))(param_4,local_8,0);
      }
      else {
        uVar11 = (**(code **)(*param_4 + 0x60))(param_4,local_8,local_c,uVar3);
      }
    }
    else if (local_10 == 2) {
      if (uVar3 == 0) {
        uVar11 = (**(code **)(*param_4 + 0x68))(param_4,local_8,0);
      }
      else {
        uVar11 = (**(code **)(*param_4 + 0x70))(param_4,local_8,local_c,uVar3);
      }
    }
    else if (local_10 == 3) {
      if (local_14 == 0) {
        if (uVar3 == 0) {
          uVar11 = (**(code **)(*param_4 + 0x78))(param_4,local_8,0);
        }
        else {
          uVar11 = (**(code **)(*param_4 + 0x80))(param_4,local_8,local_c,uVar3);
        }
      }
      else if (local_14 == 1) {
        if (uVar3 == 0) {
          local_24 = 0;
          local_20 = 0;
          local_1c = 0;
          local_18 = 0;
          uVar11 = (**(code **)(*param_4 + 0x88))(param_4,local_8,&local_24);
        }
        else {
          uVar11 = (**(code **)(*param_4 + 0x90))(param_4,local_8,local_c,uVar3);
        }
      }
      else {
        if (local_14 != 2) goto LAB_005cbceb;
        if (uVar3 == 0) {
          local_64 = 0;
          local_60 = 0;
          local_5c = 0;
          local_58 = 0;
          local_54 = 0;
          local_50 = 0;
          local_4c = 0;
          local_48 = 0;
          local_44 = 0;
          local_40 = 0;
          local_3c = 0;
          local_38 = 0;
          local_34 = 0;
          local_30 = 0;
          local_2c = 0;
          local_28 = 0;
          uVar11 = (**(code **)(*param_4 + 0x98))(param_4,local_8,&local_64);
        }
        else {
          uVar11 = (**(code **)(*param_4 + 0xa0))(param_4,local_8,local_c,uVar3);
        }
      }
    }
    else if ((local_10 == 4) && (uVar3 == 0)) {
      uVar11 = (**(code **)(*param_4 + 200))(param_4,local_8,0);
    }
    else {
LAB_005cbceb:
      uVar11 = 0x80004005;
    }
  }
  else {
    local_c = (unsigned int *)_malloc(uVar3 << 6);
    if (local_c != (undefined4 *)0x0) {
      puVar13 = local_c;
      for (iVar8 = (uVar3 & 0x3ffffff) << 4; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar13 = 0;
        puVar13 = puVar13 + 1;
      }
      for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
        *(undefined1 *)puVar13 = 0;
        puVar13 = (undefined4 *)((int)puVar13 + 1);
      }
      goto LAB_005cbb6d;
    }
    uVar11 = 0x8007000e;
  }
  if (local_c != (undefined4 *)0x0) {
    _free(local_c);
  }
LAB_005cbcff:
  if (local_8 != (undefined1 *)0x0) {
    _free(local_8);
  }
  return uVar11;
}
