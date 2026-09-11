/* spd-match: far pct=5.76 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00587E90 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00440a40();
int __cdecl FUN_00567370();
int __cdecl FUN_005673e0();
int __cdecl FUN_00587e40();
int __cdecl FUN_00589a30();
extern int DAT_006b5b40;
extern unsigned char *DAT_006ef2e4;
extern int _DAT_006b5b3c;
extern int _DAT_006cc7bc;
extern int _DAT_006cc7c0;
extern int _DAT_006cc7dc;
extern int _DAT_006cca58;
void __fastcall FUN_00587e90(int obj, undefined4 param_1, int param_2)

{
  int iVar1;
  float fVar2;

  float10 fVar3;
  float10 fVar4;
  float local_48;
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  
  iVar1 = *(int *)(obj + 0x14);
  local_38 = (float)(1 << ((byte)*(undefined4 *)(iVar1 + 0x18) & 0x1f) &
                    (int)*(char *)(param_2 + 0x86c));
  if ((((*(char *)(obj + 0x154) != '\0') ||
       (_DAT_006cc7c0 < *(float *)(obj + 0x168) * *(float *)(obj + 0x158))) &&
      (*(char *)(obj + 0x155) != '\0')) &&
     ((local_38 == 0.0 &&
      (_DAT_006cc7bc <
       SQRT(*(float *)(obj + 0xf0) * *(float *)(obj + 0xf0) +
            *(float *)(obj + 0xf4) * *(float *)(obj + 0xf4)))))) {
    local_3c = *(float *)(obj + 0xf0);
    local_40 = -*(float *)(obj + 0xf4);
    FUN_00567370();
    local_30 = 0.0;
    local_2c = 1.0;
    local_28 = 0.0;
    FUN_00587e40();
    local_48 = ABS(local_20 * local_40 + local_1c * local_3c + local_18 * local_38);
    fVar2 = local_48;
    if (local_48 < _DAT_006b5b3c) {
      fVar2 = _DAT_006b5b3c;
    }
    fVar2 = *(float *)(iVar1 + 0x14) * *(float *)(&DAT_006ef2e4 + *(int *)(obj + 0x150) * 0x94) *
            fVar2 * _DAT_006cc7dc;
    FUN_005673e0(fVar2);
    local_20 = local_40 + *(float *)(obj + 0xa0);
    local_1c = *(float *)(obj + 0xa4) + local_3c;
    local_18 = *(float *)(obj + 0xa8) + local_38;
    local_30 = *(float *)(obj + 0xa0) - local_40;
    local_2c = *(float *)(obj + 0xa4) - local_3c;
    local_28 = *(float *)(obj + 0xa8) - local_38;
    fVar3 = (float10)FUN_00440a40(*(undefined4 *)(*(int *)(obj + 0x20) + 4),&local_20,0,0,0);
    fVar4 = (float10)FUN_00440a40(*(undefined4 *)(*(int *)(obj + 0x20) + 4),&local_30,0,0,0);
    local_1c = *(float *)(obj + 0xa4);
    local_20 = *(float *)(obj + 0xa0);
    local_18 = (float)(((float10)(float)fVar3 + fVar4) * (float10)_DAT_006cc7dc);
    local_38 = (float)((float10)(float)fVar3 * (float10)_DAT_006cc7dc -
                      fVar4 * (float10)_DAT_006cc7dc);
    FUN_005673e0(fVar2);
    if (*(char *)(obj + 0x154) == '\0') {
      local_48 = local_48 * _DAT_006cca58;
    }
    if (*(int *)(obj + 0x150) == 0xd) {
      local_48 = 0.0;
    }
    else if (local_48 < DAT_006b5b40) {
      local_48 = DAT_006b5b40;
    }
    FUN_00589a30(param_2,&local_20,&local_40,*(int *)(obj + 0x150),local_48);
    return;
  }
  iVar1 = *(int *)(obj + 0x184);
  if ((iVar1 != 0) && (*(undefined4 **)(iVar1 + 0x34) != (undefined4 *)0x0)) {
    **(undefined4 **)(iVar1 + 0x34) = 0;
    *(undefined4 *)(iVar1 + 0x34) = 0;
  }
  return;
}
