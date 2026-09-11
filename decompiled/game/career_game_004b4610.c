/* spd-match: far pct=7.16 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2297 */
#include "ghidra_compat.h"

extern int DAT_006f227c;
extern int DAT_0078a320;
extern int DAT_0078a324;
extern int DAT_0078a418;

void FUN_004b4610(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  
  if (DAT_0078a320 == 1) {
    if (DAT_0078a324 != 0) {
      uVar7 = ((int)DAT_006f227c) % (((int)DAT_0078a324) + 1U);
      uVar6 = DAT_006f227c ^ 0x1d872b41;
      uVar5 = uVar6 >> 5 ^ uVar6;
      DAT_006f227c = uVar5 << 0x1b ^ uVar5 ^ uVar6;
      uVar1 = *(undefined1 *)(((int)DAT_0078a418) + 3);
      iVar8 = uVar7 * 0x750;
      iVar9 = iVar8 + DAT_0078a418;
      *(undefined1 *)(((int)DAT_0078a418) + 3) = *(undefined1 *)(iVar8 + 3 + DAT_0078a418);
      *(undefined1 *)(iVar9 + 3) = uVar1;
      return;
    }
  }
  else if (DAT_0078a320 == 2) {
    uVar5 = DAT_006f227c ^ 0x1d872b41;
    uVar6 = uVar5 >> 5 ^ uVar5;
    uVar5 = uVar6 << 0x1b ^ uVar6 ^ uVar5;
    bVar14 = (((int)DAT_006f227c) & 1) == 0;
    uVar7 = uVar5 % (((int)DAT_0078a324) + 1U);
    uVar5 = uVar5 ^ 0x1d872b41;
    uVar6 = uVar5 >> 5 ^ uVar5;
    DAT_006f227c = uVar6 << 0x1b ^ uVar6 ^ uVar5;
    cVar4 = '\0';
    cVar3 = '\x01';
    if (uVar7 == 0) {
      cVar4 = '\x01';
      cVar3 = '\x02';
    }
    else if (uVar7 == 1) {
      cVar4 = '\x03';
      cVar3 = '\x01';
    }
    else if (uVar7 == 2) {
      cVar4 = '\x02';
      cVar3 = '\x04';
    }
    iVar11 = (uint)!bVar14 * 0x750 + DAT_0078a418;
    iVar8 = ((int)DAT_0078a324) + 2;
    iVar13 = (uint)bVar14 * 0x750 + DAT_0078a418;
    iVar12 = 0;
    iVar10 = 0;
    iVar9 = DAT_0078a418;
    if (0 < iVar8) {
      do {
        if (*(char *)(iVar9 + 3) == cVar4) {
          iVar12 = iVar9;
        }
        if (*(char *)(iVar9 + 3) == cVar3) {
          iVar10 = iVar9;
        }
        iVar9 = iVar9 + 0x750;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      if ((iVar12 != 0) && (iVar10 != 0)) {
        uVar1 = *(undefined1 *)(iVar11 + 3);
        uVar2 = *(undefined1 *)(iVar13 + 3);
        *(undefined1 *)(iVar11 + 3) = *(undefined1 *)(iVar12 + 3);
        *(undefined1 *)(iVar13 + 3) = *(undefined1 *)(iVar10 + 3);
        *(undefined1 *)(iVar12 + 3) = uVar1;
        *(undefined1 *)(iVar10 + 3) = uVar2;
      }
    }
  }
  return;
}
