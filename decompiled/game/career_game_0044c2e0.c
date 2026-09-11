/* spd-match: far pct=6.59 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0044C2E0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004216f0();
int __cdecl FUN_00429100();
int __cdecl FUN_00456780();
int __cdecl FUN_0057a6b0();
int __cdecl FUN_0057b520();
int __cdecl FUN_00647b70();
extern unsigned char *DAT_007361f0;
extern int _DAT_006b77e0;
extern int _DAT_006b77e4;
extern int _DAT_006b77e8;
extern int _DAT_006b77ec;
extern int _DAT_006b77f0;
extern int _DAT_006b77f4;
extern int _DAT_006cc7dc;
void __fastcall FUN_0044c2e0(int obj, int param_1)

{
  bool bVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float fVar6;
  char cVar7;

  int iVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  undefined4 uStack00000008;
  undefined4 local_10;
  float local_c;
  
  iVar8 = FUN_00647b70();
  if ((((iVar8 != 6) ||
       (*(int *)(*(int *)(*(int *)(*(int *)(obj + 0x1d4) + 0x90) + 0xc) + 0xc54) != 1)) &&
      ((iVar8 = FUN_00647b70(), iVar8 != 6 ||
       (*(int *)(*(int *)(*(int *)(*(int *)(obj + 0x1d4) + 0x90) + 0x14) + 4) != 3)))) &&
     ((*DAT_007361f0 == 9 || (cVar7 = FUN_0057a6b0(), cVar7 != '\0')))) {
    iVar9 = FUN_0057b520();
    iVar8 = *(int *)(*(int *)(param_1 + 4) + 0x24);
    if (iVar8 == 3) {
      cVar7 = FUN_00456780(iVar9);
      if (cVar7 == '\0') {
        return;
      }
    }
    else if (iVar8 != 4) {
      return;
    }
    fVar6 = ((int)_DAT_006b77e4) + (int)_DAT_006b77e4;
    local_10 = 0;
    fVar10 = (float10)FUN_004216f0(fVar6);
    fVar2 = (float10)_DAT_006b77e0;
    fVar4 = (float10)_DAT_006b77e4;
    fVar11 = (float10)FUN_004216f0(((int)_DAT_006b77ec) + (int)_DAT_006b77ec);
    fVar3 = (float10)_DAT_006b77e8;
    fVar5 = (float10)_DAT_006b77ec;
    fVar12 = (float10)FUN_004216f0(fVar6);
    local_c = (float)((fVar12 + (float10)_DAT_006b77e0) - (float10)_DAT_006b77e4);
    fVar12 = (float10)FUN_004216f0(0x3f800000);
    bVar1 = fVar12 < (float10)_DAT_006cc7dc;
    if (*(float *)(iVar9 + 4) <= _DAT_006b77f0) {
      if ((*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x14) + 4) != 3) ||
         (_DAT_006b77f4 <= *(float *)(iVar9 + 4))) {
        FUN_0057a6b0();
      }
    }
    else {
      bVar1 = true;
      local_c = ((int)_DAT_006b77e0) + ((int)_DAT_006b77e0) + local_c;
    }
    fVar12 = (float10)FUN_004216f0(0x3f800000);
    if (extraout_ST1 <= fVar12) {
      uStack00000008 = 0;
    }
    else {
      uStack00000008 = 1;
      fVar12 = (float10)FUN_004216f0(0x3f800000);
      local_10 = 1;
      if (extraout_ST1_00 <= fVar12) {
        local_10 = 0;
      }
    }
    FUN_00429100((float)((fVar10 + fVar2) - fVar4),(float)((fVar11 + fVar3) - fVar5),local_c,
                 local_10,uStack00000008,bVar1);
  }
  return;
}
