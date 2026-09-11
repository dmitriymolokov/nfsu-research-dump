/* spd-match: far pct=10.44 flags=/O2 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-member42/va_005416E0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))
double __cdecl sqrt(double);
int __cdecl abs(int);

extern int _DAT_006cc7ac;
extern int _DAT_006cc7bc;
extern int _DAT_006cc87c;
extern int _DAT_006cc880;
extern int _DAT_006cc884;
extern int _DAT_006cc888;
extern int _DAT_006cc88c;
extern int _DAT_006cc890;
extern int _DAT_006cc894;
extern int _DAT_006cc898;
extern int _DAT_006cc89c;
extern int _DAT_006cc8a0;
extern int _DAT_006cc8a4;

struct ThisCallBox {
  void FUN_005416e0(float * obj, float param_2, float param_3, float param_4, float param_5);
};
void ThisCallBox::FUN_005416e0(float * obj, float param_2, float param_3, float param_4, float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;

  fVar2 = ((float *)this)[2];
  fVar1 = ((float *)this)[1];
  fVar3 = ((float *)this)[3];
  fVar11 = param_5 * param_5 * ((int)_DAT_006cc7ac) - _DAT_006cc7bc;
  fVar4 = param_3 * param_3 - param_4 * param_4;
  fVar5 = *((float *)this) * param_2;
  fVar6 = fVar5 * ((int)_DAT_006cc8a0);
  fVar7 = fVar5 * ((int)_DAT_006cc89c);
  fVar10 = param_3 * fVar7;
  fVar9 = fVar5 * ((int)_DAT_006cc898) * fVar11;
  fVar8 = fVar5 * ((int)_DAT_006cc894);
  *obj = (((int)_DAT_006cc8a4) * fVar5 * ((int)_DAT_006cc890) - fVar9 * ((int)_DAT_006cc88c)) + *obj;
  fVar5 = fVar8 * fVar4 * ((int)_DAT_006cc888);
  obj[4] = fVar5 + obj[4];
  obj[8] = obj[8] - fVar5;
  obj[0xc] = fVar9 * ((int)_DAT_006cc884) + obj[0xc];
  obj[0x10] = param_4 * fVar10 * ((int)_DAT_006cc880) + obj[0x10];
  obj[0x14] = fVar10 * param_5 * ((int)_DAT_006cc880) + obj[0x14];
  obj[0x18] = fVar7 * param_4 * param_5 * ((int)_DAT_006cc888) + obj[0x18];
  obj[0x1c] = fVar6 * param_3 * ((int)_DAT_006cc87c) + obj[0x1c];
  obj[0x20] = param_4 * fVar6 * ((int)_DAT_006cc87c) + obj[0x20];
  obj[0x24] = param_5 * fVar6 * ((int)_DAT_006cc87c) + obj[0x24];
  fVar1 = fVar1 * param_2;
  fVar5 = fVar1 * ((int)_DAT_006cc8a0);
  fVar6 = fVar1 * ((int)_DAT_006cc89c);
  fVar9 = param_3 * fVar6;
  fVar8 = fVar1 * ((int)_DAT_006cc898) * fVar11;
  fVar7 = fVar1 * ((int)_DAT_006cc894);
  obj[1] = (((int)_DAT_006cc8a4) * fVar1 * ((int)_DAT_006cc890) - fVar8 * ((int)_DAT_006cc88c)) + obj[1];
  fVar1 = fVar7 * fVar4 * ((int)_DAT_006cc888);
  obj[5] = fVar1 + obj[5];
  obj[9] = obj[9] - fVar1;
  obj[0xd] = fVar8 * ((int)_DAT_006cc884) + obj[0xd];
  obj[0x11] = param_4 * fVar9 * ((int)_DAT_006cc880) + obj[0x11];
  obj[0x15] = fVar9 * param_5 * ((int)_DAT_006cc880) + obj[0x15];
  obj[0x19] = fVar6 * param_4 * param_5 * ((int)_DAT_006cc888) + obj[0x19];
  obj[0x1d] = fVar5 * param_3 * ((int)_DAT_006cc87c) + obj[0x1d];
  obj[0x21] = param_4 * fVar5 * ((int)_DAT_006cc87c) + obj[0x21];
  obj[0x25] = param_5 * fVar5 * ((int)_DAT_006cc87c) + obj[0x25];
  fVar2 = fVar2 * param_2;
  fVar1 = fVar2 * ((int)_DAT_006cc8a0);
  fVar5 = fVar2 * ((int)_DAT_006cc89c);
  fVar8 = param_3 * fVar5;
  fVar7 = fVar2 * ((int)_DAT_006cc898) * fVar11;
  fVar6 = fVar2 * ((int)_DAT_006cc894);
  obj[2] = (((int)_DAT_006cc8a4) * fVar2 * ((int)_DAT_006cc890) - fVar7 * ((int)_DAT_006cc88c)) + obj[2];
  fVar2 = fVar6 * fVar4 * ((int)_DAT_006cc888);
  obj[6] = fVar2 + obj[6];
  obj[10] = obj[10] - fVar2;
  obj[0xe] = fVar7 * ((int)_DAT_006cc884) + obj[0xe];
  obj[0x12] = param_4 * fVar8 * ((int)_DAT_006cc880) + obj[0x12];
  obj[0x16] = fVar8 * param_5 * ((int)_DAT_006cc880) + obj[0x16];
  obj[0x1a] = fVar5 * param_4 * param_5 * ((int)_DAT_006cc888) + obj[0x1a];
  obj[0x1e] = fVar1 * param_3 * ((int)_DAT_006cc87c) + obj[0x1e];
  obj[0x22] = param_4 * fVar1 * ((int)_DAT_006cc87c) + obj[0x22];
  obj[0x26] = param_5 * fVar1 * ((int)_DAT_006cc87c) + obj[0x26];
  fVar3 = fVar3 * param_2;
  fVar1 = fVar3 * ((int)_DAT_006cc8a0);
  fVar2 = fVar3 * ((int)_DAT_006cc89c);
  fVar6 = param_3 * fVar2;
  fVar11 = fVar3 * ((int)_DAT_006cc898) * fVar11;
  fVar5 = fVar3 * ((int)_DAT_006cc894);
  obj[3] = (((int)_DAT_006cc8a4) * fVar3 * ((int)_DAT_006cc890) - fVar11 * ((int)_DAT_006cc88c)) + obj[3];
  fVar3 = fVar5 * fVar4 * ((int)_DAT_006cc888);
  obj[7] = fVar3 + obj[7];
  obj[0xb] = obj[0xb] - fVar3;
  obj[0xf] = fVar11 * ((int)_DAT_006cc884) + obj[0xf];
  obj[0x13] = param_4 * fVar6 * ((int)_DAT_006cc880) + obj[0x13];
  obj[0x17] = fVar6 * param_5 * ((int)_DAT_006cc880) + obj[0x17];
  obj[0x1b] = fVar2 * param_4 * param_5 * ((int)_DAT_006cc888) + obj[0x1b];
  obj[0x1f] = fVar1 * param_3 * ((int)_DAT_006cc87c) + obj[0x1f];
  obj[0x23] = param_4 * fVar1 * ((int)_DAT_006cc87c) + obj[0x23];
  obj[0x27] = param_5 * fVar1 * ((int)_DAT_006cc87c) + obj[0x27];
  return;
}
