/* spd-match: far pct=8.44 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004C4230 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0057ce10();
int __cdecl FUN_0057d160();
int __cdecl FUN_0057d340();
int __cdecl FUN_0057ea80();
extern int DAT_00734588;
void __fastcall FUN_004c4230(int val)

{
  byte *pbVar1;

  uint uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int unaff_EDI;
  
  iVar5 = val * 0xc90 + DAT_00734588;
  FUN_0057d160(1,0,0);
  pcVar4 = "DUMMY_SKIN1";
  iVar3 = -1;
  uVar2 = 0x44;
  do {
    iVar3 = iVar3 * 0x21 + uVar2;
    pbVar1 = (byte *)(pcVar4 + 1);
    uVar2 = (uint)*pbVar1;
    pcVar4 = pcVar4 + 1;
  } while (*pbVar1 != 0);
  *(int *)(unaff_EDI + 0x444) = iVar3;
  pcVar4 = "DUMMY_WHEEL1";
  iVar3 = -1;
  uVar2 = 0x44;
  do {
    iVar3 = iVar3 * 0x21 + uVar2;
    pbVar1 = (byte *)(pcVar4 + 1);
    uVar2 = (uint)*pbVar1;
    pcVar4 = pcVar4 + 1;
  } while (*pbVar1 != 0);
  *(int *)(unaff_EDI + 0x448) = iVar3;
  FUN_0057d340(unaff_EDI);
  iVar3 = FUN_0057ce10(0,0x1e,*(undefined4 *)(iVar5 + 0xc5c),0,0xffffffff);
  if (iVar3 != 0) {
    *(int *)(unaff_EDI + 0x4c4) = iVar3;
    *(char *)(unaff_EDI + 0x64a) = *(char *)(unaff_EDI + 0x64a) + '\x01';
    FUN_0057ea80();
    return;
  }
  return;
}
