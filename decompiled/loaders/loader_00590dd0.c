/* spd-match: far pct=5.27 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.51-arity/va_00590DD0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00401cd0();
int __cdecl FUN_0040b990();
int __cdecl FUN_00674898();
extern int DAT_006cc7a4;
extern unsigned char *DAT_00737854;
int unaff_ESI;
void __fastcall FUN_00590dd0(float * obj, int param_1, float *param_2, float *param_3, float *param_4)

{
  float fVar1;
  undefined1 uVar2;

  int unaff_ESI;
  float *pfVar3;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  
  local_90 = 0x3f800000;
  local_8c = 0;
  local_88 = 0;
  local_84 = 0;
  local_80 = 0;
  local_7c = 0x3f800000;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0x3f800000;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0x3f800000;
  FUN_0040b990(&local_90,&local_90);
  FUN_00401cd0();
  FUN_00590dd0((float *)0, 0,0,0,0);
  FUN_00590dd0((float *)0, 0,param_2,param_2,&local_5c);
  pfVar3 = param_3;
  FUN_00590dd0((float *)0, 0,param_3,param_3,&local_68);
  FUN_00590dd0((float *)0, 0,param_4,param_4,0);
  fVar1 = *(float *)(&DAT_00737854 + *(int *)(param_1 + 0xc4) * 0x3c);
  *(float *)(unaff_ESI + 0x10) = (fVar1 * *obj) / (fVar1 + obj[2]) + (float)(unsigned int)&local_74;
  *(float *)(unaff_ESI + 0x14) = (fVar1 * obj[1]) / (fVar1 + obj[2]) + (float)(unsigned int)pfVar3;
  *(float *)(unaff_ESI + 0x20) = (fVar1 * *param_2) / (fVar1 + param_2[2]) + (float)(unsigned int)&local_74;
  *(float *)(unaff_ESI + 0x24) = (fVar1 * param_2[1]) / (fVar1 + param_2[2]) + (float)(unsigned int)pfVar3;
  *(float *)(unaff_ESI + 0x30) = (fVar1 * *param_3) / (fVar1 + param_3[2]) + (float)(unsigned int)&local_74;
  *(float *)(unaff_ESI + 0x34) = (fVar1 * param_3[1]) / (fVar1 + param_3[2]) + (float)(unsigned int)pfVar3;
  *(float *)(unaff_ESI + 0x40) = (fVar1 * *param_4) / (fVar1 + param_4[2]) + (float)(unsigned int)&local_74;
  *(float *)(unaff_ESI + 0x44) = (fVar1 * param_4[1]) / (fVar1 + param_4[2]) + (float)(unsigned int)pfVar3;
  if (obj[2] <= DAT_006cc7a4) {
    uVar2 = 0x80;
  }
  else {
    uVar2 = FUN_00674898();
  }
  *(undefined1 *)(unaff_ESI + 0x83) = uVar2;
  if (param_2[2] <= DAT_006cc7a4) {
    uVar2 = 0x80;
  }
  else {
    uVar2 = FUN_00674898();
  }
  *(undefined1 *)(unaff_ESI + 0x87) = uVar2;
  if (param_3[2] <= DAT_006cc7a4) {
    uVar2 = 0x80;
  }
  else {
    uVar2 = FUN_00674898();
  }
  *(undefined1 *)(unaff_ESI + 0x8b) = uVar2;
  if (DAT_006cc7a4 < param_4[2]) {
    uVar2 = FUN_00674898();
    *(undefined1 *)(unaff_ESI + 0x8f) = uVar2;
    return;
  }
  *(undefined1 *)(unaff_ESI + 0x8f) = 0x80;
  return;
}
