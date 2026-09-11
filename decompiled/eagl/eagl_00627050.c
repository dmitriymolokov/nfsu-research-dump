/* spd-match: far pct=2.63 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_char */
#include "ghidra_compat.h"

int __cdecl FUN_00627ec0(...);
int unaff_ESI;

struct ThisCallBox {
  char FUN_00627050(undefined4 param_2, undefined4 param_3, undefined4 param_4);
};
char ThisCallBox::FUN_00627050(undefined4 param_2, undefined4 param_3, undefined4 param_4) {
  char cVar1;
  undefined4 unaff_ESI;
  
  if (*(char *)(unsigned int)(((int)this) + 0x19) != '\0') {
    cVar1 = (**(code **)(**(int **)(((int)this) + 0xc) + 0x18))
                      (param_2,*(undefined4 *)(((int)this) + 0x14),param_4);
    if (cVar1 != '\0') {
      FUN_00627ec0(*(undefined4 *)(((int)this) + 0x14),unaff_ESI,*(undefined1 *)(((int)this) + 0x18),param_4
                  );
    }
    return cVar1;
  }
                    
                    
  cVar1 = (**(code **)(**(int **)(((int)this) + 0xc) + 0x18))();
  return cVar1;
}
