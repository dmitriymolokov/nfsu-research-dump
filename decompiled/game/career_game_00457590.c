/* spd-match: far pct=6.45 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00457590 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00456780();
int __cdecl FUN_004576b0();
extern unsigned char *DAT_007361f8;
extern int _DAT_006cc8bc;
int __fastcall FUN_00457590(int * obj, undefined4 param_1, char *param_2, int *param_3, undefined4 param_4, undefined4 *param_5)

{
  int iVar1;
  float fVar2;
  int *piVar3;
  undefined4 uVar4;
  char cVar5;

  int *piVar6;
  int *local_10;
  int local_c;
  int local_8;
  
  uVar4 = param_4;
  piVar3 = param_3;
  local_8 = 0;
  local_10 = (int *)0x47c34f80;
  if ((((param_3 != (int *)0x0) && (*param_3 != 0)) && ('\0' < *param_2)) && (*param_2 < '\x15')) {
    iVar1 = *(int *)(*(int *)(*obj + 0x2c) + 1000);
    local_c = 0;
    if (0 < obj[1]) {
      piVar6 = obj + 0xf;
      do {
        cVar5 = FUN_00456780(piVar6 + -0xd);
        if (cVar5 != '\0') {
          param_3 = (int *)0x449a4000;
          fVar2 = ABS(*(float *)(*obj + 0x3d4));
          if (((fVar2 < _DAT_006cc8bc == (fVar2 == _DAT_006cc8bc)) && (*piVar6 != iVar1)) &&
             ((cVar5 = FUN_004576b0(param_1,param_2,piVar3,*obj,uVar4,&param_3), cVar5 != '\0' &&
              ((float)(unsigned int)(param_3) < (float)(unsigned int)(local_10))))) {
            local_8 = *piVar6;
            local_10 = param_3;
          }
          *(int *)(DAT_007361f8 + 0x2f4) = *(int *)(DAT_007361f8 + 0x2f4) + 1;
        }
        local_c = local_c + 1;
        piVar6 = piVar6 + 0xe;
      } while (local_c < obj[1]);
    }
    *param_5 = local_10;
    return local_8;
  }
  return 0;
}
