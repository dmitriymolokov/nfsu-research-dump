/* spd-match: far pct=3.08 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004FABF0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int unaff_ESI;
uint __fastcall FUN_004fabf0(uint val)

{
  uint uVar1;
  int iVar2;
  int iVar3;

  uint uVar4;
  int iVar5;
  int iVar6;
  int unaff_ESI;
  uint local_c;
  uint local_8;
  
  local_c = *(uint *)(unaff_ESI + 0x68);
  if ((((local_c != 0) && (uVar1 = *(uint *)(unaff_ESI + 0x6c), uVar1 != 0)) &&
      (val = *(uint *)(unaff_ESI + 0x60), val != 0)) &&
     (uVar4 = *(uint *)(unaff_ESI + 0x5c), uVar4 != 0)) {
    iVar6 = *(int *)(unaff_ESI + 0x74);
    iVar2 = *(int *)(unaff_ESI + 0x70);
    if (uVar1 < val) {
      val = uVar1;
    }
    if (uVar4 <= local_c) {
      local_c = uVar4;
    }
    if (*(int *)(unaff_ESI + 0xbc) == 0) {
      uVar1 = val;
      if (*(int *)(unaff_ESI + 0x58) != 0) {
        for (; iVar5 = iVar2, uVar4 = local_c, uVar1 != 0; uVar1 = uVar1 - 1) {
          for (; uVar4 != 0; uVar4 = uVar4 - 1) {
            (**(code **)(**(int **)(unaff_ESI + 0x58) + 0x4c))();
            iVar3 = *(int *)(unaff_ESI + 0x68);
            iVar5 = iVar5 + 1;
            if (iVar5 < 0) {
              if (iVar3 < 2) {
                iVar5 = 0;
              }
              else {
                iVar5 = iVar3 - -iVar5 % iVar3;
              }
            }
            else {
              iVar5 = iVar5 % iVar3;
            }
          }
          iVar5 = *(int *)(unaff_ESI + 0x6c);
          val = iVar6 + 1;
          if ((int)val < 0) {
            if (iVar5 < 2) {
              iVar6 = 0;
            }
            else {
              iVar6 = -val;
              val = iVar6 / iVar5;
              iVar6 = iVar5 - iVar6 % iVar5;
            }
          }
          else {
            iVar6 = (int)val % iVar5;
            val = (int)val / iVar5;
          }
        }
      }
    }
    else {
      iVar5 = iVar2;
      uVar1 = local_c;
      local_8 = val;
      if (val != 0) {
        do {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            (**(code **)(unaff_ESI + 0xbc))(*(undefined4 *)(unaff_ESI + 0xc0));
            iVar3 = *(int *)(unaff_ESI + 0x68);
            iVar5 = iVar5 + 1;
            if (iVar5 < 0) {
              if (iVar3 < 2) {
                iVar5 = 0;
              }
              else {
                iVar5 = iVar3 - -iVar5 % iVar3;
              }
            }
            else {
              iVar5 = iVar5 % iVar3;
            }
          }
          iVar5 = *(int *)(unaff_ESI + 0x6c);
          uVar4 = iVar6 + 1;
          if ((int)uVar4 < 0) {
            if (iVar5 < 2) {
              iVar6 = 0;
            }
            else {
              iVar6 = -uVar4;
              uVar4 = iVar6 / iVar5;
              iVar6 = iVar5 - iVar6 % iVar5;
            }
          }
          else {
            iVar6 = (int)uVar4 % iVar5;
            uVar4 = (int)uVar4 / iVar5;
          }
          local_8 = local_8 - 1;
          iVar5 = iVar2;
          uVar1 = local_c;
        } while (local_8 != 0);
        return uVar4;
      }
    }
  }

}
