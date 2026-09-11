/* spd-match: far pct=15.90 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2446 */
#include "ghidra_compat.h"

int __cdecl FUN_00524940(...);
int __cdecl FUN_00524bb0(...);
int __cdecl FUN_00524e40(...);
int __cdecl FUN_00524ef0(...);
int __cdecl FUN_00524f30(...);
int __cdecl FUN_00525080(...);
int __cdecl FUN_005250f0(...);
int __cdecl FUN_00525480(...);
int __cdecl FUN_005326f0(...);
int __cdecl FUN_005328b0(...);
int __cdecl FUN_00564a50(...);
int __cdecl FUN_00564a80(...);
extern int DAT_006b669c;
extern int DAT_006f1dd8;
extern int DAT_007356a8;
extern int _DAT_006b66a4;
extern int _DAT_006b66a8;
extern int _DAT_006b66ac;
extern int _DAT_006b66b0;
extern int _DAT_006cc7ac;
extern int _DAT_0073565c;

struct ThisCallBox {
  void FUN_005251e0(float param_2);
};
void ThisCallBox::FUN_005251e0(float param_2) {
  float fVar1;
  char cVar2;
  int iVar3;
  float10 fVar4;
  
  if (*(char *)(((int)DAT_007356a8) + 0x84) == '\0') {
    *(float *)(((int)this) + 0x244) = param_2;
    *(float *)(((int)this) + 0x240) = param_2 + *(float *)(((int)this) + 0x240);
  }
  else {
    *(undefined4 *)(((int)this) + 0x244) = 0;
  }
  if (DAT_006f1dd8 != 0) {
    (**(code **)(*(int *)(((int)this) + 0x20) + 0x28))
              (*(int *)(((int)this) + 0x234) + 0x60,*(int *)(((int)this) + 0x234) + 0x90);
    FUN_00525480(param_2);
    FUN_005326f0(param_2);
    if (*(int *)(((int)this) + 0x300) == 0) {
      if (((*(float *)(((int)this) + 0x314) + (int)_DAT_006cc7ac < *(float *)(((int)this) + 0x240)) &&
          (*(float *)(((int)this) + 800) + (int)_DAT_006cc7ac < *(float *)(((int)this) + 0x240))) &&
         (*(char *)(((int)this) + 0x31e) != '\0')) {
        cVar2 = FUN_00524e40(DAT_006b669c);
        if (cVar2 != '\0') {
          cVar2 = FUN_00524bb0();
          if (cVar2 != '\0') {
            fVar4 = (float10)FUN_00564a80(0x3f800000);
            if ((fVar4 < (float10)((int)_DAT_006b66b0)) ||
               (((int)_DAT_006b66a4) + (int)_DAT_0073565c < *(float *)(((int)this) + 0x240))) {
              iVar3 = FUN_005328b0();
              *(int *)(((int)this) + 0x2f8) = iVar3;
              if ((iVar3 != 0) && (*(int *)(iVar3 + 0x878) != 0)) {
                *(undefined4 *)(((int)this) + 0x2fc) = *(undefined4 *)(*(int *)(iVar3 + 0x878) + 0x264);
              }
              cVar2 = FUN_00524940();
              if (cVar2 == '\0') {
                iVar3 = FUN_00564a50(2);
                iVar3 = iVar3 + 5;
              }
              else {
                iVar3 = 7;
              }
              FUN_00524f30(iVar3);
              fVar1 = ((int)_DAT_006b66a8) - (int)_DAT_006b66ac;
              *(undefined1 *)(((int)this) + 0x31d) = 1;
              fVar4 = (float10)FUN_00564a80(fVar1);
              *(float *)(((int)this) + 0x308) = (float)(fVar4 + (float10)((int)_DAT_006b66ac));
            }
            else {
              *(undefined4 *)(((int)this) + 800) = *(undefined4 *)(((int)this) + 0x240);
            }
          }
        }
      }
    }
    else if ((((*(float *)(((int)this) + 0x240) <
                *(float *)(((int)this) + 0x310) + *(float *)(((int)this) + 0x308)) &&
              (*(char *)(((int)this) + 0x31d) != '\0')) || (*(char *)(((int)this) + 0x31c) != '\0')) ||
            (*(char *)(((int)this) + 0x2f4) != '\0')) {
      FUN_005250f0();
    }
    else {
      FUN_00524ef0();
    }
    if ((*(char *)(((int)this) + 0x2f4) != '\0') && (*(char *)(((int)this) + 0x2f0) != '\0')) {
      FUN_00525080();
    }
  }
  return;
}
