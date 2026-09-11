/* spd-match: far pct=5.65 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_4_4 */
#include "ghidra_compat.h"

typedef struct { unsigned char b[16]; } ghidra_m128;
ghidra_m128 __cdecl ghidra_xmm_zero(void);
ghidra_m128 __cdecl rcpss(ghidra_m128, ghidra_m128);
ghidra_m128 __cdecl rsqrtss(ghidra_m128, ghidra_m128);
ghidra_m128 __cdecl rcpps(ghidra_m128, ghidra_m128);

extern int DAT_006ac638;
extern int DAT_006eb720;
extern int DAT_006ec180;
extern int DAT_006ec184;
extern unsigned char *PTR_DAT_006ec130;
extern unsigned char *PTR_FUN_006ebcb8;
extern void LAB_00676827(void);
extern void LAB_00676968(void);
extern void LAB_00676a72(void);
extern void LAB_00676aa8(void);
extern void LAB_00676b92(void);
extern void LAB_00676bb1(void);
extern void LAB_00676c22(void);
extern void LAB_00676c5b(void);
extern void LAB_00676dad(void);
extern void LAB_00676ea6(void);
extern void LAB_00676f6b(void);
extern void LAB_00676fa8(void);
extern void LAB_00676fd9(void);
extern void LAB_00677069(void);
extern void LAB_0067706c(void);
extern void LAB_0067713c(void);
extern void LAB_0067713f(void);
extern void LAB_006771ba(void);
extern void LAB_006771da(void);
extern void LAB_00677236(void);
extern void LAB_00677266(void);
extern char stack0xfffffe18;
int unaff_retaddr;

int FUN_006767f9(FILE *param_1,byte *param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  wchar_t *pwVar8;
  byte *pbVar9;
  char *pcVar10;
  char *pcVar11;
  wchar_t *pwVar12;
  uint uVar13;
  byte *pbVar14;
  bool bVar15;
  longlong lVar16;
  uint unaff_retaddr;
  wchar_t local_1dc [2];
  byte local_1d8;
  undefined1 local_1d7;
  uint local_1d4;
  byte *local_1d0;
  char local_1cc;
  char local_1cb [351];
  uint local_6c;
  wchar_t *local_68;
  undefined4 *local_64;
  undefined8 local_60;
  int local_58;
  char local_53;
  char local_52;
  char local_51;
  char local_50;
  char local_4f;
  char local_4e;
  byte local_4d;
  int local_4c;
  int local_48;
  int local_44;
  byte local_3d;
  int local_3c;
  int local_38;
  int local_34;
  char local_2d;
  uint local_2c;
  int local_28;
  undefined1 *local_24;
  uint local_20;
  undefined1 *local_1c;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_006ac638;
  uStack_c = 0x676808;
  local_20 = DAT_006eb720 ^ unaff_retaddr;
  local_24 = (undefined1 *)0x0;
  local_28 = 0;
  local_2c = 0;
  local_2d = '\0';
  local_34 = 0;
  local_38 = 0;
LAB_00676827:
  do {
    lVar16 = local_60;
    if (*param_2 == 0) {
LAB_00677266:
      if (local_28 == 1) {
        local_60 = lVar16;
        _free(local_24);
      }
      if (((local_2c == 0xffffffff) && (local_38 == 0)) && (local_2d == '\0')) {
        local_38 = -1;
      }
      return local_38;
    }
    iVar3 = _isspace((uint)*param_2);
    if (iVar3 == 0) {
      if (*param_2 == 0x25) {
        iVar3 = 0;
        local_3c = 0;
        local_3d = 0;
        local_44 = 0;
        local_48 = 0;
        local_4c = 0;
        local_4d = 0;
        local_4e = '\0';
        local_4f = '\0';
        local_50 = '\0';
        local_51 = '\0';
        local_52 = '\0';
        local_53 = '\x01';
        local_58 = 0;
        pbVar14 = param_2;
        do {
          pbVar9 = pbVar14 + 1;
          uVar7 = (uint)*pbVar9;
          iVar4 = _isdigit(uVar7);
          param_2 = pbVar9;
          if (iVar4 == 0) {
            if (uVar7 < 0x4f) {
              if (uVar7 != 0x4e) {
                if (uVar7 == 0x2a) {
                  local_4f = local_4f + '\x01';
                }
                else if (uVar7 != 0x46) {
                  if (uVar7 == 0x49) {
                    bVar6 = pbVar14[2];
                    if ((bVar6 == 0x36) && (pbVar14[3] == 0x34)) {
                      local_58 = local_58 + 1;
                      local_60 = 0;
                      param_2 = pbVar14 + 3;
                    }
                    else if (((bVar6 != 0x33) || (param_2 = pbVar14 + 3, *param_2 != 0x32)) &&
                            ((((param_2 = pbVar9, bVar6 != 100 && (bVar6 != 0x69)) &&
                              (bVar6 != 0x6f)) && ((bVar6 != 0x78 && (bVar6 != 0x58))))))
                    goto LAB_00676968;
                  }
                  else if (uVar7 == 0x4c) {
                    local_53 = local_53 + '\x01';
                  }
                  else {
LAB_00676968:
                    local_50 = local_50 + '\x01';
                    param_2 = pbVar9;
                  }
                }
              }
            }
            else if (uVar7 == 0x68) {
              local_53 = local_53 + -1;
              local_52 = local_52 + -1;
            }
            else {
              if (uVar7 == 0x6c) {
                local_53 = local_53 + '\x01';
              }
              else if (uVar7 != 0x77) goto LAB_00676968;
              local_52 = local_52 + '\x01';
            }
          }
          else {
            local_48 = local_48 + 1;
            iVar3 = (uVar7 - 0x30) + iVar3 * 10;
          }
          pbVar14 = param_2;
        } while (local_50 == '\0');
        if (local_4f == '\0') {
          local_64 = param_3;
          local_68 = (wchar_t *)*param_3;
          param_3 = param_3 + 1;
        }
        pwVar8 = local_68;
        local_50 = '\0';
        if (local_52 == '\0') {
          if ((*param_2 == 0x53) || (*param_2 == 0x43)) {
            local_52 = '\x01';
          }
          else {
            local_52 = -1;
          }
        }
        uVar13 = *param_2 | 0x20;
        local_6c = uVar13;
        local_4c = iVar3;
        uVar7 = local_2c;
        lVar16 = local_60;
        if (uVar13 != 0x6e) {
          if ((uVar13 == 99) || (uVar13 == 0x7b)) {
            local_34 = local_34 + 1;
            uVar7 = __inc();
            lVar16 = local_60;
          }
          else {
            do {
              local_34 = local_34 + 1;
              uVar7 = __inc();
              iVar3 = _isspace(uVar7);
              lVar16 = local_60;
            } while (iVar3 != 0);
          }
        }
        local_2c = uVar7;
        uVar7 = local_2c;
        if ((local_48 != 0) && (local_4c == 0)) {
LAB_00677236:
          if (uVar7 != 0xffffffff) {
            local_60 = lVar16;
            FID_conflict__ungetc(local_2c,param_1);
            lVar16 = local_60;
          }
          goto LAB_00677266;
        }
        local_60 = lVar16;
        if (uVar13 < 0x70) {
          if (uVar13 == 0x6f) {
LAB_00676fa8:
            if (local_2c == 0x2d) {
              local_4e = '\x01';
            }
            else if (local_2c != 0x2b) goto LAB_00676fd9;
            local_4c = local_4c + -1;
            if ((local_4c == 0) && (local_48 != 0)) {
              local_50 = '\x01';
            }
            else {
              local_34 = local_34 + 1;
              local_2c = __inc();
            }
            goto LAB_00676fd9;
          }
          if (uVar13 != 99) {
            if (uVar13 == 100) goto LAB_00676fa8;
            if (uVar13 < 0x65) {
LAB_00676c5b:
              if (*param_2 != local_2c) goto LAB_00677236;
              local_2d = local_2d + -1;
              if (local_4f == '\0') {
                param_3 = local_64;
              }
              goto LAB_006771da;
            }
            if (0x67 < uVar13) {
              if (uVar13 == 0x69) {
                uVar13 = 100;
                goto LAB_00676a72;
              }
              if (uVar13 != 0x6e) goto LAB_00676c5b;
              iVar3 = local_34;
              if (local_4f != '\0') goto LAB_006771da;
              goto LAB_006771ba;
            }
            pcVar10 = &local_1cc;
            if (local_2c == 0x2d) {
              local_1cc = '-';
              pcVar10 = local_1cb;
LAB_00676aa8:
              local_4c = local_4c + -1;
              local_34 = local_34 + 1;
              local_2c = __inc();
              lVar16 = local_60;
            }
            else if (local_2c == 0x2b) goto LAB_00676aa8;
            local_60 = lVar16;
            if ((local_48 == 0) || (0x15d < local_4c)) {
              local_4c = 0x15d;
            }
            while( true ) {
              uVar7 = local_2c;
              iVar3 = _isdigit(local_2c);
              if ((iVar3 == 0) ||
                 (iVar3 = local_4c + -1, bVar15 = local_4c == 0, local_4c = iVar3, bVar15)) break;
              local_44 = local_44 + 1;
              *pcVar10 = (char)uVar7;
              pcVar10 = pcVar10 + 1;
              local_34 = local_34 + 1;
              local_2c = __inc();
            }
            if ((DAT_006ec184 == (char)uVar7) &&
               (iVar3 = local_4c + -1, bVar15 = local_4c != 0, local_4c = iVar3, bVar15)) {
              local_34 = local_34 + 1;
              uVar7 = __inc();
              *pcVar10 = DAT_006ec184;
              while( true ) {
                pcVar10 = pcVar10 + 1;
                local_2c = uVar7;
                iVar3 = _isdigit(uVar7);
                if ((iVar3 == 0) ||
                   (iVar3 = local_4c + -1, bVar15 = local_4c == 0, local_4c = iVar3, bVar15)) break;
                local_44 = local_44 + 1;
                *pcVar10 = (char)uVar7;
                local_34 = local_34 + 1;
                uVar7 = __inc();
              }
            }
            pcVar11 = pcVar10;
            if ((local_44 != 0) &&
               (((uVar7 == 0x65 || (uVar7 == 0x45)) &&
                (iVar3 = local_4c + -1, bVar15 = local_4c != 0, local_4c = iVar3, bVar15)))) {
              *pcVar10 = 'e';
              pcVar11 = pcVar10 + 1;
              local_34 = local_34 + 1;
              uVar7 = __inc();
              local_2c = uVar7;
              if (uVar7 == 0x2d) {
                *pcVar11 = '-';
                pcVar11 = pcVar10 + 2;
LAB_00676b92:
                bVar15 = local_4c != 0;
                local_4c = local_4c + -1;
                if (bVar15) goto LAB_00676bb1;
                local_4c = 0;
              }
              else if (uVar7 == 0x2b) goto LAB_00676b92;
              while( true ) {
                iVar3 = _isdigit(uVar7);
                if ((iVar3 == 0) ||
                   (iVar3 = local_4c + -1, bVar15 = local_4c == 0, local_4c = iVar3, bVar15)) break;
                local_44 = local_44 + 1;
                *pcVar11 = (char)uVar7;
                pcVar11 = pcVar11 + 1;
LAB_00676bb1:
                local_34 = local_34 + 1;
                uVar7 = __inc();
                local_2c = uVar7;
              }
            }
            local_34 = local_34 + -1;
            lVar16 = local_60;
            if (uVar7 != 0xffffffff) {
              FID_conflict__ungetc(uVar7,param_1);
              lVar16 = local_60;
            }
            if (local_44 != 0) {
              if (local_4f == '\0') {
                local_38 = local_38 + 1;
                local_60 = lVar16;
                *pcVar11 = '\0';
                (*(code *)PTR_FUN_006ebcb8)(local_53 + -1,local_68,&local_1cc);
                lVar16 = local_60;
              }
              goto LAB_006771da;
            }
            goto LAB_00677266;
          }
          if (local_48 == 0) {
            local_48 = 1;
            local_4c = local_4c + 1;
          }
LAB_00676c22:
          if ('\0' < local_52) {
            local_51 = '\x01';
          }
LAB_00676dad:
          local_34 = local_34 + -1;
          pwVar12 = pwVar8;
          if (local_2c != 0xffffffff) {
            FID_conflict__ungetc(local_2c,param_1);
          }
          while( true ) {
            if ((local_48 != 0) &&
               (iVar3 = local_4c + -1, bVar15 = local_4c == 0, local_4c = iVar3, lVar16 = local_60,
               bVar15)) goto LAB_00676f6b;
            local_34 = local_34 + 1;
            local_2c = __inc();
            if ((local_2c == 0xffffffff) ||
               ((bVar6 = (byte)local_2c, uVar13 != 99 &&
                (((uVar13 != 0x73 ||
                  (((8 < (int)local_2c && ((int)local_2c < 0xe)) || (local_2c == 0x20)))) &&
                 ((uVar13 != 0x7b ||
                  (uVar13 = local_6c,
                  ((int)(char)(local_24[(int)local_2c >> 3] ^ local_4d) & 1 << (bVar6 & 7)) == 0))))
                )))) break;
            if (local_4f == '\0') {
              if (local_51 == '\0') {
                *(byte *)pwVar8 = bVar6;
                pwVar8 = (wchar_t *)((int)pwVar8 + 1);
                local_68 = pwVar8;
              }
              else {
                local_1d8 = bVar6;
                if ((PTR_DAT_006ec130[(local_2c & 0xff) * 2 + 1] & 0x80) != 0) {
                  local_34 = local_34 + 1;
                  local_1d7 = __inc();
                }
                _mbtowc(local_1dc,(char *)&local_1d8,DAT_006ec180);
                *pwVar8 = local_1dc[0];
                pwVar8 = pwVar8 + 1;
                local_68 = pwVar8;
              }
            }
            else {
              pwVar12 = (wchar_t *)((int)pwVar12 + 1);
            }
          }
          local_34 = local_34 + -1;
          lVar16 = local_60;
          if (local_2c != 0xffffffff) {
            FID_conflict__ungetc(local_2c,param_1);
            lVar16 = local_60;
          }
LAB_00676f6b:
          if (pwVar12 == pwVar8) goto LAB_00677266;
          if ((local_4f == '\0') && (local_38 = local_38 + 1, local_6c != 99)) {
            if (local_51 == '\0') {
              *(byte *)local_68 = 0;
            }
            else {
              *local_68 = L'\0';
            }
          }
        }
        else {
          if (uVar13 == 0x70) {
            local_53 = '\x01';
            goto LAB_00676fa8;
          }
          if (uVar13 == 0x73) goto LAB_00676c22;
          if (uVar13 == 0x75) goto LAB_00676fa8;
          if (uVar13 != 0x78) {
            if (uVar13 != 0x7b) goto LAB_00676c5b;
            if ('\0' < local_52) {
              local_51 = '\x01';
            }
            pbVar9 = param_2 + 1;
            pbVar14 = pbVar9;
            if (*pbVar9 == 0x5e) {
              pbVar14 = param_2 + 2;
              local_4d = 0xff;
            }
            if (local_24 == (undefined1 *)0x0) {
              local_1c = &stack0xfffffe18;
              local_24 = &stack0xfffffe18;
              local_8 = (undefined *)0xffffffff;
            }
            puVar2 = local_24;
            local_1d0 = pbVar14;
            _memset(local_24,0,0x20);
            bVar6 = local_3d;
            if ((local_6c == 0x7b) && (*pbVar14 == 0x5d)) {
              puVar2[0xb] = 0x20;
              pbVar14 = pbVar14 + 1;
              bVar6 = 0x5d;
            }
            while (bVar5 = *pbVar14, bVar5 != 0x5d) {
              if (((bVar5 == 0x2d) && (bVar6 != 0)) && (bVar1 = pbVar14[1], bVar1 != 0x5d)) {
                bVar5 = bVar1;
                if (bVar6 < bVar1) {
                  bVar5 = bVar6;
                  bVar6 = bVar1;
                }
                if (bVar5 <= bVar6) {
                  uVar7 = (uint)bVar5;
                  local_1d4 = (uint)(byte)((bVar6 - bVar5) + 1);
                  do {
                    puVar2[uVar7 >> 3] = puVar2[uVar7 >> 3] | '\x01' << ((byte)uVar7 & 7);
                    uVar7 = uVar7 + 1;
                    local_1d4 = local_1d4 - 1;
                  } while (local_1d4 != 0);
                }
                pbVar14 = pbVar14 + 2;
                bVar6 = 0;
              }
              else {
                local_3d = bVar5;
                puVar2[bVar5 >> 3] = puVar2[bVar5 >> 3] | '\x01' << (bVar5 & 7);
                pbVar14 = pbVar14 + 1;
                bVar6 = local_3d;
              }
            }
            pwVar8 = local_68;
            uVar13 = local_6c;
            param_2 = pbVar9;
            if (local_6c == 0x7b) {
              param_2 = pbVar14;
            }
            goto LAB_00676dad;
          }
LAB_00676a72:
          if (local_2c == 0x2d) {
            local_4e = '\x01';
LAB_00676ea6:
            local_4c = local_4c + -1;
            if ((local_4c == 0) && (local_48 != 0)) {
              local_50 = '\x01';
            }
            else {
              local_34 = local_34 + 1;
              local_2c = __inc();
              lVar16 = local_60;
            }
          }
          else if (local_2c == 0x2b) goto LAB_00676ea6;
          local_60 = lVar16;
          if (local_2c == 0x30) {
            local_34 = local_34 + 1;
            local_2c = __inc();
            if (((char)local_2c == 'x') || ((char)local_2c == 'X')) {
              local_34 = local_34 + 1;
              local_2c = __inc();
              if ((local_48 != 0) && (local_4c = local_4c + -2, local_4c < 1)) {
                local_50 = local_50 + '\x01';
              }
              uVar13 = 0x78;
            }
            else {
              local_44 = 1;
              if (uVar13 == 0x78) {
                local_34 = local_34 + -1;
                if (local_2c != 0xffffffff) {
                  FID_conflict__ungetc(local_2c,param_1);
                }
                local_2c = 0x30;
              }
              else {
                if ((local_48 != 0) && (local_4c = local_4c + -1, local_4c == 0)) {
                  local_50 = local_50 + '\x01';
                }
                uVar13 = 0x6f;
              }
            }
          }
LAB_00676fd9:
          uVar7 = local_2c;
          lVar16 = local_60;
          if (local_58 == 0) {
            while (local_50 == '\0') {
              local_60 = lVar16;
              if ((uVar13 == 0x78) || (uVar13 == 0x70)) {
                iVar3 = _isxdigit(uVar7);
                if (iVar3 != 0) {
                  local_3c = local_3c << 4;
                  iVar3 = _isdigit(uVar7);
                  if (iVar3 == 0) {
                    uVar7 = (uVar7 & 0xffffffdf) - 7;
                  }
                  goto LAB_0067713f;
                }
LAB_0067713c:
                local_50 = local_50 + '\x01';
              }
              else {
                iVar3 = _isdigit(uVar7);
                if (iVar3 == 0) goto LAB_0067713c;
                if (uVar13 == 0x6f) {
                  if (0x37 < (int)uVar7) goto LAB_0067713c;
                  local_3c = local_3c << 3;
                }
                else {
                  local_3c = local_3c * 10;
                }
              }
LAB_0067713f:
              lVar16 = local_60;
              if (local_50 == '\0') {
                local_44 = local_44 + 1;
                local_3c = local_3c + -0x30 + uVar7;
                if ((local_48 == 0) || (local_4c = local_4c + -1, local_4c != 0)) {
                  local_34 = local_34 + 1;
                  uVar7 = __inc();
                  lVar16 = local_60;
                }
                else {
                  local_50 = '\x01';
                }
              }
              else {
                local_34 = local_34 + -1;
                if (uVar7 != 0xffffffff) {
                  FID_conflict__ungetc(uVar7,param_1);
                  lVar16 = local_60;
                }
              }
            }
            local_2c = uVar7;
            if (local_4e != '\0') {
              local_3c = -local_3c;
            }
          }
          else {
            while (local_50 == '\0') {
              local_60 = lVar16;
              if ((uVar13 == 0x78) || (uVar13 == 0x70)) {
                iVar3 = _isxdigit(uVar7);
                if (iVar3 != 0) {
                  local_60 = local_60 << 4;
                  iVar3 = _isdigit(uVar7);
                  if (iVar3 == 0) {
                    uVar7 = (uVar7 & 0xffffffdf) - 7;
                  }
                  goto LAB_0067706c;
                }
LAB_00677069:
                local_50 = local_50 + '\x01';
              }
              else {
                iVar3 = _isdigit(uVar7);
                if (iVar3 == 0) goto LAB_00677069;
                if (uVar13 == 0x6f) {
                  if (0x37 < (int)uVar7) goto LAB_00677069;
                  local_60 = local_60 << 3;
                }
                else {
                  lVar16 = __allmul(local_60,10,0);
                  local_60 = lVar16;
                }
              }
LAB_0067706c:
              if (local_50 == '\0') {
                local_44 = local_44 + 1;
                if ((local_48 == 0) || (local_4c = local_4c + -1, local_4c != 0)) {
                  local_34 = local_34 + 1;
                  local_60 = local_60 + (int)(uVar7 - 0x30);
                  uVar7 = __inc();
                  lVar16 = local_60;
                }
                else {
                  local_50 = '\x01';
                  lVar16 = local_60 + (int)(uVar7 - 0x30);
                }
              }
              else {
                local_34 = local_34 + -1;
                lVar16 = local_60;
                if (uVar7 != 0xffffffff) {
                  FID_conflict__ungetc(uVar7,param_1);
                  lVar16 = local_60;
                }
              }
            }
            (*(float *)((unsigned char *)&(local_60) + 4)) = (int)((ulonglong)lVar16 >> 0x20);
            (*(float *)&(local_60)) = (int)lVar16;
            local_2c = uVar7;
            if (local_4e != '\0') {
              lVar16 = CONCAT44(-((*(float *)((unsigned char *)&(local_60) + 4)) + (uint)((int)local_60 != 0)),-(int)local_60);
            }
          }
          if (uVar13 == 0x46) {
            local_44 = 0;
          }
          if (local_44 == 0) goto LAB_00677266;
          if (local_4f == '\0') {
            local_38 = local_38 + 1;
            iVar3 = local_3c;
            pwVar8 = local_68;
LAB_006771ba:
            if (local_58 == 0) {
              if (local_53 == '\0') {
                *pwVar8 = (wchar_t)iVar3;
              }
              else {
                *(int *)pwVar8 = iVar3;
              }
            }
            else {
              *(longlong *)pwVar8 = lVar16;
            }
          }
        }
LAB_006771da:
        local_2d = local_2d + '\x01';
        pbVar14 = param_2 + 1;
        local_60 = lVar16;
      }
      else {
        local_34 = local_34 + 1;
        uVar7 = __inc();
        local_2c = uVar7;
        lVar16 = local_60;
        if (*param_2 != uVar7) goto LAB_00677236;
        pbVar14 = param_2 + 1;
        if ((PTR_DAT_006ec130[(uVar7 & 0xff) * 2 + 1] & 0x80) != 0) {
          local_34 = local_34 + 1;
          uVar13 = __inc();
          if (param_2[1] != uVar13) {
            lVar16 = local_60;
            if (uVar13 != 0xffffffff) {
              FID_conflict__ungetc(uVar13,param_1);
              lVar16 = local_60;
            }
            goto LAB_00677236;
          }
          local_34 = local_34 + -1;
          pbVar14 = param_2 + 2;
        }
      }
      param_2 = pbVar14;
      if ((local_2c == 0xffffffff) &&
         ((lVar16 = local_60, *param_2 != 0x25 || (param_2[1] != 0x6e)))) goto LAB_00677266;
      goto LAB_00676827;
    }
    local_34 = local_34 + -1;
    do {
      local_34 = local_34 + 1;
      iVar3 = __inc();
      iVar4 = _isspace(iVar3);
    } while (iVar4 != 0);
    if (iVar3 != -1) {
      FID_conflict__ungetc(iVar3,param_1);
    }
    do {
      param_2 = param_2 + 1;
      iVar3 = _isspace((uint)*param_2);
    } while (iVar3 != 0);
  } while( true );
}
