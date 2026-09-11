/* spd-match: far pct=17.24 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

typedef void _func_4879(void);
extern int DAT_006d4000;
extern int DAT_006d4a48;
extern int DAT_006d4a4c;
extern int DAT_006d4a64;
extern unsigned char *PTR_FUN_006eb458;
extern void LAB_00675856(void);

int FUN_00671fb2(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (PTR_FUN_006eb458 != (undefined *)0x0) {
    (*(code *)PTR_FUN_006eb458)();
  }
  iVar1 = 0;
  puVar2 = &DAT_006d4a4c;
  do {
    if (iVar1 != 0) {
      return iVar1;
    }
    if ((code *)*puVar2 != (code *)0x0) {
      iVar1 = (*(code *)*puVar2)();
    }
    puVar2 = puVar2 + 1;
  } while (puVar2 < &DAT_006d4a64);
  if (iVar1 == 0) {
    _atexit((_func_4879 *)&LAB_00675856);
    puVar2 = &DAT_006d4000;
    do {
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)();
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 < &DAT_006d4a48);
    iVar1 = 0;
  }
  return iVar1;
}
