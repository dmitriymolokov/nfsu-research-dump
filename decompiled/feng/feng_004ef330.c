/* spd-match: far pct=4.00 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_1_3 */
#include "ghidra_compat.h"

int __cdecl FUN_004f0700();
int __cdecl FUN_004f0b00();
int __cdecl FUN_004fa140();
int __cdecl FUN_004fbe30();
extern int DAT_006f9fe0;
extern int DAT_006f9fe1;
extern void LAB_004ef5a9(void);
extern void LAB_004ef609(void);
extern void LAB_004ef6b3(void);
extern void LAB_004ef790(void);
extern void LAB_004ef804(void);
extern void LAB_004ef8d4(void);
extern void LAB_004efbd0(void);
extern void LAB_004efccb(void);
extern void LAB_004efda0(void);
extern void LAB_004efdbb(void);

void FUN_004ef330(int param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  byte bVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  int iVar14;
  byte local_a1;
  uint local_a0;
  uint local_9c;
  int local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  byte local_88 [4];
  uint local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined2 local_78;
  undefined1 local_76;
  byte local_74 [20];
  byte local_60 [20];
  uint local_4c [4];
  uint local_3c;
  
  if (*(uint *)(param_2 + 0x1c) == 0) {
    return;
  }
  bVar4 = false;
  bVar5 = 0;
  if (*(int *)(param_1 + 0xd4) == 0) {
    return;
  }
  uVar6 = 0;
  do {
    if ((*(uint *)(param_2 + 0x1c) & 1 << ((byte)uVar6 & 0x1f)) != 0) {
      piVar7 = (int *)(uVar6 * 0x88 + *(int *)(param_1 + 8));
      bVar4 = (bool)(bVar4 | (piVar7[1] != 0 || *piVar7 != 0));
    }
    bVar5 = bVar5 + 1;
    uVar6 = (uint)bVar5;
  } while (uVar6 < *(uint *)(param_1 + 0xd4));
  if (!bVar4) {
    return;
  }
  local_60[0] = 0;
  local_60[1] = 0;
  local_60[2] = 0;
  local_60[3] = 0;
  puVar13 = local_4c;
  for (iVar8 = 0x13; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar13 = 0;
    puVar13 = puVar13 + 1;
  }
  local_60[4] = 0;
  local_60[5] = 0;
  local_60[6] = 0;
  local_60[7] = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  local_88[2] = 0;
  local_88[3] = 0;
  local_74[0] = 0;
  local_74[1] = 0;
  local_74[2] = 0;
  local_74[3] = 0;
  local_60[8] = 0;
  local_60[9] = 0;
  local_60[10] = 0;
  local_60[0xb] = 0;
  local_84 = 0;
  local_74[4] = 0;
  local_74[5] = 0;
  local_74[6] = 0;
  local_74[7] = 0;
  local_60[0xc] = 0;
  local_60[0xd] = 0;
  local_60[0xe] = 0;
  local_60[0xf] = 0;
  local_80 = 0;
  local_74[8] = 0;
  local_74[9] = 0;
  local_74[10] = 0;
  local_74[0xb] = 0;
  local_60[0x10] = 0;
  local_60[0x11] = 0;
  local_7c = 0;
  local_74[0xc] = 0;
  local_74[0xd] = 0;
  local_74[0xe] = 0;
  local_74[0xf] = 0;
  local_60[0x12] = 0;
  local_78 = 0;
  local_74[0x10] = 0;
  local_74[0x11] = 0;
  local_76 = 0;
  local_74[0x12] = 0;
  local_9c = 4;
  do {
    if (*(char *)(param_1 + 1) == '\0') break;
    uVar9 = 0;
    uVar11 = 1 << ((byte)local_9c & 0x1f);
    uVar6 = *(uint *)(param_2 + 0x1c);
    local_a0 = 0;
    local_94 = 0;
    local_8c = 0;
    local_a1 = 0;
    if (*(int *)(param_1 + 0xd4) != 0) {
      do {
        bVar5 = (byte)uVar9;
        if ((uVar6 & 1 << (bVar5 & 0x1f)) != 0) {
          puVar13 = (uint *)(uVar9 * 0x88 + *(int *)(param_1 + 8));
          if (((puVar13[1] & uVar11) == uVar11) && ((*puVar13 & uVar11) != uVar11)) {
            local_8c = local_8c | uVar11;
            local_88[local_9c] = local_88[local_9c] | '\x01' << (bVar5 & 0x1f);
          }
          if (((puVar13[1] & uVar11) != uVar11) && ((*puVar13 & uVar11) == uVar11)) {
            local_94 = local_94 | uVar11;
            local_74[local_9c] = local_74[local_9c] | '\x01' << (bVar5 & 0x1f);
          }
          if (((puVar13[1] & uVar11) == uVar11) && ((uVar11 & *puVar13) == uVar11)) {
            local_a0 = local_a0 | uVar11;
            uVar9 = FUN_004fbe30();
            if (uVar9 < local_4c[local_9c]) {
              uVar9 = local_4c[local_9c];
            }
            else {
              uVar9 = FUN_004fbe30();
            }
            local_4c[local_9c] = uVar9;
            local_60[local_9c] = local_60[local_9c] | '\x01' << (bVar5 & 0x1f);
          }
        }
        local_a1 = local_a1 + 1;
        uVar9 = (uint)local_a1;
      } while (uVar9 < *(uint *)(param_1 + 0xd4));
    }
    if (((local_9c == 4) && (*(char *)(param_2 + 0x17) != '\0')) &&
       (local_a1 = 0, *(int *)(param_1 + 0xd4) != 0)) {
      local_90 = 0;
      do {
        bVar5 = (byte)local_90;
        if ((uVar6 & 1 << (bVar5 & 0x1f)) != 0) {
          pbVar1 = (byte *)(local_90 * 0x88 + *(int *)(param_1 + 8));
          if ((pbVar1[4] & 0x40) == 0) {
LAB_004ef5a9:
            if ((*pbVar1 & 0x40) != 0) {
              local_94 = local_94 | 0x10;
              local_74[4] = local_74[4] | '\x01' << (bVar5 & 0x1f);
            }
            if ((pbVar1[4] & 0x40) == 0) goto LAB_004ef609;
          }
          else {
            if ((*pbVar1 & 0x40) == 0) {
              local_8c = local_8c | 0x10;
              local_84 = CONCAT31(((unsigned int)(local_84) >> 8),(byte)local_84 | '\x01' << (bVar5 & 0x1f));
            }
            if ((pbVar1[4] & 0x40) == 0) goto LAB_004ef5a9;
          }
          if ((*pbVar1 & 0x40) != 0) {
            local_a0 = local_a0 | 0x10;
            uVar9 = FUN_004fbe30();
            if (local_3c <= uVar9) {
              local_3c = FUN_004fbe30();
            }
            local_60[4] = local_60[4] | '\x01' << (bVar5 & 0x1f);
          }
        }
LAB_004ef609:
        local_a1 = local_a1 + 1;
        local_90 = (uint)local_a1;
      } while (local_90 < *(uint *)(param_1 + 0xd4));
    }
    if ((local_a0 != 0 || local_94 != 0) || local_8c != 0) {
      iVar8 = *(int *)(param_2 + 0x80);
      switch(local_9c) {
      case 4:
        if ((local_8c & 0x10) != 0) {
          *(int *)(param_1 + 0x84 + local_9c * 4) = iVar8;
          if (iVar8 != 0) {
            for (iVar12 = *(int *)(iVar8 + 0x3c); iVar12 != 0; iVar12 = *(int *)(iVar12 + 4)) {
              if (*(int *)(iVar12 + 0xc) == 0xc407210) {
                FUN_004f0700(0xc407210,0,param_2,*(undefined4 *)(param_2 + 0x80),local_84 & 0xff);
                uVar6 = local_84 & 0xff;
                iVar14 = *(int *)(param_2 + 0x80);
                iVar12 = 0xc407210;
                goto LAB_004ef8d4;
              }
            }
          }
          iVar12 = *(int *)(param_2 + 0x50);
          if (iVar12 != 0) {
LAB_004ef6b3:
            if (*(int *)(iVar12 + 0xc) != 0x406415e3) goto code_r0x004ef6b8;
            FUN_004f0700(0x406415e3,0,param_2,0xfffffffd,local_84 & 0xff);
            uVar6 = local_84 & 0xff;
            iVar14 = 0;
            iVar12 = 0x406415e3;
LAB_004ef8d4:
            FUN_004f0700(iVar12,iVar14,param_2,0xfffffffb,uVar6);
            break;
          }
        }
        break;
      case 7:
      case 8:
        if ((local_a0 & uVar11) != 0) {
          bVar5 = local_88[local_9c];
          iVar12 = *(int *)(local_9c * 4 + 0x6fa030);
          if (iVar8 != 0) {
            for (iVar14 = *(int *)(iVar8 + 0x3c); iVar14 != 0; iVar14 = *(int *)(iVar14 + 4)) {
              if (*(int *)(iVar14 + 0xc) == iVar12) {
                FUN_004f0700(iVar12,0,param_2,iVar8,bVar5);
                iVar14 = iVar8;
                goto LAB_004ef804;
              }
            }
          }
          iVar14 = *(int *)(param_2 + 0x50);
          if (iVar14 != 0) {
LAB_004ef790:
            if (*(int *)(iVar14 + 0xc) != iVar12) goto code_r0x004ef795;
            FUN_004f0700(iVar12,0,param_2,0xfffffffd,bVar5);
            iVar14 = 0;
LAB_004ef804:
            FUN_004f0700(iVar12,iVar14,param_2,0xfffffffb,bVar5);
          }
        }
      case 5:
      case 6:
      case 9:
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
      case 0x10:
      case 0x11:
      case 0x12:
switchD_004ef65e_caseD_5:
        if ((local_8c & uVar11) != 0) {
          uVar6 = (uint)local_88[local_9c];
          *(int *)(param_1 + 0x84 + local_9c * 4) = iVar8;
          iVar12 = *(int *)(local_9c * 4 + 0x6fa000);
          if (iVar8 != 0) {
            for (iVar14 = *(int *)(iVar8 + 0x3c); iVar14 != 0; iVar14 = *(int *)(iVar14 + 4)) {
              if (*(int *)(iVar14 + 0xc) == iVar12) {
                FUN_004f0700(iVar12,0,param_2,iVar8,uVar6);
                iVar14 = iVar8;
                goto LAB_004ef8d4;
              }
            }
          }
          for (iVar14 = *(int *)(param_2 + 0x50); iVar14 != 0; iVar14 = *(int *)(iVar14 + 4)) {
            if (*(int *)(iVar14 + 0xc) == iVar12) {
              FUN_004f0700(iVar12,0,param_2,0xfffffffd,uVar6);
              iVar14 = 0;
              goto LAB_004ef8d4;
            }
          }
        }
      }
switchD_004ef65e_default:
      if ((local_94 & uVar11) != 0) {
        bVar5 = local_74[local_9c];
        iVar12 = *(int *)(local_9c * 4 + 0x6fa058);
        if ((*(int *)(param_1 + 0x84 + local_9c * 4) == iVar8) && (iVar8 != 0)) {
          *(undefined4 *)(param_1 + 0x84 + local_9c * 4) = 0;
          if (local_9c == 4) {
            iVar12 = -0x6c959581;
          }
          for (iVar14 = *(int *)(iVar8 + 0x3c); iVar14 != 0; iVar14 = *(int *)(iVar14 + 4)) {
            if (*(int *)(iVar14 + 0xc) == iVar12) {
              FUN_004f0700(iVar12,0,param_2,iVar8,bVar5);
              FUN_004f0700(iVar12,iVar8,param_2,0xfffffffb,bVar5);
              break;
            }
          }
        }
        for (iVar8 = *(int *)(param_2 + 0x50); iVar8 != 0; iVar8 = *(int *)(iVar8 + 4)) {
          if (*(int *)(iVar8 + 0xc) == iVar12) {
            FUN_004f0700(iVar12,0,param_2,0xfffffffd,bVar5);
            FUN_004f0700(iVar12,0,param_2,0xfffffffb,bVar5);
            break;
          }
        }
      }
      if (*(int *)(param_1 + 0x4118) != 0) {
        FUN_004f0b00(param_1);
      }
    }
    local_9c = local_9c + 1;
  } while (local_9c < 0x13);
  uVar6 = *(uint *)(param_2 + 0x1c);
  local_8c = 0;
  local_9c = 0;
  do {
    if (*(char *)(param_1 + 1) == '\0') break;
    uVar9 = 1 << ((byte)local_9c & 0x1f);
    local_a1 = 0;
    if (*(int *)(param_1 + 0xd4) != 0) {
      uVar11 = 0;
      do {
        bVar5 = (byte)uVar11;
        if ((uVar6 & 1 << (bVar5 & 0x1f)) != 0) {
          puVar13 = (uint *)(uVar11 * 0x88 + *(int *)(param_1 + 8));
          if (((puVar13[1] & uVar9) == uVar9) && ((*puVar13 & uVar9) != uVar9)) {
            local_8c = local_8c | uVar9;
            local_88[local_9c] = local_88[local_9c] | '\x01' << (bVar5 & 0x1f);
          }
          if (((puVar13[1] & uVar9) == uVar9) && ((*puVar13 & uVar9) == uVar9)) {
            uVar11 = FUN_004fbe30();
            if (uVar11 < local_4c[local_9c]) {
              uVar11 = local_4c[local_9c];
            }
            else {
              uVar11 = FUN_004fbe30();
            }
            local_4c[local_9c] = uVar11;
            local_60[local_9c] = local_60[local_9c] | '\x01' << (bVar5 & 0x1f);
          }
        }
        local_a1 = local_a1 + 1;
        uVar11 = (uint)local_a1;
      } while (uVar11 < *(uint *)(param_1 + 0xd4));
    }
    local_9c = local_9c + 1;
  } while (local_9c < 4);
  uVar6 = 0;
  while( true ) {
    if (*(char *)(param_1 + 1) == '\0') {
      return;
    }
    iVar8 = *(int *)(param_2 + 0x80);
    bVar5 = (&DAT_006f9fe1)[uVar6 * 4];
    if (bVar5 == 0xff) {
      bVar5 = (&DAT_006f9fe0)[uVar6 * 4];
      local_94 = local_4c[bVar5];
      bVar3 = local_88[bVar5];
      bVar2 = local_60[bVar5];
      uVar9 = local_8c >> (bVar5 & 0x1f);
    }
    else {
      bVar2 = (&DAT_006f9fe0)[uVar6 * 4];
      local_94 = local_4c[bVar2];
      if (local_4c[bVar5] <= local_4c[bVar2]) {
        local_94 = local_4c[bVar5];
      }
      uVar9 = local_8c >> (bVar2 & 0x1f) & local_8c >> (bVar5 & 0x1f);
      bVar3 = local_88[bVar5] & local_88[bVar2];
      bVar2 = local_60[bVar5] & local_60[bVar2];
    }
    bVar3 = bVar3 | bVar2;
    uVar10 = 1 << ((byte)uVar6 & 0x1f);
    uVar11 = (-(uint)((*(uint *)(param_1 + 0x2c) & uVar10) != 0) & 0xffffff38) + 0x140;
    if (uVar11 <= local_94) break;
    if ((uVar9 & 1) == 0) {
      if (local_94 == 0) {
        *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & ~uVar10;
      }
    }
    else if (local_94 == 0) goto LAB_004efbd0;
    if (*(int *)(param_1 + 0x4118) != 0) {
      FUN_004f0b00(param_1);
    }
    uVar6 = uVar6 + 1;
    if (7 < uVar6) {
      return;
    }
  }
  if (local_94 != 0) {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 1 << ((byte)uVar6 & 0x1f);
  }
LAB_004efbd0:
  *(uint *)(param_1 + 0x38 + (uint)(byte)(&DAT_006f9fe0)[uVar6 * 4] * 4) = uVar11;
  if ((&DAT_006f9fe1)[uVar6 * 4] != 0xff) {
    *(uint *)(param_1 + 0x38 + (uint)(byte)(&DAT_006f9fe1)[uVar6 * 4] * 4) = uVar11;
  }
  bVar5 = (&DAT_006f9fe0)[uVar6 * 4];
  bVar2 = (&DAT_006f9fe1)[uVar6 * 4];
  local_4c[bVar5] = 0;
  if (bVar2 == 0xff) {
    *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 1 << (bVar5 & 0x1f);
  }
  else {
    local_4c[bVar2] = 0;
    *(uint *)(param_1 + 0x34) =
         *(uint *)(param_1 + 0x34) | 1 << (bVar5 & 0x1f) | 1 << (bVar2 & 0x1f);
  }
  if (iVar8 == 0) {
    iVar8 = *(int *)((uint)*(ushort *)(uVar6 * 4 + 0x6f9fe2) * 4 + 0x6f8a10);
    iVar12 = *(int *)(param_2 + 0x50);
    if (iVar12 == 0) {
      return;
    }
    do {
      if (*(int *)(iVar12 + 0xc) == iVar8) {
        FUN_004f0700(iVar8,0,param_2,0xfffffffd,bVar3);
        FUN_004f0700(iVar8,0,param_2,0xfffffffb,bVar3);
        return;
      }
      iVar12 = *(int *)(iVar12 + 4);
    } while (iVar12 != 0);
    return;
  }
  uVar9 = (uint)*(ushort *)(uVar6 * 4 + 0x6f9fe2);
  iVar12 = *(int *)(iVar8 + 0x3c);
  iVar14 = *(int *)(uVar9 * 4 + 0x6f8a10);
  local_98 = 0;
  for (; iVar12 != 0; iVar12 = *(int *)(iVar12 + 4)) {
    if (*(int *)(iVar12 + 0xc) == iVar14) {
      if (iVar12 != 0) {
        FUN_004f0700(iVar14,0,param_2,iVar8,bVar3);
        if ((*(uint *)(iVar8 + 0x1c) & 0x80000) != 0) goto LAB_004efccb;
        uVar9 = 0;
        if (*(uint *)(iVar12 + 0x10) == 0) goto LAB_004efdbb;
        piVar7 = *(int **)(iVar12 + 0x14);
        goto LAB_004efda0;
      }
      break;
    }
  }
  if ((*(uint *)(iVar8 + 0x1c) & 0x80000) == 0) {
    local_98 = FUN_004fa140(param_2 + 0x84,iVar8,uVar9,*(undefined4 *)(param_1 + 0x10c),
                            *(undefined4 *)(param_1 + 0xd0));
  }
  FUN_004f0700(iVar14,0,param_2,0xfffffffd,bVar3);
  goto LAB_004efccb;
code_r0x004ef795:
  iVar14 = *(int *)(iVar14 + 4);
  if (iVar14 == 0) goto switchD_004ef65e_caseD_5;
  goto LAB_004ef790;
code_r0x004ef6b8:
  iVar12 = *(int *)(iVar12 + 4);
  if (iVar12 == 0) goto switchD_004ef65e_default;
  goto LAB_004ef6b3;
  while( true ) {
    uVar9 = uVar9 + 1;
    piVar7 = piVar7 + 3;
    if (*(uint *)(iVar12 + 0x10) <= uVar9) break;
LAB_004efda0:
    if (*piVar7 == 0x104) {
      if (uVar9 != 0xffffffff) goto LAB_004efccb;
      break;
    }
  }
LAB_004efdbb:
  local_98 = FUN_004fa140(param_2 + 0x84,iVar8,*(undefined2 *)(uVar6 * 4 + 0x6f9fe2),
                          *(undefined4 *)(param_1 + 0x10c),*(undefined4 *)(param_1 + 0xd0));
LAB_004efccb:
  FUN_004f0700(iVar14,iVar8,param_2,0xfffffffb,bVar3);
  if (local_98 == 0) {
    return;
  }
  local_9c = 4;
  do {
    if (*(int *)(param_1 + 0x84 + local_9c * 4) != 0) {
      *(undefined4 *)(param_1 + 0x84 + local_9c * 4) = 0;
      iVar12 = *(int *)(local_9c * 4 + 0x6fa058);
      if (local_9c == 4) {
        iVar12 = -0x6c959581;
      }
      for (iVar14 = *(int *)(iVar8 + 0x3c); iVar14 != 0; iVar14 = *(int *)(iVar14 + 4)) {
        if (*(int *)(iVar14 + 0xc) == iVar12) {
          FUN_004f0700(iVar12,0,param_2,iVar8,local_74[local_9c]);
          FUN_004f0700(iVar12,iVar8,param_2,0xfffffffb,local_74[local_9c]);
          break;
        }
      }
    }
    local_9c = local_9c + 1;
    if (0x12 < local_9c) {
      if (*(int *)(param_2 + 0x80) != 0) {
        FUN_004f0700(0x55d1e635,0,param_2,*(int *)(param_2 + 0x80),0);
        FUN_004f0700(0x55d1e635,*(undefined4 *)(param_2 + 0x80),param_2,0xfffffffb,0);
      }
      FUN_004f0700(0xabc08912,0,param_2,local_98,0);
      FUN_004f0700(0xabc08912,local_98,param_2,0xfffffffb,0);
      *(int *)(param_2 + 0x80) = local_98;
      return;
    }
  } while( true );
}
