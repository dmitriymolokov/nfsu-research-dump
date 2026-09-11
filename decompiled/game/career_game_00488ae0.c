/* spd-match: far pct=9.34 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2115 */
#include "ghidra_compat.h"

int __cdecl FUN_0040b780();
int __cdecl FUN_00440740();
int __cdecl FUN_00440a40();
int __cdecl FUN_0047d070();
int __cdecl FUN_00483860();
int __cdecl FUN_00564b10();
int __cdecl FUN_00564fa0();
int __cdecl FUN_005673e0();
int __cdecl FUN_00674898();
extern int DAT_006cc7a4;
extern int DAT_006fbe78;
extern int DAT_00705b48;
extern int DAT_007344d0;
extern int DAT_00734968;
extern int DAT_00735f30;
extern int DAT_00735f34;
extern int DAT_00735f38;
extern int DAT_00735f5c;
extern int DAT_00736824;
extern int DAT_00736828;
extern int DAT_00736830;
extern int DAT_00736834;
extern int DAT_00736838;
extern int DAT_0073ad38;
extern int _DAT_006cc7ac;
extern int _DAT_006ccb4c;
extern int _DAT_006fbe6c;
extern int _DAT_006fbe70;
extern int _DAT_006fbe74;
extern int _DAT_00705b40;
extern int _DAT_00705b44;
extern int _DAT_00736820;
extern void LAB_0068600b(void);
void *ExceptionList;

void __fastcall FUN_00488ae0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined2 uVar4;
  float *pfVar5;
  int iVar6;
  int extraout_EDX;
  int extraout_EDX_00;
  float10 fVar7;
  float10 fVar8;
  float local_348;
  undefined1 local_330 [16];
  undefined1 local_320 [64];
  undefined1 local_2e0 [32];
  int aiStack_2c0 [160];
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_0068600b;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  if (-1 < DAT_006fbe78) {
    ExceptionList = &local_1c;
    if ((((DAT_00734968 != 0) && (ExceptionList = &local_1c, DAT_007344d0 != 0)) &&
        (ExceptionList = &local_1c, DAT_006fbe78 < *(int *)(((int)DAT_007344d0) + 0x2000))) &&
       (pfVar5 = (float *)(((int)DAT_006fbe78) * 0x10 + DAT_007344d0), ExceptionList = &local_1c,
       pfVar5 != (float *)0x0)) {
      fVar1 = ((int)_DAT_00705b40) - _DAT_00736820;
      fVar2 = ((int)_DAT_00705b44) - DAT_00736824;
      fVar3 = ((int)DAT_00705b48) - DAT_00736828;
      ExceptionList = &local_1c;
      FUN_005673e0(0x41200000);
      _DAT_00705b40 = *pfVar5 + fVar1;
      _DAT_00705b44 = fVar2 + pfVar5[1];
      DAT_00705b48 = fVar3 + pfVar5[2];
      DAT_00736828 = pfVar5[2];
      _DAT_00736820 = *pfVar5;
      DAT_00736824 = pfVar5[1];
    }
    DAT_006fbe78 = -1;
  }
  if (DAT_00736834 != DAT_006cc7a4) {
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    FUN_00440740();
    fVar7 = (float10)FUN_00440a40(local_2e0,&DAT_00736830,0,0,0);
    DAT_00736838 = (float)(fVar7 + (float10)((int)_DAT_006cc7ac));
    fVar1 = ((int)_DAT_00705b40) - _DAT_00736820;
    fVar2 = ((int)_DAT_00705b44) - DAT_00736824;
    fVar3 = ((int)DAT_00705b48) - DAT_00736828;
    FUN_005673e0(0x41200000);
    _DAT_00705b40 = fVar1 + DAT_00736830;
    _DAT_00705b44 = fVar2 + DAT_00736834;
    DAT_00736824 = DAT_00736834;
    DAT_00705b48 = fVar3 + DAT_00736838;
    DAT_00736828 = DAT_00736838;
    iVar6 = 0;
    _DAT_00736820 = DAT_00736830;
    DAT_00736830 = 0.0;
    DAT_00736834 = 0.0;
    DAT_00736838 = 0.0;
    if (0 < local_40) {
      do {
        *(char *)(aiStack_2c0[iVar6] + 8) = *(char *)(aiStack_2c0[iVar6] + 8) + -1;
        iVar6 = iVar6 + 1;
      } while (iVar6 < local_40);
    }
  }
  FUN_00674898();
  FUN_00674898();
  FUN_00564fa0();
  if (((*(short *)(param_1 + 0x3c) != 0) || (*(short *)(param_1 + 0x3e) != 0)) ||
     (iVar6 = DAT_00735f34, *(float *)(param_1 + 0x2c) != DAT_006cc7a4)) {
    FUN_00674898();
    FUN_00674898();
    FUN_00674898();
    FUN_00564fa0();
    FUN_00674898();
    if (DAT_00735f34 == 0) {
      if (DAT_00735f30 == 0) {
        fVar1 = DAT_0073ad38 * *(float *)(param_1 + 0x2c);
      }
      else {
        fVar1 = _DAT_006fbe6c * *(float *)(param_1 + 0x2c) * ((int)DAT_0073ad38);
      }
    }
    else {
      fVar1 = _DAT_006fbe70 * *(float *)(param_1 + 0x2c) * ((int)DAT_0073ad38);
    }
    if (DAT_00735f38 != 0) {
      fVar1 = fVar1 * ((int)_DAT_006fbe74);
    }
    DAT_00705b48 = ((int)DAT_00705b48) + fVar1;
    fVar7 = (float10)FUN_00564b10();
    fVar8 = (float10)FUN_00564b10();
    _DAT_00736820 =
         (float)(fVar8 * (float10)(float)fVar7 * (float10)((int)_DAT_006ccb4c) + (float10)((int)_DAT_00705b40));
    fVar8 = (float10)FUN_00564b10();
    DAT_00736824 = (float)(fVar8 * (float10)(float)fVar7 * (float10)((int)_DAT_006ccb4c) +
                          (float10)((int)_DAT_00705b44));
    fVar7 = (float10)FUN_00564b10();
    DAT_00736828 = (float)(fVar7 * (float10)((int)_DAT_006ccb4c) + (float10)((int)DAT_00705b48));
    iVar6 = extraout_EDX;
  }
  if (*(float *)(param_1 + 0x30) != DAT_006cc7a4) {
    if (iVar6 == 0) {
      if (DAT_00735f30 == 0) {
        local_348 = DAT_0073ad38 * *(float *)(param_1 + 0x30);
      }
      else {
        local_348 = _DAT_006fbe6c * *(float *)(param_1 + 0x30) * ((int)DAT_0073ad38);
      }
    }
    else {
      local_348 = _DAT_006fbe70 * *(float *)(param_1 + 0x30) * ((int)DAT_0073ad38);
    }
    if (DAT_00735f38 != 0) {
      local_348 = ((int)_DAT_006fbe74) * local_348;
    }
    fVar7 = (float10)FUN_00564b10();
    fVar8 = (float10)FUN_00564b10();
    _DAT_00705b40 = (float)(fVar7 * (float10)local_348) + _DAT_00705b40;
    _DAT_00705b44 = (float)((float10)((int)_DAT_00705b44) + fVar8 * (float10)local_348);
    _DAT_00736820 = (float)(fVar7 * (float10)local_348) + _DAT_00736820;
    DAT_00736824 = (float)(fVar8 * (float10)local_348 + (float10)((int)DAT_00736824));
    iVar6 = extraout_EDX_00;
  }
  if (*(float *)(param_1 + 0x34) != DAT_006cc7a4) {
    if (iVar6 == 0) {
      if (DAT_00735f30 == 0) {
        local_348 = DAT_0073ad38 * *(float *)(param_1 + 0x34);
      }
      else {
        local_348 = _DAT_006fbe6c * *(float *)(param_1 + 0x34) * ((int)DAT_0073ad38);
      }
    }
    else {
      local_348 = _DAT_006fbe70 * *(float *)(param_1 + 0x34) * ((int)DAT_0073ad38);
    }
    if (DAT_00735f38 != 0) {
      local_348 = ((int)_DAT_006fbe74) * local_348;
    }
    fVar1 = ((int)_DAT_00736820) - _DAT_00705b40;
    fVar2 = ((int)DAT_00736824) - _DAT_00705b44;
    fVar3 = ((int)DAT_00736828) - DAT_00705b48;
    FUN_005673e0(local_348);
    _DAT_00705b40 = fVar1 + _DAT_00705b40;
    _DAT_00705b44 = fVar2 + _DAT_00705b44;
    DAT_00705b48 = fVar3 + DAT_00705b48;
    _DAT_00736820 = fVar1 + _DAT_00736820;
    DAT_00736824 = fVar2 + DAT_00736824;
    DAT_00736828 = fVar3 + DAT_00736828;
    iVar6 = DAT_00735f34;
  }
  if (*(float *)(param_1 + 0x38) != DAT_006cc7a4) {
    if (iVar6 == 0) {
      if (DAT_00735f30 == 0) {
        local_348 = DAT_0073ad38 * *(float *)(param_1 + 0x38);
      }
      else {
        local_348 = _DAT_006fbe6c * *(float *)(param_1 + 0x38) * ((int)DAT_0073ad38);
      }
    }
    else {
      local_348 = _DAT_006fbe70 * *(float *)(param_1 + 0x38) * ((int)DAT_0073ad38);
    }
    if (DAT_00735f38 != 0) {
      local_348 = ((int)_DAT_006fbe74) * local_348;
    }
    fVar7 = (float10)FUN_00564b10();
    fVar8 = (float10)FUN_00564b10();
    _DAT_00705b40 = (float)(fVar7 * (float10)local_348) + _DAT_00705b40;
    _DAT_00705b44 = (float)((float10)((int)_DAT_00705b44) + fVar8 * (float10)local_348);
    _DAT_00736820 = (float)(fVar7 * (float10)local_348) + _DAT_00736820;
    DAT_00736824 = (float)(fVar8 * (float10)local_348 + (float10)((int)DAT_00736824));
  }
  FUN_00674898();
  FUN_00483860(local_330);
  FUN_0040b780(local_330);
  if (DAT_00735f5c == 0) {
    uVar4 = FUN_00674898();
    *(undefined2 *)(*(int *)(param_1 + 0x1c) + 0xc4) = uVar4;
  }
  FUN_0047d070(*(undefined4 *)(param_1 + 0x1c),local_320,DAT_0073ad38);
  ExceptionList = local_1c;
  return;
}
