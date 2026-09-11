/* spd-match: far pct=8.08 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2069_void_illegal */
#include "ghidra_compat.h"

int __cdecl FUN_00427930();
int __cdecl FUN_00427f70();
int __cdecl FUN_004280a0();
int __cdecl FUN_00429b10();
int __cdecl FUN_0042a4d0();
int __cdecl FUN_0042a530();
int __cdecl FUN_004314a0();
int __cdecl FUN_00442590();
int __fastcall FUN_00457040(int);
int __cdecl FUN_0059a960();
int __cdecl FUN_00674898();
extern int DAT_006cc7a4;
extern int DAT_00700d58;
extern int DAT_007361a8;
extern int DAT_0073ad34;
extern int DAT_0078a344;
extern int _DAT_006cca38;
extern int _DAT_00700d5c;

float10 FUN_004264d0(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int extraout_EDX;
  float10 fVar8;
  int unaff_retaddr;
  float fVar9;
  float fVar10;
  undefined4 uStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  FUN_0042a530();
  FUN_00429b10();
  fVar8 = (**(float10 (**)())(**(int **)(param_1 + 0x34) + 4))();
  fVar10 = (float)fVar8;
  FUN_00427930();
  FUN_0042a4d0();
  if (*(int *)(unaff_retaddr + 0x87c) != 0) {
    iVar5 = *(int *)(*(int *)(unaff_retaddr + 0x14) + 4);
    if ((iVar5 == 1) && (*(char *)(*(int *)(unaff_retaddr + 0x14) + 0x734) == '\0')) {
      FUN_004314a0();
      *(undefined4 *)(unaff_retaddr + 0x87c) = 0;
      return (float10)fVar10;
    }
    if (iVar5 != 3) {
      uVar4 = (**(code **)(**(int **)(unaff_retaddr + 0x2c) + 0x14))(1);
      iVar5 = (**(code **)(**(int **)(iStack_4 + 0x2c) + 0x18))(1);
      fVar10 = 0.0;
      fVar1 = *(float *)(iStack_8 + 0x3d0);
      if (*(float *)(iStack_8 + 0x3d0) <= DAT_006cc7a4) {
        fVar1 = DAT_006cc7a4;
      }
      fVar2 = *(float *)(iStack_8 + 0x818) * *(float *)(iStack_8 + 0x90) +
              *(float *)(iStack_8 + 0x81c) * *(float *)(iStack_8 + 0x94);
      if (fVar2 <= DAT_006cc7a4) {
        fVar2 = DAT_006cc7a4;
      }
      fVar9 = fVar2 * fVar1;
      if (DAT_00700d58 <= fVar2 * fVar1) {
        fVar9 = DAT_00700d58;
      }
      uStack_10 = 0x3f800000;
      if ((*(int *)(*(int *)(iStack_8 + 0x14) + 4) == 2) &&
         (iVar6 = (**(code **)(**(int **)(iStack_8 + 0x2c) + 0x40))(), iVar6 == 1)) {
        uStack_10 = 0xbf800000;
      }
      if ((DAT_0078a344 != '\0') || (DAT_007361a8 != 0)) {
        iVar6 = (**(code **)(**(int **)(iStack_8 + 0x2c) + 0x1c))(1);
        iVar7 = (**(code **)(**(int **)(iStack_c + 0x2c) + 0x40))();
        if (iVar7 == 1) {
          iVar6 = FUN_00457040(iVar6);
        }
        if ((iVar5 != 0) && (iVar6 != -1)) {
          fVar8 = (float10)FUN_00442590();
          fVar10 = (float)fVar8;
        }
      }
      FUN_00427f70(iStack_8,uVar4,iVar5,fVar9,1,uStack_10,0,0,fVar10);
      *(undefined4 *)(iStack_8 + 0x87c) = 0;
      return (float10)param_2;
    }
    FUN_0059a960(unaff_retaddr);
    *(undefined4 *)(unaff_retaddr + 0x87c) = 0;
    return (float10)fVar10;
  }
  cVar3 = FUN_004280a0();
  if (((((cVar3 != '\0') && (extraout_EDX != 0)) && (extraout_EDX != 0x7fffffff)) &&
      ((iVar5 = *(int *)(unaff_retaddr + 0x884),
       *(float *)(unaff_retaddr + 0x888) - _DAT_00700d5c <
       (float)(DAT_0073ad34 - iVar5) * _DAT_006cca38 &&
       (fVar1 = (float)(DAT_0073ad34 - extraout_EDX) * _DAT_006cca38, fVar1 < _DAT_00700d5c)))) &&
     (DAT_006cc7a4 <= fVar1)) {
    iVar6 = FUN_00674898();
    *(int *)(unaff_retaddr + 0x884) = iVar5 + iVar6;
    return (float10)fVar10;
  }
  return (float10)fVar10;
}
