/* spd-match: far pct=10.00 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2111 */
#include "ghidra_compat.h"

int __cdecl FUN_0040b780();
int __cdecl FUN_0043a2e0();
int __cdecl FUN_0047d070();
int __cdecl FUN_0048edc0();
int __cdecl FUN_0048ee20();
int __cdecl FUN_00564db0();
int __cdecl FUN_005829e0();
int __cdecl FUN_00593ec0();
int __cdecl FUN_00593fc0();
extern int DAT_006b6bc4;
extern int DAT_006b6bcc;
extern int DAT_00735f5c;
extern unsigned char *DAT_007361f0;
extern int DAT_0073ad38;
extern int _DAT_006b6bc8;

void __fastcall FUN_004901e0(int param_1)

{
  float fVar1;
  float *pfVar2;
  int *piVar3;
  bool bVar4;
  float fVar5;
  char cVar6;
  undefined2 uVar7;
  float fVar8;
  float10 fVar9;
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  float local_7c;
  float local_78;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_50 [76];
  
  cVar6 = FUN_0043a2e0();
  if (((cVar6 != '\0') || (DAT_007361f0 == (int *)0x0)) ||
     ((*DAT_007361f0 != 7 && (*DAT_007361f0 != 0xb)))) {
    fVar1 = *(float *)(param_1 + 0x2c);
    local_60 = 0;
    local_5c = 0;
    fVar5 = ((int)(DAT_0073ad38)) + *(float *)(param_1 + 0x2c);
    local_58 = 0x3f800000;
    bVar4 = DAT_006b6bc4 <= fVar5;
    *(float *)(param_1 + 0x2c) = fVar5;
    fVar8 = DAT_0073ad38;
    if (bVar4) {
      fVar8 = ((int)(_DAT_006b6bc8)) + DAT_006b6bc4;
      if (fVar5 <= fVar8) {
        fVar1 = (fVar5 - DAT_006b6bc4) / _DAT_006b6bc8;
        fVar9 = (float10)FUN_0048edc0();
        FUN_005829e0((float)(fVar9 * (float10)fVar1));
        fVar9 = (float10)FUN_0048edc0();
        FUN_005829e0((float)(fVar9 * (float10)fVar1));
        fVar8 = DAT_0073ad38;
      }
      else {
        if (fVar1 < fVar8 != (fVar1 == fVar8)) {
          *(float *)(*(int *)(param_1 + 0x44) + 0x24) =
               (((int)(DAT_006b6bcc)) + ((int)(_DAT_006b6bc8)) + DAT_006b6bc4) - fVar5;
          piVar3 = *(int **)(param_1 + 0x44);
          piVar3[2] = 0x3f800000;
          if (*piVar3 != 0x3f800000) {
            *(undefined2 *)(piVar3 + 0xb) = 2;
          }
        }
        fVar1 = DAT_0073ad38;
        FUN_00593fc0(DAT_0073ad38);
        FUN_00593fc0(fVar1);
        pfVar2 = *(float **)(param_1 + 0x38);
        local_90 = *pfVar2;
        local_8c = pfVar2[0xc];
        local_88 = pfVar2[0x18];
        pfVar2 = *(float **)(param_1 + 0x40);
        local_80 = *pfVar2;
        local_7c = pfVar2[0xc];
        local_78 = pfVar2[0x18];
        FUN_0048ee20(param_1 + 0xa8,&local_80,0);
        fVar8 = DAT_0073ad38;
      }
    }
    else {
      FUN_00593ec0(DAT_0073ad38,0,0);
      FUN_00593ec0(fVar8,0,0);
      FUN_00593ec0(fVar8,0,0);
      FUN_00593ec0(fVar8,0,0);
      FUN_00593ec0(fVar8,0,0);
      FUN_00593ec0(fVar8,0,0);
      pfVar2 = *(float **)(param_1 + 0x34);
      local_90 = *pfVar2;
      local_8c = pfVar2[0xc];
      local_88 = pfVar2[0x18];
      pfVar2 = *(float **)(param_1 + 0x3c);
      local_80 = *pfVar2;
      local_7c = pfVar2[0xc];
      local_78 = pfVar2[0x18];
      FUN_0048ee20(param_1 + 0xa8,&local_80,0);
    }
    FUN_00593ec0(fVar8,0,0);
    fVar1 = **(float **)(param_1 + 0x44);
    local_70 = (local_90 - local_80) * fVar1;
    local_6c = (local_8c - local_7c) * fVar1;
    local_68 = (local_88 - local_78) * fVar1 + local_78;
    uVar7 = FUN_00564db0(**(float **)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x30));
    if (DAT_00735f5c == 0) {
      *(undefined2 *)(*(int *)(param_1 + 0x1c) + 0xc4) = uVar7;
    }
    FUN_0040b780(&local_60);
    FUN_0047d070(*(undefined4 *)(param_1 + 0x1c),local_50,DAT_0073ad38);
  }
  return;
}
