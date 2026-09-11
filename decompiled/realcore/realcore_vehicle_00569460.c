/* spd-match: far pct=7.36 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00569460 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0040b930();
int __cdecl FUN_00567370();
int __cdecl FUN_005abda2();
int __cdecl FUN_005ac68f();
extern int DAT_006cc7a4;
extern int DAT_0070467c;
extern int DAT_007345d4;
extern unsigned char *DAT_007355b4;
extern int DAT_007355b8;
extern int DAT_007355c4;
extern unsigned char *DAT_007355c8;
extern unsigned char *_DAT_006f1a7c;
extern void LAB_005696e0(void);
void __fastcall FUN_00569460(undefined4 * obj, float *param_1, ushort param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  float fVar11;

  uint uVar12;
  float *pfVar13;
  int iVar14;
  int *piVar15;
  undefined4 uVar16;
  float *pfVar18;
  float *pfStack_bc;
  float afStack_b8 [3];
  undefined1 auStack_ac [12];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [76];
  char cVar17;
  
  local_9c = obj[1];
  local_a0 = *obj;
  local_98 = obj[2];
  local_90 = 0x3f800000;
  local_8c = 0;
  local_88 = 0;
  local_84 = 0;
  local_80 = 0;
  local_7c = 0x3f800000;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0x3f800000;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0x3f800000;
  FUN_0040b930();
  FUN_005ac68f(&local_90,&local_90,local_50);
  FUN_005abda2(auStack_ac);
  uVar12 = DAT_007355b4 + 0x10;
  piVar15 = &DAT_0070467c;
  do {
    iVar9 = piVar15[0xd];
    pfVar18 = (float *)(piVar15 + 0xd);
    if (uVar12 < DAT_007355b8) {
      DAT_007355b4 = DAT_007355b4 + 0x10;
      uVar12 = uVar12 + 0x10;
    }
    else {
      DAT_007355c8 = DAT_007355c8 + 0x10;
      DAT_007355c4 = 1;
    }
    if (((int)piVar15 < 0x70485c) || (pfVar13 = afStack_b8, 0x7048ac < (int)piVar15)) {
      pfVar13 = pfStack_bc;
    }
    if ((int)piVar15 < 0x7046cd) {
      if (0x8000 < param_2) {
        param_2 = -param_2;
      }
      *pfVar18 = (float)param_2 / *(float *)_DAT_006f1a7c + *pfVar18;
    }
    iVar10 = *piVar15;
    uVar16 = 0x1000000;
    cVar17 = '\x01';
    if (0 < iVar10) {
      fVar1 = *pfVar13;
      fVar2 = *param_1;
      fVar3 = pfVar13[1];
      fVar4 = param_1[1];
      fVar5 = pfVar13[2];
      fVar6 = param_1[2];
      if (piVar15[-1] == 0) {
        iVar14 = 0;
        cVar17 = '\x01';
        if (0 < iVar10) {
          pfVar13 = (float *)(piVar15 + 3);
          do {
            fVar7 = pfVar13[-2];
            fVar11 = *pfVar13;
            fVar8 = pfVar13[-1];
            if (DAT_007345d4 != 0) {
              FUN_00567370();
            }
            cVar17 = (char)((uint)uVar16 >> 0x18);
            if ((fVar7 * (fVar1 - fVar2) + fVar8 * (fVar3 - fVar4) + fVar11 * (fVar5 - fVar6)) -
                *pfVar18 < DAT_006cc7a4) break;
            pfVar18 = pfVar18 + 1;
            iVar14 = iVar14 + 1;
            pfVar13 = pfVar13 + 4;
          } while (iVar14 < *piVar15);
        }
        if (iVar14 == *piVar15) {
LAB_005696e0:
          cVar17 = '\0';
        }
      }
      else if ((piVar15[-1] == 1) && (iVar14 = 0, 0 < iVar10)) {
        pfVar13 = (float *)(piVar15 + 3);
        do {
          fVar7 = pfVar13[-2];
          fVar11 = *pfVar13;
          fVar8 = pfVar13[-1];
          if (DAT_007345d4 != 0) {
            FUN_00567370();
          }
          cVar17 = (char)((uint)uVar16 >> 0x18);
          if (DAT_006cc7a4 <=
              (fVar7 * (fVar1 - fVar2) + fVar8 * (fVar3 - fVar4) + fVar11 * (fVar5 - fVar6)) -
              *pfVar18) goto LAB_005696e0;
          pfVar18 = pfVar18 + 1;
          iVar14 = iVar14 + 1;
          pfVar13 = pfVar13 + 4;
        } while (iVar14 < *piVar15);
      }
    }
    *(char *)(param_1 + 6) = cVar17;
    piVar15[0xd] = iVar9;
    if (cVar17 == '\0') {
      param_1[4] = (float)((int)param_1[4] + 1);
    }
    else {
      param_1[5] = (float)((int)param_1[5] + 1);
    }
    piVar15 = piVar15 + 0x14;
    param_1 = param_1 + 8;
    if (0x704adb < (int)piVar15) {
      return;
    }
  } while( true );
}
