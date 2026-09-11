/* spd-match: far pct=6.56 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.51-arity/va_00585200 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00565230();
extern int _DAT_006cc7dc;
int unaff_EDI;
int unaff_ESI;
float10 __fastcall FUN_00585200(float * obj, float *param_1)

{

  int iVar1;
  int unaff_ESI;
  float unaff_EDI;
  undefined1 *puVar2;
  float fStack_11c;
  undefined1 auStack_118 [4];
  float fStack_114;
  float local_110;
  float local_10c;
  float local_108;
  float fStack_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  undefined1 local_d0 [52];
  undefined1 auStack_9c [52];
  undefined1 auStack_68 [12];
  undefined1 auStack_5c [88];
  
  local_110 = *obj + *(float *)(unaff_ESI + 0x70);
  local_10c = *(float *)(unaff_ESI + 0x74) + obj[1];
  local_108 = *(float *)(unaff_ESI + 0x78) + obj[2];
  local_e8 = *param_1 * obj[1] - *obj * param_1[1];
  local_100 = (obj[2] * param_1[1] - param_1[2] * obj[1]) + *(float *)(unaff_ESI + 0x80);
  local_fc = *(float *)(unaff_ESI + 0x84) + (param_1[2] * *obj - obj[2] * *param_1);
  local_f8 = *(float *)(unaff_ESI + 0x88) + local_e8;
  local_d8 = *(float *)(unaff_ESI + 0x148);
  local_e0 = local_110 * local_d8;
  local_dc = local_10c * local_d8;
  local_d8 = local_108 * local_d8;
  FUN_00565230();
  iVar1 = unaff_ESI + 400;
  if (*(int *)(unaff_ESI + 0x138) == 0) {
    iVar1 = unaff_ESI + 0x150;
  }
  puVar2 = local_d0;
  FUN_00585200(puVar2,iVar1);
  FUN_00585200((float *)0, auStack_5c);
  FUN_00585200(&local_108,auStack_118,auStack_68);
  return ((float10)(float)(unsigned int)(unaff_ESI + 0x30) * (float10)fStack_114 +
         (float10)local_110 * (float10)(unsigned int)(unaff_EDI) + (float10)local_10c * (float10)fStack_11c) *
         (float10)(unsigned int)(_DAT_006cc7dc) +
         ((float10)local_100 * (float10)(float)(unsigned int)(&local_dc) +
         (float10)fStack_104 * (float10)(float)(unsigned int)(auStack_9c) +
         (float10)local_fc * (float10)(float)(unsigned int)(puVar2)) * (float10)(unsigned int)(_DAT_006cc7dc);
}
