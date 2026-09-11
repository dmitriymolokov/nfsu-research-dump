/* spd-match: far pct=6.43 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004314A0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))
typedef struct tagMSG { unsigned char _[48]; } MSG, tagMSG, *LPMSG;
extern char s_WorldViewProj_00701860[];
extern char s_SND_WORLDImpact_006be750[];
extern int iRam00000000;
extern int iRam00000008;

int __cdecl FUN_0041f5e0();
int __cdecl FUN_00427c50();
int __cdecl FUN_00427f70();
int __cdecl FUN_0042ddc0();
int __cdecl FUN_0043ef00();
int __cdecl FUN_00440740();
int __cdecl FUN_00440a40();
int __cdecl FUN_00442590();
int __cdecl FUN_00443a10();
int __cdecl FUN_00456e90();
int __cdecl FUN_00564db0();
extern int DAT_006b7b5c;
extern int DAT_006cc7a4;
extern int DAT_00700d58;
extern int DAT_007361a4;
extern int DAT_007361a8;
extern int DAT_007372b0;
extern int DAT_007372c0;
extern int DAT_007372c4;
extern int DAT_0073ad34;
extern int DAT_0078a2fc;
extern int DAT_0078a344;
extern int DAT_0078a345;
int unaff_EBX;
void __fastcall FUN_004314a0(int obj)

{
  int iVar1;
  int *piVar2;
  float fVar3;

  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 unaff_EBX;
  float *pfVar9;
  undefined4 unaff_EDI;
  float10 fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fStack_304;
  float *pfStack_300;
  undefined4 local_2fc;
  float fStack_2f8;
  float fStack_2f4;
  int local_2f0;
  int iStack_2ec;
  float *pfStack_2e8;
  float fStack_2e4;
  float fStack_2e0;
  undefined4 uStack_2dc;
  undefined1 auStack_2d4 [32];
  int aiStack_2b4 [160];
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar1 = *(int *)(obj + 4);
  if ((*(int *)(obj + 0x60) == 6) || (*(int *)(obj + 0x60) == 7)) {
    FUN_0042ddc0(1);
  }
  if ((DAT_0078a345 != '\0') || (DAT_007361a4 != 0)) {
    FUN_0043ef00();
  }
  fVar3 = *(float *)(iVar1 + 0x3d0);
  if (*(float *)(iVar1 + 0x3d0) <= DAT_006cc7a4) {
    fVar3 = DAT_006cc7a4;
  }
  local_2fc = *(float *)(iVar1 + 0x818) * *(float *)(iVar1 + 0x90) +
              *(float *)(iVar1 + 0x81c) * *(float *)(iVar1 + 0x94);
  if (local_2fc <= DAT_006cc7a4) {
    local_2fc = DAT_006cc7a4;
  }
  local_2fc = local_2fc * fVar3;
  if (DAT_00700d58 <= local_2fc) {
    local_2fc = DAT_00700d58;
  }
  local_2f0 = 0x3f800000;
  if (DAT_0078a2fc != 0) {
    local_2f0 = 0xbf800000;
  }
  iVar4 = (**(code **)(**(int **)(iVar1 + 0x2c) + 0x14))(1);
  if (iVar4 == 0) {
    fStack_2f8 = 0.0;
    pfStack_300 = (float *)0x0;
    local_2f0 = 0;
    pfVar9 = (float *)0x0;
    if (0 < DAT_007372c0) {
      pfStack_2e8 = (float *)FUN_0041f5e0();
      iStack_2ec = 0;
      do {
        if (iStack_2ec < 0) {
          pfVar9 = (float *)0x0;
        }
        else {
          pfVar9 = (float *)(iStack_2ec + (int)DAT_007372c4);
        }
        fStack_2f4 = SQRT((*pfStack_2e8 - *pfVar9) * (*pfStack_2e8 - *pfVar9) +
                          (pfStack_2e8[1] - pfVar9[1]) * (pfStack_2e8[1] - pfVar9[1]));
        if ((pfStack_300 == (float *)0x0) || (fStack_2f4 < fStack_2f8)) {
          iStack_34 = 0;
          uStack_30 = 0;
          uStack_2c = 0;
          uStack_28 = 0;
          uStack_20 = 0;
          uStack_1c = 0;
          uStack_18 = 0;
          FUN_00440740();
          fStack_2e4 = *pfVar9;
          fStack_2e0 = pfVar9[1];
          uStack_2dc = 0x47c34f8d;
          FUN_00440a40(auStack_2d4,&fStack_2e4,0,0,(int)&local_2fc + 3);
          if ((*((unsigned char *)&(local_2fc) + 3)) != '\0') {
            fStack_2f8 = fStack_2f4;
            pfStack_300 = pfVar9;
          }
          iVar4 = 0;
          if (0 < iStack_34) {
            do {
              piVar2 = aiStack_2b4 + iVar4;
              iVar4 = iVar4 + 1;
              *(char *)(*piVar2 + 8) = *(char *)(*piVar2 + 8) + -1;
            } while (iVar4 < iStack_34);
          }
        }
        local_2f0 = local_2f0 + 1;
        iStack_2ec = iStack_2ec + 0x14;
        pfVar9 = pfStack_300;
      } while (local_2f0 < DAT_007372c0);
    }
    fStack_2e4 = *pfVar9;
    fStack_2e0 = pfVar9[1];
    uStack_2dc = 0;
    uVar7 = FUN_00564db0(*(undefined4 *)(iVar1 + 0x818),*(undefined4 *)(iVar1 + 0x81c));
    FUN_00427c50(&fStack_2e4,0,uVar7);
    FUN_00443a10(&DAT_007372b0,iVar1 + 0x60);
    (**(code **)(**(int **)(iVar1 + 0x2c) + 0x2c))(1);
    (**(code **)(**(int **)(iVar1 + 0x2c) + 0x30))();
    uVar7 = DAT_006b7b5c;
    *(undefined4 *)(iVar1 + 0x884) = DAT_0073ad34;
    *(undefined4 *)(iVar1 + 0x888) = uVar7;
    return;
  }
  (**(code **)(**(int **)(iVar1 + 0x2c) + 0x14))(1);
  iVar4 = (**(code **)(**(int **)(iVar1 + 0x2c) + 0x18))(1);
  (**(code **)(**(int **)(iVar1 + 0x2c) + 0x1c))(1);
  fStack_304 = 0.0;
  if ((DAT_0078a344 != '\0') || (DAT_007361a8 != 0)) {
    iVar5 = (**(code **)(**(int **)(iVar1 + 0x2c) + 0x40))();
    iVar6 = FUN_00456e90(iVar1,iVar5,0xff,0xff);
    if (iVar5 == 1) {
      if (iVar6 < 5) {
        iVar6 = iVar6 + 5;
      }
      else if ((10 < iVar6) && (iVar6 < 0x11)) {
        iVar6 = iVar6 + 6;
      }
    }
    if ((iVar4 != 0) && (iVar6 != -1)) {
      fVar10 = (float10)FUN_00442590();
      fStack_304 = (float)fVar10;
    }
  }
  piVar2 = *(int **)(iVar1 + 0x2c);
  uVar7 = (**(code **)(*piVar2 + 0x14))(1);
  uVar14 = 0;
  uVar13 = 1;
  uVar12 = 1;
  uVar11 = 1;
  uVar8 = (**(code **)(*piVar2 + 0x18))(1,unaff_EDI,1,fStack_304,1,0,unaff_EBX);
  FUN_00427f70(iVar1,uVar7,uVar8,uVar11,unaff_EDI,uVar12,fStack_304,uVar13,uVar14);
  return;
}
