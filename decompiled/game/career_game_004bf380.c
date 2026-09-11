/* spd-match: far pct=12.16 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2143 */
#include "ghidra_compat.h"

int __cdecl FUN_004f67f0();
int __cdecl FUN_004f68c0();
int __cdecl FUN_0059fb80();
extern int DAT_0078a320;
extern int DAT_0078a3f6;
extern int DAT_0078a3f7;

void __fastcall FUN_004bf380(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  FUN_004f68c0(0x20,"%s%1d",param_1 + 0x21d,*(undefined4 *)(param_1 + 0x1b4));
  iVar2 = FUN_0059fb80();
  if (iVar2 == 0) {
    iVar2 = FUN_0059fb80();
  }
  FUN_004f67f0(iVar2);
  FUN_004f68c0(0x20,"OptionData_%1d",*(undefined4 *)(param_1 + 0x1b4));
  cVar1 = DAT_0078a3f6;
  if (DAT_0078a320 != 1) {
    cVar1 = DAT_0078a3f7;
  }
  if (cVar1 == '\x05') {
    pcVar3 = "<DEBUG> FULLSCREEN";
  }
  else {
    switch(cVar1) {
    case '\x01':
      break;
    default:
      goto switchD_004bf42b_caseD_2;
    case '\x03':
    case '\a':
      break;
    case '\x06':
      break;
    case '\v':;
    }
    pcVar3 = (char *)FUN_0059fb80();
    if (pcVar3 == (char *)0x0) {
      pcVar3 = (char *)FUN_0059fb80();
    }
  }
  FUN_004f67f0(pcVar3);
switchD_004bf42b_caseD_2:
  return;
}
