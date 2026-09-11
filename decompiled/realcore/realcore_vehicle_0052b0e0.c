/* spd-match: far pct=12.66 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_8/p0/buckets/p0_02/thiscall_tp_attempt3 */
#include "ghidra_compat.h"

extern char s_Right_Road_Noise_006befd8[];
extern char s_Left_Road_Noise_006befec[];

int __cdecl FUN_005256f0(...);
int __cdecl FUN_0064b510(...);
int __cdecl FUN_0064b580(...);
int __cdecl FUN_0064b5a0(...);
int __cdecl FUN_0064bbd0(...);
int __cdecl FUN_0064c000(...);
int __cdecl FUN_0064c1a0(...);
extern int DAT_006f1dd8;
extern int DAT_00744230;
extern void *PTR_s_CSISSOUND_006f8714;
extern void *PTR_s_FX_ROADNOISE_006f81b8;
extern void LAB_00684dd6(...);
void *ExceptionList;

struct ThisCallBox {
  void FUN_0052b0e0(int *param_2, int *param_3);
};
void ThisCallBox::FUN_0052b0e0(int *param_2, int *param_3) {
  int param_1 = (int)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar2 = param_2;
  uStack_4 = 0xffffffff;
  puStack_8 = (undefined1 *)&LAB_00684dd6;
  local_c = ExceptionList;
  if ((DAT_006f1dd8 != 0) && ((char)param_2[3] != '\0')) {
    if ((char)param_3 == '\0') {
      piVar1 = (int *)param_2[0x8c];
      PTR_s_CSISSOUND_006f8714 = (unsigned char *)s_Right_Road_Noise_006befd8;
      ExceptionList = &local_c;
      if (piVar1 != (int *)0x0) {
        ExceptionList = &local_c;
        if (*piVar1 != 0) {
          ExceptionList = &local_c;
          FUN_0064bbd0();
        }
        FUN_0064b510(&param_2);
        FUN_0064b580();
        (**(code **)(*param_2 + 4))(piVar1);
        FUN_0064b5a0();
      }
      iVar3 = FUN_005256f0(0x1c);
      uStack_4 = 1;
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        if (param_1 < 0) {
          param_1 = 0;
        }
        else if (0xf < param_1) {
          param_1 = 0xf;
        }
        piVar1 = (int *)(iVar3 + 4);
        *piVar1 = param_1;
        *(undefined4 *)(iVar3 + 8) = 0;
        *(undefined4 *)(iVar3 + 0xc) = 0x1000;
        *(undefined4 *)(iVar3 + 0x10) = 0;
        *(undefined4 *)(iVar3 + 0x14) = 0;
        *(undefined4 *)(iVar3 + 0x18) = 0;
        param_3 = (int *)iVar3;
        iVar4 = FUN_0064c1a0(&DAT_00744230,piVar1,iVar3);
        if (iVar4 < 0) {
          FUN_0064c000(&PTR_s_FX_ROADNOISE_006f81b8);
          FUN_0064c1a0(&DAT_00744230,piVar1,iVar3);
        }
      }
      piVar2[0x8c] = iVar3;
    }
    else {
      piVar1 = (int *)param_2[0x8d];
      PTR_s_CSISSOUND_006f8714 = (unsigned char *)s_Left_Road_Noise_006befec;
      ExceptionList = &local_c;
      if (piVar1 != (int *)0x0) {
        ExceptionList = &local_c;
        if (*piVar1 != 0) {
          ExceptionList = &local_c;
          FUN_0064bbd0();
        }
        FUN_0064b510(&param_3);
        FUN_0064b580();
        (**(code **)(*param_3 + 4))(piVar1);
        FUN_0064b5a0();
      }
      iVar3 = FUN_005256f0(0x1c);
      uStack_4 = 0;
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        if (param_1 < 0) {
          param_1 = 0;
        }
        else if (0xf < param_1) {
          param_1 = 0xf;
        }
        piVar1 = (int *)(iVar3 + 4);
        *piVar1 = param_1;
        *(undefined4 *)(iVar3 + 8) = 0;
        *(undefined4 *)(iVar3 + 0xc) = 0x1000;
        *(undefined4 *)(iVar3 + 0x10) = 0;
        *(undefined4 *)(iVar3 + 0x14) = 0;
        *(undefined4 *)(iVar3 + 0x18) = 0;
        param_3 = (int *)iVar3;
        iVar4 = FUN_0064c1a0(&DAT_00744230,piVar1,iVar3);
        if (iVar4 < 0) {
          FUN_0064c000(&PTR_s_FX_ROADNOISE_006f81b8);
          FUN_0064c1a0(&DAT_00744230,piVar1,iVar3);
          piVar2[0x8d] = iVar3;
          ExceptionList = local_c;
          return;
        }
      }
      piVar2[0x8d] = iVar3;
    }
  }
  ExceptionList = local_c;
  return;
}
