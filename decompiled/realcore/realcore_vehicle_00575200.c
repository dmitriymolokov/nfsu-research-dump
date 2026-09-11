/* spd-match: far pct=8.22 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00575200 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_005673e0();
int __cdecl FUN_00574b70();
int __cdecl FUN_00574e60();
extern int DAT_006b5c44;
extern int DAT_006cc7a4;
extern int DAT_007361b4;
extern int DAT_0073b230;
extern int DAT_0073b234;
extern int _DAT_006b5cb0;
extern int _DAT_006b5cb4;
extern int _DAT_006b5cb8;
extern int _DAT_006b5cbc;
extern int _DAT_006b5cc0;
extern int _DAT_006b5cc4;
extern int _DAT_006cc95c;
extern int _DAT_006ccc64;
extern int _DAT_00704520;
extern int _DAT_00704524;
extern int _DAT_00704528;
void __fastcall FUN_00575200(float * obj, int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;

  float10 fVar4;
  float local_38;
  float local_34;
  
  iVar1 = (&DAT_007361b4)[param_1];
  iVar2 = *(int *)(iVar1 + 0x27c);
  if ((((iVar2 == 0) ||
       (((*(int *)(iVar2 + 0xc) != 1 && (*(int *)(iVar2 + 0xc) != 0x11)) ||
        (*(int *)(iVar2 + 0x14) == 0)))) || (*(char *)(iVar1 + 0x24) != '\x03')) &&
     (fVar3 = SQRT(_DAT_00704524 * obj[1] * _DAT_00704524 * obj[1] +
                   _DAT_00704520 * *obj * _DAT_00704520 * *obj +
                   _DAT_00704528 * obj[2] * _DAT_00704528 * obj[2]), _DAT_006b5cb0 <= fVar3))
  {
    if (_DAT_006b5cb4 < fVar3) {
      fVar3 = _DAT_006b5cb4;
    }
    fVar3 = (fVar3 - _DAT_006b5cb0) / (_DAT_006b5cb4 - _DAT_006b5cb0);
    local_38 = (_DAT_006b5cbc - _DAT_006b5cb8) * fVar3 + _DAT_006b5cb8;
    if ((&DAT_0073b230)[param_1 * 8] == 0) {
      fVar4 = (float10)DAT_006cc7a4;
    }
    else {
      fVar4 = (float10)FUN_00574b70((&DAT_0073b234)[param_1 * 8]);
    }
    if (fVar4 < (float10)local_38) {
      local_34 = (_DAT_006b5cc4 - _DAT_006b5cc0) * fVar3 + _DAT_006b5cc0;
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x60) == 7)) {
        local_38 = local_38 * _DAT_006cc95c;
        local_34 = local_34 * _DAT_006ccc64;
      }
      FUN_005673e0(local_38);
      FUN_00574e60(local_34,DAT_006b5c44);
      return;
    }
  }
  return;
}
