/* spd-match: far pct=5.69 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.51-arity/va_0048B8C0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))
typedef unsigned int WPARAM;
typedef long LRESULT;
typedef struct tagMSG { unsigned char _[48]; } MSG, tagMSG, *LPMSG;
int __cdecl FUN_m375_thunk_helper(void);

int __cdecl FUN_0040bc10();
int __cdecl FUN_00440a40();
int __cdecl FUN_00441d80();
int __cdecl FUN_004831c0();
int __cdecl FUN_00483430();
int __cdecl FUN_0048b530();
int __cdecl FUN_0048b7a0();
int __cdecl FUN_00564b10();
int __cdecl FUN_00674898();
extern unsigned char *DAT_006fbdf4;
extern unsigned char *DAT_00705af0;
extern unsigned char *DAT_00705af4;
extern unsigned char *DAT_00705af8;
extern int DAT_00705c60;
extern int DAT_00705c64;
extern int DAT_00705c68;
extern int DAT_007361a0;
extern int DAT_007364a0;
extern int DAT_0073ad34;
extern int DAT_0078a346;
extern int _DAT_006b6eb0;
extern int _DAT_006cc7bc;
void __fastcall FUN_0048b8c0(undefined4 val, undefined4 param_1, int *param_2, short *param_3, int param_4)

{
  short sVar1;
  ushort uVar2;
  float *pfVar3;
  undefined4 *puVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  char cVar8;

  int iVar9;
  float10 fVar10;
  float fStack_88;
  float local_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined1 local_50 [76];
  
  FUN_0048b530(val);
  FUN_0048b7a0();
  FUN_0040bc10();
  local_70 = 0.0;
  local_6c = 0.0;
  local_68 = 0.0;
  local_64 = 0;
  if ((char)param_2[0x11] != '\0') {
    iVar9 = param_2[0x14];
    local_6c = *(float *)(unsigned int)(iVar9 + 0x24);
    local_70 = *(float *)(unsigned int)(iVar9 + 0x20);
    local_68 = *(float *)(unsigned int)(iVar9 + 0x28);
    local_64 = 0;
    FUN_0048b8c0(0, &local_70, &local_70, local_50, 0);
  }
  if (1 < *(int *)(param_2[0xb] + 0x3cc)) {
    param_2[0x13] = DAT_0073ad34;
    FUN_00440a40(param_2[0xb] + 0x540,param_2[0xb] + 0x60,&local_84,0,0);
    FUN_00441d80(local_84);
  }
  if ((DAT_0078a346 == '\0') && (DAT_007361a0 == 0)) {
    if (((*(char *)((int)param_2 + 0x45) == '\0') || (param_2[8] == 0)) ||
       (*(char *)(param_2[8] + 0x29) != '\0')) {
      fStack_80 = *(float *)(unsigned int)(param_3 + 2);
      fStack_7c = *(float *)(unsigned int)(param_3 + 6);
      fStack_78 = *(float *)(unsigned int)(param_3 + 4);
    }
    else {
      iVar9 = (uint)(DAT_007364a0 == 3) * 0x10;
      fStack_7c = *(float *)(unsigned int)(&DAT_00705af4 + iVar9);
      fStack_80 = *(float *)(unsigned int)(&DAT_00705af0 + iVar9);
      fStack_78 = *(float *)(unsigned int)(&DAT_00705af8 + iVar9);
    }
  }
  else {
    fStack_80 = DAT_00705c60;
    fStack_7c = DAT_00705c64;
    fStack_78 = DAT_00705c68;
  }
  FUN_00674898();
  fVar10 = (float10)FUN_00564b10();
  local_84 = (float)fVar10;
  fVar10 = (float10)FUN_00564b10();
  sVar1 = *param_3;
  if (((sVar1 == 1) || (sVar1 == 0)) || (sVar1 == 4)) {
    bVar7 = true;
    fStack_88 = 0.0;
    fVar10 = ((float10)local_84 / fVar10) * (float10)fStack_80 + (float10)fStack_78;
  }
  else {
    bVar7 = false;
    fVar10 = (float10)fStack_78 - (float10)local_84 / fVar10;
    fStack_88 = fStack_80 + (int)_DAT_006cc7bc;
  }
  local_84 = (float)fVar10;
  fStack_60 = local_70 * *(float *)(unsigned int)(param_4 + 0x10);
  fStack_5c = local_6c * *(float *)(unsigned int)(param_4 + 0x14);
  fStack_58 = local_68 * *(float *)(unsigned int)(param_4 + 0x18);
  FUN_00483430();
  fVar5 = fStack_80;
  fVar6 = fStack_7c;
  if (((*(int *)(param_2[0xb] + 0x38) != 0) && (*(int *)(param_2[0xb] + 0x3cc) < 3)) &&
     (cVar8 = (**(code **)(*param_2 + 0x24))(), fVar5 = fStack_80, fVar6 = fStack_7c, cVar8 != '\0')
     ) {
    fStack_78 = _DAT_006b6eb0 * fStack_78;
    fVar5 = _DAT_006b6eb0 * fStack_80;
    fVar6 = _DAT_006b6eb0 * fStack_7c;
  }
  fStack_60 = fStack_60 + fVar5;
  fStack_5c = fStack_5c + fVar6;
  fStack_58 = fStack_58 + fStack_78;
  FUN_004831c0(fStack_60,fStack_5c,fStack_58);
  fStack_60 = local_70 * *(float *)(unsigned int)(param_4 + 0x40);
  fStack_5c = local_6c * *(float *)(unsigned int)(param_4 + 0x44);
  fStack_58 = local_68 * *(float *)(unsigned int)(param_4 + 0x48);
  FUN_00483430();
  fStack_60 = fStack_60 + fStack_88;
  fStack_58 = fStack_58 + local_84;
  FUN_004831c0(fStack_60,fStack_5c,fStack_58);
  uVar2 = *(ushort *)(&DAT_006fbdf4 + *param_3 * 2);
  pfVar3 = (float *)(unsigned int)param_2[0xc];
  pfVar3[2] = (float)uVar2;
  if ((float)uVar2 != *pfVar3) {
    *(undefined2 *)(pfVar3 + 0xb) = 2;
  }
  if ((!bVar7) || (*(char *)((int)param_2 + 0x46) != '\0')) {
    puVar4 = (undefined4 *)param_2[0xc];
    *puVar4 = puVar4[2];
    puVar4[1] = puVar4[3];
    *(undefined2 *)(puVar4 + 0xb) = 0;
    puVar4 = (undefined4 *)param_2[0xd];
    *puVar4 = puVar4[2];
    puVar4[1] = puVar4[3];
    *(undefined2 *)(puVar4 + 0xb) = 0;
    puVar4[0xc] = puVar4[0xe];
    puVar4[0xd] = puVar4[0xf];
    *(undefined2 *)(puVar4 + 0x17) = 0;
    puVar4[0x18] = puVar4[0x1a];
    puVar4[0x19] = puVar4[0x1b];
    *(undefined2 *)(puVar4 + 0x23) = 0;
    puVar4 = (undefined4 *)param_2[0xe];
    *puVar4 = puVar4[2];
    puVar4[1] = puVar4[3];
    *(undefined2 *)(puVar4 + 0xb) = 0;
    puVar4[0xc] = puVar4[0xe];
    puVar4[0xd] = puVar4[0xf];
    *(undefined2 *)(puVar4 + 0x17) = 0;
    puVar4[0x18] = puVar4[0x1a];
    puVar4[0x19] = puVar4[0x1b];
    *(undefined2 *)(puVar4 + 0x23) = 0;
  }
  return;
}
