/* spd-match: far pct=7.76 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_00401c60();
int __cdecl FUN_0041f5d0();
int __cdecl FUN_0041f5f0();
int __cdecl FUN_004216f0();
int __cdecl FUN_00424e00();
int __cdecl FUN_0042adf0();
int __cdecl FUN_0042ae30();
int __cdecl FUN_00442570();
int __cdecl FUN_00443d60();
int __cdecl FUN_0044d660();
int __cdecl FUN_00583270();
int __cdecl FUN_00598b60();
int __cdecl FUN_00599660();
int __cdecl FUN_00599fc0();
int __cdecl FUN_0059a7c0();
int __cdecl FUN_0059afa0();
int __cdecl FUN_005ab210();
extern int DAT_0078a300;
extern int _DAT_006b5a44;
extern int _DAT_006b5a68;
extern int _DAT_006cc7a0;

undefined4 FUN_00599c80(undefined4 param_1)

{
  bool bVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  float fVar12;
  undefined4 local_70;
  uint local_6c;
  float local_24;
  bool local_15;
  float local_14;
  
  iVar4 = FUN_0042ae30();
  if (0 < iVar4) {
    FUN_0041f5d0();
    FUN_0044d660();
    FUN_00583270();
    fVar10 = (float10)FUN_004216f0(0x3f800000);
    iVar4 = DAT_0078a300;
    bVar1 = fVar10 < (float10)_DAT_006b5a44;
    local_6c = (uint)bVar1;
    fVar10 = (float10)FUN_0041f5f0();
    fVar12 = (float)fVar10;
    fVar10 = (float10)FUN_00424e00();
    piVar5 = (int *)FUN_0041f5d0();
    iVar6 = (**(code **)(*piVar5 + 0x40))();
    cVar3 = FUN_00598b60(fVar12);
    local_24 = fVar12;
    local_14 = fVar12;
    if (cVar3 == '\0') {
      local_24 = fVar12 + _DAT_006b5a68;
      local_14 = fVar12 - _DAT_006b5a68;
    }
    local_15 = cVar3 != '\0';
    iVar7 = FUN_00599fc0(local_14,local_24,fVar12,(float)fVar10,(uint)bVar1,local_15,iVar6);
    if (iVar7 != 0) {
      uVar8 = FUN_005ab210(local_15);
      fVar10 = (float10)FUN_00442570(fVar12);
      FUN_00443d60((float)fVar10,fVar12);
      iVar9 = FUN_00599660(uVar8,CONCAT31((int3)(-local_6c >> 8),'\x01' - bVar1));
      if (iVar9 != -1) {
        fVar12 = *(float *)(iVar7 + 0x70 + iVar4 * 8 + iVar6 * 4);
        fVar10 = (float10)FUN_004216f0(*(float *)(iVar7 + 0x90 + iVar4 * 8 + iVar6 * 4) -
                                       *(float *)(iVar7 + 0x70 + iVar4 * 8 + iVar6 * 4));
        if (local_15) {
          local_70 = *(undefined4 *)(iVar7 + 8 + (uint)bVar1 * 4);
        }
        else {
          local_70 = 0;
        }
        fVar2 = *(float *)(iVar7 + 0xb0 + DAT_0078a300 * 8 + iVar6 * 4) * _DAT_006cc7a0;
        fVar11 = (float10)FUN_0042adf0();
        fVar11 = (float10)FUN_00401c60(fVar2,(float)fVar11);
        cVar3 = FUN_0059afa0(uVar8,iVar9,local_70,(float)(fVar10 + (float10)fVar12),param_1,0);
        if (cVar3 == '\0') {
          FUN_0059a7c0(param_1,uVar8,local_70,iVar9,fVar2,(float)fVar11,iVar7);
          return 1;
        }
      }
    }
    FUN_00583270();
  }
  return 0;
}
