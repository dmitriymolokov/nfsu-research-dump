/* spd-match: far pct=3.54 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_00564b10();
int __cdecl FUN_00674898();
extern unsigned char *DAT_007187c8;
extern int DAT_0071d89c;
extern unsigned char *DAT_0071d8d8;
extern int DAT_00736500;
extern int DAT_00736508;
extern int DAT_00736514;
extern int DAT_00736515;
extern int _DAT_006cc7b8;
extern int _DAT_006ccc3c;
extern char stack0xfffffeb0;
int unaff_ESI;

void FUN_004070a0(void)

{
  float fVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  float *pfVar5;
  char *pcVar6;
  short *psVar7;
  int unaff_ESI;
  int *piVar8;
  float10 fVar9;
  undefined8 uVar10;
  int local_148;
  float local_144 [81];
  
  if (*(int *)(unaff_ESI + 0x134) == 0x13) {
    (**(code **)(*DAT_007187c8 + 100))(DAT_007187c8);
    pfVar5 = local_144;
    iVar4 = (**(code **)(*DAT_007187c8 + 0x28))(DAT_007187c8,0x14,pfVar5,&stack0xfffffeb0,0);
    if (iVar4 < 0) {
      if ((iVar4 == -0x7ff8fff4) || (iVar4 == -0x7ff8ffe2)) {
        (**(code **)(*DAT_007187c8 + 0x1c))(DAT_007187c8);
        return;
      }
    }
    else {
      if (DAT_00736508 != '\0') {
        *(undefined4 *)(unaff_ESI + 8) = 0xffffffff;
        *(undefined4 *)(unaff_ESI + 0xc) = 0xffffffff;
        return;
      }
      if (pfVar5 != (float *)0x0) {
        piVar8 = &local_148;
        do {
          if (piVar8[-3] == 0) {
            uVar10 = __allshl();
            *(uint *)(unaff_ESI + 8) = *(uint *)(unaff_ESI + 8) | (uint)uVar10;
            *(uint *)(unaff_ESI + 0xc) =
                 *(uint *)(unaff_ESI + 0xc) | (uint)((ulonglong)uVar10 >> 0x20);
          }
          else {
            if ((*piVar8 == 3) || (*piVar8 == 4)) {
              DAT_00736515 = 1;
              DAT_00736514 = 0;
            }
            uVar10 = __allshl();
            *(uint *)(unaff_ESI + 8) = *(uint *)(unaff_ESI + 8) & -(int)uVar10 - 1U;
            *(uint *)(unaff_ESI + 0xc) =
                 *(uint *)(unaff_ESI + 0xc) & -(int)((ulonglong)uVar10 >> 0x20) - 1U;
          }
          piVar8 = piVar8 + 5;
          pfVar5 = (float *)((int)pfVar5 + -1);
        } while (pfVar5 != (float *)0x0);
        return;
      }
    }
  }
  else if ((DAT_00736508 == '\0') && ((&DAT_0071d89c)[*(int *)(unaff_ESI + 0x130)] != 0)) {
    local_148 = *(int *)(unaff_ESI + 0x130) * 0x110;
    *(undefined4 *)(unaff_ESI + 8) = 0xffffffff;
    *(undefined4 *)(unaff_ESI + 0xc) = 0xffffffff;
    pcVar6 = &DAT_0071d8d8 + local_148;
    iVar4 = 0x10;
    do {
      if (*pcVar6 < '\0') {
        uVar10 = __allshl();
        *(uint *)(unaff_ESI + 8) = *(uint *)(unaff_ESI + 8) & -(int)uVar10 - 1U;
        *(uint *)(unaff_ESI + 0xc) =
             *(uint *)(unaff_ESI + 0xc) & -(int)((ulonglong)uVar10 >> 0x20) - 1U;
        uVar10 = __allshl();
        *(uint *)(unaff_ESI + 8) = *(uint *)(unaff_ESI + 8) & -(int)uVar10 - 1U;
        *(uint *)(unaff_ESI + 0xc) =
             *(uint *)(unaff_ESI + 0xc) & -(int)((ulonglong)uVar10 >> 0x20) - 1U;
      }
      pcVar6 = pcVar6 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    psVar7 = (short *)(local_148 + 0x20 + DAT_00736500);
    iVar4 = 4;
    do {
      if (*psVar7 != -1) {
        FUN_00674898();
        fVar9 = (float10)FUN_00564b10();
        local_144[0] = (float)fVar9;
        FUN_00674898();
        fVar9 = (float10)FUN_00564b10();
        fVar1 = (float)fVar9;
        if (local_144[0] < _DAT_006ccc3c) {
          uVar10 = __allshl();
          *(uint *)(unaff_ESI + 8) = *(uint *)(unaff_ESI + 8) & -(int)uVar10 - 1U;
          *(uint *)(unaff_ESI + 0xc) =
               *(uint *)(unaff_ESI + 0xc) & -(int)((ulonglong)uVar10 >> 0x20) - 1U;
        }
        if (_DAT_006cc7b8 < local_144[0]) {
          uVar10 = __allshl();
          *(uint *)(unaff_ESI + 8) = *(uint *)(unaff_ESI + 8) & -(int)uVar10 - 1U;
          *(uint *)(unaff_ESI + 0xc) =
               *(uint *)(unaff_ESI + 0xc) & -(int)((ulonglong)uVar10 >> 0x20) - 1U;
        }
        if (fVar1 < _DAT_006ccc3c) {
          uVar10 = __allshl();
          *(uint *)(unaff_ESI + 8) = *(uint *)(unaff_ESI + 8) & -(int)uVar10 - 1U;
          *(uint *)(unaff_ESI + 0xc) =
               *(uint *)(unaff_ESI + 0xc) & -(int)((ulonglong)uVar10 >> 0x20) - 1U;
        }
        if (_DAT_006cc7b8 < fVar1) {
          uVar10 = __allshl();
          *(uint *)(unaff_ESI + 8) = *(uint *)(unaff_ESI + 8) & -(int)uVar10 - 1U;
          *(uint *)(unaff_ESI + 0xc) =
               *(uint *)(unaff_ESI + 0xc) & -(int)((ulonglong)uVar10 >> 0x20) - 1U;
        }
        if (local_144[0] < _DAT_006ccc3c) {
          uVar10 = __allshl();
          *(uint *)(unaff_ESI + 8) = *(uint *)(unaff_ESI + 8) & -(int)uVar10 - 1U;
          *(uint *)(unaff_ESI + 0xc) =
               *(uint *)(unaff_ESI + 0xc) & -(int)((ulonglong)uVar10 >> 0x20) - 1U;
        }
        if (_DAT_006cc7b8 < local_144[0]) {
          uVar10 = __allshl();
          *(uint *)(unaff_ESI + 8) = *(uint *)(unaff_ESI + 8) & -(int)uVar10 - 1U;
          *(uint *)(unaff_ESI + 0xc) =
               *(uint *)(unaff_ESI + 0xc) & -(int)((ulonglong)uVar10 >> 0x20) - 1U;
        }
        if (fVar1 < _DAT_006ccc3c) {
          uVar10 = __allshl();
          *(uint *)(unaff_ESI + 8) = *(uint *)(unaff_ESI + 8) & -(int)uVar10 - 1U;
          *(uint *)(unaff_ESI + 0xc) =
               *(uint *)(unaff_ESI + 0xc) & -(int)((ulonglong)uVar10 >> 0x20) - 1U;
        }
        if (_DAT_006cc7b8 < fVar1) {
          uVar10 = __allshl();
          *(uint *)(unaff_ESI + 8) = *(uint *)(unaff_ESI + 8) & -(int)uVar10 - 1U;
          *(uint *)(unaff_ESI + 0xc) =
               *(uint *)(unaff_ESI + 0xc) & -(int)((ulonglong)uVar10 >> 0x20) - 1U;
        }
      }
      psVar7 = psVar7 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    cVar2 = -0x80;
    if (*(char *)(unaff_ESI + 0x264) != '\0') {
      cVar2 = FUN_00674898();
      cVar2 = -0x80 - cVar2 * *(char *)(unaff_ESI + 0x254);
    }
    *(char *)(unaff_ESI + 0x12) = cVar2;
    if ((*(char *)(unaff_ESI + 0x268) != '\0') && (*(char *)(unaff_ESI + 0x267) != '\0')) {
      cVar2 = FUN_00674898();
      *(char *)(unaff_ESI + 0x13) = '\x7f' - cVar2 * *(char *)(unaff_ESI + 0x260);
      *(undefined1 *)(unaff_ESI + 0x11) = 0;
      *(undefined1 *)(unaff_ESI + 0x10) = 0;
      return;
    }
    cVar2 = '\0';
    if (*(char *)(unaff_ESI + 0x266) != '\0') {
      cVar2 = FUN_00674898();
      cVar2 = '\x7f' - cVar2 * *(char *)(unaff_ESI + 0x25c);
    }
    cVar3 = '\0';
    if (*(char *)(unaff_ESI + 0x265) != '\0') {
      cVar3 = FUN_00674898();
      cVar3 = '\x7f' - cVar3 * *(char *)(unaff_ESI + 600);
    }
    *(char *)(unaff_ESI + 0x11) = cVar2;
    *(char *)(unaff_ESI + 0x10) = cVar3;
    *(undefined1 *)(unaff_ESI + 0x13) = 0x80;
  }
  return;
}
