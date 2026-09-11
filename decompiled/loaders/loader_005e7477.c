/* spd-match: far pct=5.70 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8r/buckets/r_07/attempt1_baseline */
#include "ghidra_compat.h"

int __cdecl FUN_005b1f01();
int __cdecl FUN_005e7154();
int __cdecl FUN_00613593();
extern int DAT_0069ee7c;
extern int DAT_006a2954;
extern unsigned char *DAT_006a2958;
extern int DAT_006a2994;
extern int DAT_006a3338;
extern int DAT_006a390c;
extern int DAT_006a3910;
extern int DAT_006a3914;
extern int DAT_006a3918;
extern int DAT_006a391c;
extern int DAT_006a3920;
extern unsigned char *PTR_DAT_006a2950;
extern void LAB_005e752d(void);
extern void LAB_005e75cd(void);
extern void LAB_005e762e(void);
extern void LAB_005e7635(void);
extern void LAB_005e76c8(void);
extern void LAB_005e7745(void);
extern void LAB_005e778a(void);
extern void LAB_005e77bc(void);
extern void LAB_005e7873(void);
extern void LAB_005e787b(void);
extern void LAB_005e78a6(void);
extern void LAB_005e78d5(void);

int  FUN_005e7477(undefined4 *param_1,int param_2,int param_3)

{
  byte bVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  bool bVar10;
  char *pcVar11;
  byte local_40 [16];
  int local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  byte *local_20;
  byte *local_1c;
  byte *local_18;
  undefined4 local_14;
  undefined4 *local_10;
  int local_c;
  uint local_8;
  
  pbVar7 = *(byte **)(param_2 + 8);
  bVar1 = *pbVar7;
  local_10 = param_1;
  local_c = 0;
  local_8 = 0;
  local_14 = 0;
  local_2c = 0;
  local_30 = 1;
  local_24 = 0;
  local_28 = 0;
  local_1c = pbVar7;
  local_18 = pbVar7;
  local_20 = pbVar7;
  do {
    local_10 = param_1;
    if (bVar1 == 0) {
      if (((((((param_1[0x1e] == 0) || (local_c == 3)) || (local_c == 5)) ||
            ((local_c == 6 || (local_c == 8)))) ||
           ((local_c == 9 || ((local_c == 4 || (local_c == 0xf)))))) || (local_c == 0x12)) ||
         (local_c == 0x13)) {
LAB_005e78d5:
        pvVar2 = _malloc(0x2c);
        if (pvVar2 == (void *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = FUN_00613593(local_c,local_14,local_8,local_2c,0);
        }
        if (iVar3 != 0) {
          if (param_3 == 0) {
            return iVar3;
          }
          *(undefined4 *)(iVar3 + 0x28) = *(undefined4 *)(param_3 + 0x28);
          *(undefined4 *)(param_3 + 0x28) = 0;
          return iVar3;
        }
      }
      else {
        FUN_005b1f01(*param_1,param_2,0x7d5,
                     "temporary and constant registers are not allowed in assembly fragments");
LAB_005e752d:
        param_1[0x13] = 1;
        pvVar2 = _malloc(0x2c);
        if (pvVar2 != (void *)0x0) {
          iVar3 = FUN_00613593(0xffffffff,0,0,0,0);
          return iVar3;
        }
      }
      return 0;
    }
    while ((*pbVar7 != 0 && (*pbVar7 != 0x5f))) {
      pbVar7 = pbVar7 + 1;
      local_18 = pbVar7;
    }
    uVar4 = (int)pbVar7 - (int)local_20;
    if (0xf < uVar4) goto LAB_005e78a6;
    pbVar8 = local_20;
    pbVar9 = local_40;
    for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pbVar9 = *(undefined4 *)pbVar8;
      pbVar8 = pbVar8 + 4;
      pbVar9 = pbVar9 + 4;
    }
    bVar1 = *pbVar7;
    for (uVar6 = uVar4 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pbVar9 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      pbVar9 = pbVar9 + 1;
    }
    local_40[uVar4] = 0;
    if (bVar1 != 0) {
      pbVar7 = pbVar7 + 1;
      local_18 = pbVar7;
    }
    local_20 = pbVar7;
    if (local_30 != 0) {
      pbVar7 = local_40;
      if (local_40[0] == 0) {
LAB_005e75cd:
        local_8 = 0xffffffff;
      }
      else {
        do {
          iVar3 = _isalpha((int)(char)*pbVar7);
          if (iVar3 == 0) break;
          pbVar7 = pbVar7 + 1;
        } while (*pbVar7 != 0);
        if (*pbVar7 == 0) goto LAB_005e75cd;
        local_8 = _atol((char *)pbVar7);
      }
      if (*pbVar7 != 0) {
        *pbVar7 = 0;
        pbVar7 = pbVar7 + 1;
      }
      bVar1 = *pbVar7;
      if (bVar1 != 0) {
        do {
          iVar3 = _isdigit((int)(char)bVar1);
          if (iVar3 == 0) break;
          pbVar7 = pbVar7 + 1;
          bVar1 = *pbVar7;
        } while (bVar1 != 0);
        if (*pbVar7 != 0) goto LAB_005e78a6;
      }
      iVar3 = 0;
      uVar4 = 0;
      do {
        pbVar8 = *(byte **)((int)&PTR_DAT_006a2950 + uVar4);
        pbVar7 = local_40;
        do {
          bVar1 = *pbVar7;
          bVar10 = bVar1 < *pbVar8;
          if (bVar1 != *pbVar8) {
LAB_005e762e:
            iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_005e7635;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar7[1];
          bVar10 = bVar1 < pbVar8[1];
          if (bVar1 != pbVar8[1]) goto LAB_005e762e;
          pbVar7 = pbVar7 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_005e7635:
        if (iVar5 == 0) break;
        uVar4 = uVar4 + 0x48;
        iVar3 = iVar3 + 1;
      } while (uVar4 < 0x5e8);
      if (iVar3 != 0x15) {
        iVar5 = local_10[0xe];
        uVar4 = *(uint *)(&DAT_006a2958 + (iVar5 + iVar3 * 0x12) * 4);
        if (uVar4 != 0xffffffff) {
          if ((int)uVar4 < 0) {
            if (local_8 == 0xffffffff) {
              if (param_3 == 0) goto LAB_005e78a6;
              local_8 = *(uint *)(param_3 + 0x18);
            }
            else if (param_3 != 0) {
              local_8 = local_8 + *(int *)(param_3 + 0x18);
            }
            uVar4 = -uVar4;
          }
          else if (param_3 != 0) goto LAB_005e78a6;
          if (local_8 == 0xffffffff) {
            if (uVar4 == 0) {
              local_8 = 0;
LAB_005e76c8:
              local_c = (&DAT_006a2954)[iVar3 * 0x12];
              local_2c = (&DAT_006a2994)[iVar3 * 0x12];
              if (local_c == 2) {
                uVar4 = local_8 & 0x1fff;
                if (uVar4 < 0x800) {
                  local_c = 2;
                }
                else if (uVar4 < 0x1000) {
                  local_c = 0xb;
                }
                else if (uVar4 < 0x1800) {
                  local_c = 0xc;
                }
                else if (uVar4 < 0x2000) {
                  local_c = 0xd;
                }
                local_8 = local_8 & 0x7ff;
              }
              else if (local_c == -3) {
                local_c = 4;
LAB_005e7745:
                local_8 = 0;
              }
              else if (local_c == -4) {
                local_c = 4;
                local_8 = 2;
              }
              else {
                if (local_c == -5) {
                  local_c = 4;
                }
                else {
                  if (local_c == -6) {
                    local_c = 0x11;
                    goto LAB_005e7745;
                  }
                  if (local_c != -7) goto LAB_005e778a;
                  local_c = 0x11;
                }
                local_8 = 1;
              }
LAB_005e778a:
              local_30 = 0;
              if ((5 < iVar5) && (iVar5 < 10)) {
                local_24 = 1;
              }
              pbVar7 = local_18;
              if (((3 < iVar5) && (iVar5 < 6)) || ((0xc < iVar5 && (iVar5 < 0xf)))) {
                local_28 = 1;
              }
              goto LAB_005e77bc;
            }
          }
          else if (((param_3 != 0) && (*(int *)(param_3 + 0x28) != 0)) || (local_8 < uVar4))
          goto LAB_005e76c8;
        }
      }
LAB_005e78a6:
      param_1 = local_10;
      if (local_10[0x1e] != 0) {
        iVar3 = FUN_005e7154(*local_10,local_10[0x1f],param_2,local_1c,param_3,&local_c,&local_14,
                             &local_8);
        if (iVar3 < 0) goto LAB_005e752d;
        goto LAB_005e78d5;
      }
      if (param_3 == 0) {
        pcVar11 = "invalid register \'%s\'";
      }
      else {
        if (*(int *)(param_3 + 0x28) == 0) {
          FUN_005b1f01(*local_10,param_2,0x7d5,"invalid register \'%s[%u]\'",local_1c,
                       *(undefined4 *)(param_3 + 0x18));
          goto LAB_005e752d;
        }
        if (*(int *)(*(int *)(param_3 + 0x28) + 0x10) == -1) goto LAB_005e752d;
        pcVar11 = "invalid register \'%s[...]\'";
      }
      FUN_005b1f01(*local_10,param_2,0x7d5,pcVar11,local_1c);
      goto LAB_005e752d;
    }
    if (local_24 == 0) {
LAB_005e787b:
      if (local_28 != 0) {
        iVar3 = 4;
        bVar10 = true;
        pbVar8 = local_40;
        pbVar9 = &DAT_0069ee7c;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar10 = *pbVar8 == *pbVar9;
          pbVar8 = pbVar8 + 1;
          pbVar9 = pbVar9 + 1;
        } while (bVar10);
        if (bVar10) {
          local_14 = 0xb000000;
          local_28 = 0;
          goto LAB_005e77bc;
        }
      }
      goto LAB_005e78a6;
    }
    iVar3 = 5;
    bVar10 = true;
    pbVar8 = local_40;
    pbVar9 = &DAT_006a3920;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar10 = *pbVar8 == *pbVar9;
      pbVar8 = pbVar8 + 1;
      pbVar9 = pbVar9 + 1;
    } while (bVar10);
    if (bVar10) {
      local_14 = 0x2000000;
    }
    else {
      iVar3 = 4;
      bVar10 = true;
      pbVar8 = local_40;
      pbVar9 = &DAT_006a391c;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar10 = *pbVar8 == *pbVar9;
        pbVar8 = pbVar8 + 1;
        pbVar9 = pbVar9 + 1;
      } while (bVar10);
      if (bVar10) {
        local_14 = 0x4000000;
      }
      else {
        iVar3 = 3;
        bVar10 = true;
        pbVar8 = local_40;
        pbVar9 = &DAT_006a3338;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar10 = *pbVar8 == *pbVar9;
          pbVar8 = pbVar8 + 1;
          pbVar9 = pbVar9 + 1;
        } while (bVar10);
        if (bVar10) {
          local_14 = 0x7000000;
        }
        else {
          iVar3 = 3;
          bVar10 = true;
          pbVar8 = local_40;
          pbVar9 = &DAT_006a3918;
          do {
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            bVar10 = *pbVar8 == *pbVar9;
            pbVar8 = pbVar8 + 1;
            pbVar9 = pbVar9 + 1;
          } while (bVar10);
          if (!bVar10) {
            iVar3 = 3;
            bVar10 = true;
            pbVar8 = local_40;
            pbVar9 = &DAT_006a3914;
            do {
              if (iVar3 == 0) break;
              iVar3 = iVar3 + -1;
              bVar10 = *pbVar8 == *pbVar9;
              pbVar8 = pbVar8 + 1;
              pbVar9 = pbVar9 + 1;
            } while (bVar10);
            if (!bVar10) {
              iVar3 = 3;
              bVar10 = true;
              pbVar8 = local_40;
              pbVar9 = &DAT_006a3910;
              do {
                if (iVar3 == 0) break;
                iVar3 = iVar3 + -1;
                bVar10 = *pbVar8 == *pbVar9;
                pbVar8 = pbVar8 + 1;
                pbVar9 = pbVar9 + 1;
              } while (bVar10);
              if (!bVar10) {
                iVar3 = 3;
                bVar10 = true;
                pbVar8 = local_40;
                pbVar9 = &DAT_006a390c;
                do {
                  if (iVar3 == 0) break;
                  iVar3 = iVar3 + -1;
                  bVar10 = *pbVar8 == *pbVar9;
                  pbVar8 = pbVar8 + 1;
                  pbVar9 = pbVar9 + 1;
                } while (bVar10);
                if (!bVar10) goto LAB_005e787b;
              }
              local_14 = 0xa000000;
              goto LAB_005e7873;
            }
          }
          local_14 = 0x9000000;
        }
      }
    }
LAB_005e7873:
    local_24 = 0;
LAB_005e77bc:
    bVar1 = *pbVar7;
    param_1 = local_10;
  } while( true );
}
