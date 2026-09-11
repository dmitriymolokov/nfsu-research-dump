/* spd-match: far pct=9.22 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_2 */
#include "ghidra_compat.h"

int __cdecl FUN_00650fd0();
int __cdecl FUN_00654cd0();
int __cdecl FUN_00659c80();
int __cdecl FUN_00659d20();
int __cdecl FUN_00659d80();
extern int DAT_00713ce0;
extern unsigned char *DAT_00713f70;

void FUN_00655b80(int param_1,uint *param_2,undefined2 *param_3,int param_4,undefined4 *param_5,
                 undefined1 *param_6)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  short *psVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 local_18;
  char *local_14;
  int local_10;
  undefined4 local_c;
  undefined4 *local_8;
  uint local_4;
  
  local_18 = 0;
  (*(unsigned short *)&(local_18)) = 0;
  FUN_00654cd0(param_3,4);
  FUN_00654cd0(param_4,0x68);
  FUN_00654cd0(param_5,0x1c);
  if (((((*(char *)param_2 == 'P') && (*(char *)((int)param_2 + 1) == 'T')) ||
       (*(char *)param_2 != 'G')) ||
      ((*(char *)((int)param_2 + 1) != 'S' || (*(char *)((int)param_2 + 2) != 'T')))) ||
     (*(char *)((int)param_2 + 3) != 'R')) {
    if (param_6 != (undefined1 *)0x0) {
      *param_6 = 0;
    }
    FUN_00659d20(param_4);
    local_14 = (char *)((int)param_2 + 4);
    *param_3 = 0x5622;
    *(undefined1 *)(param_3 + 1) = 1;
    *(undefined1 *)((int)param_3 + 3) = 10;
    *param_5 = 0;
    iVar2 = FUN_00659c80(&local_14);
    if (iVar2 != 0) {
      param_2 = (uint *)(param_4 + 0x58);
      do {
        uVar1 = (undefined1)local_c;
        if (local_10 == 0xa0) {
          *(undefined1 *)((int)param_3 + 3) = (undefined1)local_c;
        }
        else if (local_10 == 0x9c) {
          *(undefined2 *)(param_4 + 0xc) = (undefined2)local_c;
        }
        else if (local_10 == 0x9d) {
          *(undefined2 *)(param_4 + 0xe) = (undefined2)local_c;
        }
        else if (local_10 == 0x9e) {
          *(undefined2 *)(param_4 + 0x10) = (undefined2)local_c;
        }
        else if (local_10 == 0x9f) {
          *(undefined2 *)(param_4 + 0x12) = (undefined2)local_c;
        }
        else if (local_10 == 0xa6) {
          *(undefined2 *)(param_4 + 0x14) = (undefined2)local_c;
        }
        else if (local_10 == 0xa7) {
          *(undefined2 *)(param_4 + 0x16) = (undefined2)local_c;
        }
        else if (local_10 == 0x98) {
          puVar3 = (undefined4 *)FUN_00650fd0(local_4);
          *(undefined4 **)(param_4 + 0x18) = puVar3;
          puVar6 = local_8;
          for (uVar4 = local_4 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar3 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar3 = puVar3 + 1;
          }
          for (uVar4 = local_4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined1 *)puVar3 = *(undefined1 *)puVar6;
            puVar6 = (undefined4 *)((int)puVar6 + 1);
            puVar3 = (undefined4 *)((int)puVar3 + 1);
          }
          *(uint *)(param_4 + 0x30) = local_4;
        }
        else if (local_10 == 0x99) {
          puVar3 = (undefined4 *)FUN_00650fd0(local_4);
          *(undefined4 **)(param_4 + 0x1c) = puVar3;
          puVar6 = local_8;
          for (uVar4 = local_4 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar3 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar3 = puVar3 + 1;
          }
          for (uVar4 = local_4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined1 *)puVar3 = *(undefined1 *)puVar6;
            puVar6 = (undefined4 *)((int)puVar6 + 1);
            puVar3 = (undefined4 *)((int)puVar3 + 1);
          }
          *(uint *)(param_4 + 0x34) = local_4;
        }
        else if (local_10 == 0x9a) {
          puVar3 = (undefined4 *)FUN_00650fd0(local_4);
          *(undefined4 **)(param_4 + 0x20) = puVar3;
          puVar6 = local_8;
          for (uVar4 = local_4 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar3 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar3 = puVar3 + 1;
          }
          for (uVar4 = local_4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined1 *)puVar3 = *(undefined1 *)puVar6;
            puVar6 = (undefined4 *)((int)puVar6 + 1);
            puVar3 = (undefined4 *)((int)puVar3 + 1);
          }
          *(uint *)(param_4 + 0x38) = local_4;
        }
        else if (local_10 == 0x9b) {
          puVar3 = (undefined4 *)FUN_00650fd0(local_4);
          *(undefined4 **)(param_4 + 0x24) = puVar3;
          puVar6 = local_8;
          for (uVar4 = local_4 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar3 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar3 = puVar3 + 1;
          }
          for (uVar4 = local_4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined1 *)puVar3 = *(undefined1 *)puVar6;
            puVar6 = (undefined4 *)((int)puVar6 + 1);
            puVar3 = (undefined4 *)((int)puVar3 + 1);
          }
          *(uint *)(param_4 + 0x3c) = local_4;
        }
        else if (local_10 == 0xa4) {
          puVar3 = (undefined4 *)FUN_00650fd0(local_4);
          *(undefined4 **)(param_4 + 0x28) = puVar3;
          puVar6 = local_8;
          for (uVar4 = local_4 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar3 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar3 = puVar3 + 1;
          }
          for (uVar4 = local_4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined1 *)puVar3 = *(undefined1 *)puVar6;
            puVar6 = (undefined4 *)((int)puVar6 + 1);
            puVar3 = (undefined4 *)((int)puVar3 + 1);
          }
          *(uint *)(param_4 + 0x40) = local_4;
        }
        else if (local_10 == 0xa5) {
          puVar3 = (undefined4 *)FUN_00650fd0(local_4);
          *(undefined4 **)(param_4 + 0x2c) = puVar3;
          puVar6 = local_8;
          for (uVar4 = local_4 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar3 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar3 = puVar3 + 1;
          }
          for (uVar4 = local_4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined1 *)puVar3 = *(undefined1 *)puVar6;
            puVar6 = (undefined4 *)((int)puVar6 + 1);
            puVar3 = (undefined4 *)((int)puVar3 + 1);
          }
          *(uint *)(param_4 + 0x44) = local_4;
        }
        else if (local_10 == 0x80) {
          *(undefined1 *)(param_4 + 7) = uVar1;
        }
        else if (local_10 == 0x82) {
          *(undefined1 *)(param_3 + 1) = uVar1;
        }
        else if (local_10 == 0x84) {
          *param_3 = (undefined2)local_c;
        }
        else if (local_10 == 0x85) {
          *param_5 = local_c;
        }
        else if (local_10 != 0x8a) {
          if (local_10 == 0x13) {
            *(undefined1 *)(param_4 + 5) = uVar1;
          }
          else if (local_10 == 10) {
            *(undefined1 *)(param_4 + 6) = uVar1;
          }
          else if (local_10 == 6) {
            *(undefined1 *)(param_4 + 2) = uVar1;
          }
          else if (local_10 == 0x8c) {
            local_18 = local_c;
          }
          else if (local_10 == 0x88) {
            param_5[1] = local_c;
          }
          else if (local_10 == 0x89) {
            param_5[2] = local_c;
          }
          else if (local_10 == 0x94) {
            param_5[3] = local_c;
          }
          else if (local_10 == 0x95) {
            param_5[4] = local_c;
          }
          else if (local_10 == 0xa2) {
            param_5[5] = local_c;
          }
          else if (local_10 == 0xa3) {
            param_5[6] = local_c;
          }
          else if (local_10 == 0x14) {
            param_2[-4] = (uint)local_8;
            *param_2 = local_4;
            param_2 = param_2 + 1;
          }
        }
        iVar2 = FUN_00659c80(&local_14);
      } while (iVar2 != 0);
    }
    *(undefined2 *)(param_4 + 8) = (undefined2)local_18;
    iVar2 = *(byte *)(param_3 + 1) - 1;
    if (-1 < iVar2) {
      piVar7 = param_5 + *(byte *)(param_3 + 1);
      psVar5 = (short *)(param_4 + 0xc + iVar2 * 2);
      do {
        if ((DAT_00713ce0 == 1) && (*(char *)(param_3 + 1) == '\x02')) {
          *psVar5 = 0;
        }
        *psVar5 = *psVar5 + *(short *)(&DAT_00713f70 +
                                      (iVar2 + (uint)*(byte *)(param_3 + 1) * 6) * 2);
        if (((*(ushort *)(param_4 + 8) & 0x14) != 0) || (*(ushort *)(param_4 + 8) == 0)) {
          *piVar7 = *piVar7 + param_1;
        }
        iVar2 = iVar2 + -1;
        psVar5 = psVar5 + -1;
        piVar7 = piVar7 + -1;
      } while (-1 < iVar2);
    }
  }
  else {
    FUN_00659d80(0,param_2,param_3,param_4,param_5);
    if (param_6 != (undefined1 *)0x0) {
      *param_6 = 1;
      return;
    }
  }
  return;
}
