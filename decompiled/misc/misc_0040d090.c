/* spd-match: far pct=8.01 flags=/O1 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-smoke8/va_0040D090 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0040e6d0(...);
int __cdecl FUN_0040ed50(...);
extern unsigned char *DAT_0071b110;
extern int DAT_0071b188;
extern unsigned char *DAT_0071b190;
extern unsigned char *DAT_0073636c;
extern int DAT_007363e8;
extern unsigned char *DAT_0073640c;
extern int DAT_00736458;
extern int _DAT_006cc7bc;
extern int _DAT_007070c8;
extern int _DAT_007070cc;
extern int _DAT_007070d0;

struct ThisCallBox {
  void FUN_0040d090(float * obj, undefined4 param_2, undefined4 param_3, float *param_4);
};
void ThisCallBox::FUN_0040d090(float * obj, undefined4 param_2, undefined4 param_3, float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;

  int iVar5;
  float *pfVar6;
  undefined4 *puVar7;
  int *piStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined1 **ppuStack_184;
  undefined4 uStack_180;
  int *piStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  int *piStack_170;
  int *piStack_16c;
  float *pfStack_168;
  undefined4 uStack_164;
  int *piStack_160;
  undefined4 uStack_15c;
  int *piStack_158;
  int *piStack_154;
  undefined1 *puStack_150;
  float afStack_12c [67];
  undefined1 local_20 [16];
  undefined4 uStack_10;
  int iStack_c;
  
  puStack_150 = local_20;
  piStack_158 = (int *)0x40d0b3;
  piStack_154 = ((int *)this);
  (**(code **)(*((int *)this) + 0x30))();
  uStack_15c = 0;
  piStack_160 = (int *)(unsigned int)(DAT_0073636c);
  uStack_164 = 0x40d0c5;
  piStack_158 = ((int *)this);
  (**(code **)(*DAT_0073636c + 0x94))();
  afStack_12c[0] = 0.0;
  afStack_12c[1] = -NAN;
  afStack_12c[10] = 1.0;
  afStack_12c[0xb] = 1.0;
  afStack_12c[0xc] = 0.0;
  afStack_12c[0xd] = -NAN;
  afStack_12c[0x16] = 1.0;
  afStack_12c[0x17] = -1.0;
  afStack_12c[0x18] = 0.0;
  afStack_12c[0x19] = -NAN;
  afStack_12c[0x22] = -1.0;
  afStack_12c[0x23] = -1.0;
  afStack_12c[0x24] = 0.0;
  afStack_12c[0x25] = -NAN;
  puStack_150 = (undefined1 *)0x0;
  do {
    fVar3 = (float)(int)puStack_150;
    puStack_150 = puStack_150 + 1;
    fVar1 = *obj;
    afStack_12c[(int)puStack_150 * 2] = -(fVar3 * fVar1);
    fVar2 = obj[1];
    afStack_12c[(int)puStack_150 * 2 + 1] = -(fVar3 * fVar2);
    fVar4 = _DAT_006cc7bc - fVar3 * obj[2];
    afStack_12c[(int)puStack_150 * 2 + 0xc] = fVar4;
    afStack_12c[(int)puStack_150 * 2 + 0xd] = -(fVar3 * fVar2);
    afStack_12c[(int)puStack_150 * 2 + 0x18] = fVar4;
    fVar2 = _DAT_006cc7bc - fVar3 * obj[3];
    afStack_12c[(int)puStack_150 * 2 + 0x19] = fVar2;
    afStack_12c[(int)puStack_150 * 2 + 0x24] = -(fVar3 * fVar1);
    afStack_12c[(int)puStack_150 * 2 + 0x25] = fVar2;
  } while ((int)puStack_150 < 4);
  uStack_164 = 0x40d1c1;
  FUN_0040e6d0();
  if (0 < iStack_c) {
    pfVar6 = afStack_12c + 0x2f;
    puVar7 = (undefined4 *)(unsigned int)&DAT_0071b190;
    iVar5 = iStack_c;
    do {
      uStack_164 = uStack_10;
      pfStack_168 = (float *)*puVar7;
      piStack_16c = (int *)(unsigned int)(DAT_0071b110);
      piStack_170 = (int *)0x40d1f9;
      (**(code **)(*DAT_0071b110 + 0xd0))();
      fVar1 = param_4[1];
      fVar2 = param_4[2];
      pfVar6[-1] = *param_4;
      fVar3 = param_4[3];
      *pfVar6 = fVar1;
      pfVar6[1] = fVar2;
      pfVar6[2] = fVar3;
      puVar7 = puVar7 + 1;
      pfVar6 = pfVar6 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (iStack_c < 4) {
    pfVar6 = afStack_12c + iStack_c * 4 + 0x2f;
    puVar7 = (undefined4 *)((unsigned int)&DAT_0071b190 + iStack_c);
    do {
      pfStack_168 = (float *)*puVar7;
      uStack_164 = 0;
      piStack_16c = (int *)(unsigned int)(DAT_0071b110);
      piStack_170 = (int *)0x40d253;
      (**(code **)(*DAT_0071b110 + 0xd0))();
      pfVar6[-1] = 0.0;
      *pfVar6 = 0.0;
      pfVar6[1] = 0.0;
      pfVar6[2] = 0.0;
      puVar7 = puVar7 + 1;
      pfVar6 = pfVar6 + 4;
    } while ((int)puVar7 < 0x71b1a0);
  }
  uStack_164 = 4;
  pfStack_168 = afStack_12c + 0x2e;
  piStack_16c = (int *)(unsigned int)(DAT_0071b188);
  piStack_170 = (int *)(unsigned int)(DAT_0071b110);
  uStack_174 = 0x40d28e;
  (**(code **)(*DAT_0071b110 + 0x90))();
  _DAT_007070cc = 0xffffffff;
  _DAT_007070c8 = 0xffffffff;
  uStack_174 = 0;
  if (DAT_0073640c == 0) {
    uStack_178 = 0x1b;
    piStack_17c = (int *)(unsigned int)(DAT_0073636c);
    uStack_180 = 0x40d2b4;
    (**(code **)(*DAT_0073636c + 0xe4))();
  }
  else {
    piStack_17c = *(int **)(DAT_0073640c + 0x18);
    uStack_178 = *(undefined4 *)(DAT_0073640c + 0xc4);
    uStack_180 = 0x40d2c6;
    (**(code **)(*piStack_17c + 0x68))();
  }
  uStack_180 = 0x30;
  ppuStack_184 = &puStack_150;
  uStack_188 = 2;
  uStack_18c = 6;
  piStack_190 = (int *)(unsigned int)(DAT_0073636c);
  _DAT_007070d0 = 0;
  DAT_007363e8 = 0;
  (**(code **)(*DAT_0073636c + 0x14c))();
  iVar5 = (unsigned int)(DAT_00736458);
  FUN_0040ed50();
  (**(code **)(*DAT_0073636c + 0x94))(DAT_0073636c,0,*(undefined4 *)(iVar5 + 8));
  (**(code **)(*DAT_0073636c + 0x9c))(DAT_0073636c,*(undefined4 *)(iVar5 + 0xc));
  ppuStack_184 = *(undefined1 ***)(iVar5 + 0x18);
  uStack_188 = *(undefined4 *)(iVar5 + 0x14);
  piStack_190 = (int *)0x0;
  uStack_18c = 0;
  uStack_180 = 0;
  piStack_17c = (int *)0x3f800000;
  (**(code **)(*DAT_0073636c + 0xbc))(DAT_0073636c,&piStack_190);
  DAT_00736458 = iVar5;
  DAT_0073640c = 0;
  return;
}
