/* spd-match: far pct=8.07 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004A31E0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0041ffe0();
int __cdecl FUN_004f68a0();
int __cdecl FUN_004fd230();
int __cdecl FUN_004ff030();
int __cdecl FUN_00586580();
extern int DAT_006cc568;
extern int DAT_006fbf14;
extern int DAT_00735710;
extern unsigned char *DAT_0073619c;
extern void LAB_004a32ba(void);
extern void LAB_004a33c0(void);
void __fastcall FUN_004a31e0(int obj, int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;

  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  int *piVar9;
  bool bVar10;
  undefined1 local_20 [32];
  
  iVar3 = param_1;
  iVar6 = *(int *)(obj + 4);
  if (((DAT_006fbf14 == 0) && (*(int *)(obj + 0x10) == 0)) &&
     (iVar4 = FUN_0041ffe0(), iVar4 != 0)) {
    iVar6 = iVar4;
  }
  if (*(int *)(iVar6 + 0x1c) != 0) {
    cVar1 = *(char *)(*(int *)(iVar6 + 0x1c) + 10);
    piVar9 = (int *)(param_1 + 0xf0);
    param_1 = 0;
    if (0 < *piVar9) {
      piVar9 = (int *)(iVar3 + 0xe0);
      do {
        if (*(int *)(DAT_0073619c + 0x24) <= param_1) {
          return;
        }
        iVar6 = piVar9[0x11];
        if (*(int *)(*piVar9 * 0x30 + 0x20 + iVar3) == (int)cVar1) {
          if ((iVar6 == 0) || (iVar4 = *(int *)(iVar6 + 0x4c), iVar4 == 0)) {
LAB_004a32ba:
            puVar8 = (undefined1 *)(*piVar9 * 0x30 + 0x2c + iVar3);
          }
          else {
            do {
              iVar5 = FUN_004fd230();
              if (*(int *)(iVar4 + 0x30) == iVar5) {
                if (iVar4 != 0) {
                  if (iVar4 != *(int *)(iVar6 + 0x54)) {
                    *(int *)(iVar6 + 0x54) = iVar4;
                    FUN_004ff030(iVar6);
                    *(undefined4 *)(*(int *)(iVar6 + 0x54) + 0x10) = 0;
                  }
                  *(undefined4 *)(iVar4 + 0x10) = 0;
                }
                goto LAB_004a32ba;
              }
              iVar4 = *(int *)(iVar4 + 4);
            } while (iVar4 != 0);
            puVar8 = (undefined1 *)(*piVar9 * 0x30 + 0x2c + iVar3);
          }
LAB_004a33c0:
          FUN_004f68a0(&DAT_006cc568,puVar8);
        }
        else {
          if (iVar6 != 0) {
            for (iVar4 = *(int *)(iVar6 + 0x4c); iVar4 != 0; iVar4 = *(int *)(iVar4 + 4)) {
              iVar5 = FUN_004fd230();
              if (*(int *)(iVar4 + 0x30) == iVar5) {
                if (iVar4 != 0) {
                  if (iVar4 != *(int *)(iVar6 + 0x54)) {
                    *(int *)(iVar6 + 0x54) = iVar4;
                    FUN_004ff030(iVar6);
                    *(undefined4 *)(*(int *)(iVar6 + 0x54) + 0x10) = 0;
                  }
                  *(undefined4 *)(iVar4 + 0x10) = 0;
                }
                break;
              }
            }
          }
          iVar6 = *(int *)(*piVar9 * 0x30 + 0x20 + iVar3);
          if (*(int *)(DAT_0073619c + 0x24) < iVar6) {
            iVar6 = 0;
          }
          else {
            iVar6 = *(int *)(DAT_0073619c + 0x51c + iVar6 * 4);
          }
          if (*(short *)(iVar6 + 0x10) == 0) {
            FUN_00586580(local_20);
            puVar8 = local_20;
            goto LAB_004a33c0;
          }
          switch(*(short *)(iVar6 + 0x10)) {
          case 3:
            uVar7 = 0x5d82dba2;
            break;
          default:
            uVar7 = 0xd4293449;
            break;
          case 6:
            uVar7 = 0x1e66364;
            break;
          case 7:
            uVar7 = 0xb7b75185;
            break;
          case 9:
            uVar7 = 0x1ce129e0;
            break;
          case 10:
            uVar7 = 0xa7db717f;
          }
          iVar6 = piVar9[5];
          if (iVar6 != 0) {
            *(uint *)(iVar6 + 0x1c) = *(uint *)(iVar6 + 0x1c) | 0x400000;
            puVar2 = DAT_00735710;
            bVar10 = DAT_00735710 != (undefined4 *)0x0;
            *(undefined4 *)(iVar6 + 0x5c) = uVar7;
            if (bVar10) {
              (**(code **)*puVar2)(iVar6);
            }
            *(uint *)(iVar6 + 0x1c) = *(uint *)(iVar6 + 0x1c) & 0xfffffffd | 0x400000;
          }
        }
        param_1 = param_1 + 1;
        piVar9 = piVar9 + 1;
      } while (param_1 < *(int *)(iVar3 + 0xf0));
    }
  }
  return;
}
