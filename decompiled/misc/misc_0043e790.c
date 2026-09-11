/* spd-match: far pct=5.65 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2440_uchar_float */
#include "ghidra_compat.h"

int __cdecl FUN_00405560();
int __cdecl FUN_0040ed00();
int __cdecl FUN_0041e4c0();
int __cdecl FUN_0041f0b0();
int __cdecl FUN_00421a30();
int __cdecl FUN_00424cc0();
int __cdecl FUN_00424e10();
int __cdecl FUN_00432c80();
int __cdecl FUN_00575950();
int __cdecl FUN_00674898();
extern unsigned char *DAT_006b7934;
extern unsigned char *DAT_006b7938;
extern int _DAT_006b791c;
extern int _DAT_006b7934;
extern void LAB_0043e97c(void);

int __fastcall FUN_0043e790(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  int local_c;
  
  local_c = *(int *)(param_1 + 0x18);
  FUN_00575950();
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  if ((*(int *)(param_1 + 0x18) < 2) ||
     ((iVar1 = FUN_00421a30(), iVar1 == 0 &&
      (fVar3 = (float10)FUN_00424e10(),
      (float10)(unsigned int)(_DAT_006b7934) + (float10)*(float *)(&DAT_006b7934 + *(int *)(param_1 + 0x18) * 4) <=
      fVar3)))) {
    iVar1 = FUN_00421a30();
    if (iVar1 == 0) {
      if ((3 < *(int *)(param_1 + 0x18)) ||
         (fVar3 = (float10)FUN_00424e10(),
         (float10)*(float *)(&DAT_006b7938 + *(int *)(param_1 + 0x18) * 4) - (float10)(unsigned int)(_DAT_006b7934)
         <= fVar3)) {
        FUN_00424cc0();
        iVar1 = FUN_0041e4c0();
        if ((iVar1 == 0) &&
           ((*(int *)(param_1 + 0x18) < 5 &&
            (fVar3 = (float10)FUN_00432c80(), (float10)*(int *)(param_1 + 0x1c) < fVar3)))) {
          local_c = *(int *)(param_1 + 0x18) + 1;
          uVar2 = FUN_00674898();
          *(undefined4 *)(param_1 + 0x1c) = uVar2;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x13) = 1;
        FUN_00424cc0();
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x13) = 1;
      FUN_0041f0b0(param_1 + 0x20);
      fVar3 = (float10)FUN_0040ed00();
      if ((float10)(unsigned int)(_DAT_006b791c) < fVar3) {
        FUN_00424cc0();
      }
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x12) = 1;
    iVar1 = FUN_00421a30();
    if (iVar1 != 0) {
      FUN_0041f0b0(param_1 + 0x20);
      fVar3 = (float10)FUN_0040ed00();
      if (fVar3 <= (float10)(unsigned int)(_DAT_006b791c)) goto LAB_0043e97c;
    }
    local_c = *(int *)(param_1 + 0x18) + -1;
    FUN_00405560();
  }
LAB_0043e97c:
  if (local_c < 5) {
    uVar2 = FUN_00674898();
    *(undefined4 *)(param_1 + 0x1c) = uVar2;
  }
  else {
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return local_c;
}
