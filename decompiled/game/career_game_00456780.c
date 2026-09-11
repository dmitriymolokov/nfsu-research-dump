/* spd-match: far pct=7.36 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00456780 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))

int __cdecl FUN_00647b70();
extern int DAT_006b7564;
extern int _DAT_006b7560;
extern void LAB_004567f1(void);
int unaff_ESI;
uint __fastcall FUN_00456780(uint val, int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;

  int iVar6;
  undefined2 uVar8;
  uint3 uVar7;
  int *unaff_ESI;
  bool bVar9;
  
  fVar3 = DAT_006b7564;
  if (param_1 == 0) {
    return val & 0xffffff00;
  }
  iVar1 = *(int *)(param_1 + 0x34);
  if (*(int *)(iVar1 + 0x1d4) == *(int *)(*unaff_ESI + 0x82c)) {
    return val & 0xffffff00;
  }
  iVar5 = unaff_ESI[0xe2];
  iVar6 = FUN_00647b70();
  if (iVar6 == 6) {
    iVar1 = *(int *)(*(int *)(iVar1 + 0x1d4) + 0x90);
    bVar9 = *(int *)(*(int *)(iVar1 + 0x14) + 4) == 1;
    iVar6 = CONCAT31((int3)((uint)iVar1 >> 8),bVar9);
    uVar8 = (undefined2)((uint)iVar1 >> 0x10);
    fVar2 = _DAT_006b7560;
    if (bVar9) goto LAB_004567f1;
  }
  uVar8 = (undefined2)((uint)iVar6 >> 0x10);
  fVar2 = fVar3;
LAB_004567f1:
  fVar4 = *(float *)(param_1 + 0x10) - (float)unaff_ESI[(char)unaff_ESI[0xe2] * 0xe + 6];
  fVar3 = -((float)unaff_ESI[(char)iVar5 * 0xe + 5] + *(float *)(param_1 + 0xc) + fVar2);
  uVar7 = (uint3)(CONCAT22(uVar8,(ushort)(fVar3 < fVar4) << 8 |
                                 (ushort)(NAN(fVar3) || NAN(fVar4)) << 10 |
                                 (ushort)(fVar3 == fVar4) << 0xe) >> 8);
  if (fVar3 >= fVar4) {
    return (uint)uVar7 << 8;
  }
  return CONCAT31(uVar7,1);
}
