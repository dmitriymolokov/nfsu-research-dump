/* spd-match: far pct=5.04 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0067DC3E */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern unsigned int fRam006ec02e;
int unaff_EBP;
int unaff_retaddr;

typedef unsigned char undefined1;
typedef unsigned int undefined4;
typedef unsigned int undefined5;
typedef float float10;
#undef NAN
#define NAN(x) ((x)!=(x))
#define ABS(x) (((x) < 0) ? -(x) : (x))
#define ROUND(x) ((int)(((x) >= 0.0) ? ((x) + 0.5) : ((x) - 0.5)))
#define CONCAT14(a,b) ((unsigned __int64)((((unsigned __int64)(unsigned char)(a))<<32)|((unsigned int)(b))))
float fRam006ec02e;
void f2xm1(double);
undefined5 __fastcall FUN_0067dc3e(undefined4 val, undefined4 param_1, undefined1 param_2)

{

  int unaff_EBP;
  float10 in_ST0;
  float10 fVar1;
  float10 fVar2;
  undefined4 unaff_retaddr;
  
  fVar1 = ABS(in_ST0);
  *(ushort *)(unaff_EBP + -0xa0) =
       (ushort)(fRam006ec02e < fVar1) << 8 | (ushort)(NAN(fRam006ec02e) || NAN(fVar1)) << 10 |
       (ushort)(fRam006ec02e == fVar1) << 0xe;
  if ((*(byte *)(unaff_EBP + -0x9f) & 0x41) == 0) {
    fVar2 = ROUND(in_ST0);
    fVar1 = (float10)0;
    *(ushort *)(unaff_EBP + -0xa0) =
         (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
         (ushort)(fVar2 == fVar1) << 0xe;
    fVar2 = in_ST0 - fVar2;
    fVar1 = (float10)0;
    *(ushort *)(unaff_EBP + -0xa0) =
         (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
         (ushort)(fVar2 == fVar1) << 0xe;
    f2xm1(ABS(fVar2));
    return CONCAT14(*(undefined1 *)(unaff_EBP + -0x9f),val);
  }
  fVar1 = (float10)0;
  *(ushort *)(unaff_EBP + -0xa0) =
       (ushort)(in_ST0 < fVar1) << 8 | (ushort)(NAN(in_ST0) || NAN(fVar1)) << 10 |
       (ushort)(in_ST0 == fVar1) << 0xe;
  if ((*(byte *)(unaff_EBP + -0x9f) & 1) == 0) {
    return CONCAT14(param_2,unaff_retaddr);
  }
  *(undefined1 *)(unaff_EBP + -0x90) = 4;
  return CONCAT14(param_2,unaff_retaddr);
}
