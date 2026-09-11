/* spd-match: far pct=17.42 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004FA650 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004fa8c0();
int __cdecl FUN_004fad70();
int unaff_EDI;
void __fastcall FUN_004fa650(int obj)

{
  short sVar1;
  int iVar2;
  undefined2 *puVar3;

  uint uVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  short *psVar8;
  int unaff_EDI;
  uint local_8;
  
  *(uint *)(obj + 100) = *(uint *)(obj + 100) | *(uint *)(unaff_EDI + 100) & 0xe;
  *(undefined4 *)(obj + 0x80) = *(undefined4 *)(unaff_EDI + 0x80);
  *(undefined4 *)(obj + 0x84) = *(undefined4 *)(unaff_EDI + 0x84);
  *(undefined4 *)(obj + 0x68) = *(undefined4 *)(unaff_EDI + 0x68);
  *(undefined4 *)(obj + 0x6c) = *(undefined4 *)(unaff_EDI + 0x6c);
  FUN_004fa8c0(obj);
  if (*(void **)(obj + 0x9c) != (void *)0x0) {
    _free(*(void **)(obj + 0x9c));
    *(undefined4 *)(obj + 0x9c) = 0;
  }
  if (*(void **)(obj + 0x98) != (void *)0x0) {
    _free(*(void **)(obj + 0x98));
    *(undefined4 *)(obj + 0x98) = 0;
  }
  *(undefined4 *)(obj + 0x8c) = 0;
  *(undefined4 *)(obj + 0x94) = 0;
  *(undefined4 *)(obj + 0x90) = 0;
  FUN_004fad70(*(undefined4 *)(unaff_EDI + 0x8c),*(undefined4 *)(unaff_EDI + 0x90));
  uVar4 = *(int *)(obj + 0x60) * *(int *)(obj + 0x5c);
  local_8 = 0;
  if (uVar4 != 0) {
    iVar5 = 0;
    do {
      *(undefined4 *)(iVar5 + *(int *)(obj + 0x88)) =
           *(undefined4 *)(iVar5 + *(int *)(unaff_EDI + 0x88));
      *(undefined4 *)(iVar5 + 0x18 + *(int *)(obj + 0x88)) =
           *(undefined4 *)(iVar5 + 0x18 + *(int *)(unaff_EDI + 0x88));
      iVar7 = *(int *)(unaff_EDI + 0x88);
      iVar2 = *(int *)(obj + 0x88);
      *(undefined4 *)(iVar5 + 4 + iVar2) = *(undefined4 *)(iVar5 + 4 + iVar7);
      *(undefined4 *)(iVar5 + 8 + iVar2) = *(undefined4 *)(iVar5 + iVar7 + 8);
      *(undefined4 *)(iVar5 + 0xc + *(int *)(obj + 0x88)) =
           *(undefined4 *)(iVar5 + 0xc + *(int *)(unaff_EDI + 0x88));
      *(undefined4 *)(iVar5 + 0x14 + *(int *)(obj + 0x88)) =
           *(undefined4 *)(iVar5 + 0x14 + *(int *)(unaff_EDI + 0x88));
      *(undefined4 *)(iVar5 + 0x10 + *(int *)(obj + 0x88)) =
           *(undefined4 *)(iVar5 + 0x10 + *(int *)(unaff_EDI + 0x88));
      *(undefined4 *)(iVar5 + 0x1c + *(int *)(obj + 0x88)) =
           *(undefined4 *)(iVar5 + 0x1c + *(int *)(unaff_EDI + 0x88));
      if (*(int *)(iVar5 + 0x18 + *(int *)(obj + 0x88)) == 2) {
        psVar8 = *(short **)(iVar5 + 0x20 + *(int *)(unaff_EDI + 0x88));
        if (psVar8 == (short *)0x0) {
          return;
        }
        puVar3 = *(undefined2 **)(*(int *)(obj + 0x98) + *(int *)(obj + 0x94) * 4);
        *(int *)(obj + 0x94) = *(int *)(obj + 0x94) + 1;
        *puVar3 = 0;
        *(undefined2 **)(iVar5 + 0x20 + *(int *)(obj + 0x88)) = puVar3;
        psVar6 = *(short **)(iVar5 + 0x20 + *(int *)(obj + 0x88));
        if (psVar6 != (short *)0x0) {
          sVar1 = *psVar8;
          while (sVar1 != 0) {
            *psVar6 = sVar1;
            psVar8 = psVar8 + 1;
            psVar6 = psVar6 + 1;
            sVar1 = *psVar8;
          }
          *psVar6 = 0;
        }
      }
      iVar7 = *(int *)(obj + 0x88) + iVar5;
      if (*(int *)(*(int *)(obj + 0x88) + 0x18 + iVar5) == 1) {
        iVar2 = iVar5 + 0x20 + *(int *)(unaff_EDI + 0x88);
        *(undefined4 *)(iVar7 + 0x20) = *(undefined4 *)(iVar5 + 0x20 + *(int *)(unaff_EDI + 0x88));
        *(undefined4 *)(iVar7 + 0x24) = *(undefined4 *)(iVar2 + 4);
        *(undefined4 *)(iVar7 + 0x28) = *(undefined4 *)(iVar2 + 8);
        *(undefined4 *)(iVar7 + 0x2c) = *(undefined4 *)(iVar2 + 0xc);
      }
      local_8 = local_8 + 1;
      iVar5 = iVar5 + 0x30;
    } while (local_8 < uVar4);
  }
  return;
}
