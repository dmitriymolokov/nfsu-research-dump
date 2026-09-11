/* spd-match: far pct=5.19 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005A58D0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))
typedef struct m375_ov12 { undefined4 a,b,c; } m375_ov12;
typedef struct _m375_ptiddata {
  void *_initaddr; void *_initarg; void *_translator; void *_terminate;
  void *_unexpected; void *_purecall; void *_token; void *_tpxcptinfoptrs;
  void *_pxcptacttab; unsigned int _holdrand; int _tfpecode; int _terrno;
  int _tdoserrno; int _NLG_dwCode; int _maxcharsize; char _con_ch_buf[32];
  unsigned int _thandle; unsigned char _pad[64];
} *_ptiddata_m375;
#define _ptiddata _ptiddata_m375
unsigned int __cdecl rsqrtss(unsigned __int64, unsigned __int64);

int __cdecl FUN_0057f2b0();
int __cdecl FUN_005a53c0();
int __cdecl FUN_005a5510();
int __cdecl FUN_005a5f80();
extern int DAT_006cc7a4;
extern int DAT_0077af30;
extern int _DAT_006b592c;
extern int _DAT_006cc7b8;
extern void LAB_005a5b2c(void);
extern void LAB_005a5b99(void);
extern char stack0xffffffb0;
extern char stack0xffffffb4;
int unaff_EBX;
void __fastcall FUN_005a58d0(int obj, int *param_1, float param_2)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;

  int iVar4;
  float unaff_EBX;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  float10 fVar9;
  float local_48;
  float local_44;
  int local_40;
  int iStack_3c;
  uint local_38;
  float local_34;
  int local_30;
  float local_2c;
  int local_28;
  int iStack_24;
  int local_20;
  undefined4 local_1c;
  float local_18 [5];
  float fStack_4;
  
  local_1c = *(undefined4 *)(obj + 0x2c);
  iVar4 = *(int *)(obj + 0x10);
  if (*(char *)(iVar4 + 0x424) == -1) {
    FUN_0057f2b0(1);
  }
  iVar1 = param_1[param_1[1] + 1];
  local_20 = (int)*(char *)(iVar4 + 0x424);
  cVar3 = *(char *)(iVar1 + 0x5c);
  if (((cVar3 == -1) || (*(short *)(iVar1 + 0x5e) == -1)) || (cVar3 < 0)) {
    local_30 = 0;
  }
  else {
    local_30 = (&DAT_0077af30)[cVar3];
  }
  local_34 = *(float *)(unsigned int)(iVar1 + 0x58);
  fVar9 = (float10)local_34;
  local_28 = (int)*(short *)(iVar1 + 0x5e);
  cVar3 = *(char *)(iVar1 + 0x5c);
  local_38 = local_38 & 0xffffff00;
  if ((cVar3 == -1) || (*(short *)(iVar1 + 0x5e) == -1)) {
    fVar5 = 0.0;
  }
  else {
    if (cVar3 < 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (&DAT_0077af30)[cVar3];
    }
    fVar5 = (float)(*(short *)(iVar1 + 0x5e) * 0x88 + 0x27c + iVar4);
  }
  local_48 = *(float *)(unsigned int)(iVar1 + 4);
  local_40 = 0;
  pfVar6 = (float *)(unsigned int)(iVar1 + 8);
  pfVar7 = local_18;
  for (iVar4 = 6; local_44 = fVar5, iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar7 = *pfVar6;
    pfVar6 = pfVar6 + 1;
    pfVar7 = pfVar7 + 1;
  }
  do {
    uVar2 = local_1c;
    if ((fVar9 < (float10)param_2 == (fVar9 == (float10)param_2)) && (9 < param_1[1])) {
      return;
    }
    if (0x27 < param_1[1]) {
      return;
    }
    local_2c = fVar5;
    cVar3 = FUN_005a53c0(param_1,&local_30,&local_44,&local_28,&local_38,local_1c);
    fVar8 = local_44;
    if (cVar3 == '\0') {
      return;
    }
    if ((char)local_38 == '\0') {
      fVar9 = (**(float10 (**)())(*param_1 + 0x24))(fVar5);
      fVar5 = local_48;
      if (unaff_EBX <= DAT_006cc7a4) {
        unaff_EBX = (unsigned int)(_DAT_006b592c) * (float)fVar9 + unaff_EBX;
        if (DAT_006cc7a4 <= unaff_EBX) goto LAB_005a5b2c;
      }
      else {
        unaff_EBX = unaff_EBX - ((int)_DAT_006b592c) * (float)fVar9;
        if (unaff_EBX <= DAT_006cc7a4) {
LAB_005a5b2c:
          unaff_EBX = (unsigned int)(DAT_006cc7a4);
        }
      }
      (**(code **)(*param_1 + 0x34))(&stack0xffffffb4,iStack_24,local_48);
      iVar4 = 0;
      pfVar6 = local_18;
      do {
        fVar8 = *pfVar6;
        if (fVar8 <= DAT_006cc7a4) {
          fVar8 = (unsigned int)(_DAT_006b592c) * (float)(unsigned int)param_1 + fVar8;
          if (DAT_006cc7a4 <= fVar8) goto LAB_005a5b99;
        }
        else {
          fVar8 = fVar8 - ((int)_DAT_006b592c) * (float)(unsigned int)param_1;
          if (fVar8 <= DAT_006cc7a4) {
LAB_005a5b99:
            fVar8 = (unsigned int)(DAT_006cc7a4);
          }
        }
        iVar1 = *param_1;
        *pfVar6 = fVar8;
        (**(code **)(iVar1 + 0x34))(pfVar6,iVar4 + 0xb,fVar5);
        iVar4 = iVar4 + 1;
        pfVar6 = pfVar6 + 1;
      } while (iVar4 < 6);
    }
    else {
      fVar9 = (**(float10 (**)())(*param_1 + 0x10))(fVar5,local_44);
      fStack_4 = (float)fVar9;
      if (fVar9 < (float10)((int)_DAT_006cc7b8)) {
        do {
          cVar3 = FUN_005a53c0(param_1,&local_38,&stack0xffffffb4,&local_30,&fStack_4,uVar2);
          if (cVar3 == '\0') {
            return;
          }
          fVar9 = (**(float10 (**)())(*param_1 + 0x10))(fVar5,unaff_EBX);
          fStack_4 = (float)fVar9;
          local_48 = (float)((int)local_48 + 1);
          if (100 < (int)local_48) {
            return;
          }
          fVar8 = unaff_EBX;
        } while (fStack_4 < _DAT_006cc7b8);
      }
      iVar4 = local_28;
      FUN_005a5f80(fVar8,fVar5);
      (**(code **)(*param_1 + 0x34))(&stack0xffffffb0,iVar4,fVar8);
      iStack_3c = 0xb;
      pfVar6 = local_18;
      iStack_24 = 6;
      do {
        fVar9 = (float10)FUN_005a5f80(fVar8,local_2c);
        iVar1 = iStack_3c;
        iVar4 = *param_1;
        *pfVar6 = (float)(fVar9 + (float10)*pfVar6);
        (**(code **)(iVar4 + 0x34))(pfVar6,iStack_3c,fVar8);
        iStack_3c = iVar1 + 1;
        pfVar6 = pfVar6 + 1;
        iStack_24 = iStack_24 + -1;
      } while (iStack_24 != 0);
      iStack_24 = 0;
      fVar5 = fVar8;
    }
    local_34 = (float)(unsigned int)param_1 + local_34;
    fVar9 = (float10)FUN_005a5510(param_1,(int)*(short *)(local_30 + 10),&local_48,local_18,local_34
                                  ,local_38);
    local_40 = local_40 + 1;
    if (100 < (unsigned int)(local_40)) {
      return;
    }
  } while( true );
}
