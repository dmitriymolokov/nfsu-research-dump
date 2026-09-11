/* spd-match: far pct=9.35 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_p3/buckets/C2440_int_ptr_casts/batches/20260724T142005Z_w0_tp1 */
#include "ghidra_compat.h"

#ifndef ZEXT48
#define ZEXT48(x) ((unsigned __int64)(unsigned int)(x))
#endif

int __cdecl FUN_004f68c0(...);
int __cdecl FUN_0051ba80(...);
int __cdecl FUN_0059fb80(...);
extern int DAT_006fba60;
extern int DAT_006fba90;
extern int DAT_006fba94;
extern int DAT_006fba98;
extern int DAT_006fba9c;
extern int DAT_0076323d;
extern int DAT_0076777c;
extern int DAT_00777b4c;

struct ThisCallBox {
  void FUN_0049ebf0(int param_2);
};
void ThisCallBox::FUN_0049ebf0(int param_2) {
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  
  if (((DAT_00777b4c == 1) || (DAT_00777b4c == 8)) && (cVar2 = FUN_0051ba80(((undefined4)this)), cVar2 != '\0')
     ) {
    iVar5 = 0xb;
    pcVar7 = (char *)(unsigned int)(&DAT_0076323d);
    puVar6 = (undefined4 *)(unsigned int)(&DAT_006fba60);
    do {
      if ((*pcVar7 != '\0') && ((&DAT_0076777c)[iVar5] == '\0')) {
        piVar3 = (int *)_malloc(0x108);
        if (piVar3 == (int *)0x0) {
          piVar3 = (int *)0x0;
        }
        else {
          piVar3[2] = 0x6a765215;
        }
        iVar4 = FUN_0059fb80();
        if (iVar4 == 0) {
          iVar4 = FUN_0059fb80();
        }
        FUN_004f68c0(0xfc,iVar4);
        if (((puVar6 == (undefined4 *)&DAT_006fba90) || (puVar6 == (undefined4 *)&DAT_006fba94)) ||
           ((puVar6 == (undefined4 *)&DAT_006fba98 || (puVar6 == (undefined4 *)&DAT_006fba9c)))) {
          (&DAT_0076777c)[iVar5] = 1;
        }
        puVar1 = *(undefined4 **)(param_2 + 8);
        *puVar1 = (unsigned int)(piVar3);
        *(int **)(param_2 + 8) = piVar3;
        piVar3[1] = (int)puVar1;
        *piVar3 = (unsigned int)(param_2 + 4);
      }
      puVar6 = puVar6 + 1;
      pcVar7 = pcVar7 + 0x454;
      iVar5 = iVar5 + 1;
    } while ((int)puVar6 < 0x6fbaa0);
  }
  return;
}
