/* spd-match: far pct=11.55 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2111 */
#include "ghidra_compat.h"

int __cdecl FUN_00401c10();
int __cdecl FUN_004134d0();
int __cdecl FUN_004877d0();
int __cdecl FUN_004877f0();
int __cdecl FUN_004878c0();
int __cdecl FUN_00487b20();
int __cdecl FUN_00487cc0();
int __cdecl FUN_00487d70();
int __cdecl FUN_00487eb0();
int __cdecl FUN_004ae1f0();
int __cdecl FUN_004af340();
int __cdecl FUN_004aff90();
int __cdecl FUN_004b01c0();
int __cdecl FUN_004b0270();
int __cdecl FUN_004b0fd0();
int __cdecl FUN_004b1760();
int __cdecl FUN_004ef050();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f65d0();
int __cdecl FUN_004f6850();
int __cdecl FUN_004f68a0();
int __cdecl FUN_004f68c0();
int __cdecl FUN_004f6910();
int __cdecl FUN_004f6970();
int __cdecl FUN_004ffb70();
int __cdecl FUN_005136f0();
int __cdecl FUN_00564ad0();
int __cdecl FUN_00564b10();
int __cdecl FUN_0056a040();
int __cdecl FUN_005824b0();
int __cdecl FUN_0059fb80();
int __cdecl FUN_005a05b0();
int __cdecl FUN_00674898();
extern int DAT_006b6b44;
extern int DAT_006b6b48;
extern int DAT_006b9172;
extern int DAT_006ca778;
extern int DAT_006cc568;
extern int DAT_006f0fb8;
extern int DAT_006fb02c;
extern int DAT_006fbe54;
extern int DAT_006fbe58;
extern int DAT_006fbe5c;
extern int DAT_006fbe64;
extern int DAT_0073440c;
extern int DAT_0073494c;
extern int DAT_00735768;
extern int DAT_0073578c;
extern int DAT_00735e84;
extern int DAT_00735ec1;
extern int DAT_00735f0c;
extern int DAT_00735f14;
extern int DAT_00735f18;
extern int DAT_0073ad38;
extern int DAT_0073ad3c;
extern int DAT_00745e40;
extern int DAT_00746104;
extern int DAT_0074810c;
extern int DAT_00748840;
extern int DAT_007588c4;
extern int DAT_0076026c;
extern int DAT_00777b4c;
extern int DAT_0078eb14;
extern int _DAT_006b6b00;
extern int _DAT_006b6b04;
extern int _DAT_006b6b38;
extern int _DAT_006b6b3c;
extern int _DAT_006b6b40;
extern int _DAT_006b6b4c;
extern int _DAT_006cc7bc;
extern int _DAT_006cc7dc;
extern int _DAT_006cc920;
extern int _DAT_006cc944;
extern int _DAT_006cc948;
extern int _DAT_006cca38;
extern int _DAT_006ccde0;
extern void LAB_004b04a2(void);
extern void LAB_004b05bb(void);
extern void LAB_004b0665(void);
extern void LAB_004b09ed(void);
extern void LAB_004b0a48(void);

void FUN_004b0340(void)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int unaff_EBX;
  bool bVar8;
  ushort uVar9;
  float10 fVar10;
  float local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined1 local_d0 [64];
  char local_90 [140];
  
  fVar1 = _DAT_006b6b40;
  local_108 = *(float *)(unaff_EBX + 0xf0);
  bVar8 = false;
  if (*(int *)(unaff_EBX + 0x10c) == 0) {
    bVar8 = *(int *)(*(int *)(unaff_EBX + 0x114) + 0x1ca4) != 0;
    if (bVar8) {
      FUN_004af340();
    }
    *(undefined4 *)(unaff_EBX + 0xf0) = 0;
    *(undefined4 *)(unaff_EBX + 0xec) = 4;
  }
  else {
    switch(*(undefined4 *)(unaff_EBX + 0xec)) {
    case 0:
      if (*(int *)(*(int *)(unaff_EBX + 0x60) + 0x2c) != 1) {
        *(undefined4 *)(*(int *)(unaff_EBX + 0x60) + 0x2c) = 2;
      }
      iVar4 = FUN_00487d70();
      if (iVar4 != 0) {
        FUN_004b01c0();
        *(undefined4 *)(unaff_EBX + 0xec) = 1;
      }
      break;
    case 1:
      fVar1 = ((int)(DAT_0073ad38)) + *(float *)(unaff_EBX + 0x100);
      *(float *)(unaff_EBX + 0x100) = fVar1;
      *(float *)(unaff_EBX + 0xf0) =
           fVar1 * *(float *)(unaff_EBX + 0xf8) +
           fVar1 * *(float *)(unaff_EBX + 0xf4) * fVar1 * ((int)(_DAT_006cc7dc)) +
           *(float *)(unaff_EBX + 0xfc);
      if (_DAT_006b6b3c < fVar1) {
LAB_004b04a2:
        *(undefined4 *)(unaff_EBX + 0xec) = 2;
      }
      break;
    case 2:
      iVar4 = *(int *)(unaff_EBX + 0x114);
      if (*(int *)(iVar4 + 0x1ca4) == 0) {
        if ((*(int *)(iVar4 + 0x1ca8) != 0) && (*(int *)(iVar4 + 0x1cb0) != 0)) {
          fVar10 = (float10)((int)(DAT_0073ad38)) + (float10)*(float *)(unaff_EBX + 0x100);
          *(float *)(unaff_EBX + 0x100) = (float)fVar10;
          fVar10 = fVar10 * (float10)*(float *)(unaff_EBX + 0xf8) +
                   fVar10 * (float10)*(float *)(unaff_EBX + 0xf4) * fVar10 * (float10)((int)(_DAT_006cc7dc)) + (float10)*(float *)(unaff_EBX + 0xfc);
          goto LAB_004b05bb;
        }
      }
      else {
        iVar4 = *(int *)(iVar4 + 0x1cb0);
        FUN_004af340();
        if (iVar4 == 0) {
          *(undefined4 *)(unaff_EBX + 0xec) = 4;
          bVar8 = true;
        }
        else {
          FUN_004b0270();
          *(undefined4 *)(unaff_EBX + 0xec) = 3;
          bVar8 = true;
        }
      }
      break;
    case 3:
      fVar2 = ((int)(DAT_0073ad38)) + *(float *)(unaff_EBX + 0x100);
      *(float *)(unaff_EBX + 0x100) = fVar2;
      if (fVar2 <= fVar1) {
        FUN_00401c10((fVar2 / _DAT_006b6b40) * ((int)(_DAT_006cc948)) + _DAT_006cc944);
        fVar10 = (float10)FUN_00564b10();
        fVar10 = -((fVar10 + (float10)_DAT_006cc7bc) * (float10)_DAT_006ccde0 *
                  (float10)_DAT_006b6b38);
LAB_004b05bb:
        *(float *)(unaff_EBX + 0xf0) = (float)fVar10;
      }
      else {
        FUN_00487eb0();
        *(undefined4 *)(unaff_EBX + 0xf0) = 0;
        *(undefined4 *)(unaff_EBX + 0xec) = 4;
      }
      break;
    case 4:
      iVar4 = *(int *)(unaff_EBX + 0x114);
      if (*(int *)(iVar4 + 0x1ca0) == 0) {
        if (*(int *)(iVar4 + 0x1ca4) != 0) {
          if ((*(int *)(iVar4 + 0x1ca8) == 0) || (*(int *)(iVar4 + 0x1cb0) == 0)) {
            FUN_004af340();
            bVar8 = true;
          }
          else {
            FUN_00487cc0();
            *(undefined4 *)(unaff_EBX + 0xec) = 0;
          }
        }
      }
      else {
        if ((*(int *)(iVar4 + 0x1ca8) == 0) || (*(int *)(iVar4 + 0x1cb0) == 0)) goto LAB_004b04a2;
        FUN_00487cc0();
        *(undefined4 *)(unaff_EBX + 0xec) = 0;
      }
    }
    *(undefined4 *)(*(int *)(unaff_EBX + 0x60) + 0x194) = *(undefined4 *)(unaff_EBX + 0xf0);
  }
  *(float *)(unaff_EBX + 0x104) = *(float *)(unaff_EBX + 0xf0) - local_108;
  if (((bVar8) && (*(int *)(*(int *)(unaff_EBX + 0x114) + 0x1ca8) != 0)) &&
     (iVar4 = *(int *)(unaff_EBX + 0x114) + 0x1570, iVar4 != 0)) {
    if (*(int *)(unaff_EBX + 0x40) != 0) {
      FUN_0056a040(iVar4);
    }
    if (*(int *)(unaff_EBX + 0x44) != 0) {
      FUN_0056a040(iVar4);
    }
  }
  iVar4 = *(int *)(unaff_EBX + 0x114);
  if (*(int *)(iVar4 + 0x1c9c) == 0) {
    if (*(int *)(iVar4 + 0x1ca0) != 0) {
      iVar4 = iVar4 + 0x730;
      goto LAB_004b0665;
    }
    if (*(int *)(iVar4 + 0x1ca4) != 0) {
      iVar4 = iVar4 + 0xe50;
      goto LAB_004b0665;
    }
    if (*(int *)(iVar4 + 0x1ca8) != 0) {
      iVar4 = iVar4 + 0x1570;
      goto LAB_004b0665;
    }
  }
  else {
    iVar4 = iVar4 + 0x10;
LAB_004b0665:
    if (iVar4 != 0) {
      if (DAT_00745e40 == 0) {
        fVar10 = (float10)FUN_005a05b0();
        *(float *)(unaff_EBX + 0x7c) = (float)fVar10;
        *(float *)(unaff_EBX + 0x78) = (float)fVar10;
      }
      else {
        fVar10 = (float10)FUN_005a05b0();
        *(float *)(unaff_EBX + 0x78) = (float)fVar10;
        fVar10 = (float10)FUN_005a05b0();
        *(float *)(unaff_EBX + 0x7c) = (float)fVar10;
      }
    }
  }
  FUN_004ae1f0();
  if (DAT_00735768 == '\0') {
    if (DAT_0078eb14 != '\0') {
      *(undefined4 *)(*(int *)(unaff_EBX + 0x60) + 0x2c) = 3;
      DAT_0078eb14 = '\0';
    }
    iVar4 = FUN_004f3f90(&DAT_00746104);
    if (((iVar4 != 0) && (*(int *)(iVar4 + 0x18) != 0)) &&
       (iVar4 = FUN_004f3f90(&DAT_00746104), iVar4 != 0)) {
      *(undefined2 *)(iVar4 + 0x1e) = 1;
    }
  }
  else {
    DAT_0078eb14 = '\x01';
    if (((*(int *)(unaff_EBX + 0xc) == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
       (iVar4 = FUN_004ffb70(), iVar4 == 0)) {
      if (DAT_0073578c == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_004ef050(0xf80dbcae);
      }
    }
    FUN_004f6910(iVar4);
    iVar4 = FUN_004f3f90(&DAT_00746104);
    if (((iVar4 != 0) && (*(int *)(iVar4 + 0x18) != 0)) &&
       (iVar4 = FUN_004f3f90(&DAT_00746104), iVar4 != 0)) {
      *(undefined2 *)(iVar4 + 0x1e) = 0;
    }
    DAT_0074810c = DAT_0073ad3c;
    DAT_00748840 = DAT_0073ad3c;
    DAT_006fb02c = 0;
    local_f0 = 0x42c60000;
    local_ec = 0x42c60000;
    local_e8 = 0x42c60000;
    local_e0 = 0x42c60000;
    local_dc = 0x42c60000;
    local_d8 = 0x42c60000;
    local_100 = 0;
    local_fc = 0;
    local_f8 = 0x3f800000;
    local_108 = 0.0;
    local_104 = 0x42340000;
    cVar3 = FUN_005136f0(&local_108,&local_104);
    if ((DAT_00735f0c == '\0') && (cVar3 != '\0')) {
      FUN_00487b20(local_f0,local_ec,local_e8,local_e0,local_dc,local_d8,local_108,local_104,
                   local_100,local_fc,local_f8);
    }
    else {
      FUN_00487b20(DAT_006fbe58,DAT_006fbe54,DAT_006fbe5c,DAT_00735f14,DAT_006fbe64,DAT_00735f18,
                   local_108,local_104,local_100,local_fc,local_f8);
    }
  }
  if (DAT_00777b4c == 1) {
    iVar4 = FUN_0059fb80();
    if (iVar4 == 0) {
      iVar4 = FUN_0059fb80();
    }
    iVar7 = 0x80;
    pcVar6 = local_90;
    do {
      cVar3 = pcVar6[iVar4 - (int)local_90];
      iVar7 = iVar7 + -1;
      *pcVar6 = cVar3;
      if (cVar3 == '\0') break;
      pcVar6 = pcVar6 + 1;
    } while (iVar7 != 0);
    if (((DAT_0073494c != 0) || (DAT_00735ec1 != '\0')) ||
       (uVar5 = DAT_0076026c, DAT_0073440c != '\0')) {
      uVar5 = 1000000000;
    }
    FUN_004f68c0(0x40,&DAT_006ca778,uVar5);
    FUN_004f6850(local_90,local_d0);
    if (((*(int *)(unaff_EBX + 0xc) == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
       (iVar4 = FUN_004ffb70(), iVar4 == 0)) {
      if (DAT_0073578c != 0) {
        uVar5 = FUN_004ef050(0x29566d7);
        FUN_004f6970(uVar5);
        goto LAB_004b09ed;
      }
      iVar4 = 0;
    }
    FUN_004f6970(iVar4);
  }
  else {
    FUN_004f6850(&DAT_006b9172);
    if (((*(int *)(unaff_EBX + 0xc) == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
       (iVar4 = FUN_004ffb70(), iVar4 == 0)) {
      if (DAT_0073578c == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_004ef050(0x29566d7);
      }
    }
    FUN_004f6910(iVar4);
  }
LAB_004b09ed:
  if (*(int *)(unaff_EBX + 0x68) == 0) {
    uVar5 = FUN_004134d0();
    iVar4 = *(int *)(unaff_EBX + 0x68);
  }
  else {
    if (*(int *)(unaff_EBX + 0x68) != 1) goto LAB_004b0a48;
    uVar5 = FUN_004134d0();
    iVar4 = *(int *)(unaff_EBX + 0x68);
  }
  *(undefined4 *)(unaff_EBX + 0x70) = uVar5;
  FUN_004f68a0(&DAT_006cc568,&((int)(DAT_007588c4)) + iVar4 * 0xf944);
LAB_004b0a48:
  local_108 = (float)(DAT_0073ad3c - DAT_0074810c);
  fVar1 = (float)(int)local_108 * _DAT_006cca38;
  if (DAT_00735e84 == '\0') {
    uVar9 = (ushort)(fVar1 < _DAT_006b6b00) << 8 | (ushort)(fVar1 == _DAT_006b6b00) << 0xe;
  }
  else {
    uVar9 = (ushort)(fVar1 < _DAT_006b6b04) << 8 | (ushort)(fVar1 == _DAT_006b6b04) << 0xe;
  }
  if ((DAT_006fb02c == 0) || (uVar9 != 0)) {
    DAT_00748840 = DAT_0073ad3c;
  }
  if ((DAT_006fb02c == 0) && (uVar9 == 0)) {
    DAT_0074810c = DAT_0073ad3c;
    DAT_00748840 = DAT_0073ad3c;
    DAT_006fb02c = 1;
  }
  if ((*(int *)(unaff_EBX + 0x124) == 4) && (DAT_006fb02c != 0)) {
    if (*(int *)(*(int *)(unaff_EBX + 0x60) + 0x34) == 0) {
      FUN_004877f0(DAT_006b6b44);
      local_108 = (float)(DAT_0073ad3c - DAT_00748840);
      FUN_00564ad0((float)(int)local_108 * _DAT_006cca38,DAT_006b6b48);
      FUN_00674898();
      fVar10 = (float10)FUN_00564b10();
      if (fVar10 <= (float10)_DAT_006cc7dc) {
        if (fVar10 < (float10)_DAT_006cc920) {
          fVar10 = (float10)_DAT_006cc920;
        }
      }
      else {
        fVar10 = (float10)_DAT_006cc7dc;
      }
      FUN_004877d0((float)((float10)_DAT_006b6b4c * fVar10));
    }
    else {
      FUN_004878c0();
    }
  }
  FUN_004b1760(unaff_EBX,*(undefined4 *)(unaff_EBX + 0x40),0);
  FUN_004b1760(unaff_EBX,*(undefined4 *)(unaff_EBX + 0x44),1);
  FUN_004aff90(unaff_EBX);
  if (((-1 < DAT_006f0fb8) && (*(int *)(*(int *)(unaff_EBX + 0x114) + 0x1ca8) != 0)) &&
     (iVar4 = *(int *)(unaff_EBX + 0x114) + 0x1570, iVar4 != 0)) {
    DAT_006f0fb8 = -1;
    FUN_005824b0(iVar4);
  }
  FUN_004b0fd0(unaff_EBX);
  return;
}
