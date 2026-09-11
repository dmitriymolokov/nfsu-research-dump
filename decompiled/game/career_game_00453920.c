/* spd-match: far pct=4.71 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_0044d5f0();
int __cdecl FUN_0044efd0();
int __cdecl FUN_0044f470();
int __cdecl FUN_00647b70();
extern int _DAT_006b76d8;
extern int _DAT_006ccb4c;
extern void LAB_00453a01(void);
int unaff_ESI;

undefined4 FUN_00453920(int *param_1,float *param_2,undefined4 *param_3)

{
  bool bVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *unaff_ESI;
  float10 fVar6;
  float local_8;
  undefined4 local_4;
  
  piVar2 = param_1;
  *param_1 = 0;
  iVar5 = *(int *)(*unaff_ESI + 0x2c);
  iVar4 = unaff_ESI[0xe5];
  local_8 = 0.0;
  local_4 = 0;
  if ((iVar4 < 0) || (4 < iVar4)) {
    if ((iVar4 < 0xb) || (0x10 < iVar4)) {
      param_1 = (int *)0x0;
    }
    else {
      param_1 = (int *)unaff_ESI[(char)unaff_ESI[0xe2] * 0xe + iVar4 + -3];
    }
  }
  else {
    param_1 = (int *)unaff_ESI[(char)unaff_ESI[0xe2] * 0xe + 7];
  }
  iVar4 = FUN_0044f470(iVar4,param_1,0x47c34f80,&local_8,&local_4);
  cVar3 = (**(code **)(**(int **)(iVar5 + 0x3fc) + 0xc))();
  if ((cVar3 != '\0') && (iVar4 != 0)) {
    iVar5 = FUN_00647b70();
    if ((iVar5 == 6) && (*(int *)(*(int *)(*(int *)(iVar4 + 0x1d4) + 0x90) + 0x1c) != 0)) {
      fVar6 = (float10)FUN_0044d5f0();
      if ((float10)_DAT_006ccb4c < fVar6) {
        bVar1 = true;
        goto LAB_00453a01;
      }
    }
  }
  bVar1 = false;
LAB_00453a01:
  if (((iVar4 != 0) && (!bVar1)) && (local_8 < _DAT_006b76d8 != (local_8 == _DAT_006b76d8))) {
    cVar3 = FUN_0044efd0(iVar4);
    if (cVar3 != '\0') {
      *piVar2 = iVar4;
      *param_2 = local_8;
      *param_3 = local_4;
      return 300;
    }
  }
  return 0xffffffff;
}
