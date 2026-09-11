/* spd-match: far pct=8.59 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00520790 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_005648c0();
int __cdecl FUN_005648f0();
extern int DAT_006f1dd8;
extern int DAT_00740500;
extern int DAT_00740560;
extern int _DAT_006cc7bc;
extern void LAB_00520aa4(void);
void __fastcall FUN_00520790(int obj)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;

  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  float10 fVar11;
  
  if (DAT_006f1dd8 == 0) {
    return;
  }
  if (*(char *)(obj + 0x10) == '\0') {
    return;
  }
  iVar10 = *(int *)(obj + 4);
  if (*(int *)(iVar10 + 0x168) == 0) {
    return;
  }
  FUN_005648c0();
  fVar11 = (float10)FUN_005648f0();
  *(float *)(iVar10 + 0x178) = (float)fVar11;
  uVar7 = FUN_005648c0();
  *(undefined4 *)(*(int *)(obj + 4) + 0x17c) = uVar7;
  iVar10 = *(int *)(obj + 4);
  if ((*(int *)(iVar10 + 0x168) != 0) &&
     (iVar2 = *(int *)(*(int *)(iVar10 + 0x168) + 0x18), iVar2 != 0)) {
    iVar2 = *(int *)(iVar2 + 0x27c);
    if (iVar2 == 0) {
      *(undefined4 *)(iVar10 + 0x60) = DAT_00740500;
    }
    else {
      *(undefined4 *)(iVar10 + 0x60) = *(undefined4 *)(iVar2 + 0x1c);
    }
    iVar10 = *(int *)(obj + 4);
    iVar2 = *(int *)(iVar10 + 0x60);
    uVar7 = *(undefined4 *)(iVar2 + 0x44);
    uVar1 = *(undefined4 *)(iVar2 + 0x48);
    *(undefined4 *)(iVar10 + 0xd0) = *(undefined4 *)(iVar2 + 0x40);
    *(undefined4 *)(iVar10 + 0xd4) = uVar7;
    *(undefined4 *)(iVar10 + 0xd8) = uVar1;
  }
  *(undefined4 *)(obj + 8) = 0;
  iVar10 = 0;
  do {
    iVar2 = *(int *)(*(int *)(obj + 4) + 0x168 + iVar10 * 4);
    if (iVar2 != 0) {
      iVar2 = *(int *)(iVar2 + 0x1c);
      if (iVar2 != 0) {
        *(int *)(*(int *)(obj + 4) + 0x158 + iVar10 * 4) = (int)*(char *)(iVar2 + 10);
      }
      iVar2 = *(int *)(obj + 4);
      iVar3 = *(int *)(iVar2 + 0x168 + iVar10 * 4);
      uVar7 = *(undefined4 *)(iVar3 + 0x68);
      uVar1 = *(undefined4 *)(iVar3 + 0x60);
      iVar8 = (iVar10 + 9) * 0x10;
      *(undefined4 *)(iVar8 + 4 + iVar2) = *(undefined4 *)(iVar3 + 100);
      puVar9 = (undefined4 *)(iVar8 + iVar2);
      *puVar9 = uVar1;
      puVar9[2] = uVar7;
      iVar2 = *(int *)(obj + 4);
      *(float *)(iVar2 + 0x140 + iVar10 * 4) =
           *(float *)(*(int *)(iVar2 + 0x168 + iVar10 * 4) + 0x3d4) /
           *(float *)(iVar2 + 0xf0 + iVar10 * 4);
    }
    if (_DAT_006cc7bc < *(float *)(*(int *)(obj + 4) + 0x140 + iVar10 * 4)) {
      *(undefined4 *)(*(int *)(obj + 4) + 0x140 + iVar10 * 4) = 0x3f800000;
    }
    if (iVar10 == 0) {
      *(undefined4 *)(*(int *)(obj + 4) + 0x100) = 0;
      *(undefined4 *)(*(int *)(obj + 4) + 0x120) = 0;
    }
    else {
      iVar2 = *(int *)(obj + 4);
      iVar3 = *(int *)(iVar2 + 0x168 + iVar10 * 4);
      if (iVar3 == 0) {
        *(undefined4 *)(iVar2 + 0x100 + iVar10 * 8) = 0x51ba43b7;
        *(undefined4 *)(*(int *)(obj + 4) + 0x120 + iVar10 * 8) = 0;
      }
      else {
        iVar8 = *(int *)(iVar2 + 0x168);
        fVar4 = *(float *)(iVar8 + 0x60) - *(float *)(iVar3 + 0x60);
        fVar6 = *(float *)(iVar8 + 100) - *(float *)(iVar3 + 100);
        fVar5 = *(float *)(iVar8 + 0x68) - *(float *)(iVar3 + 0x68);
        *(float *)(iVar2 + 0x100 + iVar10 * 8) = SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar4 * fVar4)
        ;
        iVar2 = *(int *)(obj + 4);
        *(float *)(iVar2 + 0x120 + iVar10 * 8) =
             *(float *)(*(int *)(iVar2 + 0x168) + 0x3d4) -
             *(float *)(*(int *)(iVar2 + 0x168 + iVar10 * 4) + 0x3d4);
      }
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 < 4);
  iVar10 = *(int *)(obj + 4);
  if (*(int *)(iVar10 + 0x188) == 1) {
    if (*(int *)(iVar10 + 0x15c) < *(int *)(iVar10 + 0x158)) {
      *(undefined4 *)(obj + 8) = 1;
    }
    iVar2 = *(int *)(*(int *)(*(int *)(iVar10 + 0x16c) + 0x18) + 0x27c);
    if (iVar2 == 0) {
      *(undefined4 *)(iVar10 + 100) = DAT_00740560;
    }
    else {
      *(undefined4 *)(iVar10 + 100) = *(undefined4 *)(iVar2 + 0x1c);
    }
    iVar10 = *(int *)(obj + 4);
    iVar2 = *(int *)(iVar10 + 100);
    uVar7 = *(undefined4 *)(iVar2 + 0x44);
    uVar1 = *(undefined4 *)(iVar2 + 0x48);
    *(undefined4 *)(iVar10 + 0xe0) = *(undefined4 *)(iVar2 + 0x40);
    *(undefined4 *)(iVar10 + 0xe4) = uVar7;
    *(undefined4 *)(iVar10 + 0xe8) = uVar1;
    iVar10 = 0;
    do {
      if (iVar10 == 1) {
        *(undefined4 *)(*(int *)(obj + 4) + 0x10c) = 0;
        *(undefined4 *)(*(int *)(obj + 4) + 300) = 0;
      }
      else {
        iVar2 = *(int *)(obj + 4);
        iVar3 = *(int *)(iVar2 + 0x168 + iVar10 * 4);
        if (iVar3 == 0) {
          *(undefined4 *)(iVar2 + 0x104 + iVar10 * 8) = 0xd1ba43b7;
        }
        else {
          iVar8 = *(int *)(iVar2 + 0x16c);
          fVar4 = *(float *)(iVar8 + 0x60) - *(float *)(iVar3 + 0x60);
          fVar6 = *(float *)(iVar8 + 100) - *(float *)(iVar3 + 100);
          fVar5 = *(float *)(iVar8 + 0x68) - *(float *)(iVar3 + 0x68);
          *(float *)(iVar2 + 0x104 + iVar10 * 8) =
               SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar4 * fVar4);
          iVar2 = *(int *)(obj + 4);
          *(float *)(iVar2 + 0x124 + iVar10 * 8) =
               *(float *)(*(int *)(iVar2 + 0x16c) + 0x3d4) -
               *(float *)(*(int *)(iVar2 + 0x168 + iVar10 * 4) + 0x3d4);
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < 4);
    iVar10 = *(int *)(obj + 4);
    if (*(int *)(iVar10 + 0x15c) <= *(int *)(iVar10 + 0x158)) {
      *(undefined4 *)(iVar10 + 0x7c) = *(undefined4 *)(iVar10 + 100);
      goto LAB_00520aa4;
    }
  }
  *(undefined4 *)(iVar10 + 0x7c) = *(undefined4 *)(iVar10 + 0x60);
LAB_00520aa4:
  iVar10 = *(int *)(obj + 4);
  if (*(int *)(iVar10 + 0x7c) != *(int *)(iVar10 + 0x78)) {
    iVar2 = *(int *)(*(int *)(iVar10 + 0x168 + *(int *)(obj + 8) * 4) + 0x18);
    if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + 0x27c), iVar2 != 0)) {
      *(undefined4 *)(iVar10 + 0x84) = *(undefined4 *)(iVar2 + 0xc);
    }
    *(undefined4 *)(*(int *)(obj + 4) + 0x78) = *(undefined4 *)(*(int *)(obj + 4) + 0x7c);
  }
  return;
}
