/* spd-match: far pct=27.08 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00584800 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00584b10();
extern unsigned char *PTR_FUN_006b9654;
undefined4 * __fastcall FUN_00584800(undefined4 val, undefined4 *param_1)

{
  char *pcVar1;
  char cVar2;

  char *pcVar3;
  
  param_1[5] = val;
  *param_1 = &PTR_FUN_006b9654;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0xc] = 0x3f800000;
  param_1[0x11] = 0x3f800000;
  param_1[0x16] = 0x3f800000;
  param_1[0x1b] = 0x3f800000;
  param_1[0x7a] = 0x3f800000;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x4f] = 0;
  param_1[0x4c] = 1;
  param_1[0x4d] = 1;
  param_1[0x4e] = 0;
  param_1[0x50] = 1;
  FUN_00584b10();
  pcVar1 = (char *)(param_1 + 3);
  *pcVar1 = 'R';
  pcVar3 = pcVar1;
  do {
    cVar2 = pcVar3[(int)("Rigid" + (1 - (int)pcVar1))];
    pcVar3 = pcVar3 + 1;
    *pcVar3 = cVar2;
  } while (cVar2 != '\0');
  return param_1;
}
