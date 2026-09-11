/* spd-match: far pct=9.52 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004EE3A0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004f08f0();
int __cdecl FUN_004f3f90();
int __cdecl FUN_0059fb80();
extern int DAT_0073578c;
extern int DAT_007357b0;
extern int DAT_007359a8;
extern unsigned char *DAT_007359a9;
extern int DAT_00735b9c;
extern int DAT_00735ba0;
extern int DAT_00746104;
void __fastcall FUN_004ee3a0(int val, char *param_1, char *param_2, undefined4 param_3, undefined4 param_4)

{
  char cVar1;
  int iVar2;

  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  char *pcVar6;
  
  iVar3 = 0;
  while (DAT_007359a8 != '\0') {
    pcVar4 = &DAT_007359a9 + iVar3;
    iVar3 = iVar3 + 1;
    DAT_007359a8 = *pcVar4;
  }
  DAT_007359a8 = *param_1;
  if (DAT_007359a8 != '\0') {
    pcVar4 = &DAT_007359a8;
    do {
      cVar1 = (param_1 + -0x7359a7)[(int)pcVar4];
      pcVar4 = pcVar4 + 1;
      *pcVar4 = cVar1;
    } while (cVar1 != '\0');
  }
  if (val == 0) {
    DAT_007357b0 = *param_2;
    if (DAT_007357b0 != '\0') {
      pcVar4 = &DAT_007357b0;
      do {
        cVar1 = (param_2 + -0x7357af)[(int)pcVar4];
        pcVar4 = pcVar4 + 1;
        *pcVar4 = cVar1;
      } while (cVar1 != '\0');
    }
  }
  else {
    pcVar4 = (char *)FUN_0059fb80();
    if (pcVar4 == (char *)0x0) {
      pcVar4 = (char *)FUN_0059fb80();
    }
    DAT_007357b0 = *pcVar4;
    if (DAT_007357b0 != '\0') {
      pcVar6 = &DAT_007357b0;
      do {
        cVar1 = (pcVar4 + -0x7357af)[(int)pcVar6];
        pcVar6 = pcVar6 + 1;
        *pcVar6 = cVar1;
      } while (cVar1 != '\0');
    }
  }
  iVar2 = DAT_0073578c;
  DAT_00735b9c = param_3;
  DAT_00735ba0 = param_4;
  if ((iVar3 < 1) && (DAT_0073578c != 0)) {
    iVar3 = FUN_004f3f90(&DAT_00746104);
    if (iVar3 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(iVar3 + 0x18);
    }
    FUN_004f08f0(*(undefined4 *)(iVar2 + 8),uVar5,0xff);
  }
  return;
}
