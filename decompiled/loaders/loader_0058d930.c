/* spd-match: far pct=13.45 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0058D930 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0058d420();
int __cdecl FUN_0058da60();
int __cdecl FUN_0058db20();
extern int DAT_0078a336;
extern int _DAT_006b5ad8;
extern int _DAT_006b5adc;
void __fastcall FUN_0058d930(undefined4 val, float param_1)

{

  int iVar1;
  float local_8;
  
  if (((DAT_0078a336 != '\0') && (_DAT_006b5adc <= param_1)) && (iVar1 = FUN_0058d420(), -1 < iVar1)
     ) {
    local_8 = param_1;
    FUN_0058da60(val,param_1,param_1);
    iVar1 = 1;
    do {
      local_8 = _DAT_006b5ad8 * local_8;
      FUN_0058da60(val,local_8,param_1);
      FUN_0058da60(val,local_8,param_1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 5);
    FUN_0058db20();
  }
  return;
}
