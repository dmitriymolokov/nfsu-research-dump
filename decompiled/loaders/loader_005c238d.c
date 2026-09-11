/* spd-match: far pct=6.73 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_8r/buckets/r_03/attempt3_005C238D */
#include "ghidra_compat.h"

unsigned int __cdecl rsqrtss(unsigned __int64, unsigned __int64);

int __cdecl FUN_005ba1d9(...);
int __cdecl FUN_005ba70c(...);
int __cdecl FUN_005bb0d5(...);
int __cdecl FUN_005bb1eb(...);
int __cdecl FUN_005bb534(...);
int __cdecl FUN_005bbe7f(...);
int __cdecl FUN_005bc1ad(...);
int __cdecl FUN_005be628(...);
int __cdecl FUN_005bedc7(...);
int __cdecl FUN_005beee7(...);
int __cdecl FUN_005c0cfc(...);
int __cdecl FUN_005c1473(...);
int __cdecl FUN_005d78db(...);
int __cdecl FUN_005d8831(...);
extern int DAT_0069ed7c;
extern int DAT_006b9172;
extern void LAB_005c2443(...);
extern void LAB_005c2448(...);
extern void LAB_005c249e(...);
extern void LAB_005c24bf(...);
extern void LAB_005c24c9(...);
extern void LAB_005c25d5(...);
extern void LAB_005c26ae(...);
extern void LAB_005c26ef(...);
extern void LAB_005c2724(...);
extern void LAB_005c27a0(...);
extern void LAB_005c2813(...);
extern void LAB_005c2818(...);

struct ThisCallBox {
  undefined4 * FUN_005c238d(int param_2, int param_3, int param_4);
};
undefined4 * ThisCallBox::FUN_005c238d(int param_2, int param_3, int param_4) {
  int param_1 = (int)this;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined *puVar10;
  undefined4 *puVar11;
  bool bVar12;
  undefined4 uVar13;
  undefined4 *local_30;
  int local_2c;
  int local_28;
  undefined4 *local_24;
  undefined4 **local_20;
  undefined4 **local_1c;
  undefined4 *local_18;
  int local_14;
  int local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  local_18 = (undefined4 *)0x0;
  local_c = (undefined4 *)0x0;
  local_8 = (undefined4 *)0x0;
  local_30 = (undefined4 *)0x0;
  local_24 = (undefined4 *)0x0;
  if ((param_2 == 0) || (*(int *)(param_2 + 4) != 2)) {
    return (undefined4 *)0x0;
  }
  iVar8 = param_2 + 0x10;
  if (*(int *)(param_1 + 0x14) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x1c);
  }
  uVar5 = 6;
  if (param_4 != 0) {
    uVar5 = 0x16;
  }
  local_14 = iVar8;
  local_10 = param_1;
  iVar4 = FUN_005be628(2,iVar8,uVar3,param_3,*(undefined4 *)(param_1 + 0xc),uVar5,&local_18,&local_8
                      );
  bVar12 = iVar4 == 0;
  if (-1 < iVar4) {
    if (param_4 == 0) {
      if (bVar12) {
LAB_005c24c9:
        local_1c = &local_30;
        local_20 = &local_24;
        iVar4 = param_3;
        for (local_2c = local_18[9]; local_2c != 0; local_2c = *(int *)(local_2c + 0xc)) {
          iVar1 = *(int *)(local_2c + 0xc);
          iVar2 = *(int *)(local_2c + 8);
          bVar12 = false;
          if ((iVar1 != 0) && (iVar8 = local_14, *(int *)(*(int *)(iVar1 + 8) + 4) == 0xb)) {
            bVar12 = true;
            local_2c = iVar1;
          }
          if ((param_4 == 0) || ((*(byte *)(*(int *)(iVar2 + 0x18) + 0x1c) & 0x40) != 0)) {
            if (iVar4 == 0) {
              if (!bVar12) goto LAB_005c26ae;
            }
            else {
              local_28 = *(int *)(iVar2 + 0x18);
              uVar3 = *(undefined4 *)(local_28 + 0x20);
              if (*(int *)(iVar4 + 8) == 0) {
                param_2 = 0;
              }
              else {
                param_2 = *(undefined4 *)(*(int *)(iVar4 + 8) + 0x10);
              }
              pvVar6 = _malloc(0x14);
              if (pvVar6 == (void *)0x0) {
                puVar7 = (undefined4 *)0x0;
              }
              else {
                puVar7 = (undefined4 *)FUN_005d78db(0,0,"Inputs");
              }
              *local_1c = puVar7;
              if (puVar7 == (undefined4 *)0x0) goto LAB_005c2813;
              pvVar6 = _malloc(0x14);
              if (pvVar6 == (void *)0x0) {
                puVar7 = (undefined4 *)0x0;
              }
              else {
                puVar7 = (undefined4 *)FUN_005d78db(0,0,"Outputs");
              }
              *local_20 = puVar7;
              param_1 = local_10;
              if (puVar7 == (undefined4 *)0x0) goto LAB_005c2813;
              if ((*(byte *)(local_28 + 0x1c) & 0x10) != 0) {
                iVar8 = FUN_005bbe7f(uVar3,param_2,0);
                uVar5 = uVar3;
                uVar13 = param_2;
                if (iVar8 != 0) {
                  uVar5 = FUN_005beee7(uVar3,*(undefined4 *)(iVar4 + 8),0,0);
                  (*local_1c)[2] = uVar5;
                  goto LAB_005c25d5;
                }
LAB_005c26ef:
                FUN_005bc1ad(local_14,*(undefined4 *)(local_14 + 8),uVar5,uVar13,0);
                goto LAB_005c2813;
              }
LAB_005c25d5:
              if ((*(byte *)(local_28 + 0x1c) & 0x20) != 0) {
                iVar8 = FUN_005ba70c(param_2);
                uVar5 = param_2;
                uVar13 = uVar3;
                if ((iVar8 != 0) || (iVar8 = FUN_005bbe7f(param_2,uVar3,0), iVar8 == 0))
                goto LAB_005c26ef;
                puVar7 = (undefined4 *)FUN_005bedc7(*(undefined4 *)(iVar2 + 0x14),local_28);
                if (puVar7 == (undefined4 *)0x0) goto LAB_005c2813;
                puVar11 = (undefined4 *)FUN_005beee7(param_2,puVar7,0,0);
                (**(code **)*puVar7)(1);
                if (puVar11 == (undefined4 *)0x0) goto LAB_005c2813;
                iVar8 = FUN_005c1473(0x15,*(undefined4 *)(iVar4 + 8),puVar11,1);
                (**(code **)*puVar11)(1);
                if (iVar8 == 0) goto LAB_005c2813;
                (*local_20)[2] = iVar8;
                param_1 = local_10;
              }
              iVar4 = *(int *)(iVar4 + 0xc);
              local_1c = (undefined4 **)(*local_1c + 3);
              local_20 = (undefined4 **)(*local_20 + 3);
              iVar8 = local_14;
            }
          }
        }
        if (iVar4 == 0) {
LAB_005c26ae:
          if (local_2c != 0) goto LAB_005c27a0;
          pvVar6 = _malloc(0x50);
          if (pvVar6 == (void *)0x0) {
            puVar7 = (undefined4 *)0x0;
          }
          else {
            puVar7 = (undefined4 *)
                     FUN_005d8831(0,(local_c != (undefined4 *)0x0) + '\x19',0,0,1,iVar8);
          }
          if (puVar7 == (undefined4 *)0x0) goto LAB_005c2813;
          if ((int *)local_18[8] == (int *)0x0) {
LAB_005c2724:
            puVar7[8] = (unsigned int)local_8;
            local_8 = (undefined4 *)0x0;
            pvVar6 = _malloc(0x14);
            if (pvVar6 == (void *)0x0) {
              iVar8 = 0;
            }
            else {
              iVar8 = FUN_005d78db(0,0,"Parameters");
            }
            puVar7[9] = iVar8;
            if (iVar8 != 0) {
              *(undefined4 **)(iVar8 + 8) = local_30;
              *(undefined4 **)(puVar7[9] + 0xc) = local_24;
              puVar11 = (undefined4 *)0x0;
              local_24 = (undefined4 *)0x0;
              FUN_005bb1eb(puVar7);
              iVar8 = FUN_005bb0d5(puVar7);
              if ((iVar8 != 0) &&
                 (puVar9 = (undefined4 *)FUN_005c0cfc(puVar7), puVar9 != (undefined4 *)0x0)) {
                (**(code **)*puVar7)(1);
                puVar7 = puVar9;
              }
              goto LAB_005c2818;
            }
          }
          else {
            iVar8 = (**(code **)(*(int *)local_18[8] + 8))();
            puVar7[4] = iVar8;
            if (iVar8 != 0) goto LAB_005c2724;
          }
        }
        else {
LAB_005c27a0:
          iVar4 = 0;
          for (; param_3 != 0; param_3 = *(int *)(param_3 + 0xc)) {
            iVar4 = iVar4 + 1;
          }
          puVar10 = (unsigned char *)&DAT_0069ed7c;
          if (local_c == (undefined4 *)0x0) {
            if (iVar4 == 1) {
              puVar10 = (unsigned char *)&DAT_006b9172;
            }
            FUN_005ba1d9(param_1,iVar8,0xbc5,"\'%s\': function does not take %u parameter%s",
                         *(undefined4 *)(iVar8 + 8),iVar4,puVar10);
            goto LAB_005c2813;
          }
          if (iVar4 == 1) {
            puVar10 = (unsigned char *)&DAT_006b9172;
          }
          FUN_005ba1d9(param_1,iVar8,0xbc5,"\'%s\': intrinsic function does not take %u parameter%s"
                       ,*(undefined4 *)(iVar8 + 8),iVar4,puVar10);
          puVar7 = (undefined4 *)0x0;
        }
        if (puVar7 != (undefined4 *)0x0) {
          (**(code **)*puVar7)(1);
        }
      }
      else {
        iVar4 = FUN_005bb534(iVar8,param_3,&local_c,&local_8);
        if (-1 < iVar4) {
          if (iVar4 == 0) {
            bVar12 = true;
            goto LAB_005c2443;
          }
          goto LAB_005c2448;
        }
      }
    }
    else {
LAB_005c2443:
      if (!bVar12) {
LAB_005c2448:
        iVar4 = FUN_005be628(2,iVar8,0,0,*(undefined4 *)(param_1 + 0xc),2,&local_18,&local_8);
        if (iVar4 < 0) goto LAB_005c2813;
        if (iVar4 == 0) {
          bVar12 = true;
        }
      }
      if (param_4 == 0) {
        if (bVar12) goto LAB_005c24bf;
        iVar4 = FUN_005bb534(iVar8,0,&local_c,&local_8);
        if (iVar4 < 0) goto LAB_005c2813;
        if (iVar4 == 0) {
          bVar12 = true;
          goto LAB_005c249e;
        }
      }
      else {
LAB_005c249e:
        if (bVar12) {
LAB_005c24bf:
          if (local_c != (undefined4 *)0x0) {
            local_18 = local_c;
          }
          goto LAB_005c24c9;
        }
      }
      FUN_005ba1d9(param_1,iVar8,0xbbc,"undeclared identifier \'%s\'",
                   *(undefined4 *)(param_2 + 0x18));
    }
  }
LAB_005c2813:
  puVar11 = local_30;
  puVar7 = (undefined4 *)0x0;
LAB_005c2818:
  if (local_c != (undefined4 *)0x0) {
    (**(code **)*local_c)(1);
  }
  if (puVar11 != (undefined4 *)0x0) {
    (**(code **)*puVar11)(1);
  }
  if (local_24 != (undefined4 *)0x0) {
    (**(code **)*local_24)(1);
  }
  if (local_8 != (undefined4 *)0x0) {
    (**(code **)*local_8)(1);
  }
  return puVar7;
}
