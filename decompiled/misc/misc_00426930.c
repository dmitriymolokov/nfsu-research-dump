/* spd-match: far pct=9.20 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00426930 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0041f5e0();
int __cdecl FUN_0041f6a0();
int __cdecl FUN_00420050();
int __cdecl FUN_00421a30();
int __cdecl FUN_00429190();
int __cdecl FUN_00429cf0();
int __cdecl FUN_0042c4b0();
int __cdecl FUN_0042c640();
int __cdecl FUN_0042c6d0();
int __cdecl FUN_0042da40();
int __cdecl FUN_0042ddc0();
int __cdecl FUN_00435b30();
int __cdecl FUN_00438030();
int __cdecl FUN_00438440();
int __cdecl FUN_00440ce0();
int __cdecl FUN_00443a10();
int __cdecl FUN_00464ea0();
int __cdecl FUN_004664b0();
int __cdecl FUN_00468820();
int __cdecl FUN_00564db0();
int __cdecl FUN_00572970();
int __cdecl FUN_00583f20();
extern int DAT_006b7a74;
extern int DAT_006b7ab0;
extern int DAT_006b7b60;
extern int DAT_006b7b6c;
extern int DAT_006b7b70;
extern int DAT_006b7b74;
extern int DAT_006b7b84;
extern int DAT_006cc7a4;
extern int DAT_006f08a4;
extern int DAT_00700b3c;
extern int DAT_00700b44;
extern int DAT_00736090;
extern unsigned char *DAT_0073619c;
extern int DAT_007361a0;
extern int DAT_007361a4;
extern int DAT_007361bc;
extern int DAT_007361c4;
extern int DAT_007361e8;
extern unsigned char *DAT_007361f0;
extern int DAT_007361f8;
extern int DAT_007372b0;
extern int DAT_0073ad34;
extern int DAT_0073ad3c;
extern int DAT_0078a345;
extern int DAT_0078a346;
extern int DAT_0078a3fa;
extern int _DAT_006b72dc;
extern int _DAT_006b7a88;
extern int _DAT_006b7b64;
extern int _DAT_006b7b68;
extern int _DAT_006b7b88;
extern int _DAT_006b7b8c;
extern int _DAT_006b7ba4;
extern int _DAT_006b7ba8;
extern int _DAT_006b7bac;
extern int _DAT_006b7bb0;
extern int _DAT_006cc7bc;
extern int _DAT_006cc7dc;
extern int _DAT_006cc844;
extern int _DAT_006cc954;
extern int _DAT_006cc978;
extern int _DAT_006cc97c;
extern int _DAT_006cc980;
extern int _DAT_006cca18;
extern int _DAT_006cca38;
extern int _DAT_006ccac0;
extern int _DAT_006ccb50;
extern int _DAT_006ccb74;
extern int _DAT_006ccdf0;
extern int _DAT_006ccdf4;
extern int _DAT_0073654c;
extern unsigned char *PTR_DAT_007062cc;
extern unsigned char *PTR_DAT_007062e4;
extern unsigned char *PTR_DAT_007062fc;
extern unsigned char *PTR_DAT_00706314;
extern void LAB_00426c65(void);
extern void LAB_004270d9(void);
extern void LAB_0042da30(void);
void __fastcall FUN_00426930(int obj, float param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  short sVar9;

  int iVar10;
  uint uVar11;
  int iVar12;
  float *pfVar13;
  int *piVar14;
  bool bVar15;
  float10 fVar16;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_1c;
  float local_18;
  
  if (((*(int *)(obj + 0x830) != 0) && (*DAT_0073619c == 4)) &&
     (iVar10 = FUN_00435b30(DAT_0073619c), iVar10 == 0)) {
    if (*(char *)(*(int *)(obj + 0x14) + 0x734) != '\0') {
      FUN_00438030(param_1);
    }
    FUN_00438440(param_1);
  }
  if (DAT_006cc7a4 < param_1) {
    fVar2 = ((int)_DAT_006cc7bc) / param_1;
    local_1c = *(float *)(obj + 0x74) - *(float *)(obj + 0x4a4);
    local_18 = (*(float *)(obj + 0x78) - *(float *)(obj + 0x4a8)) * fVar2;
    *(float *)(obj + 0x88) = local_18;
    local_30 = (*(float *)(obj + 0xd0) - *(float *)(obj + 0x4b0)) * fVar2;
    local_2c = (*(float *)(obj + 0xd4) - *(float *)(obj + 0x4b4)) * fVar2;
    local_28 = (*(float *)(obj + 0xd8) - *(float *)(obj + 0x4b8)) * fVar2;
    *(float *)(obj + 0x80) = (*(float *)(obj + 0x70) - *(float *)(obj + 0x4a0)) * fVar2;
    *(float *)(obj + 0x84) = local_1c * fVar2;
    *(float *)(obj + 0xe0) = local_30;
    *(float *)(obj + 0xe4) = local_2c;
    *(float *)(obj + 0xe8) = local_28;
  }
  if ((DAT_006cc7a4 <= *(float *)(obj + 0x3d4)) && (*(float *)(obj + 0x3d4) <= _DAT_006cc844))
  {
    *(float *)(obj + 0x3b8) = param_1 * *(float *)(obj + 0x3d4) + *(float *)(obj + 0x3b8);
  }
  pfVar13 = (float *)(obj + 0x60);
  fVar2 = *(float *)(obj + 0x490) - *pfVar13;
  fVar4 = *(float *)(obj + 0x494) - *(float *)(obj + 100);
  fVar3 = *(float *)(obj + 0x498) - *(float *)(obj + 0x68);
  *(float *)(obj + 0x3bc) =
       SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2) + *(float *)(obj + 0x3bc);
  *(float *)(obj + 0x490) = *pfVar13;
  *(undefined4 *)(obj + 0x494) = *(undefined4 *)(obj + 100);
  *(undefined4 *)(obj + 0x498) = *(undefined4 *)(obj + 0x68);
  FUN_00443a10(&DAT_007372b0,pfVar13);
  uVar11 = ((int)DAT_006f08a4) + 7U & 0x8000001f;
  bVar15 = uVar11 == 0;
  if ((int)uVar11 < 0) {
    bVar15 = (uVar11 - 1 | 0xffffffe0) == 0xffffffff;
  }
  if (((bVar15) && (*(int *)(obj + 0x28) != 0)) &&
     (iVar10 = FUN_00440ce0(obj + 0x540), iVar10 == 0)) {
    local_30 = *pfVar13 + _DAT_006cc7bc;
    local_2c = *(float *)(obj + 100);
    iVar10 = FUN_00440ce0(obj + 0x540);
    if (iVar10 == 0) {
      *(undefined4 *)(obj + 0x87c) = 1;
    }
  }
  pfVar1 = *(float **)(obj + 0x808);
  fVar2 = DAT_006cc7a4;
  if (pfVar1 != (float *)0x0) {
    fVar2 = *(float *)(obj + 0x800) - *pfVar1;
    fVar3 = *(float *)(obj + 0x804) - pfVar1[1];
    fVar2 = SQRT(fVar2 * fVar2 + fVar3 * fVar3);
  }
  if (fVar2 <= _DAT_006b7bac) {
    pfVar1 = *(float **)(obj + 0x808);
    if ((((pfVar1 != (float *)0x0) &&
         (fVar2 = *(float *)(obj + 0x800) - *pfVar1,
         fVar3 = *(float *)(obj + 0x804) - pfVar1[1],
         _DAT_006ccb74 < SQRT(fVar2 * fVar2 + fVar3 * fVar3))) && (((int)DAT_006f08a4) % 0x3c == 0)) &&
       (*(int *)(obj + 0x28) != 0)) {
      *(undefined4 *)(obj + 0x808) = 0;
      FUN_00443a10(&DAT_007372b0,pfVar13);
    }
  }
  else if (DAT_00736090 == 0) {
    *(undefined4 *)(obj + 0x87c) = 1;
  }
  FUN_00429190();
  iVar10 = *(int *)(obj + 0x18);
  if (iVar10 == 0) {
    return;
  }
  local_34 = *(float *)(obj + 0x3cc);
  if ((*(int *)(iVar10 + 0x60) == 6) || (*(int *)(iVar10 + 0x60) == 7)) {
    if (*(int *)(obj + 0x38) == 1) {
      if ((local_34 == 5.60519e-45) &&
         (_DAT_006b7ba4 < (float)(((int)DAT_0073ad34) - *(int *)(obj + 0x4c8)) * ((int)_DAT_006cca38))) {
LAB_00426c65:
        FUN_0042ddc0(1);
      }
    }
    else if (0 < (int)local_34) goto LAB_00426c65;
  }
  uVar11 = ((int)DAT_006f08a4) + 3U & 0x80000007;
  bVar15 = uVar11 == 0;
  if ((int)uVar11 < 0) {
    bVar15 = (uVar11 - 1 | 0xfffffff8) == 0xffffffff;
  }
  if (!bVar15) {
    return;
  }
  fVar2 = *(float *)(obj + 0x3d4);
  fVar3 = (float)((int)DAT_0078a3fa);
  local_30 = fVar3;
  fVar16 = (float10)FUN_00583f20(&PTR_DAT_007062fc,fVar3);
  if (((fVar16 < (float10)fVar2) && ((int)local_34 < 4)) &&
     (fVar16 = (float10)FUN_00464ea0(), ABS(fVar16) < (float10)((int)_DAT_006ccdf4))) {
    FUN_00572970(DAT_006b7b60,"CarInAir");
  }
  if ((((DAT_007361e8 == 0) && (*(int *)(iVar10 + 0x60) != 6)) &&
      ((*(int *)(iVar10 + 0x60) != 7 &&
       ((local_34 == 0.0 && (*(char *)(*(int *)(obj + 0x18) + 0x4ac) == '\0')))))) &&
     (fVar16 = (float10)FUN_00583f20(&PTR_DAT_007062fc,fVar3), fVar16 < (float10)fVar2)) {
    fVar16 = (float10)FUN_00583f20(&PTR_DAT_00706314,fVar3);
    local_34 = (float)fVar16;
    FUN_00429cf0(local_34,&local_30,&local_34,1);
    fVar4 = _DAT_006cc954;
    if (_DAT_006cca18 <= local_34) {
      fVar4 = ((int)_DAT_006b7bb0) * local_34;
    }
    *(float *)(obj + 0x4c4) = (float)((int)DAT_0073ad34) * ((int)_DAT_006cca38) + fVar4;
    fVar16 = (float10)FUN_00583f20(&PTR_DAT_007062cc,fVar3);
    if ((((fVar16 < (float10)local_30) &&
         (fVar16 = (float10)FUN_00583f20(&PTR_DAT_007062e4,fVar3), fVar16 < (float10)local_34)) &&
        (cVar8 = FUN_0042c4b0(), cVar8 != '\0')) && (cVar8 = FUN_0042da40(6,0,1,1), cVar8 == '\0'))
    {
      FUN_0042c640();
    }
  }
  if (((*(int *)(iVar10 + 0x60) == 6) && (*(float *)(obj + 0x78) < DAT_006cc7a4)) &&
     (*(float *)(iVar10 + 0x588) < *(float *)(obj + 0x68))) {
    *(undefined4 *)(iVar10 + 0x588) = *(undefined4 *)(obj + 0x68);
  }
  if (*(int *)(iVar10 + 0x60) != 6) goto LAB_004270d9;
  if (*(int *)(obj + 0x38) == 1) {
    local_30 = (float)(((int)DAT_0073ad34) - *(int *)(obj + 0x4c8));
    if ((((((float)(int)local_30 * ((int)_DAT_006cca38) <= _DAT_006b7ba8) ||
          (FUN_0042ddc0(0), DAT_0078a345 != '\0')) || (DAT_007361a4 != 0)) ||
        ((DAT_0078a346 != '\0' || (DAT_007361a0 != 0)))) || (*DAT_007361f0 == 9)) goto LAB_004270d9;
    iVar12 = FUN_00421a30();
    if (((iVar12 != 0) &&
        (local_30 = (float)(((int)DAT_0073ad34) - *(int *)(iVar10 + 0x8c)),
        (float)(int)local_30 * ((int)_DAT_006cca38) < _DAT_006b7a88)) ||
       ((*DAT_0073619c != 4 || ((DAT_007361c4 == 2 || (DAT_0078a3fa == 0)))))) goto LAB_004270d9;
    if ((&DAT_00700b3c)[*(int *)(iVar10 + 0x60)] != '\0') {
      FUN_0042ddc0(0);
    }
    iVar12 = 0;
    if (0 < DAT_007361c4) {
      do {
        if ((&DAT_00700b44)[*(int *)((&DAT_007361bc)[iVar12] + 0x60)] != '\0') goto LAB_004270d9;
        iVar12 = iVar12 + 1;
      } while (iVar12 < DAT_007361c4);
    }
  }
  else {
    if ((((float)((int)DAT_0073ad34) * ((int)_DAT_006cca38) <= *(float *)(obj + 0x4c4)) ||
        (FUN_0042ddc0(0), DAT_0078a345 != '\0')) ||
       ((DAT_007361a4 != 0 ||
        (((DAT_0078a346 != '\0' || (DAT_007361a0 != 0)) || (*DAT_007361f0 == 9))))))
    goto LAB_004270d9;
    iVar12 = FUN_00421a30();
    if (((iVar12 != 0) &&
        (local_30 = (float)(((int)DAT_0073ad34) - *(int *)(iVar10 + 0x8c)),
        (float)(int)local_30 * ((int)_DAT_006cca38) < _DAT_006b7a88)) ||
       ((*DAT_0073619c != 4 || ((DAT_007361c4 == 2 || (DAT_0078a3fa == 0)))))) goto LAB_004270d9;
    if ((&DAT_00700b3c)[*(int *)(iVar10 + 0x60)] != '\0') {
      FUN_0042ddc0(0);
    }
    iVar12 = 0;
    if (0 < DAT_007361c4) {
      do {
        if ((&DAT_00700b44)[*(int *)((&DAT_007361bc)[iVar12] + 0x60)] != '\0') goto LAB_004270d9;
        iVar12 = iVar12 + 1;
      } while (iVar12 < DAT_007361c4);
    }
  }
  uVar6 = DAT_006b7a74;
  *(undefined4 *)(iVar10 + 0xa0) = DAT_0073ad3c;
  uVar7 = DAT_006b7ab0;
  *(int *)(iVar10 + 0x8c) = DAT_0073ad34;
  FUN_00420050(uVar7,uVar6,&LAB_0042da30,iVar10);
  iVar12 = FUN_0041f6a0();
  if (iVar12 == 0) {
    FUN_0042c6d0(iVar10,0x10,1);
  }
  _DAT_0073654c = 1;
  *(undefined1 *)(iVar10 + 0x270) = 1;
  *(undefined4 *)(iVar10 + 0x60) = 7;
  *(undefined1 *)(iVar10 + 0x98) = 1;
  *(undefined4 *)(iVar10 + 0x9c) = 0;
LAB_004270d9:
  if ((fVar2 < _DAT_006b7b88) && (*(int *)(iVar10 + 0x58) == 0)) {
    FUN_00572970(DAT_006b7b84,"GoingSlow");
  }
  if (_DAT_006ccb50 < fVar2) {
    iVar10 = *(int *)(((int)DAT_007361f8) + 0x1c);
    iVar12 = *(int *)(((int)DAT_007361f8) + 0x20) - iVar10;
    local_34 = 0.0;
    if (0 < iVar12) {
      pfVar13 = (float *)FUN_0041f5e0();
      piVar14 = (int *)(((int)DAT_007361f8) + 0x28 + iVar10 * 4);
      do {
        iVar10 = *piVar14;
        fVar3 = *(float *)(iVar10 + 0x60) - *pfVar13;
        fVar5 = *(float *)(iVar10 + 100) - pfVar13[1];
        fVar4 = *(float *)(iVar10 + 0x68) - pfVar13[2];
        if (SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4) < _DAT_006ccb50) {
          local_34 = (float)((int)local_34 + 1);
        }
        piVar14 = piVar14 + 1;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
      if (0 < (int)local_34) {
        FUN_00572970((float)(int)local_34 * ((int)_DAT_006b7b64),"CloseCars");
      }
    }
    iVar10 = *(int *)(((int)DAT_007361f8) + 0x20);
    iVar12 = *(int *)(((int)DAT_007361f8) + 0x24) - iVar10;
    local_34 = 0.0;
    if (0 < iVar12) {
      pfVar13 = (float *)FUN_0041f5e0();
      piVar14 = (int *)(((int)DAT_007361f8) + 0x28 + iVar10 * 4);
      do {
        iVar10 = *piVar14;
        fVar3 = *(float *)(iVar10 + 0x60) - *pfVar13;
        fVar5 = *(float *)(iVar10 + 100) - pfVar13[1];
        fVar4 = *(float *)(iVar10 + 0x68) - pfVar13[2];
        if (SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4) < _DAT_006ccb50) {
          local_34 = (float)((int)local_34 + 1);
        }
        piVar14 = piVar14 + 1;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
      if (0 < (int)local_34) {
        FUN_00572970((float)(int)local_34 * ((int)_DAT_006b7b68),"CloseCops");
      }
    }
  }
  FUN_00572970(fVar2 / ((int)_DAT_006b7b8c),"Speed");
  if (_DAT_006ccac0 < fVar2) {
    fVar3 = DAT_006cc7a4;
    if (_DAT_006b72dc <= *(float *)(obj + 0x3d0)) {
      sVar9 = FUN_00564db0(*(undefined4 *)(obj + 0x70),*(undefined4 *)(obj + 0x74));
      local_30 = (float)(uint)(ushort)(*(short *)(obj + 0x3b4) - sVar9);
      fVar3 = (float)(int)local_30 * ((int)_DAT_006cc980);
      if (_DAT_006cc97c < fVar3) {
        fVar3 = fVar3 - _DAT_006cc978;
      }
    }
    if (_DAT_006ccdf0 < ABS(fVar3)) {
      FUN_00572970(DAT_006b7b6c,"CarSlidingSideways");
    }
    iVar10 = FUN_00468820(0);
    if (((iVar10 != 0) && (cVar8 = FUN_004664b0(), cVar8 != '\0')) &&
       (local_30 = (float)(((int)DAT_0073ad34) - *(int *)(iVar10 + 0xc)),
       (float)(int)local_30 * ((int)_DAT_006cca38) < _DAT_006cc7dc)) {
      iVar10 = *(int *)(iVar10 + 100);
      cVar8 = *(char *)(*(int *)(iVar10 + 600) + 0x15);
      if (((cVar8 == '\0') && (*(char *)(*(int *)(iVar10 + 0x25c) + 0x15) == '\0')) &&
         (_DAT_006ccb50 < fVar2)) {
        FUN_00572970(DAT_006b7b70,"CarCollision");
        return;
      }
      if ((cVar8 == '\x01') || (*(char *)(*(int *)(iVar10 + 0x25c) + 0x15) == '\x01')) {
        FUN_00572970(DAT_006b7b74,"SmokeableCollision");
      }
    }
  }
  return;
}
