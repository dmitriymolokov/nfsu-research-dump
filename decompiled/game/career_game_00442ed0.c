/* spd-match: far pct=5.26 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00442ED0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00565b60();
int __cdecl FUN_00565ce0();
extern int DAT_006cc7a4;
void __fastcall FUN_00442ed0(int obj, undefined4 *param_1, uint param_2, code *param_3)

{
  int iVar1;

  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  float10 fVar9;
  int local_18;
  int local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  if (obj < 2) {
    return;
  }
  puVar2 = (undefined4 *)FUN_00565b60(param_2,0,0,0);
  iVar3 = obj / 2 + 1;
  puVar5 = (undefined4 *)((obj + -1) * param_2 + (int)param_1);
  local_8 = (undefined4 *)((obj / 2) * param_2 + (int)param_1);
  local_18 = obj;
  local_10 = iVar3;
  local_c = puVar5;
  do {
    if (iVar3 < 2) {
      puVar7 = puVar5;
      puVar8 = puVar2;
      for (uVar4 = param_2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar4 = param_2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      puVar7 = param_1;
      puVar8 = puVar5;
      for (uVar4 = param_2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar4 = param_2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      local_18 = local_18 + -1;
      puVar5 = (undefined4 *)((int)puVar5 + -param_2);
      local_c = puVar5;
      if (local_18 == 1) {
        for (uVar4 = param_2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *param_1 = *puVar2;
          puVar2 = puVar2 + 1;
          param_1 = param_1 + 1;
        }
        for (param_2 = param_2 & 3; param_2 != 0; param_2 = param_2 - 1) {
          *(undefined1 *)param_1 = *(undefined1 *)puVar2;
          puVar2 = (undefined4 *)((int)puVar2 + 1);
          param_1 = (undefined4 *)((int)param_1 + 1);
        }
        FUN_00565ce0();
        return;
      }
    }
    else {
      local_8 = (undefined4 *)((int)local_8 + -param_2);
      puVar7 = local_8;
      puVar8 = puVar2;
      for (uVar4 = param_2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      iVar3 = iVar3 + -1;
      for (uVar4 = param_2 & 3; local_10 = iVar3, uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
    }
    iVar1 = iVar3;
    iVar6 = iVar3 * 2;
    while (iVar6 <= local_18) {
      if ((iVar6 < local_18) &&
         (fVar9 = (*(float10 (*)())param_3)((undefined4 *)((iVar6 + -1) * param_2 + (int)param_1),
                                      (undefined4 *)(iVar6 * param_2 + (int)param_1)),
         fVar9 < (float10)DAT_006cc7a4)) {
        iVar6 = iVar6 + 1;
      }
      puVar7 = (undefined4 *)((int)param_1 + (iVar6 + -1) * param_2);
      fVar9 = (*(float10 (*)())param_3)(puVar2,puVar7);
      iVar3 = local_10;
      puVar5 = local_c;
      if ((float10)DAT_006cc7a4 <= fVar9) {
        iVar6 = local_18 + 1;
      }
      else {
        puVar8 = (undefined4 *)((iVar1 + -1) * param_2 + (int)param_1);
        for (uVar4 = param_2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        for (uVar4 = param_2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        iVar1 = iVar6;
        iVar6 = iVar6 * 2;
      }
    }
    puVar7 = puVar2;
    puVar8 = (undefined4 *)((iVar1 + -1) * param_2 + (int)param_1);
    for (uVar4 = param_2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar4 = param_2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
  } while( true );
}
