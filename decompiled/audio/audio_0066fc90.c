/* spd-match: far pct=12.89 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0066FC90 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0066f830();
int unaff_EBX;
uint __fastcall FUN_0066fc90(int * obj)

{
  int iVar1;

  uint uVar2;
  uint uVar3;
  int unaff_EBX;
  int *piVar4;
  
  uVar3 = *(uint *)(unaff_EBX + 0xc4);
  iVar1 = uVar3 + *(int *)(unaff_EBX + 0xcc);
  uVar2 = iVar1 / *(int *)(unaff_EBX + 200);
  if (iVar1 % *(int *)(unaff_EBX + 200) != *(int *)(unaff_EBX + 0xd0)) {
    uVar2 = obj[2];
    if (*(uint *)(unaff_EBX + 0xd8) <= uVar2) {
      if (*(uint *)(unaff_EBX + 0xd8) < uVar2) {
        obj[2] = 4;
        obj[3] = *(int *)(unaff_EBX + 0xd8);
        *obj = 0;
        uVar3 = FUN_0066f830();
        return uVar3;
      }
      if (*obj != 0) {
        piVar4 = (int *)(*(int *)(unaff_EBX + 0xd4) + *(int *)(unaff_EBX + 0xcc));
        for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *piVar4 = *obj;
          obj = obj + 1;
          piVar4 = piVar4 + 1;
        }
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(char *)piVar4 = (char)*obj;
          obj = (int *)((int)obj + 1);
          piVar4 = (int *)((int)piVar4 + 1);
        }
        *(int *)(unaff_EBX + 0x1928) = *(int *)(unaff_EBX + 0x1928) + 1;
        *(int *)(unaff_EBX + 0xcc) =
             (*(int *)(unaff_EBX + 0xc4) + *(int *)(unaff_EBX + 0xcc)) % *(int *)(unaff_EBX + 200);
        *(int *)(unaff_EBX + 0xd8) = *(int *)(unaff_EBX + 0xd8) + 1;
        if (*(code **)(unaff_EBX + 0x3c) != (code *)0x0) {
          (**(code **)(unaff_EBX + 0x3c))();
        }
        uVar2 = *(int *)(unaff_EBX + 0x1928) - 1;
        *(uint *)(unaff_EBX + 0x1928) = uVar2;
        *(uint *)(unaff_EBX + 0x192c) = *(uint *)(unaff_EBX + 0x192c) | 1;
      }
    }
  }
  return uVar2;
}
