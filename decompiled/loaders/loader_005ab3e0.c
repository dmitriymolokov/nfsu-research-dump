/* spd-match: far pct=1.68 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2296 */
#include "ghidra_compat.h"

extern int DAT_006b5510;
int unaff_EDI;

int FUN_005ab3e0(uint param_1,int param_2,uint param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int unaff_EDI;
  int local_14;
  
  uVar5 = 0;
  if ((unaff_EDI == 0) || (local_14 = 0, (param_1 & 3) != 0)) {
    return 0;
  }
  if (param_1 != 0) {
    do {
      cVar1 = *(char *)(uVar5 + unaff_EDI);
      cVar2 = *(char *)(uVar5 + 1 + unaff_EDI);
      cVar3 = *(char *)(uVar5 + 2 + unaff_EDI);
      cVar4 = *(char *)(uVar5 + 3 + unaff_EDI);
      uVar5 = uVar5 + 4;
      if ((*(int *)(((unsigned char *)&DAT_006b5510) + cVar1 * 4) == 0xff) && (cVar1 != '=')) {
        return 0;
      }
      if ((*(uint *)(((unsigned char *)&DAT_006b5510) + cVar2 * 4) == 0xff) && (cVar2 != '=')) {
        return 0;
      }
      iVar6 = (int)cVar3;
      if ((*(int *)(((unsigned char *)&DAT_006b5510) + iVar6 * 4) == 0xff) && (cVar3 != '=')) {
        return 0;
      }
      if ((*(int *)(((unsigned char *)&DAT_006b5510) + cVar4 * 4) == 0xff) && (cVar4 != '=')) {
        return 0;
      }
      if (cVar3 == '=') {
        uVar7 = 1;
      }
      else {
        uVar7 = (cVar4 != '=') + 2;
      }
      if ((param_2 != 0) && (local_14 + 2U <= param_3)) {
        if (uVar7 != 0) {
          *(byte *)(local_14 + param_2) =
               (byte)(*(uint *)(((unsigned char *)&DAT_006b5510) + cVar2 * 4) >> 4) | (&DAT_006b5510)[cVar1 * 4] << 2;
        }
        if (1 < uVar7) {
          *(byte *)(local_14 + 1 + param_2) =
               (byte)(*(uint *)(((unsigned char *)&DAT_006b5510) + iVar6 * 4) >> 2) | (&DAT_006b5510)[cVar2 * 4] << 4;
        }
        if (2 < uVar7) {
          *(undefined *)(local_14 + 2 + param_2) =
               (&DAT_006b5510)[iVar6 * 4] << 6 | (&DAT_006b5510)[cVar4 * 4];
        }
      }
      local_14 = local_14 + uVar7;
    } while (uVar5 < param_1);
  }
  return local_14;
}
