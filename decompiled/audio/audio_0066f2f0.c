/* spd-match: far pct=3.93 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_1 */
#include "ghidra_compat.h"

int __cdecl FUN_00662e80();
extern int DAT_006eb720;
int unaff_retaddr;
int _local_444;

undefined4 FUN_0066f2f0(undefined4 *param_1,undefined4 param_2,char *param_3,char *param_4)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  char *pcVar11;
  uint unaff_retaddr;
  int local_44c;
  undefined2 local_448;
  undefined2 local_446;
  undefined3 local_444;
  undefined1 uStack_441;
  undefined4 local_440;
  undefined4 local_43c;
  undefined4 local_438 [2];
  undefined1 local_430;
  undefined1 local_42f;
  undefined1 local_428;
  undefined1 local_427;
  undefined1 local_426;
  undefined1 local_425;
  byte local_424 [12];
  DWORD local_418;
  char local_414 [1032];
  uint local_c;
  
  local_c = DAT_006eb720 ^ unaff_retaddr;
  if (param_1 != (undefined4 *)0x0) {
    if ((int)param_4 < 0) {
      param_4 = param_3;
      do {
        cVar1 = *param_4;
        param_4 = param_4 + 1;
      } while (cVar1 != '\0');
      param_4 = param_4 + (1 - (int)(param_3 + 1));
    }
    uVar2 = (undefined1)((uint)param_2 >> 8);
    uVar3 = (undefined1)((uint)param_2 >> 0x10);
    uVar4 = (undefined1)((uint)param_2 >> 0x18);
    puVar10 = local_438;
    for (iVar6 = 0x109; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    local_446 = 0;
    local_440 = 0;
    local_43c = 0;
    iVar6 = param_1[1];
    local_430 = *(undefined1 *)(param_1 + 0xe);
    param_1[1] = iVar6 + 1;
    local_424[5] = *(byte *)(param_1 + 1);
    local_424[4] = (byte)((uint)(iVar6 + 1) >> 8);
    local_448 = 2;
    local_425 = (undefined1)param_2;
    _local_444 = CONCAT13(local_425,CONCAT21(CONCAT11(uVar2,uVar3),uVar4));
    (*(unsigned char *)&(local_438[0])) = 0x45;
    local_42f = 1;
    local_424[0] = 8;
    if ((char *)0x400 < param_4) {
      param_4 = (char *)0x400;
    }
    pcVar11 = local_414;
    for (uVar7 = (uint)param_4 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)param_3;
      param_3 = param_3 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar7 = (uint)param_4 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar11 = *param_3;
      param_3 = param_3 + 1;
      pcVar11 = pcVar11 + 1;
    }
    uVar9 = (uint)(param_4 + 3) & 0x7ffc;
    local_424[8] = 0x73;
    local_424[9] = 0x50;
    local_424[10] = 0x53;
    local_424[0xb] = 0x67;
    local_428 = uVar4;
    local_427 = uVar3;
    local_426 = uVar2;
    local_424[6] = local_424[4];
    local_424[7] = local_424[5];
    local_418 = GetTickCount();
    uVar7 = uVar9 + 0x10;
    uVar8 = 0;
    pbVar5 = local_424;
    if (1 < uVar7) {
      local_44c = (uVar9 + 0xe >> 1) + 1;
      uVar7 = uVar7 + local_44c * -2;
      do {
        uVar8 = uVar8 + (uint)*pbVar5 * 0x100 + (uint)pbVar5[1];
        pbVar5 = pbVar5 + 2;
        local_44c = local_44c + -1;
      } while (local_44c != 0);
    }
    if (0 < (int)uVar7) {
      uVar8 = uVar8 + (uint)*pbVar5 * 0x100;
    }
    uVar7 = (uVar8 >> 0x10) + (uVar8 & 0xffff);
    uVar7 = ~((uVar7 >> 0x10) + (uVar7 & 0xffff));
    local_424[3] = (byte)uVar7;
    local_424[2] = (byte)(uVar7 >> 8);
    iVar6 = FUN_00662e80(*param_1,local_438,uVar9 + 0x24,0,&local_448,0x10);
    if (-1 < iVar6) {
      return param_1[1];
    }
  }
  return 0xffffffff;
}
