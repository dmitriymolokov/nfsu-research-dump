/* spd-match: far pct=28.47 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00487BA0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00487070();
int __cdecl FUN_00487ee0();
int __cdecl FUN_00488380();
extern int DAT_006b6cf4;
extern int DAT_006b6d04;
extern int DAT_006b6d0c;
extern int DAT_006b6d10;
extern int DAT_006b6d14;
extern int DAT_006b6d18;
extern int DAT_006b6d1c;
extern int DAT_006b6d20;
extern int DAT_006b6d24;
extern int DAT_006b6d34;
extern int DAT_006b6d38;
void __fastcall FUN_00487ba0(int val)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;

  int unaff_ESI;
  float10 fVar6;
  
  if (val != 4) {
    *(undefined4 *)(unaff_ESI + 0x2c) = 1;
    *(int *)(unaff_ESI + 0x30) = val;
    return;
  }
  if (*(int *)(unaff_ESI + 0x2c) == 1) {
    *(undefined4 *)(unaff_ESI + 0x2c) = 0;
    if (*(int *)(unaff_ESI + 0x30) < 4) {
      FUN_00487070();
    }
    pfVar1 = (float *)(unaff_ESI + 0xc0);
    FUN_00487070();
    uVar4 = DAT_006b6d24;
    uVar2 = DAT_006b6d04;
    *pfVar1 = DAT_006b6cf4;
    uVar3 = DAT_006b6d34;
    *(undefined4 *)(unaff_ESI + 0xc4) = uVar2;
    uVar5 = DAT_006b6d38;
    *(undefined4 *)(unaff_ESI + 0xcc) = uVar3;
    uVar3 = DAT_006b6d10;
    *(undefined4 *)(unaff_ESI + 200) = uVar4;
    uVar2 = DAT_006b6d0c;
    *(undefined4 *)(unaff_ESI + 0xd0) = uVar5;
    uVar4 = DAT_006b6d14;
    *(undefined4 *)(unaff_ESI + 0xe4) = uVar3;
    uVar3 = DAT_006b6d1c;
    *(undefined4 *)(unaff_ESI + 0xe0) = uVar2;
    uVar2 = DAT_006b6d18;
    *(undefined4 *)(unaff_ESI + 0xe8) = uVar4;
    uVar4 = DAT_006b6d20;
    *(undefined4 *)(unaff_ESI + 0xf4) = uVar3;
    *(undefined4 *)(unaff_ESI + 0xf0) = uVar2;
    *(undefined4 *)(unaff_ESI + 0xf8) = uVar4;
    fVar6 = (float10)FUN_00488380(unaff_ESI,*(undefined4 *)(unaff_ESI + 0x80),*pfVar1);
    *pfVar1 = (float)fVar6;
    fVar6 = (float10)FUN_00488380(unaff_ESI,*(undefined4 *)(unaff_ESI + 0x84),
                                  *(undefined4 *)(unaff_ESI + 0xc4));
    *(float *)(unaff_ESI + 0xc4) = (float)fVar6;
    fVar6 = (float10)FUN_00488380(unaff_ESI,*(undefined4 *)(unaff_ESI + 0x8c),
                                  *(undefined4 *)(unaff_ESI + 0xcc));
    *(float *)(unaff_ESI + 0xcc) = (float)fVar6;
    FUN_00487ee0();
    *(undefined4 *)(unaff_ESI + 0x30) = 4;
  }
  return;
}
