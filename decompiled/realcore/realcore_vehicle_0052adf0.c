/* spd-match: far pct=12.07 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2440_float_int */
#include "ghidra_compat.h"

extern const char s_Right_Road_Noise_Transition_006beffc[];
extern const char s_Left_Road_Noise_Transition_006bf018[];

int __cdecl FUN_00524790();
int __cdecl FUN_005256f0();
int __cdecl FUN_0052ea00();
int __cdecl FUN_00532840();
int __cdecl FUN_0064b510();
int __cdecl FUN_0064b580();
int __cdecl FUN_0064b5a0();
int __cdecl FUN_0064bbd0();
int __cdecl FUN_00674898();
extern int DAT_006f1dd8;
extern int _DAT_006cc9f0;
extern int _DAT_007058ac;
extern int _DAT_007058c8;
extern unsigned char *PTR_s_CSISSOUND_006f8714;
extern void LAB_00685a36(void);
void *ExceptionList;

void FUN_0052adf0(int *param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar2 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00685a36;
  local_c = ExceptionList;
  if ((DAT_006f1dd8 != 0) && ((char)param_1[3] != '\0')) {
    _DAT_007058ac = (int *)(unsigned int)((*(float *)(*(int *)(param_1[1] + 0x234) + 0x3d4) * _DAT_006cc9f0));
    ExceptionList = &local_c;
    local_10 = _DAT_007058ac;
    FUN_00532840();
    iVar3 = FUN_00674898();
    switch(param_2) {
    case 0:
    case 1:
      iVar4 = 12000;
      break;
    case 2:
    case 3:
      iVar4 = 0x5fb4;
      break;
    default:
      iVar4 = 0x7fff;
    }
    iVar3 = iVar4 * iVar3 >> 0xf;
    _DAT_007058c8 = local_10;
    param_1 = (int *)iVar3;
    FUN_00532840();
    FUN_00674898();
    if ((char)param_3 == '\0') {
      piVar2[0x91] = iVar3;
      FUN_0052ea00(piVar2[1] + 0x14f0,0);
      (**(code **)(*piVar2 + 8))(&param_1,8,*(undefined4 *)(piVar2[1] + 0x264));
      piVar1 = (int *)piVar2[0x8e];
      PTR_s_CSISSOUND_006f8714 = (unsigned char *)s_Right_Road_Noise_Transition_006beffc;
      if (piVar1 != (int *)0x0) {
        if (*piVar1 != 0) {
          FUN_0064bbd0();
        }
        FUN_0064b510(&local_10);
        FUN_0064b580();
        (**(code **)(*local_10 + 4))(piVar1);
        FUN_0064b5a0();
      }
      param_3 = (int *)FUN_005256f0(0x1c);
      uStack_4 = 1;
      if (param_3 == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_00524790(1,0);
      }
      piVar2[0x8e] = iVar3;
    }
    else {
      piVar2[0x90] = iVar3;
      FUN_0052ea00(piVar2[1] + 0x14e0,0);
      (**(code **)(*piVar2 + 8))(&param_1,8,*(undefined4 *)(piVar2[1] + 0x264));
      piVar1 = (int *)piVar2[0x8f];
      PTR_s_CSISSOUND_006f8714 = (unsigned char *)s_Left_Road_Noise_Transition_006bf018;
      if (piVar1 != (int *)0x0) {
        if (*piVar1 != 0) {
          FUN_0064bbd0();
        }
        FUN_0064b510(&param_3);
        FUN_0064b580();
        (**(code **)(*param_3 + 4))(piVar1);
        FUN_0064b5a0();
      }
      param_3 = (int *)FUN_005256f0(0x1c);
      uStack_4 = 0;
      if (param_3 == (int *)0x0) {
        piVar2[0x8f] = 0;
      }
      else {
        iVar3 = FUN_00524790(1,0);
        piVar2[0x8f] = iVar3;
      }
    }
  }
  ExceptionList = local_c;
  return;
}
