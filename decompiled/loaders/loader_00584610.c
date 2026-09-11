/* spd-match: far pct=14.81 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

int __cdecl FUN_00584270();
extern int _DAT_006cc7dc;
int unaff_ESI;
int _param_3;
int _param_4;

void FUN_00584610(float param_1,float param_2,char param_3,char param_4)

{
  float fVar1;
  int unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 0x80) = *(undefined4 *)(unaff_ESI + 0x7c);
  fVar1 = param_1 - *(float *)(unaff_ESI + 0x80);
  *(float *)(unaff_ESI + 0x7c) = param_1;
  if (param_4 == '\0') {
    _param_4 = (_DAT_006cc7dc * fVar1 + *(float *)(unaff_ESI + 0x80)) * param_2;
  }
  else {
    _param_4 = 0.0;
  }
  if (param_3 == '\0') {
    _param_3 = fVar1 / param_2;
  }
  else {
    _param_3 = 0.0;
  }
  FUN_00584270(param_2);
  FUN_00584270(_param_4);
  FUN_00584270(_param_3);
  return;
}
