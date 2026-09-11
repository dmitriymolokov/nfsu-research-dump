/* spd-match: far pct=6.02 flags=/O1 /Gr /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004EF0B0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004ef330();
int __cdecl FUN_004eff20();
int __cdecl FUN_004f0b00();
int __cdecl FUN_004f1430();
int __cdecl FUN_004fbdf0();
int __cdecl FUN_004ffeb0();
int __cdecl FUN_0051a6d0();
extern int DAT_006f89ec;
extern void LAB_004ef30c(void);
void __fastcall FUN_004ef0b0(char * obj, int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;

  uint uVar4;
  int iVar5;
  uint *puVar6;
  byte bVar7;
  uint uVar8;
  uint *puVar9;
  uint uStack_c;
  int local_8 [2];
  
  if (obj[0x5251] != '\0') {
    (**(code **)(**(int **)(obj + 0x10c) + 0x5c))();
  }
  if (*obj != '\0') {
    if (obj[1] != '\0') {
      obj[0x34] = '\0';
      obj[0x35] = '\0';
      obj[0x36] = '\0';
      obj[0x37] = '\0';
      if (obj[2] != '\0') {
        (**(code **)(**(int **)(obj + 0x10c) + 0x44))(local_8);
        FUN_0051a6d0();
      }
      uStack_c = uStack_c & 0xffffff00;
      if (*(int *)(obj + 0xd4) != 0) {
        bVar7 = 0;
        do {
          (**(code **)(**(int **)(obj + 0x10c) + 0x40))(uStack_c);
          FUN_004fbdf0();
          bVar7 = bVar7 + 1;
          uStack_c = CONCAT31(((unsigned int)(uStack_c) >> 8),bVar7);
        } while ((uint)bVar7 < *(uint *)(obj + 0xd4));
      }
      for (iVar5 = *(int *)(obj + 0xe4); iVar5 != 0; iVar5 = *(int *)(iVar5 + 4)) {
        FUN_004ef330(obj,iVar5);
        if (obj[2] != '\0') {
          FUN_004eff20(iVar5);
        }
      }
      uVar8 = 1;
      puVar9 = (uint *)(obj + 0x38);
      local_8[0] = 0x13;
      do {
        if (((*(uint *)(obj + 0x34) & uVar8) != 0) && (bVar7 = 0, *(int *)(obj + 0xd4) != 0))
        {
          uVar4 = 0;
          do {
            uVar1 = *puVar9;
            iVar5 = 0;
            puVar6 = (uint *)(uVar4 * 0x88 + *(int *)(obj + 8) + 8);
            do {
              if ((uVar8 & 1 << ((byte)iVar5 & 0x1f)) != 0) {
                if (uVar1 < *puVar6) {
                  *puVar6 = *puVar6 - uVar1;
                }
                else {
                  *puVar6 = 0;
                }
              }
              iVar5 = iVar5 + 1;
              puVar6 = puVar6 + 1;
            } while (iVar5 < 0x20);
            bVar7 = bVar7 + 1;
            uVar4 = (uint)bVar7;
          } while (uVar4 < *(uint *)(obj + 0xd4));
        }
        *puVar9 = 0;
        uVar8 = uVar8 << 1;
        puVar9 = puVar9 + 1;
        local_8[0] = local_8[0] + -1;
      } while (local_8[0] != 0);
      *(undefined4 *)(obj + 0x2c) = *(undefined4 *)(obj + 0x30);
      local_8[0] = 0;
    }
    if (*obj != '\0') {
      do {
        iVar5 = param_1;
        if (0x14 < param_1) {
          iVar5 = 0x14;
        }
        DAT_006f89ec = (obj[0x5250] != '\0') - 1;
        iVar3 = *(int *)(obj + 0xe4);
        while (iVar3 != 0) {
          iVar2 = *(int *)(iVar3 + 0x40);
          local_8[0] = *(int *)(iVar3 + 4);
          *(char **)(iVar3 + 0x24) = obj;
          *(int *)(iVar3 + 0x28) = iVar5;
          for (; iVar3 = local_8[0], iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
            FUN_004ffeb0(iVar2,iVar5);
          }
        }
        FUN_004f0b00(obj);
        FUN_004f1430();
        if (*(int *)(obj + 0x411c) != 0) {
          FUN_004f0b00(obj);
        }
        param_1 = param_1 - iVar5;
        obj[0x5250] = '\0';
      } while (param_1 != 0);
      goto LAB_004ef30c;
    }
  }
  for (iVar5 = *(int *)(obj + 0xe4); iVar5 != 0; iVar5 = *(int *)(iVar5 + 4)) {
    iVar3 = *(int *)(iVar5 + 0x40);
    *(char **)(iVar5 + 0x24) = obj;
    *(int *)(iVar5 + 0x28) = param_1;
    for (; iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
      FUN_004ffeb0(iVar3,param_1);
    }
  }
LAB_004ef30c:
  if (obj[0x5251] != '\0') {
    (**(code **)(**(int **)(obj + 0x10c) + 0x60))();
  }
  return;
}
