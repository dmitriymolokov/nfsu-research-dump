/* spd-match: far pct=7.60 flags=/O1 /Gr /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0040D6E0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0040e6d0();
int __cdecl FUN_0040ed50();
int __cdecl FUN_00410550();
extern unsigned char *DAT_0071b110;
extern int DAT_0071b188;
extern int DAT_0071b18f;
extern unsigned char *DAT_0071b190;
extern unsigned char *DAT_0073636c;
extern int DAT_007363e8;
extern unsigned char *DAT_0073640c;
extern int DAT_00736458;
extern int _DAT_006cc970;
extern int _DAT_007070c0;
extern int _DAT_007070c4;
extern char stack0xfffffed8;
void __fastcall FUN_0040d6e0(int val, int param_1, int param_2, int param_3, undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;

  int iVar4;
  byte *pbVar5;
  float *pfVar6;
  undefined4 *puVar7;
  undefined4 uStack_168;
  int *piStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined1 *puStack_158;
  undefined4 uStack_154;
  int *piStack_150;
  undefined4 uStack_14c;
  undefined1 *puStack_148;
  undefined4 uStack_144;
  int *piStack_140;
  int *piStack_13c;
  undefined4 uStack_138;
  int *piStack_134;
  undefined4 auStack_f0 [38];
  undefined1 auStack_58 [24];
  float afStack_40 [16];
  
  if (val != 0) {
    piStack_134 = DAT_0073636c;
    uStack_138 = 0x40d6ff;
    (**(code **)(*DAT_0073636c + 0x94))();
  }
  auStack_f0[0xb] = 0xffffffff;
  auStack_f0[0x17] = 0xffffffff;
  auStack_f0[0x23] = 0xffffffff;
  auStack_f0[8] = 0x3f800000;
  auStack_f0[9] = 0x3f800000;
  auStack_f0[10] = 0;
  auStack_f0[0x14] = 0x3f800000;
  auStack_f0[0x15] = 0xbf800000;
  auStack_f0[0x16] = 0;
  auStack_f0[0x20] = 0xbf800000;
  auStack_f0[0x21] = 0xbf800000;
  auStack_f0[0x22] = 0;
  iVar4 = 0;
  do {
    auStack_f0[iVar4 * 2] = 0;
    auStack_f0[iVar4 * 2 + 1] = 0;
    auStack_f0[iVar4 * 2 + 0xc] = 0x3f800000;
    auStack_f0[iVar4 * 2 + 0xd] = 0;
    auStack_f0[iVar4 * 2 + 0x18] = 0x3f800000;
    auStack_f0[iVar4 * 2 + 0x19] = 0x3f800000;
    auStack_f0[iVar4 * 2 + 0x24] = 0;
    *(undefined4 *)(auStack_58 + iVar4 * 8 + -4) = 0x3f800000;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  piStack_134 = (int *)0x40d7d9;
  FUN_0040e6d0();
  iVar4 = 0;
  if (0 < param_1) {
    pbVar5 = (byte *)(param_3 + 1);
    pfVar6 = afStack_40 + 1;
    do {
      piStack_134 = *(int **)(param_2 + iVar4 * 4);
      uStack_138 = *(undefined4 *)(pbVar5 + ((int)&DAT_0071b18f - param_3));
      piStack_13c = DAT_0071b110;
      piStack_140 = (int *)0x40d821;
      (**(code **)(*DAT_0071b110 + 0xd0))();
      bVar1 = *pbVar5;
      bVar2 = pbVar5[1];
      pfVar6[-1] = (float)(*(uint *)(pbVar5 + -1) & 0xff) * _DAT_006cc970;
      bVar3 = pbVar5[2];
      iVar4 = iVar4 + 1;
      pbVar5 = pbVar5 + 4;
      *pfVar6 = (float)bVar1 * _DAT_006cc970;
      pfVar6[1] = (float)bVar2 * _DAT_006cc970;
      pfVar6[2] = (float)bVar3 * _DAT_006cc970;
      pfVar6 = pfVar6 + 4;
    } while (iVar4 < param_1);
  }
  if (param_1 < 4) {
    pfVar6 = afStack_40 + param_1 * 4 + 1;
    puVar7 = &DAT_0071b190 + param_1;
    do {
      uStack_138 = *puVar7;
      piStack_134 = (int *)0x0;
      piStack_13c = DAT_0071b110;
      piStack_140 = (int *)0x40d8c9;
      (**(code **)(*DAT_0071b110 + 0xd0))();
      pfVar6[-1] = 0.0;
      *pfVar6 = 0.0;
      pfVar6[1] = 0.0;
      pfVar6[2] = 0.0;
      puVar7 = puVar7 + 1;
      pfVar6 = pfVar6 + 4;
    } while ((int)puVar7 < 0x71b1a0);
  }
  piStack_134 = (int *)param_4;
  uStack_138 = 0x40d8fd;
  FUN_00410550();
  if (DAT_0073640c == 0) {
    piStack_134 = DAT_0073636c;
    uStack_138 = 0x40d91c;
    (**(code **)(*DAT_0073636c + 0xe4))();
  }
  else {
    piStack_134 = *(int **)(DAT_0073640c + 0x18);
    uStack_138 = 0x40d92e;
    (**(code **)(*piStack_134 + 0x68))();
  }
  _DAT_007070c4 = 0;
  uStack_138 = 0;
  if (DAT_0073640c == 0) {
    piStack_13c = (int *)0x18;
    piStack_140 = DAT_0073636c;
    uStack_144 = 0x40d94f;
    (**(code **)(*DAT_0073636c + 0xe4))();
  }
  else {
    piStack_140 = *(int **)(DAT_0073640c + 0x18);
    piStack_13c = *(int **)(DAT_0073640c + 0xc0);
    uStack_144 = 0x40d961;
    (**(code **)(*piStack_140 + 0x68))();
  }
  uStack_144 = 4;
  puStack_148 = auStack_58;
  uStack_14c = DAT_0071b188;
  piStack_150 = DAT_0071b110;
  _DAT_007070c0 = 0;
  uStack_154 = 0x40d986;
  (**(code **)(*DAT_0071b110 + 0x90))();
  uStack_154 = 0x30;
  puStack_158 = &stack0xfffffed8;
  uStack_15c = 2;
  uStack_160 = 6;
  piStack_164 = DAT_0073636c;
  DAT_007363e8 = 0;
  uStack_168 = 0x40d9a5;
  (**(code **)(*DAT_0073636c + 0x14c))();
  iVar4 = DAT_00736458;
  uStack_168 = 0x40d9b0;
  FUN_0040ed50();
  uStack_168 = *(undefined4 *)(iVar4 + 8);
  (**(code **)(*DAT_0073636c + 0x94))(DAT_0073636c,0);
  (**(code **)(*DAT_0073636c + 0x9c))(DAT_0073636c,*(undefined4 *)(iVar4 + 0xc));
  uStack_160 = *(undefined4 *)(iVar4 + 0x14);
  uStack_15c = *(undefined4 *)(iVar4 + 0x18);
  uStack_168 = 0;
  piStack_164 = (int *)0x0;
  puStack_158 = (undefined1 *)0x0;
  uStack_154 = 0x3f800000;
  (**(code **)(*DAT_0073636c + 0xbc))(DAT_0073636c,&uStack_168);
  DAT_00736458 = iVar4;
  DAT_0073640c = 0;
  return;
}
