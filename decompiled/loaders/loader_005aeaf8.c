/* spd-match: far pct=7.14 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8/p1/buckets/p1_03/attempt3_types */
#include "ghidra_compat.h"

int __cdecl FUN_005abf0b();
int __cdecl FUN_005ac68f();
extern unsigned char *_DAT_006cc7dc;
extern int _DAT_006cc858;
extern int _DAT_006cc920;
extern void LAB_005aebcc(void);

void FUN_005aeaf8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,
                 undefined4 param_9)

{
  float fVar1;
  undefined4 *puVar2;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  float local_50 [6];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  float fStack_20;
  float fStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  puVar2 = &local_90;
  switch(((param_8 != (undefined4 *)0x0) << 1 | param_7 != (undefined4 *)0x0) << 1 |
         param_6 != (undefined4 *)0x0) {
  case '\0':
    local_58 = 0;
    local_5c = 0;
    local_60 = 0;
    local_64 = 0;
    local_6c = 0;
    local_70 = 0;
    local_74 = 0;
    local_78 = 0;
    local_80 = 0;
    local_84 = 0;
    local_88 = 0;
    local_8c = 0;
    local_54 = 0x3f800000;
    local_68 = 0x3f800000;
    local_7c = 0x3f800000;
    local_90 = 0x3f800000;
    break;
  case '\x01':
    puVar2 = param_6;
    break;
  case '\x02':
    puVar2 = param_7;
    break;
  case '\x03':
    param_8 = param_7;
    goto LAB_005aebcc;
  case '\x04':
    puVar2 = param_8;
    break;
  case '\x05':
    goto LAB_005aebcc;
  case '\x06':
    param_6 = param_7;
    goto LAB_005aebcc;
  case '\a':
    FUN_005ac68f(&local_90,param_8,param_7);
    param_8 = &local_90;
LAB_005aebcc:
    FUN_005ac68f(&local_90,param_8,param_6);
  }
  if (param_5 != (int *)0x0) {
    local_50[0] = (float)param_5[2];
    if (param_5[2] < 0) {
    local_50[0] = local_50[0] + (float)(unsigned int)_DAT_006cc858;
    }
    local_50[0] = local_50[0] * (float)(unsigned int)_DAT_006cc7dc;
    local_50[1] = 0.0;
    local_50[2] = 0.0;
    local_50[3] = 0.0;
    local_50[4] = 0.0;
    fVar1 = (float)param_5[3];
    if (param_5[3] < 0) {
      fVar1 = fVar1 + _DAT_006cc858;
    }
    local_50[5] = (float)(unsigned int)_DAT_006cc920 * fVar1;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    fStack_28 = (float)param_5[5] - (float)param_5[4];
    uStack_24 = 0;
    fStack_20 = (float)*param_5;
    if (*param_5 < 0) {
      fStack_20 = fStack_20 + (float)(unsigned int)_DAT_006cc858;
    }
    fStack_20 = fStack_20 + local_50[0];
    fStack_1c = (float)param_5[1];
    if (param_5[1] < 0) {
      fStack_1c = fStack_1c + (float)(unsigned int)_DAT_006cc858;
    }
    iStack_18 = param_5[4];
    fStack_1c = fVar1 * (float)(unsigned int)_DAT_006cc7dc + fStack_1c;
    uStack_14 = 0x3f800000;
    FUN_005ac68f(&local_90,puVar2,local_50);
    puVar2 = &local_90;
  }
  FUN_005abf0b(param_1,param_2,param_3,param_4,puVar2,param_9);
  return;
}
