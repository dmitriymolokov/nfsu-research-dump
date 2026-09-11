/* spd-match: far pct=5.13 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/residual_m375_c2120/batches/20260724T142417Z_w0_tc0 */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))
typedef struct tagMSG { unsigned char _[48]; } MSG, tagMSG, *LPMSG;
extern char s_WorldViewProj_00701860[];
extern char s_SND_WORLDImpact_006be750[];
extern int iRam00000000;
extern int iRam00000008;

int __cdecl FUN_0040cb70();
int __cdecl FUN_00466600();
int __cdecl FUN_00466ce0();
int __cdecl FUN_00469810();
int __cdecl FUN_00567160();
int __cdecl FUN_00596570();
extern int DAT_0072cbfc;
extern int DAT_00779c70;
extern int _DAT_00736054;

void FUN_00469580(int *param_1)

{
  float *pfVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  piVar3 = param_1;
  iVar4 = (**(code **)(*param_1 + 0x50))();
  if (iVar4 != 0) {
    FUN_00469810();
    fVar2 = (float)param_1[9];
    if (param_1[2] == 0) {
      piVar7 = (int *)0x0;
    }
    else {
      piVar7 = (int *)(param_1[2] + -4);
    }
    piVar5 = (int *)FUN_0040cb70();
    while ((piVar7 != piVar5 && (fVar2 <= (float)piVar7[0xb]))) {
      if (piVar7[2] == 0) {
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = (int *)(piVar7[2] + -4);
      }
    }
    pfVar1 = (float *)(param_1 + 0xb);
    if (param_1[1] == 0) {
      param_1 = (int *)0x0;
    }
    else {
      param_1 = (int *)(param_1[1] + -4);
    }
    while ((param_1 != piVar5 &&
           ((float)param_1[0xb] < ((int)_DAT_00736054) + *pfVar1 !=
            ((float)param_1[0xb] == ((int)_DAT_00736054) + *pfVar1)))) {
      if (param_1[1] == 0) {
        param_1 = (int *)0x0;
      }
      else {
        param_1 = (int *)(param_1[1] + -4);
      }
    }
    piVar5 = (int *)0x0;
    if (piVar7 == (int *)0x779c6c) {
      if (DAT_00779c70 != 0) {
        piVar5 = (int *)(((int)DAT_00779c70) + -4);
      }
    }
    else if (piVar7[1] != 0) {
      piVar5 = (int *)(piVar7[1] + -4);
    }
    while (piVar7 = piVar5, piVar7 != param_1) {
      if (piVar7[1] == 0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)(piVar7[1] + -4);
      }
      if ((((piVar7 != piVar3) &&
           ((float)piVar3[9] < (float)piVar7[0xb] != ((float)piVar3[9] == (float)piVar7[0xb]))) &&
          ((float)piVar7[9] <= (float)piVar3[0xb])) &&
         (((((float)piVar3[10] < (float)piVar7[0xc] != ((float)piVar3[10] == (float)piVar7[0xc]) &&
            ((float)piVar7[10] <= (float)piVar3[0xc])) &&
           (((short)piVar3[6] < 0 ||
            (((short)piVar7[6] < 0 ||
             (iVar4 = (short)piVar3[6] * 0xde + (int)(short)piVar7[6],
             (1 << ((byte)iVar4 & 7) & (uint)*(byte *)((iVar4 >> 3) + (int)DAT_0072cbfc)) == 0)))))) &&
          (iVar4 = (**(code **)(*piVar7 + 0x50))(), iVar4 != 0)))) {
        piVar6 = piVar7;
        if (*(char *)((int)piVar7 + 0x15) == '\x02') {
          piVar6 = (int *)FUN_00596570();
          (**(code **)*piVar7)(1);
        }
        if (((piVar6 != (int *)0x0) && (iVar4 = FUN_00466600(0), iVar4 != 0)) &&
           (iVar4 = FUN_00567160(), iVar4 != 0)) {
          FUN_00466ce0(piVar6);
        }
      }
    }
  }
  return;
}
