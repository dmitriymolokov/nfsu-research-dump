/* spd-match: far pct=8.55 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004ACB90 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00417600();
int __cdecl FUN_004ac750();
int __cdecl FUN_00565da0();
int __cdecl FUN_0057ce10();
int __cdecl FUN_0057d160();
int __cdecl FUN_0057d340();
int __cdecl FUN_0057e9a0();
int __cdecl FUN_0057ea80();
int __cdecl FUN_0057f2b0();
extern int DAT_00734588;
void __fastcall FUN_004acb90(undefined4 val, int param_1)

{
  byte *pbVar1;
  byte bVar2;

  byte *pbVar3;
  int unaff_EBX;
  int iVar4;
  byte local_750;
  byte local_74f [31];
  undefined1 local_730 [1060];
  char local_30c;
  undefined4 local_308;
  int local_2ec;
  int local_2e8;
  int local_26c;
  char local_e6;
  
  *(undefined4 *)(unaff_EBX + 0x344) = val;
  iVar4 = param_1 * 0xc90 + DAT_00734588;
  FUN_00417600();
  FUN_0057d160(1,0,0);
  FUN_00565da0("DUMMY_SKIN%d",1);
  local_2ec = -1;
  pbVar3 = &local_750;
  bVar2 = local_750;
  while (bVar2 != 0) {
    local_2ec = local_2ec * 0x21 + (uint)bVar2;
    pbVar1 = pbVar3 + 1;
    pbVar3 = pbVar3 + 1;
    bVar2 = *pbVar1;
  }
  FUN_00565da0("DUMMY_WHEEL%d",1);
  local_2e8 = -1;
  pbVar3 = &local_750;
  while (local_750 != 0) {
    local_2e8 = local_2e8 * 0x21 + (uint)local_750;
    pbVar1 = pbVar3 + 1;
    pbVar3 = pbVar3 + 1;
    local_750 = *pbVar1;
  }
  FUN_0057d340(local_730);
  FUN_0057e9a0(local_730);
  iVar4 = FUN_0057ce10(0,0x1e,*(undefined4 *)(iVar4 + 0xc5c),0,0xffffffff);
  if (iVar4 != 0) {
    local_e6 = local_e6 + '\x01';
    local_26c = iVar4;
    FUN_0057ea80(local_730);
  }
  if (local_30c == -1) {
    FUN_0057f2b0(1);
  }
  *(undefined4 *)(unaff_EBX + 0x338) = local_308;
  FUN_004ac750(unaff_EBX,local_730);
  *(undefined4 *)(unaff_EBX + 0x340) = 0;
  return;
}
