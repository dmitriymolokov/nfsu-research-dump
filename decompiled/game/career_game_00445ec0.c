/* spd-match: far pct=8.72 flags=/O2 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-member42/va_00445EC0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00401050(...);
int __cdecl FUN_0040db20(...);
int __cdecl FUN_00445520(...);
int __cdecl FUN_00445580(...);
int __cdecl FUN_00445e10(...);
extern int DAT_00736128;
extern int _DAT_006b780c;
extern int _DAT_006b7810;

struct ThisCallBox {
  void FUN_00445ec0(int val, int param_2, int param_3);
};
void ThisCallBox::FUN_00445ec0(int val, int param_2, int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;

  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  short *psVar7;
  int iVar8;
  int local_3c;
  int local_38;
  
  iVar8 = val * 0x30 + *(int *)(((int)this) + 0x20);
  if ((*(byte *)(param_2 + 0x84) & ((byte)*(undefined2 *)(iVar8 + 0xe) ^ 0x60)) == 0) {
    iVar5 = *(int *)(((int)this) + 0x18) + *(short *)(iVar8 + 0xc) * 0x48;
    if (param_3 == 1) {
      FUN_00445520();
      param_3 = FUN_0040db20(*(undefined4 *)(param_2 + 0x80));
      if (param_3 == 0) {
        return;
      }
    }
    iVar3 = FUN_00445e10(((int)(_DAT_006b780c)) + *(float *)(iVar5 + 0x44));
    if (1 < iVar3) {
      local_38 = -1;
      local_3c = 0;
      if ((*(uint *)(param_2 + 0x84) & 0x800) == 0) {
        if ((*(uint *)(param_2 + 0x84) & 0x1000) == 0) {
          piVar6 = (int *)(iVar5 + 0x24);
          psVar7 = (short *)(iVar5 + 0x18);
          iVar4 = 0;
          do {
            if ((*psVar7 <= iVar3) && (*piVar6 != 0)) {
              local_3c = *(int *)(iVar5 + 0x24 + iVar4 * 4);
              local_38 = iVar4;
              break;
            }
            iVar4 = iVar4 + 1;
            psVar7 = psVar7 + 1;
            piVar6 = piVar6 + 1;
          } while (iVar4 < 4);
        }
        else if ((*(short *)(iVar5 + 0x22) <= iVar3) && (*(int *)(iVar5 + 0x38) != 0)) {
          local_38 = 5;
          local_3c = *(int *)(iVar5 + 0x38);
        }
      }
      else if ((*(short *)(iVar5 + 0x20) <= iVar3) && (*(int *)(iVar5 + 0x34) != 0)) {
        local_38 = 4;
        local_3c = *(int *)(iVar5 + 0x34);
      }
      iVar3 = local_3c;
      if (DAT_00736128 == 2) {
        if (local_38 == 0) {
          iVar4 = 1;
          piVar6 = (int *)(iVar5 + 0x28);
          do {
            if (*piVar6 != 0) {
              iVar3 = *(int *)(iVar5 + 0x24 + iVar4 * 4);
              break;
            }
            iVar4 = iVar4 + 1;
            piVar6 = piVar6 + 1;
          } while (iVar4 < 4);
        }
      }
      else if ((DAT_00736128 == 1) && (iVar3 = *(int *)(iVar5 + 0x38), *(int *)(iVar5 + 0x38) == 0))
      {
        iVar4 = 3;
        piVar6 = (int *)(iVar5 + 0x30);
        do {
          if (*piVar6 != 0) {
            iVar3 = *(int *)(iVar5 + 0x24 + iVar4 * 4);
            break;
          }
          iVar4 = iVar4 + -1;
          piVar6 = piVar6 + -1;
          iVar3 = local_3c;
        } while (-1 < iVar4);
      }
      local_3c = iVar3;
      if (local_3c != 0) {
        if ((*(ushort *)(iVar8 + 0xe) & 0x200) == 0) {
          iVar5 = FUN_00401050();
          if (iVar5 != 0) {
            FUN_00445580();
            uVar1 = *(undefined4 *)(iVar8 + 0x18);
            uVar2 = *(undefined4 *)(iVar8 + 0x10);
            *(undefined4 *)(iVar5 + 0x34) = *(undefined4 *)(iVar8 + 0x14);
            *(undefined4 *)(iVar5 + 0x30) = uVar2;
            *(undefined4 *)(iVar5 + 0x3c) = 0x3f800000;
            *(undefined4 *)(iVar5 + 0x38) = uVar1;
            if (((uint)*(ushort *)(iVar8 + 0xe) & *(uint *)(param_2 + 0x84) & 0x100) != 0) {
              *(float *)(iVar5 + 0x38) = ((int)(_DAT_006b7810)) + *(float *)(iVar5 + 0x38);
            }
            if ((*(uint *)(param_2 + 0x84) & 0x800) != 0) {
              *(float *)(iVar5 + 0x28) = -*(float *)(iVar5 + 0x28);
            }
            piVar6 = *(int **)(param_2 + 0x8c);
            if (piVar6 < *(int **)(param_2 + 0x90)) {
              *(int **)(param_2 + 0x8c) = piVar6 + 3;
              piVar6[1] = iVar5;
              *piVar6 = local_3c + param_3;
              piVar6[2] = iVar8;
            }
          }
        }
        else {
          piVar6 = *(int **)(param_2 + 0x8c);
          if (piVar6 < *(int **)(param_2 + 0x90)) {
            *(int **)(param_2 + 0x8c) = piVar6 + 3;
            piVar6[1] = 0;
            *piVar6 = local_3c + param_3;
            piVar6[2] = iVar8;
            return;
          }
        }
      }
    }
  }
  return;
}
