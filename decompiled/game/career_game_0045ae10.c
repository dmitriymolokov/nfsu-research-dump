/* spd-match: far pct=7.85 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/residual_m375_c2120/batches/20260724T142417Z_w0_tc0 */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))
typedef struct tagMSG { unsigned char _[48]; } MSG, tagMSG, *LPMSG;
extern char s_WorldViewProj_00701860[];
extern char s_SND_WORLDImpact_006be750[];
extern int iRam00000000;
extern int iRam00000008;

int __cdecl FUN_00458f10();
int __cdecl FUN_00459710();
int __cdecl FUN_0045a7d0();
int __cdecl FUN_0045ad30();
int __cdecl FUN_0045c370();
int __cdecl FUN_0045c760();
extern int DAT_006cc7a4;
extern int DAT_00700638;
extern int _DAT_006b74b8;
extern int _DAT_006cc8bc;

undefined1
FUN_0045ae10(int *param_1,undefined4 *param_2,int *param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  puVar7 = param_2;
  iVar1 = *param_3;
  iVar5 = *(int *)(iVar1 + 0x2c);
  piVar2 = *(int **)(iVar5 + 0x3fc);
  if (((piVar2 == (int *)0x0) || (cVar3 = (**(code **)(*piVar2 + 0x1c))(), cVar3 == '\0')) &&
     (*(char *)(iVar5 + 0x4bc) == '\0')) {
    puVar7 = (undefined4 *)(*(int *)(iVar1 + 0x30) + 0x10);
    puVar6 = param_2;
    for (iVar5 = 0x70; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar6 = puVar6 + 1;
    }
    FUN_00459710(*(undefined4 *)(iVar1 + 0x3d0),iVar1 + 0x60,iVar1 + 0x70);
    FUN_0045a7d0(1);
    uVar4 = 1;
    if (ABS((float)param_1[2]) < _DAT_006cc8bc != (ABS((float)param_1[2]) == _DAT_006cc8bc)) {
      uVar4 = param_5;
    }
    FUN_0045c370(param_2,param_3,DAT_00700638,uVar4,param_1[2],0x47c34f80);
    (*(unsigned char *)&(param_2)) = 1;
  }
  else {
    if (_DAT_006b74b8 == DAT_006cc7a4) {
      FUN_00458f10(0,0);
    }
    else {
      puVar6 = (undefined4 *)(*(int *)(iVar1 + 0x30) + 0x10);
      puVar8 = param_2;
      for (iVar5 = 0x70; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      FUN_00458f10(iVar1,*(float *)(iVar1 + 0x3d4) * ((int)_DAT_006b74b8));
    }
    cVar3 = FUN_0045ad30();
    if (cVar3 == '\0') {
      (*(unsigned char *)&(param_2)) = 0;
      FUN_0045c370(puVar7,param_3,DAT_00700638,param_5,0,0x47c34f80);
    }
    else if (*param_1 == 1) {
      uVar4 = 1;
      if (ABS((float)param_1[2]) < _DAT_006cc8bc != (ABS((float)param_1[2]) == _DAT_006cc8bc)) {
        uVar4 = param_5;
      }
      FUN_0045c370(param_2,param_3,DAT_00700638,uVar4,param_1[2],0x47c34f80);
      (*(unsigned char *)&(param_2)) = 1;
    }
    else {
      (*(unsigned char *)&(param_2)) = FUN_0045c760(param_1,param_2,param_3);
    }
  }
  iVar1 = *param_1;
  if (iVar1 == 1) {
    *(undefined4 *)(*(int *)(*param_3 + 0x2c) + 1000) = 0;
    return (*(unsigned char *)&(param_2));
  }
  if ((1 < iVar1) && (iVar1 < 4)) {
    *(undefined4 *)(*(int *)(*param_3 + 0x2c) + 1000) = 0;
  }
  return (*(unsigned char *)&(param_2));
}
