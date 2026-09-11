/* spd-match: far pct=4.51 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_3_1 */
#include "ghidra_compat.h"

int __cdecl FUN_005a8640();
extern int DAT_00733e28;
extern int DAT_00733f4c;
extern int DAT_00733f50;
extern int _DAT_006cc970;
extern void LAB_005a8dea(void);
extern char stack0xffffffac;
extern char stack0xffffffb4;
int unaff_EBP;

undefined4 FUN_005a8a50(int *param_1)

{
  short sVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  int *piVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  int *piVar10;
  float *pfVar11;
  int unaff_EBP;
  float *pfVar12;
  uint uVar13;
  int *piVar14;
  undefined4 *puVar15;
  undefined1 *puVar16;
  int *piVar17;
  int *piStack_58;
  int iStack_3c;
  int *piStack_30;
  float afStack_24 [2];
  int *local_1c;
  undefined4 local_18 [2];
  uint *uStack_10;
  
  iVar7 = param_1[1];
  pfVar2 = (float *)param_1[0x6e];
  piVar17 = (int *)*param_1;
  piVar14 = param_1 + 2;
  if ((piVar17 == (int *)0x0) || (*(char *)((int)piVar17 + 0x4a) != ' ')) {
    return 0;
  }
  piStack_58 = (int *)0x0;
  local_1c = piVar14;
  (**(code **)(**(int **)(*piVar17 + 0x18) + 0x4c))(*(int **)(*piVar17 + 0x18),0,local_18,0);
  iVar9 = piVar17[0x11];
  sVar1 = *(short *)((int)piVar17 + 0x46);
  piVar6 = param_1;
  if (DAT_00733f4c == 0) {
    puVar15 = &DAT_00733e28;
    for (iVar7 = 0x40; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    afStack_24[0] = -1.9921875;
    afStack_24[1] = -0.503891;
    local_1c = (int *)0xbf0000ff;
    local_18[0] = 0xbfff00ff;
    if (pfVar2 < pfVar2 + (int)sVar1 * (int)(short)iVar9) {
      iVar7 = 0;
      pfVar8 = pfVar2;
      do {
        iVar4 = 0;
        do {
          if (*pfVar8 == afStack_24[iVar4]) {
            iVar3 = (&DAT_00733f50)[iVar4];
            (&DAT_00733e28)[iVar4 * 0x10 + iVar3] = iVar7 >> 2;
            (&DAT_00733f50)[iVar4] = iVar3 + 1;
            piVar6 = (int *)uStack_10;
            break;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < 4);
        pfVar8 = pfVar8 + 1;
        iVar7 = iVar7 + 4;
      } while (pfVar8 < pfVar2 + (int)sVar1 * (int)(short)iVar9);
    }
    piVar17 = (int *)0x0;
    DAT_00733f4c = 1;
    iVar7 = unaff_EBP;
  }
  (*((unsigned char *)&(uStack_10) + 3)) = (undefined1)((uint)iVar7 >> 0x18);
  (*(unsigned int *)&(uStack_10)) = (*(unsigned int *)&(uStack_10) & 0xff000000u) | ((unsigned int)(CONCAT12((char)iVar7,(short)iVar7)) & 0x00ffffffu);
  *piVar14 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((int)param_1 + 0xb),(char)*piVar14),
                               *(undefined1 *)((int)param_1 + 9)),*(undefined1 *)((int)param_1 + 10)
                     );
  param_1[3] = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((int)param_1 + 0xf),(char)param_1[3]),
                                 *(undefined1 *)((int)param_1 + 0xd)),
                        *(undefined1 *)((int)param_1 + 0xe));
  param_1[4] = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((int)param_1 + 0x13),(char)param_1[4]),
                                 *(undefined1 *)((int)param_1 + 0x11)),
                        *(undefined1 *)((int)param_1 + 0x12));
  uStack_10 = (uint *)CONCAT31(((unsigned int)(uStack_10) >> 8),(char)((uint)unaff_EBP >> 0x10));
  iVar7 = (int)sVar1 * (int)(short)iVar9;
  param_1[5] = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((int)param_1 + 0x17),(char)param_1[5]),
                                 *(undefined1 *)((int)param_1 + 0x15)),
                        *(undefined1 *)((int)param_1 + 0x16));
  if (pfVar2 < pfVar2 + iVar7) {
    pfVar8 = pfVar2;
    for (iVar9 = ((uint)((int)(pfVar2 + iVar7) + (-1 - (int)pfVar2)) >> 2) + 1; iVar9 != 0;
        iVar9 = iVar9 + -1) {
      *pfVar8 = *(float *)&uStack_10;
      pfVar8 = pfVar8 + 1;
    }
    piVar17 = (int *)0x0;
  }
  if (0 < iStack_3c) {
    puVar16 = (undefined1 *)((int)piVar6 + 0x3d);
    do {
      if (*(int *)(puVar16 + -0x25) != 0) {
        if (*(int *)(puVar16 + -5) != 0) {
          *(uint *)(puVar16 + -1) =
               CONCAT31(CONCAT21(CONCAT11(puVar16[2],puVar16[-1]),*puVar16),puVar16[1]);
          *(uint *)(puVar16 + 3) =
               CONCAT31(CONCAT21(CONCAT11(puVar16[6],puVar16[3]),puVar16[4]),puVar16[5]);
          *(uint *)(puVar16 + 7) =
               CONCAT31(CONCAT21(CONCAT11(puVar16[10],puVar16[7]),puVar16[8]),puVar16[9]);
          *(uint *)(puVar16 + 0xb) =
               CONCAT31(CONCAT21(CONCAT11(puVar16[0xe],puVar16[0xb]),puVar16[0xc]),puVar16[0xd]);
        }
        pfVar11 = *(float **)(puVar16 + -0x19);
        uStack_10 = *(uint **)(puVar16 + -0x11);
        pfVar8 = pfVar11 + iVar7;
        pfVar12 = pfVar2;
        for (; pfVar11 < pfVar8; pfVar11 = pfVar11 + 1) {
          fVar5 = *pfVar11;
          uVar13 = *uStack_10 & 0xff;
          if ((*(int *)(puVar16 + -5) != 0) && (uVar13 != 0)) {
            afStack_24[0] = (float)((uint)fVar5 >> 0x10 & 0xff) * _DAT_006cc970;
            afStack_24[1] = (float)((uint)fVar5 >> 8 & 0xff) * _DAT_006cc970;
            local_18[0] = 0;
            afStack_24[2] = (float)((uint)fVar5 & 0xff) * _DAT_006cc970;
            fVar5 = (float)FUN_005a8640(puVar16 + -1,afStack_24,3,1);
          }
          if (uVar13 < 0x80) {
            if (uVar13 != 0) {
              fVar5 = (float)FUN_005a8640(&stack0xffffffac,&stack0xffffffb4,2,0);
              goto LAB_005a8dea;
            }
          }
          else {
LAB_005a8dea:
            *pfVar12 = fVar5;
          }
          uStack_10 = uStack_10 + 1;
          pfVar12 = pfVar12 + 1;
          piVar14 = piStack_30;
        }
      }
      puVar16 = puVar16 + 0x34;
      iStack_3c = iStack_3c + -1;
      piVar17 = piStack_58;
    } while (iStack_3c != 0);
  }
  piVar6 = &DAT_00733f50;
  uStack_10 = &DAT_00733e28;
  do {
    iVar7 = 0;
    piVar10 = (int *)uStack_10;
    if (0 < *piVar6) {
      do {
        pfVar2[*piVar10] = *(float *)((int)(piVar14 + -0x1ccfd4) + (int)piVar6);
        iVar7 = iVar7 + 1;
        piVar10 = piVar10 + 1;
      } while (iVar7 < *piVar6);
      piVar17 = (int *)0x0;
    }
    piVar6 = piVar6 + 1;
    uStack_10 = uStack_10 + 0x10;
  } while ((int)piVar6 < 0x733f60);
  (**(code **)(**(int **)(*piVar17 + 0x18) + 0x50))(*(int **)(*piVar17 + 0x18),0);
  return 1;
}
