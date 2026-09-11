/* spd-match: far pct=8.19 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004AE1F0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))
double __cdecl sqrt(double);
int __cdecl abs(int);

int __cdecl FUN_004ae530();
int __cdecl FUN_00564b10();
int __cdecl FUN_00674898();
extern int DAT_006cc7a4;
extern int DAT_006fb038;
extern int DAT_006fb03c;
extern int DAT_006fb044;
extern int DAT_006fb054;
extern int DAT_006fb058;
extern int DAT_00735e8c;
extern int DAT_00735e90;
extern int DAT_00735e94;
extern int DAT_00735e98;
extern int DAT_00735e9c;
extern int DAT_00735ea0;
extern int DAT_00735ea4;
extern int DAT_00735ea8;
extern int DAT_007364dc;
extern int DAT_0073ad38;
extern int DAT_007404c0;
extern int _DAT_006b6b08;
extern int _DAT_006b6b0c;
extern int _DAT_006b6b20;
extern int _DAT_006b6b24;
extern int _DAT_006cc7e4;
extern int _DAT_006cc844;
extern int _DAT_006cc9f8;
extern int _DAT_006fb040;
extern int _DAT_00748110;
extern int _DAT_00748114;
extern int _DAT_00748118;
void __fastcall FUN_004ae1f0(float * obj)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;

  int iVar6;
  float *pfVar7;
  float *pfVar8;
  undefined1 *puVar9;
  float fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float local_c;
  float local_8;
  
  if (((obj[6] != 0.0) && (DAT_006fb038 != 0)) && (obj[5] != DAT_007364dc)) {
    obj[5] = DAT_007364dc;
    fVar3 = obj[3];
    if (DAT_00735e8c == 0) {
      if (obj[3] <= obj[4]) {
        if ((obj[3] < obj[4]) &&
           (fVar4 = ((int)DAT_0073ad38) * ((int)_DAT_006fb040) + obj[3], obj[3] = fVar4, obj[4] < fVar4))
        {
          obj[3] = obj[4];
        }
      }
      else {
        fVar4 = obj[3] - ((int)DAT_0073ad38) * ((int)_DAT_006fb040);
        obj[3] = fVar4;
        if (fVar4 < obj[4]) {
          obj[3] = obj[4];
        }
      }
      FUN_00674898();
      fVar13 = (float10)FUN_00564b10();
      fVar11 = (float10)((int)_DAT_006b6b0c);
      FUN_00674898();
      fVar12 = (float10)FUN_00564b10();
      fVar11 = fVar12 * (float10)((int)_DAT_006b6b08) + (float10)(float)(fVar13 * fVar11);
      if (fVar3 < _DAT_006b6b20) {
        if (_DAT_006b6b24 <= fVar3) {
          fVar11 = (((float10)fVar3 - (float10)((int)_DAT_006b6b24)) /
                   ((float10)((int)_DAT_006b6b20) - (float10)((int)_DAT_006b6b24))) * fVar11;
        }
        else {
          fVar11 = (float10)((int)DAT_006cc7a4);
        }
      }
      fVar11 = fVar11 + (float10)fVar3;
    }
    else {
      fVar11 = (float10)((int)DAT_006fb03c);
    }
    fVar11 = fVar11 * (float10)((int)_DAT_006cc844) * (float10)((int)_DAT_006cc7e4);
    fVar13 = (float10)((int)DAT_0073ad38) * fVar11;
    obj[2] = (float)fVar13;
    fVar13 = fVar13 + (float10)obj[1];
    obj[1] = (float)fVar13;
    if ((float10)*obj < fVar13) {
      do {
        obj[1] = obj[1] - *obj;
      } while (*obj < obj[1]);
    }
    _DAT_00748110 = (float)fVar11;
    _DAT_00748114 = 0;
    _DAT_00748118 = 0;
    iVar6 = FUN_004ae530(&DAT_007404c0);
    fVar4 = DAT_00735e90;
    fVar3 = DAT_006fb044;
    if (iVar6 != 0) {
      fVar1 = obj[0x4cd];
      local_c = obj[0x4cb];
      fVar10 = (float)(((((int)DAT_00735ea8) | 0xffffff00) << 8 | ((int)DAT_00735ea4)) << 8 | ((int)DAT_00735ea0));
      local_8 = obj[0x4ca];
      iVar6 = 0;
      do {
        if (local_c == 0.0) break;
        pfVar8 = (float *)(*(int *)&obj[(int)local_8 * 0xb8 + 0x40a]);
        if (pfVar8 != (float *)0x0) {
          pfVar7 = obj + iVar6 * 0x1a + 0x17;
          do {
            if ((0x1f < iVar6) || (pfVar8 == obj + (int)local_8 * 0xb8 + 0x40a)) break;
            pfVar7[-1] = pfVar8[2];
            *(undefined1 *)((int)pfVar7 + 2) = 0;
            pfVar7[1] = 0.0;
            fVar5 = DAT_006fb054;
            *(undefined1 *)pfVar7 = 2;
            *(undefined1 *)((int)pfVar7 + 1) = 2;
            *(undefined1 *)((int)pfVar7 + 3) = 1;
            pfVar7[2] = fVar10;
            iVar6 = iVar6 + 1;
            pfVar7[3] = pfVar8[6] - fVar1;
            pfVar7[4] = fVar4 + pfVar8[7];
            fVar2 = pfVar8[8];
            pfVar7[6] = fVar5;
            pfVar7[5] = fVar3 + fVar2;
            pfVar7[7] = pfVar8[10];
            pfVar7[8] = pfVar8[0xb];
            pfVar7[9] = pfVar8[0xc];
            pfVar7[10] = DAT_006fb058;
            pfVar7[0xb] = DAT_00735e94;
            pfVar7[0xc] = DAT_00735e98;
            pfVar7[0xd] = DAT_00735e9c;
            *(undefined2 *)(pfVar7 + 0xe) = 0;
            pfVar8 = (float *)(*(int *)pfVar8);
            pfVar7 = pfVar7 + 0x1a;
          } while (pfVar8 != (float *)0x0);
        }
        local_8 = (float)((int)local_8 + 1U & 0x80000001);
        if ((int)local_8 < 0) {
          local_8 = (float)(((int)local_8 - 1U | 0xfffffffe) + 1);
        }
        fVar1 = fVar1 + _DAT_006cc9f8;
        local_c = (float)((int)local_c + -1);
      } while (iVar6 < 0x20);
      if (iVar6 < 0x20) {
        puVar9 = (undefined1 *)(iVar6 * 0x68 + 0x5f + (int)obj);
        iVar6 = 0x20 - iVar6;
        do {
          *puVar9 = 0;
          puVar9 = puVar9 + 0x68;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
  }
  return;
}
