/* spd-match: far pct=10.65 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004A6A10 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00430650();
int __cdecl FUN_00432cc0();
int __cdecl FUN_004387e0();
int __cdecl FUN_00454f30();
int __cdecl FUN_0049fc50();
int __cdecl FUN_0049fcf0();
int __cdecl FUN_0049ff50();
int __cdecl FUN_004a0080();
int __cdecl FUN_004a9810();
int __cdecl FUN_004f68a0();
int __cdecl FUN_004f6910();
int __cdecl FUN_004f6970();
int __cdecl FUN_004feb50();
int __cdecl FUN_004ff2f0();
int __cdecl FUN_005864f0();
int __cdecl FUN_00674898();
extern int DAT_006c6f48;
extern int DAT_006c6f54;
extern int DAT_006c6f70;
extern int DAT_006cc7a4;
extern int DAT_0073457c;
extern int DAT_41900000;
extern int _DAT_006cc7dc;
extern int _DAT_006cc8a8;
extern int _DAT_006cc9f8;
extern unsigned char *PTR_DAT_00705ad8;
extern unsigned char *PTR_DAT_00705ae0;
extern unsigned char *PTR_DAT_00705ae8;
void __fastcall FUN_004a6a10(int obj, int param_1)

{
  int iVar1;
  float fVar2;
  char cVar3;

  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  float10 fVar10;
  int *local_30;
  float local_2c;
  uint local_28;
  undefined1 local_24 [4];
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  iVar8 = param_1;
  if ((*(uint *)(obj + 0x18) & *(uint *)(obj + 0x10)) != 0 ||
      (*(uint *)(obj + 0x1c) & *(uint *)(obj + 0x14)) != 0) {
    if (*(int *)(obj + 0x24) != 0) {
      FUN_0049ff50(obj,*(undefined4 *)(param_1 + 0x110),0x40a00000,0x41200000,&DAT_41900000);
      fVar10 = (float10)FUN_00430650();
      if (fVar10 < (float10)(unsigned int)(DAT_006cc7a4)) {
        local_20 = 0x80;
        local_14 = 0x80;
        local_18 = 0x80;
        local_1c = 0x80;
      }
      else {
        fVar10 = (float10)FUN_0049fc50();
        local_30 = (int *)(unsigned int)((float)fVar10);
        FUN_00454f30(&local_2c,local_30);
        if (local_2c * _DAT_006cc7dc <= DAT_0073457c) {
          local_2c = *(float *)(obj + 0x20);
          fVar10 = (float10)(int)local_2c * (float10)(unsigned int)(_DAT_006cc7dc);
          *(int *)(obj + 0x20) = 1 - (int)local_2c;
        }
        else {
          local_30 = (int *)(unsigned int)(((float)(unsigned int)(local_30) / local_2c));
          fVar10 = (float10)FUN_004387e0(local_30);
          fVar10 = (float10)(float)(unsigned int)(local_30) - fVar10;
        }
        local_30 = (int *)(unsigned int)((float)fVar10);
        FUN_004a9810(&PTR_DAT_00705ae8,local_30);
        local_2c = (float)FUN_004a0080();
        local_14 = (uint)local_2c >> 0x18;
        local_1c = (uint)local_2c >> 8 & 0xff;
        local_18 = (uint)local_2c >> 0x10 & 0xff;
        local_20 = (uint)local_2c & 0xff;
      }
      iVar1 = *(int *)(obj + 0x24);
      if (*(int *)(iVar1 + 0x18) < 0x100) {
        cVar3 = FUN_004feb50();
        if (cVar3 == '\0') {
          *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x400000;
        }
        FUN_004ff2f0(iVar1,0,0);
      }
    }
    if (*(int *)(obj + 0x2c) != 0) {
      local_2c = *(float *)(iVar8 + 0x104);
      uVar4 = FUN_00674898();
      FUN_004f68a0(&DAT_006c6f70,uVar4);
      FUN_004a9810(&PTR_DAT_00705ad8,local_2c);
      iVar5 = FUN_00674898();
      uVar6 = FUN_00674898();
      uVar7 = FUN_00674898();
      local_20 = FUN_00674898();
      iVar1 = *(int *)(obj + 0x2c);
      local_2c = (float)(((iVar5 << 8 | uVar6) << 8 | uVar7) << 8 | local_20);
      local_1c = (uint)local_2c >> 8 & 0xff;
      local_18 = (uint)local_2c >> 0x10 & 0xff;
      local_14 = (uint)local_2c >> 0x18;
      local_20 = local_20 & 0xff;
      if (*(int *)(iVar1 + 0x18) < 0x100) {
        cVar3 = FUN_004feb50();
        if (cVar3 == '\0') {
          *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x400000;
        }
        FUN_004ff2f0(iVar1,0,0);
      }
    }
    if ((((*(int *)(obj + 0x3c) != 0) && (*(int *)(obj + 0x40) != 0)) &&
        (*(int *)(obj + 0x48) != 0)) && (*(int *)(obj + 0x44) != 0)) {
      iVar8 = FUN_0049fcf0();
      puVar9 = (undefined4 *)(iVar8 + 0x3a4);
      local_2c = 5.60519e-45;
      local_30 = (int *)(obj + 0x3c);
      do {
        FUN_004a9810(&PTR_DAT_00705ae0,*puVar9);
        iVar8 = FUN_00674898();
        uVar6 = FUN_00674898();
        uVar7 = FUN_00674898();
        local_20 = FUN_00674898();
        local_28 = ((iVar8 << 8 | uVar6) << 8 | uVar7) << 8 | local_20;
        local_14 = local_28 >> 0x18;
        local_18 = local_28 >> 0x10 & 0xff;
        iVar8 = *local_30;
        local_1c = local_28 >> 8 & 0xff;
        local_20 = local_20 & 0xff;
        if (*(int *)(iVar8 + 0x18) < 0x100) {
          cVar3 = FUN_004feb50();
          if (cVar3 == '\0') {
            *(uint *)(iVar8 + 0x1c) = *(uint *)(iVar8 + 0x1c) | 0x400000;
          }
          FUN_004ff2f0(iVar8,0,0);
        }
        local_30 = local_30 + 1;
        puVar9 = puVar9 + 1;
        local_2c = (float)((int)local_2c + -1);
      } while (local_2c != 0.0);
      local_2c = 0.0;
      iVar8 = param_1;
    }
    if (*(int *)(obj + 0x38) != 0) {
      FUN_00432cc0();
      local_28 = FUN_00674898();
      FUN_005864f0(local_24,&local_2c,&param_1,&local_30);
      if ((int)local_2c < 1) {
        FUN_004f68a0(" 0:%02d",param_1);
      }
      else {
        FUN_004f68a0("%2d:%02d",local_2c,param_1);
      }
    }
    if (*(int *)(obj + 0x4c) != 0) {
      FUN_004f6910(*(int *)(obj + 0x4c));
    }
    if (*(int *)(obj + 0x50) != 0) {
      FUN_004f68a0(&DAT_006c6f54,1);
    }
    if (*(int *)(obj + 0x54) != 0) {
      fVar2 = _DAT_006cc8a8;
      if (*(int *)(iVar8 + 0x130) != 0) {
        fVar2 = *(float *)(iVar8 + 0x184) / *(float *)(*(int *)(*(int *)(iVar8 + 0x130) + 4) + 0xc);
      }
      if (fVar2 * _DAT_006cc9f8 < DAT_006cc7a4) {
        FUN_004f6910(*(int *)(obj + 0x54));
      }
      else {
        FUN_004f6970();
        uVar4 = FUN_00674898();
        FUN_004f68a0("%2d%%",uVar4);
      }
    }
    if (*(int *)(obj + 0x34) != 0) {
      uVar4 = FUN_00674898();
      FUN_004f68a0(&DAT_006c6f48,uVar4);
    }
    if (*(int *)(obj + 0x30) != 0) {
      uVar4 = FUN_00674898();
      FUN_004f68a0(&DAT_006c6f48,uVar4);
    }
  }
  return;
}
