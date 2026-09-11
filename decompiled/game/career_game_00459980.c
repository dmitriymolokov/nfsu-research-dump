/* spd-match: far pct=9.42 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00459980 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00459870();
int __cdecl FUN_00583f20();
extern int DAT_006cc7a4;
extern int _DAT_006cc7bc;
void __fastcall FUN_00459980(char * obj)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;

  int iVar4;
  undefined4 *puVar5;
  float *pfVar6;
  char *pcVar7;
  float fVar8;
  float10 fVar9;
  int local_204;
  float local_200;
  float *local_1f8;
  float local_1f4 [41];
  undefined4 local_150 [83];
  
  if ('\x02' < *obj) {
    fVar8 = (float)(int)*obj;
    local_1f8 = local_1f4 + 1;
    fVar3 = _DAT_006cc7bc / (float)((int)fVar8 + -1);
    local_204 = 0;
    local_200 = DAT_006cc7a4;
    if (0 < (int)fVar8) {
      pfVar6 = (float *)(obj + 0x18);
      do {
        if (0 < local_204) {
          local_200 = SQRT((pfVar6[-1] - pfVar6[-5]) * (pfVar6[-1] - pfVar6[-5]) +
                           (pfVar6[-2] - pfVar6[-6]) * (pfVar6[-2] - pfVar6[-6]) +
                           (*pfVar6 - pfVar6[-4]) * (*pfVar6 - pfVar6[-4])) + local_200;
        }
        local_1f4[local_204 * 2 + 1] = local_200;
        iVar4 = local_204 + 1;
        pfVar6 = pfVar6 + 4;
        local_1f4[iVar4 * 2] = (float)local_204;
        local_204 = iVar4;
      } while (iVar4 < (int)fVar8);
    }
    local_204 = 0;
    local_1f4[0] = fVar8;
    if (0 < (int)fVar8) {
      do {
        fVar9 = (float10)FUN_00583f20(&local_1f8,(float)local_204 * local_200 * fVar3);
        FUN_00459870((float)fVar9);
        local_204 = local_204 + 1;
      } while (local_204 < (int)fVar8);
      puVar5 = local_150 + 2;
      pcVar7 = obj + 0x18;
      do {
        uVar2 = *puVar5;
        *(undefined4 *)(pcVar7 + -8) = puVar5[-2];
        uVar1 = puVar5[-1];
        *(undefined4 *)pcVar7 = uVar2;
        *(undefined4 *)(pcVar7 + -4) = uVar1;
        puVar5 = puVar5 + 4;
        pcVar7 = pcVar7 + 0x10;
        fVar8 = (float)((int)fVar8 + -1);
      } while (fVar8 != 0.0);
    }
    *(float *)(obj + 0x1ac) = local_200;
    obj[0x1a4] = '\0';
    obj[0x1a5] = '\0';
    obj[0x1a6] = '\0';
    obj[0x1a7] = '\0';
    obj[0x1a8] = '\0';
    obj[0x1a9] = '\0';
    obj[0x1aa] = '\0';
    obj[0x1ab] = '\0';
  }
  return;
}
