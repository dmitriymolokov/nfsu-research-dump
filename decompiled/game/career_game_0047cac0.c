/* spd-match: far pct=18.12 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0047CAC0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0043fef0();
extern int DAT_0078a2fc;
extern int DAT_0078a318;
int unaff_EDI;
undefined4 __fastcall FUN_0047cac0(int val, undefined4 param_1, short *param_2)

{
  byte *pbVar1;
  byte bVar2;

  int iVar3;
  char *pcVar4;
  undefined4 *unaff_EDI;
  
  if (DAT_0078a2fc == 0) {
    pcVar4 = "ForwardStartLine";
    if ((val == 0) && (DAT_0078a318 != 0)) {
      pcVar4 = "ForwardFinishLine";
    }
  }
  else {
    pcVar4 = "BackwardStartLine";
    if ((val == 0) && (DAT_0078a318 != 0)) {
      pcVar4 = "BackwardFinishLine";
    }
  }
  iVar3 = -1;
  bVar2 = *pcVar4;
  while (bVar2 != 0) {
    iVar3 = iVar3 * 0x21 + (uint)bVar2;
    pbVar1 = (byte *)(pcVar4 + 1);
    pcVar4 = pcVar4 + 1;
    bVar2 = *pbVar1;
  }
  iVar3 = FUN_0043fef0(iVar3,0);
  if (iVar3 == 0) {
    return 0;
  }
  *unaff_EDI = *(undefined4 *)(iVar3 + 0x10);
  unaff_EDI[1] = *(undefined4 *)(iVar3 + 0x14);
  *param_2 = *(short *)(iVar3 + 0x20) + 0x4000;
  return 1;
}
