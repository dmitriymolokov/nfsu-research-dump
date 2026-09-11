/* spd-match: far pct=22.22 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.5q/va_005B05B6 */
#include "ghidra_compat.h"

void __cdecl FUN_005b05fc(void);
void __cdecl FUN_00673444(void);

void __cdecl FUN_005b05b6(void)
{
  unsigned int local_4;
  unsigned int local_10;
  unsigned int local_14;
  unsigned int local_2c;
  unsigned int local_30;
  unsigned int local_34;
  unsigned int local_38;
  char vendor[16];
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  
  FUN_00673444();
  local_10 = (unsigned int)&vendor[0];
  local_14 = 0;
  *(unsigned int *)&vendor[0] = 0x756e6547;
  *(unsigned int *)&vendor[4] = 0x49656e69;
  *(unsigned int *)&vendor[8] = 0x6e74656c;
  vendor[12] = '\0';
  local_4 = 0;
  puVar1 = (unsigned int *)cpuid_basic_info(0);
  uVar4 = puVar1[1];
  uVar3 = puVar1[2];
  uVar2 = puVar1[3];
  local_2c = *puVar1;
  local_38 = uVar4;
  local_34 = uVar3;
  local_30 = uVar2;
  FUN_005b05fc();
  return;
}
