/* spd-match: far pct=8.52 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0052E540 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_0052e540(int obj, int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;

  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  iVar6 = (param_1 + 0x12) * 0x10;
  puVar7 = (undefined4 *)(iVar6 + obj);
  uVar1 = puVar7[2];
  puVar8 = (undefined4 *)((param_1 + 0x14) * 0x10 + obj);
  uVar2 = *puVar7;
  puVar8[1] = *(undefined4 *)(iVar6 + 4 + obj);
  *puVar8 = uVar2;
  puVar8[2] = uVar1;
  if (*(int *)(*(int *)(obj + 0x204) + 0x60 + param_1 * 4) != 0) {
    *(undefined4 *)(obj + 0x98 + param_1 * 4) = *(undefined4 *)(obj + 0x90 + param_1 * 4);
    iVar6 = *(int *)(*(int *)(obj + 0x204) + 0x60 + *(int *)(obj + 0xcc) * 4);
    if (iVar6 == 0) {
      *(undefined4 *)(obj + 0x90 + param_1 * 4) = 0x3f800000;
    }
    else {
      fVar3 = *(float *)(iVar6 + 0x40) - *(float *)(obj + 0xe0);
      fVar4 = *(float *)(iVar6 + 0x44) - *(float *)(obj + 0xe4);
      fVar5 = *(float *)(iVar6 + 0x48) - *(float *)(obj + 0xe8);
      *(float *)(obj + 0x90 + param_1 * 4) = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5);
    }
    uVar1 = *(undefined4 *)(iVar6 + 0x44);
    uVar2 = *(undefined4 *)(iVar6 + 0x48);
    *puVar7 = *(undefined4 *)(iVar6 + 0x40);
    puVar7[1] = uVar1;
    puVar7[2] = uVar2;
  }
  if (*(int *)(*(int *)(obj + 0x204) + 0x168 + param_1 * 4) != 0) {
    *(undefined4 *)(obj + 0x88 + param_1 * 4) = *(undefined4 *)(obj + 0x80 + param_1 * 4);
    iVar6 = *(int *)(*(int *)(obj + 0x204) + 0x168 + param_1 * 4);
    fVar3 = *(float *)(iVar6 + 0x60) - *(float *)(obj + 0xe0);
    fVar5 = *(float *)(iVar6 + 100) - *(float *)(obj + 0xe4);
    fVar4 = *(float *)(iVar6 + 0x68) - *(float *)(obj + 0xe8);
    *(float *)(obj + 0x80 + param_1 * 4) = SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3);
    iVar6 = *(int *)(*(int *)(obj + 0x204) + 0x168 + param_1 * 4);
    uVar1 = *(undefined4 *)(iVar6 + 100);
    uVar2 = *(undefined4 *)(iVar6 + 0x68);
    *puVar7 = *(undefined4 *)(iVar6 + 0x60);
    puVar7[1] = uVar1;
    puVar7[2] = uVar2;
  }
  return;
}
