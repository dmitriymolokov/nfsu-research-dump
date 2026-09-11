/* spd-match: far pct=2.70 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_c2065_cram/batches/20260724T133107Z_w0_tc0 */
#include "ghidra_compat.h"

extern char cRam00000000;

extern int DAT_00733ff8;
extern int DAT_0073494c;
extern int DAT_00735ec1;
int unaff_EBX;
int unaff_EDI;

uint FUN_005a1630(void)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  int unaff_EBX;
  uint uVar4;
  uint unaff_EDI;
  
  iVar3 = DAT_0073494c;
  if ((DAT_0073494c != 0) || (iVar3 = 0, DAT_00735ec1 != '\0')) {
    return CONCAT31((int3)((uint)iVar3 >> 8),1);
  }
  uVar4 = 0;
  do {
    puVar2 = (uint *)(&DAT_00733ff8)[uVar4];
    if ((puVar2 != (uint *)0x0) ||
       (((puVar2 = *(uint **)(unaff_EBX + 0x88b0), puVar2 != (uint *)0x0 &&
         (puVar2 = puVar2 + 0x1628, puVar2 != (uint *)0x0)) && (uVar4 == *puVar2)))) {
      puVar1 = puVar2 + 0x1d;
      iVar3 = 0;
      if (0 < (int)*puVar1) {
        puVar2 = puVar2 + 0xe;
        do {
          if ((*puVar2 == 2) && (puVar2[1] == unaff_EDI)) {
            if (((0xff < uVar4) || ((&DAT_00733ff8)[uVar4] == 0)) &&
               (((*(int *)(unaff_EBX + 0x88b0) == 0 ||
                 (puVar2 = (uint *)(*(int *)(unaff_EBX + 0x88b0) + 0x58a0), puVar2 == (uint *)0x0))
                || (uVar4 != *puVar2)))) {
              return (uint)(cRam00000000 == '\x02');
            }
            return CONCAT31((int3)(uVar4 + 0x34c + unaff_EBX >> 8),
                            *(char *)(uVar4 + 0x34c + unaff_EBX) == '\x02');
          }
          iVar3 = iVar3 + 1;
          puVar2 = puVar2 + 3;
        } while (iVar3 < (int)*puVar1);
      }
    }
    uVar4 = uVar4 + 1;
    if (0xff < uVar4) {
      return CONCAT31((int3)((uint)puVar2 >> 8),1);
    }
  } while( true );
}
