/* spd-match: far pct=13.82 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_c2440_uint_uint/batches/20260724T133039Z_w0_tp1 */
#include "ghidra_compat.h"

#ifndef ZEXT48
#define ZEXT48(x) ((unsigned __int64)(unsigned int)(x))
#endif

int __cdecl FUN_005ba1d9(...);
int __cdecl FUN_005ba22d(...);
int __cdecl FUN_005ba278(...);
int __cdecl FUN_005ba2ce(...);
int __cdecl FUN_005ba2ff(...);
int __cdecl FUN_005ba35f(...);
int __cdecl FUN_005ba5c6(...);
int __cdecl FUN_005ba681(...);
int __cdecl FUN_005bae82(...);
int __cdecl FUN_005bb22e(...);
int __cdecl FUN_005bb295(...);
int __cdecl FUN_005bb385(...);
int __cdecl FUN_005bb39e(...);
int __cdecl FUN_005bb43f(...);
int __cdecl FUN_005bbdd0(...);
int __cdecl FUN_005bc356(...);
int __cdecl FUN_005bc47a(...);
int __cdecl FUN_005bc4f9(...);
int __cdecl FUN_005bc73c(...);
int __cdecl FUN_005bcbdd(...);
int __cdecl FUN_005bcd15(...);
int __cdecl FUN_005bd1b1(...);
int __cdecl FUN_005be628(...);
int __cdecl FUN_005bedc7(...);
int __cdecl FUN_005beee7(...);
int __cdecl FUN_005bf135(...);
int __cdecl FUN_005bfd33(...);
int __cdecl FUN_005c094c(...);
int __cdecl FUN_005c0e94(...);
int __cdecl FUN_005c1052(...);
int __cdecl FUN_005c10a3(...);
int __cdecl FUN_005c1128(...);
int __cdecl FUN_005c11d0(...);
int __cdecl FUN_005c1248(...);
int __cdecl FUN_005c1473(...);
int __cdecl FUN_005c18f9(...);
int __cdecl FUN_005c19bf(...);
int __cdecl FUN_005c238d(...);
int __cdecl FUN_005c2858(...);
int __cdecl FUN_005d7899(...);
int __cdecl FUN_005d78db(...);
int __cdecl FUN_005d7ac2(...);
int __cdecl FUN_005d7b61(...);
int __cdecl FUN_005d7db0(...);
int __cdecl FUN_005d7f48(...);
int __cdecl FUN_005d7f77(...);
int __cdecl FUN_005d814c(...);
int __cdecl FUN_005d8c7b(...);
int __cdecl FUN_005d8eb3(...);
extern void LAB_005c2c2c(...);
extern void LAB_005c2c2e(...);
extern void LAB_005c2c3e(...);
extern void LAB_005c2cfc(...);
extern void LAB_005c2d22(...);
extern void LAB_005c2d24(...);
extern void LAB_005c2d53(...);
extern void LAB_005c2e05(...);
extern void LAB_005c2e0f(...);
extern void LAB_005c2e30(...);
extern void LAB_005c308d(...);
extern void LAB_005c308f(...);
extern void LAB_005c30a7(...);
extern void LAB_005c327a(...);
extern void LAB_005c327d(...);
extern void LAB_005c329f(...);
extern void LAB_005c32c9(...);
extern void LAB_005c332c(...);
extern void LAB_005c34e7(...);
extern void LAB_005c3502(...);
extern void LAB_005c3547(...);
extern void LAB_005c3554(...);
extern void LAB_005c356e(...);
extern void LAB_005c35ab(...);
extern void LAB_005c35da(...);
extern void LAB_005c364c(...);
extern void LAB_005c3659(...);
extern void LAB_005c3703(...);
extern void LAB_005c38a8(...);
extern void LAB_005c38b2(...);
extern void LAB_005c38bc(...);
extern void LAB_005c38bf(...);
extern void LAB_005c38ff(...);
extern void LAB_005c3949(...);
extern void LAB_005c396f(...);
extern void LAB_005c398a(...);
extern void LAB_005c39d6(...);

struct ThisCallBox {
  void FUN_005c2a3c(uint param_2, uint param_3);
};
void ThisCallBox::FUN_005c2a3c(uint param_2, uint param_3) {
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  char *pcVar14;
  undefined4 *local_68 [16];
  undefined1 local_28 [24];
  undefined4 local_10;
  uint local_c;
  undefined4 *local_8;
  
  puVar7 = (undefined4 *)0x0;
  local_8 = (undefined4 *)0x0;
  if (*(int *)(((int)this) + 0x44) != 0) {
    return;
  }
  local_c = param_3;
  puVar3 = local_68[1];
  puVar2 = local_68[0];
  while (local_68[0] = puVar2, local_68[1] = puVar3, local_c != 0) {
    puVar2 = *(undefined4 **)(((int)this) + 8);
    local_c = local_c - 1;
    if (puVar2 == (undefined4 *)0x0) {
      pcVar14 = "internal error: stack underflow";
      goto LAB_005c39d6;
    }
    local_68[local_c] = (undefined4 *)puVar2[2];
    *(undefined4 *)(((int)this) + 8) = puVar2[3];
    puVar2[2] = 0;
    puVar2[3] = 0;
    (**(code **)*puVar2)(1);
    puVar3 = local_68[1];
    puVar2 = local_68[0];
  }
  switch(param_2) {
  case 0:
    pvVar5 = _malloc(0x20);
    if (pvVar5 == (void *)0x0) break;
    puVar7 = (undefined4 *)FUN_005d7b61(0,0,0,0);
    goto LAB_005c396f;
  case 1:
    pvVar5 = _malloc(0x20);
    if (pvVar5 == (void *)0x0) goto LAB_005c38a8;
    puVar2 = (undefined4 *)
             FUN_005d7b61(*(undefined4 *)(((int)this) + 0x50),*(undefined4 *)(((int)this) + 0x54),
                          *(undefined4 *)(((int)this) + 0x58),local_68[0]);
    goto LAB_005c2e05;
  case 2:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 0x11:
  case 0x13:
  case 0x20:
  case 0x23:
  case 0x24:
  case 0x27:
  case 0x29:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x4c:
  case 0x4f:
  case 0x54:
  case 0x57:
  case 0x5d:
  case 0x5f:
  case 0x62:
  case 99:
  case 100:
  case 0x66:
  case 0x69:
  case 0x6c:
  case 0x77:
  case 0x7e:
  case 0x84:
  case 0x8a:
  case 0x91:
  case 0x95:
  case 0x9c:
  case 0x9e:
  case 0x9f:
  case 0xa0:
  case 0xa1:
  case 0xa8:
  case 0xab:
  case 0xb3:
  case 0xb5:
  case 0xb7:
  case 0xba:
  case 0xbb:
  case 0xbc:
  case 0xbd:
  case 0xbe:
  case 0xc5:
  case 0xd1:
  case 0xd2:
  case 0xd3:
  case 0xd8:
  case 0xde:
  case 0xe0:
  case 0xe4:
  case 0xe7:
  case 0xec:
  case 0xef:
  case 0xf1:
  case 0xf3:
  case 0xfa:
  case 0xff:
  case 0x101:
  case 0x102:
  case 0x103:
  case 0x105:
  case 0x106:
  case 0x108:
  case 0x10a:
  case 0x10c:
  case 0x10e:
  case 0x115:
  case 0x116:
    goto LAB_005c3949;
  case 3:
  case 0x50:
  case 0x60:
  case 0x6a:
  case 0x78:
  case 0x8b:
  case 0x92:
  case 0x9d:
  case 0x104:
    goto LAB_005c38b2;
  case 10:
  case 0x14:
  case 0x7f:
    FUN_005ba681();
    goto LAB_005c3949;
  case 0xb:
    pvVar5 = _malloc(0x1c);
    if (pvVar5 == (void *)0x0) break;
    uVar9 = 2;
LAB_005c332c:
    puVar7 = (undefined4 *)FUN_005d7f48(uVar9,0);
    goto LAB_005c396f;
  case 0xc:
    pvVar5 = _malloc(0x1c);
    if (pvVar5 != (void *)0x0) {
      uVar9 = 0x40;
      goto LAB_005c332c;
    }
    break;
  case 0xd:
    pvVar5 = _malloc(0x1c);
    if (pvVar5 != (void *)0x0) {
      uVar9 = 1;
      goto LAB_005c332c;
    }
    break;
  case 0xe:
    pvVar5 = _malloc(0x1c);
    if (pvVar5 != (void *)0x0) {
      uVar9 = 4;
      goto LAB_005c332c;
    }
    break;
  case 0xf:
    pvVar5 = _malloc(0x1c);
    if (pvVar5 != (void *)0x0) {
      uVar9 = 0x100;
      goto LAB_005c332c;
    }
    break;
  case 0x10:
    pvVar5 = _malloc(0x1c);
    if (pvVar5 != (void *)0x0) {
      uVar9 = 8;
      goto LAB_005c332c;
    }
    break;
  case 0x12:
    pvVar5 = _malloc(0x1c);
    if (pvVar5 == (void *)0x0) goto LAB_005c38a8;
    puVar2 = (undefined4 *)FUN_005d7f48(0,local_68[0],0);
    goto LAB_005c2e05;
  case 0x15:
    pvVar5 = _malloc(0x1c);
    if (pvVar5 != (void *)0x0) {
      uVar9 = 0x200;
      goto LAB_005c332c;
    }
    break;
  case 0x16:
    pvVar5 = _malloc(0x1c);
    if (pvVar5 != (void *)0x0) {
      uVar9 = 0x400;
      goto LAB_005c332c;
    }
    break;
  case 0x17:
    pvVar5 = _malloc(0x1c);
    if (pvVar5 != (void *)0x0) {
      uVar9 = 0x800;
      goto LAB_005c332c;
    }
    break;
  case 0x18:
    pvVar5 = _malloc(0x1c);
    if (pvVar5 != (void *)0x0) {
      uVar9 = 0;
      goto LAB_005c329f;
    }
LAB_005c2c2c:
    puVar2 = (undefined4 *)0x0;
    goto LAB_005c2c2e;
  case 0x19:
    puVar2[6] = (unsigned int)(puVar3);
    local_68[1] = (undefined4 *)0x0;
    goto LAB_005c2c3e;
  default:
    FUN_005ba278(((int)this),0,0,"internal error: unhandled production");
    goto LAB_005c2d53;
  case 0x1c:
    FUN_005d7f48(0,0,*(undefined4 *)(puVar2[2] + 0x18));
    FUN_005bd1b1(local_28);
    local_10 = 0;
    local_68[0] = (undefined4 *)0x0;
    FUN_005d7f77();
    puVar7 = puVar2;
    goto LAB_005c2d53;
  case 0x1d:
    puVar2[6] = *(undefined4 *)(puVar3[2] + 0x18);
    FUN_005bd1b1(puVar2);
    puVar2[6] = 0;
    goto switchD_005c2a9a_caseD_49;
  case 0x1e:
    puVar7 = (undefined4 *)FUN_005c0e94();
    goto LAB_005c396f;
  case 0x1f:
    local_8 = (undefined4 *)FUN_005c0e94();
    FUN_005ba2ce(local_8);
    puVar2 = (undefined4 *)FUN_005d7899();
    goto LAB_005c3949;
  case 0x21:
    pvVar5 = _malloc(0x14);
    if (pvVar5 == (void *)0x0) goto LAB_005c38a8;
    pcVar14 = "TypeDefs";
LAB_005c2cfc:
    puVar2 = (undefined4 *)FUN_005d78db(local_68[0],0,pcVar14);
    goto LAB_005c2e05;
  case 0x22:
    pvVar5 = _malloc(0x14);
    if (pvVar5 == (void *)0x0) goto LAB_005c2d22;
    pcVar14 = "TypeDefs";
LAB_005c35ab:
    puVar7 = (undefined4 *)FUN_005d78db(local_68[0],local_68[1],pcVar14);
    goto LAB_005c2d24;
  case 0x25:
    FUN_005be628(0,puVar2 + 4,0,0,*(undefined4 *)(((int)this) + 0xc),1,&local_8,0);
    puVar7 = local_8;
    goto LAB_005c2d53;
  case 0x26:
    iVar6 = FUN_005be628(0,puVar2 + 4,0,0,*(undefined4 *)(((int)this) + 0xc),1,&local_8,0);
    puVar7 = local_8;
    if (((iVar6 == 0) && (local_8 != (undefined4 *)0x0)) && (local_8[1] != 1)) {
      FUN_005ba1d9(((int)this),puVar2 + 4,0xbbd,"invalid use of \'%s\'",puVar2[6]);
    }
    goto LAB_005c2d53;
  case 0x28:
    FUN_005bbdd0();
    goto LAB_005c38bf;
  case 0x2a:
    puVar2 = (undefined4 *)FUN_005c11d0();
    goto LAB_005c2e05;
  case 0x2b:
  case 0x48:
  case 0x56:
  case 0x5a:
  case 0x5c:
  case 0x65:
  case 0x72:
  case 0x73:
  case 0x76:
  case 0x86:
  case 0x8d:
  case 0x94:
  case 0x98:
  case 0xa2:
  case 0xb1:
  case 0xb4:
  case 0xb6:
  case 0xca:
  case 0xfe:
  case 0x114:
    goto switchD_005c2a9a_caseD_2b;
  case 0x30:
    pvVar5 = _malloc(0x24);
    if (pvVar5 == (void *)0x0) break;
    uVar13 = 0;
LAB_005c2e30:
    uVar9 = 0x100000001;
    uVar12 = 0;
LAB_005c308f:
    puVar7 = (undefined4 *)FUN_005d814c(uVar12,uVar13,uVar9,0);
    goto LAB_005c396f;
  case 0x31:
    pvVar5 = _malloc(0x24);
    if (pvVar5 != (void *)0x0) {
      uVar13 = 4;
      goto LAB_005c2e30;
    }
    break;
  case 0x32:
    pvVar5 = _malloc(0x24);
    if (pvVar5 != (void *)0x0) {
      uVar13 = 10;
      goto LAB_005c2e30;
    }
    break;
  case 0x33:
    pvVar5 = _malloc(0x24);
    if (pvVar5 != (void *)0x0) {
      uVar13 = 0xb;
      goto LAB_005c2e30;
    }
    break;
  case 0x34:
    pvVar5 = _malloc(0x24);
    if (pvVar5 != (void *)0x0) {
      uVar13 = 0xc;
      goto LAB_005c2e30;
    }
    break;
  case 0x35:
    pvVar5 = _malloc(0x24);
    if (pvVar5 != (void *)0x0) {
      uVar9 = 0x400000001;
      uVar13 = 0xb;
      uVar12 = 1;
      goto LAB_005c308f;
    }
    break;
  case 0x36:
    puVar7 = (undefined4 *)FUN_005c10a3();
    goto LAB_005c396f;
  case 0x37:
    pvVar5 = _malloc(0x24);
    if (pvVar5 != (void *)0x0) {
      uVar9 = 0x400000004;
      uVar13 = 0xb;
      uVar12 = 2;
      goto LAB_005c308f;
    }
    break;
  case 0x38:
    puVar7 = (undefined4 *)FUN_005c1128(puVar2,puVar3,local_68[2]);
    goto LAB_005c396f;
  case 0x39:
    pvVar5 = _malloc(0x24);
    if (pvVar5 != (void *)0x0) {
      uVar13 = 0xe;
LAB_005c308d:
      uVar9 = 0x100000001;
      uVar12 = 3;
      goto LAB_005c308f;
    }
    break;
  case 0x3a:
    pvVar5 = _malloc(0x24);
    if (pvVar5 != (void *)0x0) {
      uVar13 = 0xf;
      goto LAB_005c308d;
    }
    break;
  case 0x3b:
    pvVar5 = _malloc(0x24);
    if (pvVar5 != (void *)0x0) {
      uVar13 = 0x10;
      goto LAB_005c308d;
    }
    break;
  case 0x3c:
    pvVar5 = _malloc(0x24);
    if (pvVar5 != (void *)0x0) {
      uVar13 = 0x11;
      goto LAB_005c308d;
    }
    break;
  case 0x3d:
    pvVar5 = _malloc(0x24);
    if (pvVar5 != (void *)0x0) {
      uVar13 = 0x12;
      goto LAB_005c308d;
    }
    break;
  case 0x3e:
    pvVar5 = _malloc(0x24);
    if (pvVar5 != (void *)0x0) {
      uVar13 = 0x13;
      goto LAB_005c308d;
    }
    break;
  case 0x3f:
    pvVar5 = _malloc(0x24);
    if (pvVar5 != (void *)0x0) {
      uVar13 = 0x14;
      goto LAB_005c308d;
    }
    break;
  case 0x40:
    pvVar5 = _malloc(0x24);
    if (pvVar5 != (void *)0x0) {
      uVar13 = 0x15;
      goto LAB_005c308d;
    }
    break;
  case 0x41:
    pvVar5 = _malloc(0x24);
    if (pvVar5 != (void *)0x0) {
      uVar13 = 0x16;
      goto LAB_005c308d;
    }
    break;
  case 0x42:
    pvVar5 = _malloc(0x24);
    if (pvVar5 != (void *)0x0) {
      uVar13 = 0x17;
      goto LAB_005c308d;
    }
    break;
  case 0x43:
    pvVar5 = _malloc(0x24);
    if (pvVar5 != (void *)0x0) {
      uVar13 = 0x18;
      goto LAB_005c308d;
    }
    break;
  case 0x44:
    pvVar5 = _malloc(0x24);
    if (pvVar5 != (void *)0x0) {
      uVar13 = 0x19;
      goto LAB_005c308d;
    }
    break;
  case 0x45:
    pvVar5 = _malloc(0x24);
    if (pvVar5 != (void *)0x0) {
      uVar13 = 0x1a;
      goto LAB_005c308d;
    }
    break;
  case 0x46:
    pvVar5 = _malloc(0x24);
    if (pvVar5 != (void *)0x0) {
      uVar13 = 0x1b;
      goto LAB_005c308d;
    }
    break;
  case 0x47:
    pvVar5 = _malloc(0x24);
    if (pvVar5 != (void *)0x0) {
      uVar13 = 0x1c;
      goto LAB_005c308d;
    }
    break;
  case 0x49:
  case 0x5b:
  case 0x74:
  case 0x87:
  case 0x8e:
  case 0x99:
    goto switchD_005c2a9a_caseD_49;
  case 0x4a:
    goto LAB_005c30a7;
  case 0x4b:
LAB_005c30a7:
    puVar7 = (undefined4 *)FUN_005c1052();
    goto LAB_005c396f;
  case 0x4d:
    FUN_005bbdd0();
    goto switchD_005c2a9a_caseD_49;
  case 0x4e:
    goto LAB_005c356e;
  case 0x51:
  case 0x61:
  case 0x89:
  case 0x9b:
    goto switchD_005c2a9a_caseD_51;
  case 0x52:
  case 0x53:
    pvVar5 = _malloc(0x14);
    if (pvVar5 != (void *)0x0) {
      pcVar14 = "Semantics";
      goto LAB_005c2cfc;
    }
    goto LAB_005c38a8;
  case 0x55:
    puVar7 = (undefined4 *)FUN_005d7899();
    goto LAB_005c2d24;
  case 0x58:
    pvVar5 = _malloc(0x18);
    if (pvVar5 == (void *)0x0) goto LAB_005c38a8;
    puVar2 = (undefined4 *)FUN_005d8eb3();
    goto LAB_005c2e05;
  case 0x59:
    pvVar5 = _malloc(0x18);
    if (pvVar5 == (void *)0x0) goto LAB_005c2d22;
    puVar7 = (undefined4 *)FUN_005d8eb3();
    goto LAB_005c2d24;
  case 0x5e:
    goto LAB_005c356e;
  case 0x67:
  case 0x79:
    goto LAB_005c327a;
  case 0x68:
    puVar3 = (undefined4 *)FUN_005d7899();
    local_68[0] = (undefined4 *)0x0;
LAB_005c327a:
    local_68[1] = (undefined4 *)0x0;
LAB_005c327d:
    FUN_005ba5c6();
    puVar7 = puVar3;
    goto LAB_005c2d53;
  case 0x6b:
    puVar7 = (undefined4 *)FUN_005c19bf(puVar2,puVar3,local_68[2],local_68[3]);
    goto LAB_005c396f;
  case 0x6d:
    pvVar5 = _malloc(0x14);
    if (pvVar5 != (void *)0x0) {
      pcVar14 = "VariableDim";
      goto LAB_005c2cfc;
    }
    goto LAB_005c38a8;
  case 0x6e:
    pvVar5 = _malloc(0x14);
    if (pvVar5 != (void *)0x0) {
      pcVar14 = "VariableDim";
      goto LAB_005c35ab;
    }
    goto LAB_005c2d22;
  case 0x6f:
    goto switchD_005c2a9a_caseD_6f;
  case 0x70:
    if ((puVar2 != (undefined4 *)0x0) && (iVar6 = puVar2[2], iVar6 != 0)) {
      iVar4 = *(int *)(iVar6 + 0x18);
      *(undefined4 **)(iVar6 + 0x1c) = puVar3;
      *(undefined4 **)(iVar4 + 0x28) = local_68[2];
      *(undefined4 *)(iVar4 + 0x3c) = 1;
      iVar4 = *(int *)(((int)this) + 0xc);
      local_68[1] = (undefined4 *)0x0;
      local_68[2] = (undefined4 *)0x0;
      for (; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x1c)) {
        for (iVar8 = *(int *)(iVar4 + 0x18); iVar8 != 0; iVar8 = *(int *)(iVar8 + 0xc)) {
          iVar1 = *(int *)(iVar8 + 8);
          if (((iVar1 != 0) && (*(int *)(iVar1 + 4) == 5)) &&
             (*(int *)(iVar1 + 0x24) == *(int *)(iVar6 + 0x24))) {
            if (*(int *)(*(int *)(*(int *)(iVar8 + 8) + 0x18) + 0x3c) != 0) {
              FUN_005ba1d9(((int)this),*(int *)(iVar6 + 0x14) + 0x10,0xbfd,"\'%s\' already has a body",
                           *(undefined4 *)(*(int *)(iVar6 + 0x14) + 0x18));
            }
            *(undefined4 *)(*(int *)(*(int *)(iVar8 + 8) + 0x18) + 0x3c) = 1;
            goto switchD_005c2a9a_caseD_6f;
          }
        }
      }
    }
switchD_005c2a9a_caseD_6f:
    puVar7 = local_68[0];
    local_68[0] = (undefined4 *)0x0;
    FUN_005ba35f();
    *(undefined4 *)(((int)this) + 0x14) = 0;
    goto LAB_005c2d53;
  case 0x71:
    puVar3 = (undefined4 *)FUN_005c094c(puVar3,local_68[2],local_68[3]);
    FUN_005ba2ce(puVar3);
    goto LAB_005c327d;
  case 0x75:
    goto LAB_005c356e;
  case 0x7a:
    pvVar5 = _malloc(0x1c);
    if (pvVar5 == (void *)0x0) goto LAB_005c2c2c;
    uVar9 = 0x10;
LAB_005c329f:
    puVar2 = (undefined4 *)FUN_005d7f48(uVar9,local_68[0]);
LAB_005c2c2e:
    iVar6 = FUN_005ba2ce(puVar2);
    if (iVar6 != 0) {
LAB_005c2c3e:
      local_68[0] = (undefined4 *)0x0;
    }
LAB_005c32c9:
    FUN_005bd1b1(puVar2);
    puVar7 = puVar2;
    goto LAB_005c2d53;
  case 0x7b:
    puVar2[6] = (unsigned int)(puVar3);
    local_68[1] = (undefined4 *)0x0;
    local_68[0] = (undefined4 *)0x0;
    if ((puVar2[4] & 0x70) == 0) {
      puVar2[4] = puVar2[4] | 0x10;
    }
    goto LAB_005c32c9;
  case 0x80:
    pvVar5 = _malloc(0x1c);
    if (pvVar5 != (void *)0x0) {
      uVar9 = 0x10;
      goto LAB_005c332c;
    }
    break;
  case 0x81:
    pvVar5 = _malloc(0x1c);
    if (pvVar5 != (void *)0x0) {
      uVar9 = 0x20;
      goto LAB_005c332c;
    }
    break;
  case 0x82:
    pvVar5 = _malloc(0x1c);
    if (pvVar5 != (void *)0x0) {
      uVar9 = 0x30;
      goto LAB_005c332c;
    }
    break;
  case 0x83:
    pvVar5 = _malloc(0x1c);
    if (pvVar5 != (void *)0x0) {
      uVar9 = 0x50;
      goto LAB_005c332c;
    }
    break;
  case 0x85:
    pvVar5 = _malloc(0x14);
    if (pvVar5 == (void *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar7 = (undefined4 *)FUN_005d78db(0,0,"Stmts");
    }
    iVar6 = FUN_005ba2ce(puVar7);
    if (iVar6 != 0) {
      pvVar5 = _malloc(0x30);
      if (pvVar5 == (void *)0x0) {
        uVar13 = 0;
      }
      else {
        uVar13 = FUN_005d7db0(3,local_68[0],local_68[2],local_68[1]);
      }
      puVar7[2] = uVar13;
      iVar6 = FUN_005ba2ce(uVar13);
      if (iVar6 != 0) {
        local_68[0] = (undefined4 *)0x0;
        local_68[1] = (undefined4 *)0x0;
        local_68[2] = (undefined4 *)0x0;
      }
    }
    *(int *)(((int)this) + 0x50) = *(int *)(((int)this) + 0x50) + 1;
    goto LAB_005c2d53;
  case 0x88:
    FUN_005ba2ff();
    goto switchD_005c2a9a_caseD_2b;
  case 0x8c:
    pvVar5 = _malloc(0x14);
    if (pvVar5 == (void *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar7 = (undefined4 *)FUN_005d78db(0,0,"Passes");
    }
    iVar6 = FUN_005ba2ce(puVar7);
    if (iVar6 != 0) {
      pvVar5 = _malloc(0x30);
      if (pvVar5 == (void *)0x0) {
        uVar13 = 0;
      }
      else {
        uVar13 = FUN_005d7db0(4,local_68[0],local_68[2],local_68[1]);
      }
      puVar7[2] = uVar13;
      iVar6 = FUN_005ba2ce(uVar13);
      if (iVar6 != 0) {
        local_68[0] = (undefined4 *)0x0;
        local_68[1] = (undefined4 *)0x0;
        local_68[2] = (undefined4 *)0x0;
      }
    }
    goto LAB_005c2d53;
  case 0x8f:
    FUN_005ba2ff();
    *(undefined4 *)(((int)this) + 0x48) = 0;
switchD_005c2a9a_caseD_2b:
    puVar7 = (undefined4 *)0x0;
    goto LAB_005c2d53;
  case 0x90:
    *(undefined4 *)(((int)this) + 0x48) = 1;
switchD_005c2a9a_caseD_51:
    puVar7 = (undefined4 *)0x0;
LAB_005c3547:
    FUN_005ba35f();
    goto LAB_005c2d53;
  case 0x93:
    pvVar5 = _malloc(0x14);
    if (pvVar5 == (void *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar7 = (undefined4 *)FUN_005d78db(0,0,"States");
    }
    iVar6 = FUN_005ba2ce(puVar7);
    if (iVar6 != 0) {
      pvVar5 = _malloc(0x1c);
      if (pvVar5 == (void *)0x0) {
        uVar13 = 0;
      }
      else {
        uVar13 = FUN_005d8c7b(local_68[0],local_68[1],local_68[3]);
      }
      puVar7[2] = uVar13;
      iVar6 = FUN_005ba2ce(uVar13);
      if (iVar6 != 0) {
        local_68[0] = (undefined4 *)0x0;
        local_68[1] = (undefined4 *)0x0;
        local_68[3] = (undefined4 *)0x0;
      }
    }
    goto LAB_005c2d53;
  case 0x96:
    *(undefined4 *)(((int)this) + 0x48) = 1;
    goto LAB_005c2d53;
  case 0x97:
    *(undefined4 *)(((int)this) + 0x48) = 0;
    goto LAB_005c2d53;
  case 0x9a:
    goto LAB_005c356e;
  case 0xa3:
  case 0xb2:
    puVar7 = (undefined4 *)FUN_005bb22e(puVar2);
    goto LAB_005c2d53;
  case 0xa4:
    puVar2 = (undefined4 *)0x0;
    goto LAB_005c34e7;
  case 0xa5:
LAB_005c34e7:
    puVar7 = (undefined4 *)FUN_005c18f9(puVar2);
    goto LAB_005c2d53;
  case 0xa6:
    puVar7 = puVar2;
    puVar11 = puVar2;
    puVar2 = puVar3;
    goto LAB_005c3502;
  case 0xa7:
    pvVar5 = _malloc(0x14);
    if (pvVar5 != (void *)0x0) {
      pcVar14 = "Stmts";
      goto LAB_005c2cfc;
    }
    goto LAB_005c38a8;
  case 0xa9:
  case 0xac:
    puVar7 = (undefined4 *)0x0;
    puVar11 = puVar3;
LAB_005c3502:
    puVar7 = (undefined4 *)FUN_005bb295(puVar7,puVar2,puVar11);
    goto LAB_005c2d53;
  case 0xaa:
  case 0xad:
    puVar7 = (undefined4 *)FUN_005bb295(puVar3,local_68[2],local_68[3],local_68[4]);
    goto LAB_005c3547;
  case 0xae:
    uVar13 = 0;
    goto LAB_005c3554;
  case 0xaf:
    uVar13 = (unsigned int)(local_68[2]);
LAB_005c3554:
    puVar7 = (undefined4 *)FUN_005bfd33(puVar2,puVar3,uVar13);
    goto LAB_005c2d53;
  case 0xb0:
LAB_005c356e:
    FUN_005ba2ff();
    puVar7 = (undefined4 *)0x0;
    goto LAB_005c2d53;
  case 0xb8:
    pvVar5 = _malloc(0x14);
    if (pvVar5 != (void *)0x0) {
      pcVar14 = "DwordExpr";
      goto LAB_005c2cfc;
    }
    goto LAB_005c38a8;
  case 0xb9:
    pvVar5 = _malloc(0x14);
    if (pvVar5 != (void *)0x0) {
      pcVar14 = "DwordExpr";
      goto LAB_005c35ab;
    }
LAB_005c2d22:
    puVar7 = (undefined4 *)0x0;
LAB_005c2d24:
    iVar6 = FUN_005ba2ce(puVar7);
    if (iVar6 != 0) {
LAB_005c38bc:
      local_68[0] = (undefined4 *)0x0;
      puVar3 = puVar7;
LAB_005c38bf:
      local_68[1] = (undefined4 *)0x0;
      puVar7 = puVar3;
    }
    goto LAB_005c2d53;
  case 0xbf:
    uVar9 = 0x3ff0000000000000;
    uVar13 = 1;
    goto LAB_005c35da;
  case 0xc0:
    uVar9 = 0;
    uVar13 = 0;
LAB_005c35da:
    puVar7 = (undefined4 *)FUN_005bc356(0,uVar13,uVar9,((int)this) + 0x20);
    goto LAB_005c396f;
  case 0xc1:
  case 0xc2:
    puVar7 = (undefined4 *)FUN_005bc47a(puVar2);
    goto LAB_005c396f;
  case 0xc3:
    puVar7 = (undefined4 *)FUN_005bc4f9(puVar2);
    goto LAB_005c396f;
  case 0xc4:
    puVar7 = (undefined4 *)FUN_005bedc7();
    goto LAB_005c396f;
  case 0xc6:
  case 199:
    uVar13 = 1;
    goto LAB_005c3703;
  case 200:
    puVar7 = (undefined4 *)FUN_005c238d(puVar2,puVar3,0);
    goto LAB_005c396f;
  case 0xc9:
    puVar2 = (undefined4 *)FUN_005bae82(puVar2);
    puVar3 = puVar2;
    goto LAB_005c2e0f;
  case 0xcb:
    puVar2 = puVar3;
    goto LAB_005c364c;
  case 0xcc:
  case 0xcd:
LAB_005c364c:
    puVar7 = (undefined4 *)FUN_005bcbdd(puVar2);
    goto LAB_005c396f;
  case 0xce:
    uVar13 = 0;
    goto LAB_005c3659;
  case 0xcf:
    puVar7 = (undefined4 *)FUN_005bcd15(puVar2);
    goto LAB_005c396f;
  case 0xd0:
    uVar13 = 1;
LAB_005c3659:
    puVar7 = (undefined4 *)FUN_005c2858(puVar2,puVar3,local_68[2],uVar13);
    goto LAB_005c2d53;
  case 0xd4:
    puVar7 = (undefined4 *)FUN_005c1248();
    goto LAB_005c396f;
  case 0xd5:
    puVar7 = (undefined4 *)FUN_005bc73c();
    goto LAB_005c396f;
  case 0xd6:
    uVar12 = 1;
    uVar10 = ZEXT48(puVar2);
    uVar13 = 0x21;
    goto LAB_005c38ff;
  case 0xd7:
    uVar12 = 1;
    uVar10 = ZEXT48(puVar2);
    uVar13 = 0x22;
    goto LAB_005c38ff;
  case 0xd9:
    uVar12 = 1;
    uVar10 = ZEXT48(puVar2);
    uVar13 = 2;
    goto LAB_005c38ff;
  case 0xda:
    uVar12 = 1;
    uVar10 = ZEXT48(puVar2);
    uVar13 = 3;
    goto LAB_005c38ff;
  case 0xdb:
    uVar12 = 1;
    uVar10 = ZEXT48(puVar2);
    uVar13 = 4;
    goto LAB_005c38ff;
  case 0xdc:
    uVar12 = 1;
    uVar10 = ZEXT48(puVar2);
    uVar13 = 5;
    goto LAB_005c38ff;
  case 0xdd:
    uVar12 = 1;
    uVar10 = ZEXT48(puVar2);
    uVar13 = 6;
    goto LAB_005c38ff;
  case 0xdf:
    uVar13 = 0;
LAB_005c3703:
    puVar7 = (undefined4 *)FUN_005beee7(puVar2,puVar3,uVar13,1);
    goto LAB_005c396f;
  case 0xe1:
    uVar12 = 1;
    uVar10 = CONCAT44(puVar3,puVar2);
    uVar13 = 7;
    goto LAB_005c38ff;
  case 0xe2:
    uVar12 = 1;
    uVar10 = CONCAT44(puVar3,puVar2);
    uVar13 = 8;
    goto LAB_005c38ff;
  case 0xe3:
    uVar12 = 1;
    uVar10 = CONCAT44(puVar3,puVar2);
    uVar13 = 9;
    goto LAB_005c38ff;
  case 0xe5:
    uVar12 = 1;
    uVar10 = CONCAT44(puVar3,puVar2);
    uVar13 = 10;
    goto LAB_005c38ff;
  case 0xe6:
    uVar12 = 1;
    uVar10 = CONCAT44(puVar3,puVar2);
    uVar13 = 0xb;
    goto LAB_005c38ff;
  case 0xe8:
    uVar12 = 1;
    uVar10 = CONCAT44(puVar3,puVar2);
    uVar13 = 0xc;
    goto LAB_005c38ff;
  case 0xe9:
    uVar12 = 1;
    uVar10 = CONCAT44(puVar3,puVar2);
    uVar13 = 0xd;
    goto LAB_005c38ff;
  case 0xea:
    uVar12 = 1;
    uVar10 = CONCAT44(puVar3,puVar2);
    uVar13 = 0xe;
    goto LAB_005c38ff;
  case 0xeb:
    uVar12 = 1;
    uVar10 = CONCAT44(puVar3,puVar2);
    uVar13 = 0xf;
    goto LAB_005c38ff;
  case 0xed:
    uVar12 = 1;
    uVar10 = CONCAT44(puVar3,puVar2);
    uVar13 = 0x10;
    goto LAB_005c38ff;
  case 0xee:
    uVar12 = 1;
    uVar10 = CONCAT44(puVar3,puVar2);
    uVar13 = 0x11;
    goto LAB_005c38ff;
  case 0xf0:
    uVar12 = 1;
    uVar10 = CONCAT44(puVar3,puVar2);
    uVar13 = 0x12;
    goto LAB_005c38ff;
  case 0xf2:
    uVar12 = 1;
    uVar10 = CONCAT44(puVar3,puVar2);
    uVar13 = 0x13;
    goto LAB_005c38ff;
  case 0xf4:
    uVar12 = 1;
    uVar10 = CONCAT44(puVar3,puVar2);
    uVar13 = 0x15;
    goto LAB_005c38ff;
  case 0xf5:
    uVar12 = 1;
    uVar10 = CONCAT44(puVar3,puVar2);
    uVar13 = 0x1c;
    goto LAB_005c38ff;
  case 0xf6:
    uVar12 = 1;
    uVar10 = CONCAT44(puVar3,puVar2);
    uVar13 = 0x1d;
    goto LAB_005c38ff;
  case 0xf7:
    uVar12 = 1;
    uVar10 = CONCAT44(puVar3,puVar2);
    uVar13 = 0x1e;
    goto LAB_005c38ff;
  case 0xf8:
    uVar12 = 1;
    uVar10 = CONCAT44(puVar3,puVar2);
    uVar13 = 0x1f;
    goto LAB_005c38ff;
  case 0xf9:
    uVar12 = 1;
    uVar10 = CONCAT44(puVar3,puVar2);
    uVar13 = 0x20;
    goto LAB_005c38ff;
  case 0xfb:
    puVar7 = (undefined4 *)FUN_005bf135(puVar2,puVar3,local_68[2]);
    goto LAB_005c396f;
  case 0xfc:
    pvVar5 = _malloc(0x14);
    if (pvVar5 != (void *)0x0) {
      pcVar14 = "Arguments";
      goto LAB_005c2cfc;
    }
    goto LAB_005c38a8;
  case 0xfd:
    pvVar5 = _malloc(0x14);
    if (pvVar5 == (void *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar7 = (undefined4 *)FUN_005d78db(local_68[1],0,"Arguments");
    }
    iVar6 = FUN_005ba2ce(puVar7);
    if (iVar6 == 0) goto LAB_005c2d53;
LAB_005c38b2:
    puVar7 = (undefined4 *)FUN_005d7899();
    goto LAB_005c38bc;
  case 0x100:
    pvVar5 = _malloc(0x14);
    if (pvVar5 != (void *)0x0) {
      pcVar14 = "Value";
      goto LAB_005c2cfc;
    }
LAB_005c38a8:
    puVar2 = (undefined4 *)0x0;
LAB_005c2e05:
    puVar3 = (undefined4 *)FUN_005ba2ce(puVar2);
LAB_005c2e0f:
    puVar7 = puVar2;
    if (puVar3 != (undefined4 *)0x0) {
LAB_005c3949:
      local_68[0] = (undefined4 *)0x0;
      puVar7 = puVar2;
    }
    goto LAB_005c2d53;
  case 0x107:
    if ((*(int *)(((int)this) + 0xc) != 0) && (*(int *)(*(int *)(((int)this) + 0xc) + 0x10) == 7)) {
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = puVar2;
      }
      FUN_005ba22d(((int)this),puVar3 + 0xc,0xc09,
                   "comma expression used where an initializer list may have been intended");
    }
    uVar12 = 0;
    uVar10 = CONCAT44(local_68[0],local_68[1]);
    uVar13 = 1;
LAB_005c38ff:
    puVar7 = (undefined4 *)FUN_005c1473(uVar13,uVar10,uVar12);
    goto LAB_005c396f;
  case 0x109:
    puVar2[6] = -puVar2[6];
    local_68[0] = (undefined4 *)0x0;
    puVar7 = puVar2;
    goto LAB_005c2d53;
  case 0x10b:
    local_68[0] = (undefined4 *)0x0;
    *(double *)(puVar2 + 6) = -*(double *)(puVar2 + 6);
    puVar7 = puVar2;
    goto LAB_005c2d53;
  case 0x10d:
    puVar7 = (undefined4 *)FUN_005bb43f();
    goto LAB_005c2d53;
  case 0x10f:
  case 0x110:
  case 0x111:
  case 0x117:
  case 0x118:
  case 0x119:
  case 0x11a:
  case 0x11b:
  case 0x11c:
  case 0x11d:
  case 0x11e:
  case 0x11f:
  case 0x120:
    pvVar5 = _malloc(0x30);
    if (pvVar5 == (void *)0x0) break;
    puVar7 = (undefined4 *)FUN_005d7ac2(((int)this) + 0x20);
    goto LAB_005c396f;
  case 0x112:
  case 0x113:
    *(undefined4 *)(((int)this) + 0x18) = puVar2[6];
    goto LAB_005c3949;
  case 0x121:
    puVar7 = (undefined4 *)FUN_005bb385();
    goto LAB_005c2d53;
  case 0x122:
    uVar13 = 0;
    goto LAB_005c398a;
  case 0x123:
    uVar13 = 1;
LAB_005c398a:
    puVar7 = (undefined4 *)FUN_005bb39e(uVar13);
    goto LAB_005c2d53;
  }
  puVar7 = (undefined4 *)0x0;
LAB_005c396f:
  FUN_005ba2ce(puVar7);
LAB_005c2d53:
  param_2 = 0;
  if ((unsigned int)(param_3) != 0) {
    do {
      if (local_68[param_2] != (undefined4 *)0x0) {
        (**(code **)*local_68[param_2])(1);
      }
      param_2 = param_2 + 1;
    } while (param_2 < param_3);
  }
  if (*(int *)(((int)this) + 0x44) == 0) {
    pvVar5 = _malloc(0x14);
    if (pvVar5 == (void *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_005d78db(puVar7,*(undefined4 *)(((int)this) + 8),"Stack");
    }
    if (iVar6 == 0) {
      pcVar14 = "internal error: out of memory";
LAB_005c39d6:
      FUN_005ba278(((int)this),0,0,pcVar14);
    }
    else {
      *(int *)(((int)this) + 8) = iVar6;
    }
  }
  else if (puVar7 != (undefined4 *)0x0) {
    (**(code **)*puVar7)(1);
  }
  return;
switchD_005c2a9a_caseD_49:
  puVar3 = local_68[1];
  goto LAB_005c38bf;
}
