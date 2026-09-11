/* spd-match: far pct=7.72 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004C9C20 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004174b0();
int __cdecl FUN_004c9bd0();
int __cdecl FUN_004f8dd0();
int __cdecl FUN_004f9240();
void __fastcall FUN_004c9c20(int obj)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;

  int *piVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  int local_24;
  char local_20 [32];
  
  FUN_004c9bd0();
  local_24 = 0;
  if (0 < *(int *)(*(int *)(obj + 0xac) + 8)) {
    puVar1 = (undefined4 *)(obj + 0x94);
    do {
      piVar6 = _malloc(0x10);
      if (piVar6 == (int *)0x0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar4 = piVar6 + 2;
        *piVar4 = (int)piVar4;
        piVar6[3] = (int)piVar4;
      }
      puVar3 = *(undefined4 **)(obj + 0x98);
      *puVar3 = piVar6;
      *(int **)(obj + 0x98) = piVar6;
      piVar6[1] = (int)puVar3;
      *piVar6 = (int)puVar1;
      if (*(int *)(obj + 0xa0) == 0) {
        *(undefined4 *)(obj + 0xa0) = *puVar1;
      }
      if (*(int *)(obj + 0x9c) == 0) {
        *(undefined4 *)(obj + 0x9c) = *puVar1;
      }
      piVar4 = *(int **)(obj + 0xac);
      if (local_24 < piVar4[1]) {
        iVar8 = *piVar4;
        iVar7 = iVar8 * local_24;
        iVar5 = piVar4[3];
        if (iVar8 != 0) {
          pcVar9 = local_20;
          do {
            cVar2 = pcVar9[(iVar7 + iVar5) - (int)local_20];
            iVar8 = iVar8 + -1;
            *pcVar9 = cVar2;
            if (cVar2 == '\0') break;
            pcVar9 = pcVar9 + 1;
          } while (iVar8 != 0);
        }
      }
      FUN_004174b0(piVar6,local_20);
      local_24 = local_24 + 1;
    } while (local_24 < *(int *)(*(int *)(obj + 0xac) + 8));
  }
  FUN_004f9240(obj + 0x8c);
  if (*(int *)(obj + 0xa4) != 0) {
    FUN_004f8dd0(*(int *)(obj + 0xa4));
  }
  return;
}
