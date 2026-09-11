/* spd-match: far pct=9.27 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_006738ED */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl __isnan(double);
typedef struct m375_ptiddata {
  void *_initaddr;
  int _holdrand;
  int _thandle;
  DWORD _tid;
  unsigned char _pad[128];
} *m375_ptiddata_ptr;
#define _ptiddata m375_ptiddata_ptr
typedef struct m375_lc_category { int refcount; } m375_lc_category;
typedef struct m375_pthreadlocinfo {
  void *_tfpecode;
  m375_lc_category lc_category[4];
} *m375_pthreadlocinfo_ptr;
#define pthreadlocinfo m375_pthreadlocinfo_ptr

int __cdecl FUN_00673ab2();
int __cdecl FUN_0067a5d0();
int __cdecl FUN_0067a630();
int __cdecl FUN_0067a645();
int __cdecl FUN_0067a6ce();
int __cdecl FUN_0067a719();
extern int DAT_00717ad0;
extern void LAB_00673965(void);
extern void LAB_00673997(void);
extern void LAB_006739ca(void);
int _local_4;
undefined4 __fastcall FUN_006738ed(uint val, int param_1, uint param_2, int param_3, uint param_4)

{

  uint uVar1;
  undefined4 uVar2;
  byte extraout_CL;
  char extraout_CL_00;
  uint extraout_ECX;
  int extraout_ECX_00;
  int iVar3;
  int extraout_ECX_01;
  bool bVar4;
  short in_FPUControlWord;
  float10 extraout_ST0;
  float10 fVar5;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float10 extraout_ST1_01;
  float10 fVar6;
  unkbyte10 in_ST7;
  undefined1 local_78 [20];
  undefined4 uStack_64;
  undefined1 auStack_e [10];
  short local_4;
  undefined2 uStack_2;
  
  _local_4 = CONCAT22((short)(val >> 0x10),in_FPUControlWord);
  uVar1 = val;
  if (in_FPUControlWord != 0x27f) {
    (*(undefined4 *)((char *)&auStack_e + 6)) = 0x673901;
    val = FUN_0067a645();
    uVar1 = extraout_ECX;
  }
  bVar4 = (uVar1 & 0x7ff00000) == 0x7ff00000;
  if (bVar4) {
    if ((val & 0xfffff) == 0 && param_3 == 0) {
      (*(undefined4 *)((char *)&auStack_e + 6)) = 0x6739ca;
      fVar5 = (float10)__fload_withFB();
      iVar3 = extraout_ECX_01;
      fVar6 = extraout_ST1_01;
      goto LAB_006739ca;
    }
    (*(undefined4 *)((char *)&auStack_e + 6)) = 0x67398d;
    fVar5 = (float10)__fload_withFB();
    if ((param_4 & 0x80000) == 0) {
      iVar3 = extraout_ECX_00 + 1;
      fVar6 = extraout_ST1_00;
      goto LAB_006739ca;
    }
LAB_00673997:
    uVar2 = 1;
  }
  else {
    (*(undefined4 *)((char *)&auStack_e + 6)) = 0x67391c;
    uVar1 = __fload_withFB();
    if (!bVar4) {
      if (((uVar1 & 0x7ff00000) != 0) || ((param_2 & 0xfffff) != 0 || param_1 != 0)) {
        fVar5 = extraout_ST0;
        if ((param_2 & 0x80000000) != 0) {
          (*(undefined4 *)((char *)&auStack_e + 6)) = 0x673a94;
          fVar5 = (float10)FUN_00673ab2();
          fVar5 = -fVar5;
          if (extraout_CL_00 == '\0') {
            uVar2 = 1;
            goto LAB_00673965;
          }
        }
        log2(fVar5);
        (*(undefined4 *)((char *)&auStack_e + 6)) = 0x673941;
        uVar2 = FUN_0067a630();
        if (DAT_00717ad0 != 0) {
          return uVar2;
        }
        uVar2 = FUN_0067a719();
        return uVar2;
      }
      if ((param_4 & 0x7fffffff) == 0 && param_3 == 0) {
        uVar2 = FUN_0067a6ce();
        return uVar2;
      }
      (*(undefined4 *)((char *)&auStack_e + 6)) = 0x673a4c;
      uVar2 = FUN_00673ab2();
      if ((param_4 & 0x80000000) == 0) {
        if (((*((unsigned char *)&param_2 + 3)) >> 7 & extraout_CL) == 0) {
          return uVar2;
        }
        uVar2 = FUN_0067a6ce();
        return uVar2;
      }
      uVar2 = 2;
      goto LAB_00673965;
    }
    iVar3 = 0;
    fVar5 = extraout_ST0;
    fVar6 = extraout_ST1;
LAB_006739ca:
    if (((param_2 & 0x7ff00000) == 0x7ff00000) && ((param_2 & 0xfffff) != 0 || param_1 != 0)) {
      if ((param_2 & 0x80000) != 0) goto LAB_00673997;
    }
    else if (iVar3 == 0) {
      uStack_64 = 0x6739f8;
      _memcpy(auStack_e, &in_ST7, 10);
      iVar3 = __powhlp((double)fVar5,(double)fVar6,local_78);
      if (iVar3 == 0) {
        return 0;
      }
      uVar2 = 1;
      goto LAB_00673965;
    }
    uVar2 = 7;
  }
LAB_00673965:
  if (DAT_00717ad0 != 0) {
    return uVar2;
  }
  (*(undefined4 *)((char *)&auStack_e + 6)) = 0x673982;
  uVar2 = FUN_0067a5d0();
  return uVar2;
}
