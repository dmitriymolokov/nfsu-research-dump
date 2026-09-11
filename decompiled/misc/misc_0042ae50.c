/* spd-match: far pct=4.09 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2440_int_float */
#include "ghidra_compat.h"

int __cdecl FUN_00440740();
int __cdecl FUN_00490560();
int __cdecl FUN_00492e70();
int __cdecl FUN_00494180();
int __cdecl FUN_00565ce0();
extern int DAT_006b7a9c;
extern int DAT_0073ad34;
extern int _DAT_006b7aa8;
extern int _DAT_006cc7bc;
extern int _DAT_006ccb4c;
extern unsigned char *PTR_PTR_006fbddc;
extern void LAB_006861ec(void);
void *ExceptionList;

int * FUN_0042ae50(int *param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  undefined *puVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  int iVar6;
  undefined1 local_2d0 [32];
  int aiStack_2b0 [160];
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (unsigned char *)(unsigned int)&LAB_006861ec;
  local_10 = ExceptionList;
  piVar1 = param_1 + 3;
  ExceptionList = &local_10;
  param_1[2] = 0;
  param_1[8] = 1;
  param_1[5] = 2;
  *piVar1 = 100;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[9] = 0x4000;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  local_8 = 0;
  if (param_3 < 1) {
    param_3 = 0;
  }
  else if (2 < param_3) {
    param_3 = 2;
  }
  puVar2 = (&PTR_PTR_006fbddc)[param_3];
  iVar6 = *(int *)(puVar2 + 0x20);
  param_1[0x16] = (int)(puVar2 + 0x24);
  param_1[0x17] = iVar6;
  iVar6 = *(int *)(puVar2 + 0x4c);
  param_1[0x18] = (int)(puVar2 + 0x50);
  param_1[0x19] = iVar6;
  iVar6 = *(int *)(puVar2 + 0x78);
  param_1[0x1a] = (int)(puVar2 + 0x7c);
  param_1[0x1b] = iVar6;
  param_1[0xf] = (int)piVar1;
  param_1[0x10] = 0;
  FUN_00490560(param_1 + 0xf,puVar2);
  fVar4 = (unsigned int)(_DAT_006cc7bc);
  *param_1 = param_2;
  fVar3 = (unsigned int)(_DAT_006cc7bc);
  if ((fVar4 < (float)(unsigned int)(param_4)) && (fVar3 = (float)(unsigned int)(param_4), _DAT_006ccb4c < (float)(unsigned int)(param_4))) {
    fVar3 = (unsigned int)(_DAT_006ccb4c);
  }
  param_1[1] = (int)fVar3;
  param_1[2] = DAT_0073ad34;
  fVar3 = *(float *)(*(int *)(param_2 + 4) + 0x3d4) * (float)(unsigned int)(param_1[1]) + _DAT_006b7aa8;
  pvVar5 = _malloc(0x18);
  (*(unsigned char *)&(local_8)) = (unsigned char)2;
  if (pvVar5 == (void *)0x0) {
    param_4 = (int *)0x0;
  }
  else {
    param_4 = (int *)FUN_00492e70(pvVar5,DAT_006b7a9c,fVar3);
  }
  (*(unsigned char *)&(local_8)) = (unsigned char)1;
  if ((*param_4 != 0) && (3 < param_4[1])) {
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    FUN_00440740();
    (*(unsigned char *)&(local_8)) = (unsigned char)3;
    FUN_00494180(local_2d0,piVar1,0,0,0);
    iVar6 = 0;
    (*(unsigned char *)&(local_8)) = (unsigned char)1;
    if (0 < local_30) {
      do {
        *(char *)(aiStack_2b0[iVar6] + 8) = *(char *)(aiStack_2b0[iVar6] + 8) + -1;
        iVar6 = iVar6 + 1;
      } while (iVar6 < local_30);
    }
  }
  (*(unsigned char *)&(local_8)) = (unsigned char)1;
  if (*param_4 != 0) {
    FUN_00565ce0();
  }
  _free(param_4);
  ExceptionList = local_10;
  return param_1;
}
