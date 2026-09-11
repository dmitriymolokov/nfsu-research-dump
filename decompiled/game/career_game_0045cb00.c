/* spd-match: far pct=7.21 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0045CB00 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00401c40();
int __cdecl FUN_004594d0();
int __cdecl FUN_004596b0();
int __cdecl FUN_005672b0();
int __cdecl FUN_005791c0();
int __cdecl FUN_0057a8e0();
int __cdecl FUN_005a6150();
int __cdecl FUN_005a7270();
int __cdecl FUN_005a7390();
int __cdecl FUN_005a7560();
extern int DAT_006cc7a4;
extern int _DAT_006b74f4;
extern int _DAT_006cc954;
extern void LAB_0045cb3b(void);
extern void LAB_0045cd66(void);
void __fastcall FUN_0045cb00(int * obj, int *param_1, char *param_2, int param_3, float param_4, int param_5)

{
  char *pcVar1;
  char cVar2;

  int iVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float local_58;
  int *local_54;
  float local_50;
  float local_48;
  int local_44;
  float local_3c;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined1 local_20 [28];
  
  iVar3 = 0;
  if (0 < obj[1]) {
    piVar5 = obj + 0xf;
    do {
      if (*piVar5 == param_1[1]) {
        if (iVar3 != -1) {
          local_54 = obj + iVar3 * 0xe + 2;
          goto LAB_0045cb3b;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      piVar5 = piVar5 + 0xe;
    } while (iVar3 < obj[1]);
  }
  local_54 = (int *)0x0;
LAB_0045cb3b:
  iVar4 = (int)(char)obj[0xe2];
  iVar3 = *(int *)(*(int *)(param_1[1] + 0x1d4) + 0x1c);
  if (*(int *)(iVar3 + 0xe4) != 0) {
    FUN_005791c0();
  }
  if (((_DAT_006cc954 <
        SQRT(*(float *)(iVar3 + 0x98) * *(float *)(iVar3 + 0x98) +
             *(float *)(iVar3 + 0x94) * *(float *)(iVar3 + 0x94) +
             *(float *)(iVar3 + 0x90) * *(float *)(iVar3 + 0x90))) &&
      (_DAT_006cc954 < *(float *)(*obj + 0x3d4))) && (local_54 != (int *)0x0)) {
    FUN_005672b0();
    if (*(int *)(*(int *)(*(int *)(param_1[1] + 0x1d4) + 0x1c) + 0xe4) != 0) {
      FUN_005791c0();
    }
    FUN_005672b0();
    if (_DAT_006b74f4 < local_2c * local_34 + local_28 * local_30) {
      local_50 = (float)obj[iVar4 * 0xe + 6];
      cVar2 = *param_2;
      if (cVar2 != '\0') {
        iVar3 = FUN_005a6150(param_3,param_2 + cVar2 * 0x10,1);
        if (iVar3 != -1) {
          fVar7 = (float10)FUN_005a7560(param_2 + cVar2 * 0x10);
          fVar7 = (float10)FUN_00401c40(local_50,(float)fVar7);
          local_50 = (float)fVar7;
        }
      }
      pcVar1 = (char *)(param_1[1] + 0x10);
      local_44 = FUN_004596b0(pcVar1,param_1[1]);
      fVar7 = (float10)FUN_0057a8e0();
      if (*param_2 < '\x14') {
        pcVar6 = pcVar1 + (local_44 + 1) * 0x10;
        do {
          if (*pcVar1 <= local_44) {
            return;
          }
          iVar3 = FUN_005a6150(param_3,pcVar6,1);
          if (iVar3 == -1) {
            return;
          }
          iVar3 = *(int *)(param_3 + 8 + iVar3 * 4);
          fVar8 = (float10)FUN_005a7560(pcVar6);
          fVar9 = (float10)FUN_005a7390(pcVar6,param_5);
          if (local_50 < (float)fVar8) {
            fVar9 = fVar9 + (float10)param_4;
            fVar10 = (float10)(float)(fVar7 + (float10)param_4);
            if (*param_1 == 2) {
              if (fVar10 < fVar9) {
LAB_0045cd66:
                fVar9 = (float10)(float)(fVar7 + (float10)param_4);
              }
            }
            else if (fVar9 < fVar10) goto LAB_0045cd66;
            if ((param_5 < 0) || (4 < param_5)) {
              if ((param_5 < 0xb) || (0x10 < param_5)) {
                local_58 = 0.0;
              }
              else {
                local_58 = *(float *)(iVar3 + -8 + param_5 * 4);
              }
            }
            else {
              local_58 = *(float *)(iVar3 + 0x20);
            }
            if ((param_5 < 0) || (4 < param_5)) {
              local_48 = DAT_006cc7a4;
              if ((10 < param_5) && (param_5 < 0x11)) {
                local_48 = *(float *)(iVar3 + 0x14 + param_5 * 4);
              }
            }
            else {
              local_48 = *(float *)(iVar3 + 0x3c);
            }
            local_58 = local_58 + (float)obj[iVar4 * 0xe + 4];
            local_48 = local_48 - (float)obj[iVar4 * 0xe + 4];
            if (DAT_006cc7a4 <= local_58) {
              local_58 = 0.0;
            }
            if (local_48 <= DAT_006cc7a4) {
              local_48 = 0.0;
            }
            if (fVar9 <= (float10)local_58) {
              fVar9 = (float10)local_58;
            }
            if (fVar9 <= (float10)local_48) {
              local_3c = (float)fVar9;
            }
            else {
              local_3c = local_48;
            }
            FUN_005a7270(local_20,(float)fVar8,local_3c,param_5);
            FUN_004594d0(*(undefined1 *)(iVar3 + 0x5c),*(undefined2 *)(iVar3 + 0x5e),param_5,1);
          }
          local_44 = local_44 + 1;
          pcVar6 = pcVar6 + 0x10;
        } while (*param_2 < '\x14');
      }
    }
  }
  return;
}
