/* spd-match: far pct=6.77 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00450EC0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00435ca0();
int __cdecl FUN_0044d5f0();
int __cdecl FUN_00647b70();
extern int DAT_006cc7a4;
extern int DAT_0073619c;
extern unsigned char *DAT_0077a340;
extern int DAT_0077a344;
extern int _DAT_006b7634;
extern int _DAT_006b7638;
extern int _DAT_006b763c;
extern int _DAT_006b7640;
extern int _DAT_006b7644;
extern int _DAT_006b7648;
extern int _DAT_006cc798;
extern int _DAT_006cc8bc;
undefined4 __fastcall FUN_00450ec0(int * obj, undefined4 *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  char cVar7;

  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined4 uVar12;
  bool bVar13;
  float10 fVar14;
  float local_1c;
  int *local_14;
  int *local_4;
  
  *param_1 = 0;
  iVar9 = obj[0xe2];
  iVar2 = obj[0xea];
  iVar3 = *(int *)(*obj + 0x2c);
  cVar7 = FUN_00435ca0(DAT_0073619c,*obj);
  if (cVar7 == '\0') {
    local_14 = (int *)0x0;
    fVar6 = -_DAT_006b763c;
    local_4 = (int *)0x0;
    iVar10 = (char)iVar9 + 1;
    if (iVar10 < obj[1]) {
      piVar11 = obj + iVar10 * 0xe + 2;
      do {
        iVar4 = piVar11[0xd];
        iVar8 = FUN_00647b70();
        if (((iVar8 == 6) && (*(int *)(*(int *)(*(int *)(iVar4 + 0x1d4) + 0x90) + 0x1c) != 0)) &&
           (fVar14 = (float10)FUN_0044d5f0(), (float10)_DAT_006b7648 <= fVar14)) {
          bVar13 = false;
          iVar10 = FUN_00647b70();
          if (iVar10 == 6) {
            bVar13 = *(int *)(*(int *)(*(int *)(*(int *)(iVar4 + 0x1d4) + 0x90) + 0x14) + 4) == 1;
          }
          fVar1 = (float)piVar11[5];
          iVar10 = *(int *)(iVar2 + 8 + piVar11[0xc] * 4);
          if (fVar1 <= DAT_006cc7a4) {
            fVar1 = *(float *)(iVar10 + 0x20) - fVar1;
          }
          else {
            fVar1 = fVar1 - *(float *)(iVar10 + 0x3c);
          }
          fVar5 = (float)piVar11[1];
          local_1c = (float)piVar11[4] - (float)obj[(char)obj[0xe2] * 0xe + 6];
          if ((&DAT_0077a344)[*(char *)(*(int *)(*(int *)(iVar3 + 4) + 0x14) + 0x736) * 8] != '\0')
          {
            local_1c = local_1c - ((float)piVar11[3] + (float)obj[(char)iVar9 * 0xe + 5]);
          }
          if (DAT_006cc7a4 <= fVar1) {
            return 0xffffffff;
          }
          if (DAT_006cc7a4 <= local_1c) {
            return 0xffffffff;
          }
          fVar1 = DAT_006cc7a4;
          if (*(int *)(iVar2 + 4) != 0) {
            fVar1 = *(float *)(*(int *)(iVar2 + 8) + 0x58);
          }
          if (fVar1 < (float)piVar11[4]) {
            if (local_1c <= -_DAT_006b7644) {
              return 0xffffffff;
            }
            if (_DAT_006b7640 < fVar5) {
              if (_DAT_006cc8bc < fVar5) {
                fVar1 = ABS(local_1c / fVar5);
                fVar5 = _DAT_006b7638;
                if (bVar13) {
                  fVar5 = _DAT_006b7634;
                }
                if ((fVar1 < fVar5 != (fVar1 == fVar5)) && (fVar1 < _DAT_006cc798)) {
                  local_14 = piVar11;
                }
              }
              if ((!bVar13) || (local_1c <= fVar6)) {
                piVar11 = local_4;
              }
              if (local_14 == (int *)0x0) {
                if (piVar11 == (int *)0x0) {
                  return 0xffffffff;
                }
                iVar2 = piVar11[0xd];
                uVar12 = 0;
                iVar9 = FUN_00647b70();
                if (iVar9 == 6) {
                  uVar12 = *(undefined4 *)(*(int *)(iVar2 + 0x1d4) + 0x90);
                }
                *param_1 = uVar12;
              }
              else {
                iVar2 = local_14[0xd];
                uVar12 = 0;
                iVar9 = FUN_00647b70();
                if (iVar9 == 6) {
                  uVar12 = *(undefined4 *)(*(int *)(iVar2 + 0x1d4) + 0x90);
                }
                *param_1 = uVar12;
              }
              return *(undefined4 *)
                      (&DAT_0077a340 + *(char *)(*(int *)(*(int *)(iVar3 + 4) + 0x14) + 0x736) * 8);
            }
            return 0xffffffff;
          }
          return 0xffffffff;
        }
        iVar10 = iVar10 + 1;
        piVar11 = piVar11 + 0xe;
      } while (iVar10 < obj[1]);
    }
  }
  return 0xffffffff;
}
