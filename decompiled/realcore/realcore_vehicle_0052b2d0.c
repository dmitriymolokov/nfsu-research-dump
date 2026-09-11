/* spd-match: far pct=9.82 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0052B2D0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00443790();
int __cdecl FUN_00443e00();
int __cdecl FUN_0052b690();
int __cdecl FUN_0052b700();
int __cdecl FUN_0052b760();
int __cdecl FUN_0052b8c0();
int __cdecl FUN_0052ba50();
int __cdecl FUN_0052bb90();
int __cdecl FUN_0052bc50();
int __cdecl FUN_00584270();
int __cdecl FUN_00674898();
extern int DAT_006cc7a4;
extern int DAT_0073563d;
extern unsigned char *DAT_007356a8;
extern int DAT_007372b0;
extern unsigned char *DAT_00740500;
extern void LAB_0052b4cd(void);
void __fastcall FUN_0052b2d0(int obj, undefined4 param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  char cVar4;

  int iVar5;
  undefined4 uVar6;
  undefined1 local_1c [8];
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  if (((*(int *)(DAT_007356a8 + 0xa0) == 0) ||
      (iVar1 = *(int *)(*(int *)(DAT_007356a8 + 0xa0) + 4), iVar1 == 0)) ||
     (*(int *)(iVar1 + 0x188) != 1)) {
    FUN_00584270(*(undefined4 *)(obj + 0x1f1c));
    if (DAT_0073563d != '\0') {
      DAT_0073563d = '\0';
      if (*(char *)(obj + 0x1a84) == '\0') {
        FUN_0052b700();
        *(undefined1 *)(obj + 0x1a8c) = 1;
      }
      else {
        FUN_0052b690();
        *(undefined1 *)(obj + 0x1a8c) = 0;
      }
    }
    if (*(char *)(obj + 0x1a8c) != '\0') {
      *(undefined4 *)(obj + 0x1a7c) = 900;
      FUN_0052bc50(param_1);
      return;
    }
    iVar1 = *(int *)(obj + 0x234);
    do {
      iVar5 = FUN_00443790(&DAT_007372b0,iVar1 + 0x60,0x20);
      if (iVar5 == 0) {
        if (*(char *)(obj + 0x1a84) != '\0') {
          if ((*(int *)(obj + 0x1a88) == 1) && (cVar4 = FUN_0052bb90(), cVar4 != '\0')) {
            FUN_0052b8c0();
          }
          FUN_0052b690();
        }
        goto LAB_0052b4cd;
      }
    } while ((*(float *)(iVar5 + 0x14) != DAT_006cc7a4) &&
            (*(float *)(iVar5 + 0x14) < *(float *)(*(int *)(obj + 0x234) + 0x68)));
    if (*(char *)(obj + 0x1a84) == '\0') {
      *(undefined4 *)(obj + 0x1a88) = *(undefined4 *)(iVar5 + 0x7c);
      cVar4 = FUN_0052bb90();
      if (cVar4 != '\0') {
        FUN_0052b760();
      }
      FUN_0052b700();
    }
    local_8 = *(float *)(DAT_00740500 + 0x50);
    local_14 = *(float *)(DAT_00740500 + 0x54);
    local_10 = -local_8;
    local_c = -local_14;
    FUN_00443e00(iVar5,local_1c,*(int *)(obj + 0x234) + 0x60);
    FUN_00443e00(iVar5,&local_14,*(int *)(obj + 0x234) + 0x60);
    fVar2 = *(float *)(*(int *)(obj + 0x234) + 0x60) - local_14;
    fVar3 = *(float *)(*(int *)(obj + 0x234) + 100) - local_10;
    local_8 = SQRT(fVar2 * fVar2 + fVar3 * fVar3);
    if (*(char *)(obj + 0x1a8c) == '\0') {
      uVar6 = FUN_00674898();
      *(undefined4 *)(obj + 0x1a7c) = uVar6;
    }
LAB_0052b4cd:
    FUN_0052ba50(param_1);
    if (*(char *)(obj + 0x1a84) != '\0') {
      FUN_0052bc50(param_1);
    }
  }
  return;
}
