/* spd-match: far pct=20.00 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004C2A50 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004f42f0();
extern int DAT_006b9172;
extern int DAT_006c5680;
extern int DAT_006c7680;
extern int DAT_00734588;
extern int DAT_00734998;
void __fastcall FUN_004c2a50(int obj)

{

  undefined *puVar1;
  
  puVar1 = (undefined *)(obj * 0xc90 + DAT_00734588);
  if (*(int *)(puVar1 + 0xc50) == 0xf) {
    if (DAT_00734998 == 0) {
      FUN_004f42f0("CAR_MODEL_NAME_%s%s",puVar1,&DAT_006c7680);
      return;
    }
    if (DAT_00734998 == 2) {
      FUN_004f42f0("CAR_MODEL_NAME_%s%s",puVar1,"_KOREA");
      return;
    }
    if (((DAT_00734998 == 1) || (DAT_00734998 == 5)) || (DAT_00734998 == 4)) {
      FUN_004f42f0("CAR_MODEL_NAME_%s%s",puVar1,"_EUROPE");
      return;
    }
  }
  else if ((*(int *)(puVar1 + 0xc50) == 2) &&
          ((((DAT_00734998 == 1 || (DAT_00734998 == 2)) || (DAT_00734998 == 5)) ||
           (DAT_00734998 == 4)))) {
    puVar1 = &DAT_006c5680;
  }
  FUN_004f42f0("CAR_MODEL_NAME_%s%s",puVar1,&DAT_006b9172);
  return;
}
