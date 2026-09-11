/* spd-match: far pct=7.57 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00462F90 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00584cd0();
extern int DAT_006cc7a4;
extern int DAT_00705f00;
extern int DAT_00705f10;
extern int _DAT_006cc7bc;
extern int _DAT_006cc7dc;
extern int _DAT_006cca20;
extern int _DAT_006ccab0;
extern int _DAT_006ccc94;
extern int _DAT_007000ec;
extern int _DAT_007000f0;
extern char stack0xffffff98;
void __fastcall FUN_00462f90(int * obj, float *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;

  float *pfVar7;
  undefined *puVar8;
  float local_5c;
  float local_58;
  float local_54;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  undefined1 auStack_44 [4];
  undefined4 local_40;
  undefined4 local_3c;
  float local_38;
  undefined4 local_30;
  undefined4 local_2c;
  float local_28;
  undefined1 local_20 [28];
  
  if ((char)obj[0xc] == '\0') {
    obj[8] = 0;
    obj[9] = 0;
    obj[10] = 0;
    if (param_1 != (float *)0x0) {
      *param_1 = 0.0;
      return;
    }
  }
  else {
    iVar2 = obj[1];
    local_54 = *(float *)(unsigned int)((iVar2 + 0xa8));
    local_50 = 0;
    local_4c = 0;
    local_48 = 0.0;
    local_5c = SQRT(*(float *)(unsigned int)((iVar2 + 0xa8)) * *(float *)(unsigned int)((iVar2 + 0xa8)) +
                    *(float *)(unsigned int)((iVar2 + 0xa4)) * *(float *)(unsigned int)((iVar2 + 0xa4)) +
                    *(float *)(unsigned int)((iVar2 + 0xa0)) * *(float *)(unsigned int)((iVar2 + 0xa0))) / (float)obj[2];
    fVar4 = -((float)obj[3] * *(float *)*obj * local_5c *
             ((_DAT_006cc7bc - (float)obj[4]) * (_DAT_007000ec - _DAT_006cc7bc) + _DAT_006cc7bc))
    ;
    fVar1 = *(float *)(unsigned int)((iVar2 + 0xa4));
    obj[8] = (int)(fVar4 * *(float *)(unsigned int)((iVar2 + 0xa0)));
    obj[9] = (int)(fVar1 * fVar4);
    obj[10] = (int)(local_54 * fVar4);
    if (_DAT_006cc7dc <= (float)obj[5]) {
      local_48 = (_DAT_006cc7bc - (float)obj[4]) * _DAT_007000f0;
    }
    FUN_00584cd0();
    iVar2 = obj[1];
    fVar1 = *(float *)(unsigned int)((iVar2 + 0x58));
    if (*(float *)(unsigned int)((iVar2 + 0x58)) < DAT_006cc7a4) {
      fVar1 = DAT_006cc7a4;
    }
    if (_DAT_006cc7dc <= (float)obj[5]) {
      fVar1 = _DAT_006cc7bc;
    }
    fVar4 = DAT_006cc7a4;
    fVar5 = DAT_006cc7a4;
    fVar6 = _DAT_006cc7bc;
    if (_DAT_006ccab0 < local_5c) {
      fVar4 = _DAT_006cc7bc / local_5c;
      fVar6 = fVar4 * *(float *)(unsigned int)((iVar2 + 0xa0));
      fVar5 = *(float *)(unsigned int)((iVar2 + 0xa4)) * fVar4;
      fVar4 = *(float *)(unsigned int)((iVar2 + 0xa8)) * fVar4;
    }
    fVar4 = fVar6 * *(float *)(unsigned int)((iVar2 + 0x30)) +
            fVar5 * *(float *)(unsigned int)((iVar2 + 0x34)) + fVar4 * *(float *)(unsigned int)((iVar2 + 0x38));
    if (fVar4 < DAT_006cc7a4) {
      fVar4 = DAT_006cc7a4;
    }
    fVar4 = fVar4 * fVar4 * fVar4 * fVar4;
    iVar3 = *obj;
    if ((float)obj[5] == DAT_006cc7a4) {
      local_58 = (*(float *)(unsigned int)((iVar3 + 8)) + *(float *)(unsigned int)((iVar3 + 4))) * fVar4 * fVar1 * local_5c;
      local_54 = _DAT_006cca20 * local_58;
      local_58 = local_58 * _DAT_006ccc94;
    }
    else {
      local_54 = fVar4 * *(float *)(unsigned int)((iVar3 + 4)) * fVar1 * local_5c;
      local_58 = fVar4 * *(float *)(unsigned int)((iVar3 + 8)) * fVar1 * local_5c;
    }
    local_38 = -local_54;
    local_28 = -local_58;
    local_40 = 0;
    local_3c = 0;
    local_30 = 0;
    local_2c = 0;
    FUN_00462f90(local_20,&local_40,iVar2 + 0x30);
    puVar8 = &DAT_00705f00;
    pfVar7 = &local_5c;
    FUN_00462f90(pfVar7,&DAT_00705f00,iVar2 + 0x30);
    FUN_00584cd0();
    iVar2 = obj[1];
    FUN_00462f90(&stack0xffffff98,&local_48,iVar2 + 0x30);
    FUN_00462f90(auStack_44,&DAT_00705f10,iVar2 + 0x30);
    FUN_00584cd0();
    if (param_1 != (float *)0x0) {
      *param_1 = (float)(unsigned int)(pfVar7) + (float)(unsigned int)(puVar8);
    }
  }
  return;
}
