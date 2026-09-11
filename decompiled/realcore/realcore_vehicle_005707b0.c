/* spd-match: far pct=9.14 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/residual_m375_c2120/batches/20260724T142441Z_w0_tc0 */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))
typedef struct tagMSG { unsigned char _[48]; } MSG, tagMSG, *LPMSG;
extern char s_WorldViewProj_00701860[];
extern char s_SND_WORLDImpact_006be750[];
extern int iRam00000000;
extern int iRam00000008;

int __cdecl FUN_0040ad60();
int __cdecl FUN_0041ff50();
int __cdecl FUN_00487590();
extern int DAT_007361f8;
extern int DAT_007364a0;
extern int DAT_007365a0;
extern int DAT_007365a4;
extern int DAT_007365a8;
extern int DAT_0073d6d8;
extern int DAT_00740500;
extern int DAT_00740504;
extern int DAT_0077a920;
extern int DAT_0078bd50;
extern int DAT_0078f5d8;
extern int _DAT_00704ad0;
extern int _DAT_00704ad4;
extern int _DAT_00704ad8;
extern void LAB_0057080c(void);
extern void LAB_00570822(void);

void FUN_005707b0(void)

{
  float *pfVar1;
  int iVar2;
  int *piVar3;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  pfVar1 = (float *)0x0;
  if (DAT_007361f8 == (int *)0x0) goto LAB_00570822;
  if ((((undefined4 **)DAT_00740504 == (unsigned int)&DAT_00740504) || (DAT_00740504 == (undefined4 *)0x0)) ||
     (DAT_00740504 == (undefined4 *)0x4)) {
LAB_0057080c:
    piVar3 = DAT_007361f8;
    iVar2 = FUN_0041ff50();
    if (iVar2 == 0) {
      iVar2 = *piVar3;
    }
  }
  else {
    if (((undefined4 **)DAT_00740504 == (unsigned int)&DAT_00740504) || (DAT_00740504 == (undefined4 *)0x0)) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = ((int)DAT_00740504) + -1;
    }
    iVar2 = (**(code **)(*piVar3 + 0x40))();
    if (DAT_0078f5d8 != iVar2) {
      DAT_0078f5d8 = iVar2;
    }
    if (iVar2 == 0) goto LAB_0057080c;
  }
  pfVar1 = (float *)(iVar2 + 0x50);
LAB_00570822:
  if ((DAT_0077a920 == 3) && (DAT_007364a0 == 3)) {
    local_30 = DAT_007365a0;
    local_2c = (float)((int)DAT_007365a4);
    local_28 = (float)((int)DAT_007365a8);
    FUN_00487590();
    FUN_0040ad60(&DAT_0078bd50,&local_20,&local_30);
    return;
  }
  if ((pfVar1 != (float *)0x0) ||
     (((undefined4 **)DAT_0073d6d8 != (unsigned int)&DAT_0073d6d8 &&
      (pfVar1 = (float *)(((int)DAT_0073d6d8) + 0x1d0), pfVar1 != (float *)0x0)))) {
    uStack_1c = *(undefined4 *)(((int)DAT_00740500) + 0x44);
    local_20 = *(undefined4 *)(((int)DAT_00740500) + 0x40);
    uStack_18 = *(undefined4 *)(((int)DAT_00740500) + 0x48);
    local_30 = ((int)_DAT_00704ad0) + *pfVar1;
    local_2c = pfVar1[1] + (int)_DAT_00704ad4;
    local_28 = pfVar1[2] + (int)_DAT_00704ad8;
    FUN_0040ad60(&DAT_0078bd50,&local_20,&local_30);
  }
  return;
}
