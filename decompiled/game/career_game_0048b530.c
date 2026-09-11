/* spd-match: far pct=5.82 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0048B530 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004831c0();
int __cdecl FUN_00567370();
int __cdecl FUN_00583f20();
extern int DAT_006cc7a4;
extern int DAT_0073ad34;
extern int _DAT_006b6e2c;
extern int _DAT_006cc7bc;
extern int _DAT_006cca38;
extern int _DAT_006ccc08;
extern unsigned char *PTR_DAT_00705b20;
int unaff_EDI;
void __fastcall FUN_0048b530(short * obj, char param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  char cVar8;

  int *unaff_EDI;
  float10 fVar9;
  float local_20;
  float local_1c;
  float local_18;
  
  sVar2 = *obj;
  if (((sVar2 == 1) || (sVar2 == 0)) || (sVar2 == 4)) {
    if (((param_1 != '\0') || (*(int *)(unaff_EDI[0xb] + 0x38) == 0)) ||
       ((2 < *(int *)(unaff_EDI[0xb] + 0x3cc) ||
        (cVar8 = (**(code **)(*unaff_EDI + 0x24))(), cVar8 == '\0')))) {
      iVar3 = unaff_EDI[0xb];
      local_1c = *(float *)(iVar3 + 0x74);
      local_20 = *(float *)(iVar3 + 0x70);
      local_18 = *(float *)(iVar3 + 0x78);
      fVar1 = local_18 * *(float *)(iVar3 + 0x98) +
              local_1c * *(float *)(iVar3 + 0x94) + local_20 * *(float *)(iVar3 + 0x90);
      if (fVar1 < DAT_006cc7a4) {
        fVar1 = fVar1 * _DAT_006ccc08;
        local_20 = fVar1 * *(float *)(iVar3 + 0x90) + local_20;
        local_1c = fVar1 * *(float *)(iVar3 + 0x94) + local_1c;
        local_18 = fVar1 * *(float *)(iVar3 + 0x98) + local_18;
      }
      fVar9 = (float10)FUN_00583f20(&PTR_DAT_00705b20,*(undefined4 *)(iVar3 + 0x3d4));
      fVar1 = (float)fVar9;
      FUN_00567370();
      fVar5 = _DAT_006cc7bc - fVar1;
      fVar7 = _DAT_006cc7bc -
              ((float)(DAT_0073ad34 - unaff_EDI[0x13]) * _DAT_006cca38) / _DAT_006b6e2c;
      fVar6 = DAT_006cc7a4;
      if ((DAT_006cc7a4 < fVar7) && (fVar6 = fVar7, _DAT_006cc7bc < fVar7)) {
        fVar6 = _DAT_006cc7bc;
      }
      FUN_004831c0(fVar5 * *(float *)(iVar3 + 0x90) + local_20 * fVar1,
                   fVar5 * *(float *)(iVar3 + 0x94) + local_1c * fVar1,
                   fVar6 * (fVar5 * *(float *)(iVar3 + 0x98) + local_18 * fVar1));
      if (param_1 != '\0') {
        puVar4 = (undefined4 *)unaff_EDI[0xf];
        *puVar4 = puVar4[2];
        puVar4[1] = puVar4[3];
        *(undefined2 *)(puVar4 + 0xb) = 0;
        puVar4[0xc] = puVar4[0xe];
        puVar4[0xd] = puVar4[0xf];
        *(undefined2 *)(puVar4 + 0x17) = 0;
        puVar4[0x18] = puVar4[0x1a];
        puVar4[0x19] = puVar4[0x1b];
        *(undefined2 *)(puVar4 + 0x23) = 0;
        return;
      }
    }
  }
  else {
    iVar3 = unaff_EDI[0xb];
    FUN_004831c0(*(undefined4 *)(iVar3 + 0x90),*(undefined4 *)(iVar3 + 0x94),
                 *(undefined4 *)(iVar3 + 0x98));
    puVar4 = (undefined4 *)unaff_EDI[0xf];
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
