/* spd-match: far pct=10.65 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00430730 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))
typedef struct tagMSG { unsigned char _[48]; } MSG, tagMSG, *LPMSG;
extern char s_WorldViewProj_00701860[];
extern char s_SND_WORLDImpact_006be750[];
extern int iRam00000000;
extern int iRam00000008;

int __cdecl FUN_0041f6a0();
int __cdecl FUN_00421a30();
int __cdecl FUN_0042c6d0();
int __cdecl FUN_0042ddc0();
int __cdecl FUN_0042f0c0();
int __cdecl FUN_0042f650();
int __cdecl FUN_0042fc00();
int __cdecl FUN_004300f0();
int __cdecl FUN_00430e00();
int __cdecl FUN_004312a0();
int __cdecl FUN_00436940();
int __cdecl FUN_0043e310();
int __cdecl FUN_0043f240();
int __cdecl FUN_00465430();
int __cdecl FUN_0057f2b0();
int __cdecl FUN_00584270();
int __cdecl FUN_00674898();
extern int DAT_006b6bc4;
extern int DAT_006b6bcc;
extern int DAT_006cc7a4;
extern int DAT_00700b3c;
extern int DAT_00700b44;
extern int DAT_0073457c;
extern int DAT_00735fb0;
extern int DAT_00735fb8;
extern unsigned char *DAT_0073619c;
extern int DAT_007361a0;
extern int DAT_007361a4;
extern int DAT_007361a8;
extern int DAT_007361bc;
extern int DAT_007361c4;
extern unsigned char *DAT_007361f0;
extern int DAT_007361f8;
extern int DAT_0073ad34;
extern int DAT_0073ad3c;
extern int DAT_007796a8;
extern int DAT_0078a2f0;
extern int DAT_0078a344;
extern int DAT_0078a345;
extern int DAT_0078a346;
extern int DAT_0078a3fb;
extern int _DAT_006b6bc8;
extern int _DAT_006b7a88;
extern int _DAT_006cc79c;
extern int _DAT_006cc83c;
extern int _DAT_006cca38;
extern int _DAT_0073654c;
extern void LAB_0042da30(void);
extern void LAB_00430a7a(void);
void __fastcall FUN_00430730(int obj)

{
  float fVar1;
  char cVar2;

  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  float fStack_8;
  
  iVar3 = FUN_00430e00(obj,*(undefined1 *)(obj + 0x4ac));
  *(bool *)(obj + 0x4ac) = iVar3 != 0;
  FUN_004312a0();
  iVar3 = *DAT_007361f0;
  if ((((iVar3 == 4) || (iVar3 == 5)) || (iVar3 == 6)) || (iVar3 == 10)) {
    iVar3 = FUN_00674898();
    *(int *)(obj + 0xac) = *(int *)(obj + 0xac) - iVar3;
    if ((float)*(int *)(obj + 0xac) * ((int)_DAT_006cca38) < DAT_006cc7a4) {
      iVar3 = (**(code **)(**(int **)(*(int *)(obj + 4) + 0x2c) + 0x14))(1);
      if (iVar3 != 0) {
        iVar4 = *(int *)(*(int *)(obj + 4) + 0x10);
        if (*(char *)(iVar4 + 0x424) == -1) {
          FUN_0057f2b0(1);
        }
        iVar7 = (int)*(char *)(iVar4 + 0x424);
        iVar4 = (**(code **)(**(int **)(*(int *)(obj + 4) + 0x2c) + 0x18))(1);
        fStack_8 = 1.0;
        if ((iVar4 != 0) &&
           ((iVar6 = iVar7 * 0x34, *(char *)(iVar6 + 0x34 + iVar3) != '\0' ||
            (*(char *)(iVar6 + iVar3 + 0x35) != '\0')))) {
          fStack_8 = (float)((uint)*(byte *)(iVar4 + 0x6a + iVar7) << 0x10) * ((int)_DAT_006cc83c);
          if (fStack_8 <= DAT_006cc7a4) {
            fStack_8 = 0.0;
            if (_DAT_006cc79c <= *(float *)(*(int *)(obj + 4) + 0x3d4)) {
              fStack_8 = 1.0;
            }
          }
          else {
            fStack_8 = *(float *)(*(int *)(obj + 4) + 0x3d4) / fStack_8;
          }
        }
        FUN_00584270(fStack_8);
        fVar1 = *(float *)(*(int *)(obj + 0xa8) + 0xc);
        if (fVar1 < *(float *)(obj + 0xb0)) {
          fVar1 = *(float *)(obj + 0xb0);
        }
        *(float *)(obj + 0xb0) = fVar1;
      }
      uVar5 = FUN_00674898();
      *(undefined4 *)(obj + 0xac) = uVar5;
    }
  }
  if (DAT_006cc7a4 < *(float *)(obj + 0xa4)) {
    fVar1 = *(float *)(obj + 0xa4) - DAT_0073457c;
    *(float *)(obj + 0xa4) = fVar1;
    if (((fVar1 < DAT_006cc7a4 != (fVar1 == DAT_006cc7a4)) &&
        (*(undefined4 *)(obj + 0xa4) = 0, DAT_0078a345 == '\0')) &&
       ((DAT_007361a4 == 0 &&
        (((DAT_0078a346 == '\0' && (DAT_007361a0 == 0)) && (*DAT_007361f0 != 9)))))) {
      iVar3 = FUN_00421a30();
      if (((iVar3 == 0) ||
          (_DAT_006b7a88 <= (float)(((int)DAT_0073ad34) - *(int *)(obj + 0x74)) * ((int)_DAT_006cca38))) &&
         ((*DAT_0073619c == 4 && ((DAT_007361c4 != 2 && (DAT_0078a3fb != '\0')))))) {
        if ((&DAT_00700b3c)[*(int *)(obj + 0x60)] != '\0') {
          FUN_0042ddc0(0);
        }
        iVar3 = 0;
        if (0 < DAT_007361c4) {
          do {
            if ((&DAT_00700b44)[*(int *)((&DAT_007361bc)[iVar3] + 0x60)] != '\0') goto LAB_00430a7a;
            iVar3 = iVar3 + 1;
          } while (iVar3 < DAT_007361c4);
        }
        *(undefined4 *)(obj + 0xa0) = DAT_0073ad3c;
        *(int *)(obj + 0x74) = DAT_0073ad34;
        iVar3 = FUN_0041f6a0();
        if (iVar3 == 0) {
          FUN_0042c6d0(obj,0xd,1);
          iVar3 = DAT_007361f8;
          _DAT_0073654c = 1;
          fVar1 = (((int)DAT_006b6bcc) + ((int)_DAT_006b6bc8) + (int)DAT_006b6bc4) - DAT_0073457c;
          *(undefined1 **)(((int)DAT_007361f8) + 0x2e8) = &LAB_0042da30;
          *(int *)(iVar3 + 0x2ec) = obj;
          *(float *)(iVar3 + 0x2d4) = fVar1;
          *(undefined1 *)(obj + 0x270) = 1;
          *(undefined4 *)(obj + 0x60) = 1;
          *(undefined1 *)(obj + 0x98) = 1;
          *(undefined4 *)(obj + 0x9c) = 0;
        }
      }
    }
  }
LAB_00430a7a:
  if ((((*(int *)(obj + 4) == 0) || (*(int *)(obj + 4) == -0x40)) ||
      (cVar2 = FUN_00465430(), cVar2 == '\0')) && (*(char *)(obj + 0x270) != '\0')) {
    _DAT_0073654c = 0;
    *(undefined1 *)(obj + 0x270) = 0;
  }
  if (((*(int *)(obj + 0x278) == 4) && (*(int *)(obj + 0x27c) != 0)) &&
     (*(int *)(*(int *)(obj + 0x27c) + 0xc) == 0x12)) {
    FUN_0042f0c0(DAT_0073457c);
  }
  if (((DAT_0078a344 == '\0') && (DAT_007361a8 == 0)) &&
     (((DAT_0078a2f0 != 1099 || ((DAT_00735fb0 == 0 || (DAT_00735fb8 != 4)))) && (DAT_007796a8 < 1))
     )) {
    *(undefined1 *)(obj + 0x4af) = 0;
  }
  else {
    FUN_0042fc00();
  }
  if ((DAT_0078a345 != '\0') || (DAT_007361a4 != 0)) {
    FUN_0042f650();
  }
  FUN_0043f240(DAT_0073457c);
  if ((DAT_0078a345 != '\0') || (DAT_007361a4 != 0)) {
    FUN_0043e310(DAT_0073457c);
  }
  if ((DAT_0078a346 != '\0') || (DAT_007361a0 != 0)) {
    FUN_004300f0();
  }
  FUN_00436940(obj + 0x960,obj,DAT_0073457c);
  return;
}
