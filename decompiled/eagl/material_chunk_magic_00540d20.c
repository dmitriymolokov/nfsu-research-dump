/* spd-match: far pct=25.39 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_00540D20 */
#include "ghidra_compat.h"
extern int FUN_0040a880();
extern int DAT_0072fa20;
extern int DAT_00735538;
extern int DAT_0073553c;
extern int DAT_00740a60;
extern int DAT_00740b54;
void FUN_00540d20(void) {
  int *puVar4;
  int *puVar5;
  int *piVar12;
  int iVar6, iVar7, iVar9, iVar13;
  int *base_addr;
  puVar4 = (int*)DAT_00740a60;
  DAT_0072fa20 = 0;
  iVar13 = -1;
  puVar5 = (int*)FUN_0040a880();
  while (puVar4 != puVar5) {
    piVar12 = (int*)puVar4[0xe];
    if (piVar12 != puVar4 + 0xe) {
      do {
        iVar7 = (short)piVar12[0xb];
        iVar6 = iVar7 / 100;
        iVar9 = iVar7 % 100;
        if (DAT_00735538 < iVar6) DAT_00735538 = iVar6;
        if (DAT_0073553c < iVar9) DAT_0073553c = iVar9;
        if (iVar13 != iVar7) {
          iVar13 = iVar9 + iVar6 * 10;
          base_addr = (&DAT_00740b54) + (iVar13 * 12);
          base_addr[0] = iVar7;
          base_addr[1] = (int)piVar12;
          base_addr[2] = 1;
          DAT_0072fa20++;
          iVar13 = iVar7;
        } else if (DAT_0072fa20 != 0) {
          iVar13 = iVar9 + iVar6 * 10;
          (&DAT_00740b54)[(iVar13 * 12) + 2]++;
        }
        piVar12 = (int*)*piVar12;
      } while (piVar12 != puVar4 + 0xe);
    }
    puVar4 = (int*)*puVar4;
  }
}
