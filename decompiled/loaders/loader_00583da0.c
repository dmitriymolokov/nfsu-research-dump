/* spd-match: far pct=10.19 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2069 */
#include "ghidra_compat.h"

int __cdecl FUN_0044bcb0();
int __cdecl FUN_0044ecd0();
int __cdecl FUN_00468820();
extern int DAT_006b5bb4;
extern int _DAT_006cc7bc;
int unaff_ESI;

void FUN_00583da0(void)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int unaff_ESI;
  float10 fVar5;
  float local_8;
  
  iVar1 = *(int *)(*(int *)(unaff_ESI + 4) + 0x3c);
  iVar4 = 0;
  local_8 = -1.0;
  if ('\0' < *(char *)(iVar1 + 0x1c)) {
    do {
      iVar3 = FUN_00468820(iVar4);
      fVar2 = DAT_006b5bb4;
      FUN_0044ecd0();
      if (local_8 <= *(float *)(iVar3 + 0x60)) {
        local_8 = *(float *)(iVar3 + 0x60);
      }
      if (fVar2 < *(float *)(iVar3 + 0x60)) {
        FUN_0044bcb0();
        (**(code **)(**(int **)(unaff_ESI + 8) + 0x38))(0,0,0,1);
        *(undefined1 *)(unaff_ESI + 0x410) = 1;
        break;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(char *)(iVar1 + 0x1c));
    if ((*(float *)(*(int *)(unaff_ESI + 4) + 0x3d4) < _DAT_006cc7bc) &&
       (fVar5 = (**(float10 (**)())(**(int **)(*(int *)(unaff_ESI + 4) + 0x30) + 0x70))(),
       (float10)_DAT_006cc7bc < fVar5)) {
      FUN_0044bcb0();
      (**(code **)(**(int **)(unaff_ESI + 8) + 0x38))(0,0,0,1);
      *(undefined1 *)(unaff_ESI + 0x410) = 1;
    }
  }
  return;
}
