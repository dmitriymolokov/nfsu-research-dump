/* spd-match: far pct=2.55 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

extern int DAT_006b9172;
extern unsigned char *DAT_007187c8;
extern int DAT_007187f0;
extern int DAT_007197a4;
extern int DAT_0078eba8;
extern int DAT_0078ebc8;
extern unsigned char *DAT_0078ebc9;

undefined1 * FUN_004079f0(undefined4 param_1,int param_2,int param_3)

{
  char *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  puVar5 = &DAT_0078eba8;
  for (iVar3 = 0x4f; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  uVar6 = 0;
  DAT_0078eba8 = 0x13c;
  bVar2 = true;
  if (DAT_007197a4 != 0) {
    piVar4 = &DAT_007187f0;
    do {
      if (piVar4[-8] == param_2) {
        if ((param_3 == 1) && (bVar2)) {
          bVar2 = false;
        }
        else if ((*piVar4 != 0) &&
                (iVar3 = (**(code **)(*DAT_007187c8 + 0x38))(DAT_007187c8,&DAT_0078eba8,*piVar4,2),
                -1 < iVar3)) {
          iVar3 = 0;
          if (DAT_0078ebc8 != '\0') {
            do {
              pcVar1 = &DAT_0078ebc9 + iVar3;
              iVar3 = iVar3 + 1;
            } while (*pcVar1 != '\0');
            if (0x40 < iVar3) {
              DAT_0078ebc9 = 0;
            }
          }
          return &DAT_0078ebc8;
        }
      }
      uVar6 = uVar6 + 1;
      piVar4 = piVar4 + 10;
    } while (uVar6 < DAT_007197a4);
  }
  return &DAT_006b9172;
}
