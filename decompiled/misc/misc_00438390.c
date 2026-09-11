/* spd-match: far pct=7.69 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00438390 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00465150();
void __fastcall FUN_00438390(int obj)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;

  undefined4 *puVar5;
  undefined4 *puVar6;
  float *pfVar7;
  char *pcVar8;
  int iVar9;
  int local_4;
  
  iVar4 = *(int *)(obj + 4);
  fVar1 = *(float *)(iVar4 + 0x3d0);
  pfVar7 = (float *)(*(int *)(iVar4 + 0x20) + 0x20);
  pcVar8 = (char *)(iVar4 + 0x350);
  puVar6 = (undefined4 *)(iVar4 + 0x374);
  puVar5 = (undefined4 *)(iVar4 + 0x340);
  local_4 = 4;
  do {
    fVar2 = *pfVar7;
    *puVar5 = 0;
    puVar5[-0x14] = fVar1 / fVar2;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar5[0x15] = 0;
    puVar5[-0xc] = 0;
    *(undefined4 *)(iVar4 + 0x330) = 0;
    *(undefined4 *)(iVar4 + 0x334) = 0;
    *(undefined4 *)(iVar4 + 0x338) = 0;
    *(undefined4 *)(iVar4 + 0x33c) = 0;
    cVar3 = *pcVar8;
    *pcVar8 = '\x01';
    if (cVar3 == '\0') {
      *(int *)(iVar4 + 0x3cc) = *(int *)(iVar4 + 0x3cc) + 1;
    }
    puVar5[5] = 1;
    if ((int)puVar5[9] < 1) {
      puVar5[9] = 1;
    }
    puVar5 = puVar5 + 1;
    pfVar7 = pfVar7 + 0xc;
    puVar6 = puVar6 + 2;
    pcVar8 = pcVar8 + 1;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  iVar9 = 0;
  do {
    FUN_00465150(iVar4 + 0x40);
    iVar9 = iVar9 + 1;
  } while (iVar9 < 4);
  return;
}
