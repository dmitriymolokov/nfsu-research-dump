/* spd-match: far pct=13.57 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_00401c80();
int __cdecl FUN_00436d60();
int __cdecl FUN_00564bd0();
int __cdecl FUN_00567370();
int __cdecl FUN_005673e0();
int __cdecl FUN_00567540();
int __cdecl FUN_00583f20();
int __cdecl FUN_00584e00();
extern int DAT_006b7c08;
extern int DAT_006b7c0c;
extern int _DAT_006b7c04;
extern int _DAT_006cc7b8;
extern int _DAT_006cc7bc;
extern unsigned char *PTR_DAT_00706490;

void FUN_0042a860(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  int iVar6;
  int unaff_ESI;
  float10 fVar7;
  float fStack_34;
  undefined1 auStack_30 [8];
  undefined4 uStack_28;
  
  if (((*(int **)(unaff_ESI + 0x34) != (int *)0x0) && (*(int *)(unaff_ESI + 0x30) != 0)) &&
     (*(int *)(unaff_ESI + 0x1c) != 0)) {
    iVar6 = (**(code **)(**(int **)(unaff_ESI + 0x34) + 0xc))();
    if (iVar6 != 0) {
      fVar3 = *(float *)(unaff_ESI + 0x3d4);
      fVar7 = (float10)FUN_00401c80(fVar3,DAT_006b7c08,DAT_006b7c0c);
      if (((fVar7 == (float10)fVar3) && (_DAT_006cc7b8 <= *(float *)(unaff_ESI + 0xb8))) &&
         (2 < *(int *)(unaff_ESI + 0x3cc))) {
        sVar5 = (**(code **)(**(int **)(unaff_ESI + 0x30) + 0x80))();
        if (sVar5 != 0) {
          fVar7 = (float10)FUN_00436d60();
          fVar7 = (float10)FUN_00583f20(&PTR_DAT_00706490,(float)fVar7);
          fVar7 = -(fVar7 * (float10)*(float *)(iVar6 + 0x144));
          fVar3 = *(float *)(iVar6 + 0xc4);
          fVar1 = *(float *)(iVar6 + 200);
          FUN_00584e00();
          FUN_00564bd0();
          uStack_28 = 0;
          FUN_0042a860(auStack_30,auStack_30,unaff_ESI + 0x90);
          fVar2 = *(float *)(unaff_ESI + 0x74);
          fVar4 = *(float *)(unaff_ESI + 0x70);
          FUN_00567370();
          FUN_00567540();
          FUN_005673e0(((fStack_34 * 0.0 +
                        fVar4 * (float)((float10)fVar3 * fVar7) +
                        (float)((float10)fVar1 * fVar7) * fVar2) - _DAT_006cc7bc) *
                       *(float *)(iVar6 + 0x144) * _DAT_006b7c04);
          FUN_00584e00();
        }
      }
    }
  }
  return;
}
