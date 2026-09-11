/* spd-match: far pct=7.66 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_2 */
#include "ghidra_compat.h"

int __cdecl FUN_00427ed0();
int __cdecl FUN_004436d0();
int __cdecl FUN_00564db0();
int __cdecl FUN_00674898();
extern int DAT_0078a2fc;
extern int _DAT_006b7b14;
extern int _DAT_006cc9f0;

undefined4 FUN_00430e00(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  int *piVar6;
  int iVar7;
  ushort uVar8;
  
  iVar2 = param_1;
  iVar7 = *(int *)(param_1 + 4);
  sVar5 = *(short *)(iVar7 + 0x3b4);
  sVar4 = FUN_00564db0(*(undefined4 *)(iVar7 + 0x818),*(undefined4 *)(iVar7 + 0x81c));
  *(undefined4 *)(param_1 + 0x100) = 0;
  uVar1 = DAT_0078a2fc;
  piVar6 = (int *)FUN_004436d0(DAT_0078a2fc);
  if ((((piVar6 != (int *)0x0) || (piVar6 = (int *)FUN_004436d0(uVar1), piVar6 != (int *)0x0)) ||
      (piVar6 = (int *)FUN_004436d0(uVar1), piVar6 != (int *)0x0)) ||
     (piVar6 = (int *)FUN_004436d0(uVar1), piVar6 != (int *)0x0)) {
    iVar7 = *piVar6;
    if (iVar7 == 0) {
      return 0;
    }
    if (iVar7 == 1) {
      sVar4 = FUN_00564db0(piVar6[3],piVar6[4]);
      *(undefined4 *)(param_1 + 0x100) = 1;
    }
    else if (((iVar7 == 2) || (iVar7 == 3)) && (cVar3 = FUN_00427ed0(), cVar3 != '\0')) {
      return 0;
    }
  }
  (*(unsigned short *)&(param_1)) = sVar4;
  uVar8 = (short)param_1 - sVar5;
  if (0x8000 < uVar8) {
    uVar8 = -uVar8;
  }
  if (param_2 != 0) {
    iVar7 = FUN_00674898();
    uVar8 = uVar8 + (short)(iVar7 / 0x168);
  }
  iVar7 = FUN_00674898();
  if (uVar8 < (ushort)((short)((ulonglong)((longlong)iVar7 * 0xb60b60b7) >> 0x28) -
                      ((short)(char)((char)(iVar7 / 0x1680000) + (char)(iVar7 >> 0x1f)) >> 0xf))) {
    return 0;
  }
  iVar7 = *(int *)(iVar2 + 4);
  if (ABS(*(float *)(iVar7 + 0x3d0) * _DAT_006cc9f0) <= _DAT_006b7b14) {
    if (param_2 == 0) {
      return 0;
    }
  }
  else {
    sVar5 = FUN_00564db0(*(undefined4 *)(iVar7 + 0x70),*(undefined4 *)(iVar7 + 0x74));
    uVar8 = (short)param_1 - sVar5;
    if (0x8000 < uVar8) {
      uVar8 = -uVar8;
    }
    if (param_2 != 0) {
      iVar7 = FUN_00674898();
      uVar8 = uVar8 + (short)(iVar7 / 0x168);
    }
    iVar7 = FUN_00674898();
    if (uVar8 < (ushort)((short)((ulonglong)((longlong)iVar7 * 0xb60b60b7) >> 0x28) -
                        ((short)(char)((char)(iVar7 / 0x1680000) + (char)(iVar7 >> 0x1f)) >> 0xf)))
    {
      return 0;
    }
    if ((param_2 == 0) && (*(int *)(*(int *)(iVar2 + 4) + 0x3cc) < 4)) {
      return 0;
    }
  }
  return 1;
}
