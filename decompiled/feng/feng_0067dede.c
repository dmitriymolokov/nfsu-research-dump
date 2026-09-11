/* spd-match: far pct=2.82 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8r/buckets/r_16/attempt10_recipe */
#include "ghidra_compat.h"

typedef WCHAR *LPWSTR;
typedef struct m375_cpinfo_s {
  UINT MaxCharSize;
  BYTE DefaultChar[2];
  BYTE LeadByte[12];
} m375_cpinfo;
typedef struct m375_ptiddata_s {
  void *_tfpecode;
  void *_initaddr;
  int _holdrand;
  int _thandle;
  unsigned char _pad[128];
} *m375_ptiddata;
typedef int (__stdcall *m375_crit_init_fn)(int, int);

int __cdecl FUN_0067b9b7();
extern int DAT_006b02b8;
extern int DAT_006b02d8;
extern int DAT_006b02e8;
extern int DAT_006b02f8;
extern int DAT_006b0308;
extern int DAT_006b0318;
extern unsigned char *DAT_006b0320;
extern unsigned char *DAT_006b0328;
extern int DAT_006b0750;
extern int DAT_006b0758;
extern int _DAT_006b0280;
extern int _DAT_006b0290;
extern int _DAT_006b02a0;
extern int _DAT_006b02b0;
extern int _DAT_006b02d0;
extern int _DAT_006b02e0;
extern int _DAT_006b02f0;
extern int _DAT_006b0300;
extern int _DAT_006b0310;
extern int _DAT_006b0720;
extern int _DAT_006b0740;
extern int _DAT_006b0748;
extern void LAB_0067e0d2(void);

float10 FUN_0067dede(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  double in_XMM0_Qa;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined2 uStack_c;
  undefined6 uStack_a;
  undefined2 uStack_4;
  
  uVar1 = (ushort)((ulonglong)in_XMM0_Qa >> 0x30) & 0x7fff;
  if ((0x408f - uVar1 | uVar1 - 0x3c90) < 0x80000000) {
    dVar5 = _DAT_006b02d0 * in_XMM0_Qa + _DAT_006b02b0;
    dVar6 = ((*(double *)&DAT_006b02d8) * in_XMM0_Qa + (*(double *)&DAT_006b02b8)) - (*(double *)&DAT_006b02b8);
    uVar1 = SUB84(dVar5,0);
    iVar2 = (uVar1 & 0x3f) * 0x10;
    dVar4 = (in_XMM0_Qa - _DAT_006b02e0 * (dVar5 - _DAT_006b02b0)) -
            _DAT_006b02f0 * (dVar5 - _DAT_006b02b0);
    dVar6 = (in_XMM0_Qa - (*(double *)&DAT_006b02e8) * dVar6) - (*(double *)&DAT_006b02f8) * dVar6;
    dVar5 = (double)(signed __int64)(*(ulonglong *)((char *)&DAT_006b0328 + iVar2) |
                    ((ulonglong)dVar5 & (ulonglong)_DAT_006b0290) + ((ulonglong)_DAT_006b02a0 << 0x2e));
    dVar4 = dVar6 * dVar6 * ((*(double *)&DAT_006b0318) + (*(double *)&DAT_006b0308) * dVar6) +
            dVar4 + *(double *)((char *)&DAT_006b0320 + iVar2) +
            dVar4 * dVar4 * dVar4 * dVar4 * ((*(double *)&_DAT_006b0310) + (*(double *)&_DAT_006b0300) * dVar4);
    if (((int)uVar1 >> 6) + 0x37eU < 0x77d) {
      return (float10)(dVar4 * dVar5 + dVar5);
    }
    dVar6 = (double)(signed __int64)(~_DAT_006b0280 & (ulonglong)dVar5 |
                    (ulonglong)(((int)uVar1 >> 7) + 0x3ff) << 0x34);
    uStack_4 = (undefined2)((ulonglong)dVar6 >> 0x30);
    in_XMM0_Qa = (double)(signed __int64)((ulonglong)((((int)uVar1 >> 6) - ((int)uVar1 >> 7)) + 0x3ff) << 0x34) *
                 (dVar6 + dVar4 * dVar6);
    if (((ushort)((ulonglong)in_XMM0_Qa >> 0x30) & 0x7ff0) < 0x7ff0) {
      if (((ulonglong)in_XMM0_Qa & 0x7ff0000000000000) != 0) goto LAB_0067e0d2;
      uVar3 = 0xf;
    }
    else {
      uVar3 = 0xe;
    }
  }
  else {
    uVar1 = param_2 & 0x7fffffff;
    if (uVar1 < 0x40900000) {
      return (float10)((double)(signed __int64)CONCAT44(param_2,param_1) + _DAT_006b0720);
    }
    if (uVar1 < 0x7ff00000) {
      if (param_2 < 0x80000000) {
        in_XMM0_Qa = DAT_006b0750 * DAT_006b0750;
        uVar3 = 0xe;
      }
      else {
        in_XMM0_Qa = DAT_006b0758 * DAT_006b0758;
        uVar3 = 0xf;
      }
    }
    else {
      if ((uVar1 < 0x7ff00001) && (param_1 == 0)) {
        if (param_2 != 0x7ff00000) {
          return (float10)_DAT_006b0748;
        }
        return (float10)_DAT_006b0740;
      }
      uVar3 = 0x3ea;
    }
  }
  uStack_c = SUB82(in_XMM0_Qa,0);
  uStack_a = (undefined6)((ulonglong)in_XMM0_Qa >> 0x10);
  FUN_0067b9b7(&param_1,&param_1,(short)&uStack_c,uVar3);
  in_XMM0_Qa = (double)(signed __int64)CONCAT62(uStack_a,uStack_c);
LAB_0067e0d2:
  return (float10)in_XMM0_Qa;
}
