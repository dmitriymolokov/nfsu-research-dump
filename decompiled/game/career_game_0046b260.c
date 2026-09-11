/* spd-match: far pct=4.90 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_7/buckets/game_p1/attempt2_fixed */
#include "ghidra_compat.h"

int __cdecl FUN_0046b070();
int __cdecl FUN_00472830();
int __cdecl FUN_00472950();
int __cdecl FUN_00567370();
extern int DAT_006b724c;
extern int _DAT_006cc79c;
extern int _DAT_006cc7b8;
extern int _DAT_006ccd38;
extern void LAB_0046b390(void);
extern void LAB_0046b3db(void);
extern void LAB_0046b3f2(void);
int unaff_EDI;

void FUN_0046b260(int param_1,float param_2)

{
  char cVar1;
  char cVar2;
  float fVar3;
  undefined4 *puVar4;
  float *pfVar5;
  int iVar6;
  float unaff_EDI;
  float fStack_158;
  float fStack_154;
  float fStack_13c;
  float fStack_11c;
  float fStack_110;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  undefined1 auStack_fc [4];
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  undefined1 local_e0 [4];
  int iStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_c0;
  float fStack_b0;
  undefined1 auStack_a8 [12];
  undefined1 auStack_9c [52];
  undefined1 auStack_68 [24];
  undefined1 local_50 [76];
  
  fStack_154 = param_2;
  fStack_158 = *(float *)local_50;
  (**(code **)(**(int **)(param_1 + 0xc) + 0x30))(local_e0);
  (**(code **)(**(int **)(param_1 + 0x10) + 0x30))(auStack_fc,auStack_9c,param_2);
  cVar1 = *(char *)((int)*(int **)(param_1 + 0xc) + 0x15);
  if (cVar1 == '\x03') {
    FUN_0046b070(param_1);
    goto LAB_0046b3f2;
  }
  cVar2 = *(char *)((int)*(int **)(param_1 + 0x10) + 0x15);
  if (cVar2 == '\x03') {
    FUN_0046b070(param_1);
    fStack_158 = -fStack_158;
    fStack_154 = -param_2;
    unaff_EDI = -unaff_EDI;
    goto LAB_0046b3f2;
  }
  if ((cVar1 == '\x02') || (cVar1 == '\x01')) {
    pfVar5 = (float *)(**(code **)(**(int **)(param_1 + 0x10) + 0xc))();
    fStack_158 = -*pfVar5;
    fStack_154 = -pfVar5[1];
    unaff_EDI = -pfVar5[2];
LAB_0046b390:
    if (SQRT(fStack_158 * fStack_158 +
             fStack_154 * fStack_154 + unaff_EDI * unaff_EDI) < _DAT_006ccd38) goto LAB_0046b3db;
  }
  else {
    if ((cVar2 == '\x02') || (cVar2 == '\x01')) {
      puVar4 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0xc) + 0xc))();
      fStack_154 = (float)puVar4[1];
      fStack_158 = (float)*puVar4;
      unaff_EDI = (float)puVar4[2];
      goto LAB_0046b390;
    }
LAB_0046b3db:
    unaff_EDI = fStack_100 - fStack_f0;
    fStack_154 = fStack_104 - fStack_f4;
    fStack_158 = fStack_108 - fStack_f8;
  }
  FUN_00567370();
LAB_0046b3f2:
  fStack_13c = 0.0;
  fStack_11c = 0.005;
  iStack_dc = 0;
  while( true ) {
    fVar3 = fStack_f0;
    fStack_13c = fStack_11c + fStack_13c;
    if (fStack_11c < _DAT_006cc7b8) {
      fStack_11c = fStack_11c + _DAT_006cc79c;
    }
    fStack_110 = unaff_EDI * fStack_13c;
    if (fStack_110 <= DAT_006b724c) {
      if (fStack_110 < -DAT_006b724c) {
        fStack_110 = -DAT_006b724c;
      }
    }
    else {
      fStack_110 = DAT_006b724c;
    }
    fStack_d8 = fStack_108;
    fStack_d4 = fStack_104;
    fStack_d0 = fStack_100;
    iVar6 = (**(code **)(**(int **)(param_1 + 0xc) + 0x60))();
    if (iVar6 != 0) {
      fStack_c0 = fVar3 - fStack_110;
    }
    iVar6 = (**(code **)(**(int **)(param_1 + 0x10) + 0x60))();
    if (iVar6 != 0) {
      fStack_d8 = fStack_d8 + fStack_158 * fStack_13c;
      fStack_d4 = fStack_d4 + fStack_154 * fStack_13c;
      fStack_d0 = fStack_d0 + fStack_110;
      fStack_b0 = fStack_d0;
    }
    FUN_00472830(auStack_68,auStack_a8,&fStack_d8);
    FUN_00472950();
    if ((*(char *)(*(int *)(param_1 + 0x14) + 0x14) == '\0') ||
       (*(char *)(*(int *)(param_1 + 0x14) + 0x15) == '\0')) break;
    iStack_dc = iStack_dc + 1;
    if (0x13 < iStack_dc) {
      return;
    }
  }
  *(float *)(param_1 + 0x20) = fStack_158 * fStack_13c;
  *(float *)(param_1 + 0x24) = fStack_154 * fStack_13c;
  *(float *)(param_1 + 0x28) = fStack_110;
  return;
}
