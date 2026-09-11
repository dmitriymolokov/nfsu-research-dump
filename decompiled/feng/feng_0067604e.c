/* spd-match: far pct=5.14 M4.0.2-CE */
/* Decompiled from Speed.exe @ 0067604e */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

/* Decompiled from Speed.exe @ 0067604e */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

int FUN_0067604e(undefined4 param_1,byte *param_2,wchar_t *param_3)

{
  byte bVar1;
  short *psVar2;
  byte *pbVar3;
  wchar_t *pwVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int extraout_ECX;
  byte bVar8;
  size_t sVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  bool bVar12;
  longlong lVar13;
  uint unaff_retaddr;
  wchar_t local_258 [255];
  undefined2 local_59;
  undefined4 local_50;
  undefined4 local_4c;
  size_t local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int local_34;
  wchar_t *local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 local_20;
  char local_1f;
  int local_1c;
  size_t local_18;
  wchar_t *local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_006eb720 ^ unaff_retaddr;
  local_18 = 0;
  local_1c = 0;
  local_30 = (wchar_t *)0x0;
  bVar8 = *param_2;
  local_3c = 0;
  pbVar3 = param_2;
  pwVar11 = param_3;
  do {
    if ((bVar8 == 0) || (param_2 = pbVar3 + 1, local_1c < 0)) {
      return local_1c;
    }
    if (((char)bVar8 < ' ') || ('x' < (char)bVar8)) {
      uVar5 = 0;
    }
    else {
      uVar5 = (int)(char)(&DAT_006ac5a8)[(char)bVar8] & 0xf;
    }
    iVar7 = uVar5 * 8 + local_3c;
    local_3c = (int)(char)(&DAT_006ac5c8)[iVar7] >> 4;
    param_3 = pwVar11;
    switch((int)(char)(&DAT_006ac5c8)[iVar7] >> 4) {
    case 0:
switchD_006760c8_caseD_0:
      local_2c = 0;
      if ((PTR_DAT_006ec130[(uint)bVar8 * 2 + 1] & 0x80) != 0) {
        write_char();
        param_2 = pbVar3 + 2;
      }
      write_char();
      break;
    case 1:
      local_10 = -1;
      local_40 = 0;
      local_38 = 0;
      local_28 = 0;
      local_24 = 0;
      local_c = 0;
      local_2c = 0;
      break;
    case 2:
      if (bVar8 == 0x20) {
        local_c = local_c | 2;
      }
      else if (bVar8 == 0x23) {
        local_c = local_c | 0x80;
      }
      else if (bVar8 == 0x2b) {
        local_c = local_c | 1;
      }
      else if (bVar8 == 0x2d) {
        local_c = local_c | 4;
      }
      else if (bVar8 == 0x30) {
        local_c = local_c | 8;
      }
      break;
    case 3:
      if (bVar8 == 0x2a) {
        local_28 = *(int *)pwVar11;
        param_3 = pwVar11 + 2;
        if (local_28 < 0) {
          local_c = local_c | 4;
          local_28 = -local_28;
        }
      }
      else {
        local_28 = (char)bVar8 + -0x30 + local_28 * 10;
      }
      break;
    case 4:
      local_10 = 0;
      break;
    case 5:
      if (bVar8 == 0x2a) {
        local_10 = *(int *)pwVar11;
        param_3 = pwVar11 + 2;
        if (local_10 < 0) {
          local_10 = -1;
        }
      }
      else {
        local_10 = (char)bVar8 + -0x30 + local_10 * 10;
      }
      break;
    case 6:
      if (bVar8 == 0x49) {
        bVar1 = *param_2;
        if ((bVar1 == 0x36) && (pbVar3[2] == 0x34)) {
          param_2 = pbVar3 + 3;
          local_c = local_c | 0x8000;
        }
        else if ((bVar1 == 0x33) && (pbVar3[2] == 0x32)) {
          param_2 = pbVar3 + 3;
          local_c = local_c & 0xffff7fff;
        }
        else if (((((bVar1 != 100) && (bVar1 != 0x69)) && (bVar1 != 0x6f)) &&
                 ((bVar1 != 0x75 && (bVar1 != 0x78)))) && (bVar1 != 0x58)) {
          local_3c = 0;
          goto switchD_006760c8_caseD_0;
        }
      }
      else if (bVar8 == 0x68) {
        local_c = local_c | 0x20;
      }
      else if (bVar8 == 0x6c) {
        local_c = local_c | 0x10;
      }
      else if (bVar8 == 0x77) {
        local_c = local_c | 0x800;
      }
      break;
    case 7:
      if ((char)bVar8 < 'h') {
        if ((char)bVar8 < 'e') {
          if ((char)bVar8 < 'Y') {
            if (bVar8 != 0x58) {
              if (bVar8 == 0x43) {
                if ((local_c & 0x830) == 0) {
                  local_c = local_c | 0x800;
                }
                goto LAB_0067634a;
              }
              if ((bVar8 != 0x45) && (bVar8 != 0x47)) {
                if (bVar8 == 0x53) {
                  if ((local_c & 0x830) == 0) {
                    local_c = local_c | 0x800;
                  }
                  goto LAB_006762d0;
                }
                goto LAB_006766a1;
              }
              local_40 = 1;
              bVar8 = bVar8 + 0x20;
              goto LAB_0067631b;
            }
LAB_00676559:
            local_34 = 7;
LAB_0067655c:
            local_18 = 0x10;
            if ((local_c & 0x80) != 0) {
              local_20 = 0x30;
              local_1f = (char)local_34 + 'Q';
              local_24 = 2;
            }
            goto LAB_00676398;
          }
          if (bVar8 == 0x5a) {
            param_3 = pwVar11 + 2;
            psVar2 = *(short **)pwVar11;
            pwVar11 = (wchar_t *)PTR_DAT_006eb870;
            pwVar4 = (wchar_t *)PTR_DAT_006eb870;
            if ((psVar2 == (short *)0x0) ||
               (local_14 = *(wchar_t **)(psVar2 + 2), pwVar4 = (wchar_t *)PTR_DAT_006eb870,
               local_14 == (wchar_t *)0x0)) goto LAB_006764cd;
            local_18 = (size_t)*psVar2;
            if ((local_c & 0x800) == 0) {
              local_2c = 0;
            }
            else {
              local_18 = (int)local_18 / 2;
              local_2c = 1;
            }
          }
          else if (bVar8 == 99) {
LAB_0067634a:
          if ((local_c & 0x810) == 0) {
            *(char *)&local_258[0] = (char)*pwVar11;
            local_18 = 1;
          }
            else {
              local_18 = _wctomb((char *)local_258,*pwVar11);
              if ((int)local_18 < 0) {
                local_38 = 1;
              }
            }
            param_3 = pwVar11 + 2;
            local_14 = local_258;
          }
          else if (bVar8 == 100) goto LAB_0067638d;
        }
        else {
LAB_0067631b:
          local_c = local_c | 0x40;
          pwVar10 = local_258;
          pwVar4 = local_258;
          if (local_10 < 0) {
            local_10 = 6;
          }
          else if (local_10 == 0) {
            if (bVar8 == 0x67) {
              local_10 = 1;
            }
          }
          else {
            if (0x200 < local_10) {
              local_10 = 0x200;
            }
            if ((0xa3 < local_10) &&
               (local_14 = local_258, local_30 = _malloc(local_10 + 0x15d), pwVar10 = local_30,
               pwVar4 = local_30, local_30 == (wchar_t *)0x0)) {
              local_10 = 0xa3;
              pwVar10 = local_258;
              pwVar4 = local_14;
            }
          }
          local_14 = pwVar4;
          local_50 = *(undefined4 *)pwVar11;
          param_3 = pwVar11 + 4;
          local_4c = *(undefined4 *)(pwVar11 + 2);
          (*(code *)PTR_FUN_006ebcb0)(&local_50,pwVar10,(int)(char)bVar8,local_10,local_40);
          uVar5 = local_c & 0x80;
          if ((uVar5 != 0) && (local_10 == 0)) {
            (*(code *)PTR_FUN_006ebcbc)(pwVar10);
          }
          if ((bVar8 == 0x67) && (uVar5 == 0)) {
            (*(code *)PTR_FUN_006ebcb4)(pwVar10);
          }
          pwVar11 = pwVar10;
          pwVar4 = local_14;
          if ((char)*pwVar10 == '-') {
            local_c = local_c | 0x100;
            pwVar11 = (wchar_t *)((int)pwVar10 + 1);
            pwVar4 = (wchar_t *)((int)pwVar10 + 1);
          }
LAB_006764cd:
          local_14 = pwVar4;
          local_18 = _strlen((char *)pwVar11);
        }
LAB_006766a1:
        uVar5 = local_c;
        if (local_38 == 0) {
          if ((local_c & 0x40) != 0) {
            if ((local_c & 0x100) == 0) {
              if ((local_c & 1) == 0) {
                if ((local_c & 2) == 0) goto LAB_006766d9;
                local_20 = 0x20;
              }
              else {
                local_20 = 0x2b;
              }
            }
            else {
              local_20 = 0x2d;
            }
            local_24 = 1;
          }
LAB_006766d9:
          iVar7 = (local_28 - local_24) - local_18;
          if ((local_c & 0xc) == 0) {
            write_multi_char(0x20,iVar7,param_1);
          }
          write_string(local_24);
          if (((uVar5 & 8) != 0) && ((uVar5 & 4) == 0)) {
            write_multi_char(0x30,iVar7,param_1);
          }
          if ((local_2c == 0) || ((int)local_18 < 1)) {
            write_string(local_18);
          }
          else {
            local_44 = local_18;
            pwVar11 = local_14;
            do {
              local_44 = local_44 - 1;
              iVar6 = _wctomb((char *)((int)&local_59 + 1),*pwVar11);
              pwVar11 = pwVar11 + 1;
              if (iVar6 < 1) break;
              write_string(iVar6);
            } while (local_44 != 0);
          }
          if ((local_c & 4) != 0) {
            write_multi_char(0x20,iVar7,param_1);
          }
        }
      }
      else {
        if (bVar8 == 0x69) {
LAB_0067638d:
          local_c = local_c | 0x40;
LAB_00676391:
          local_18 = 10;
LAB_00676398:
          if ((local_c & 0x8000) == 0) {
            param_3 = pwVar11 + 2;
            if ((local_c & 0x20) == 0) {
              uVar5 = *(uint *)pwVar11;
              if ((local_c & 0x40) == 0) {
                iVar7 = 0;
                goto LAB_006765f1;
              }
            }
            else if ((local_c & 0x40) == 0) {
              uVar5 = (uint)(ushort)*pwVar11;
            }
            else {
              uVar5 = (uint)*pwVar11;
            }
            iVar7 = (int)uVar5 >> 0x1f;
          }
          else {
            uVar5 = *(uint *)pwVar11;
            iVar7 = *(int *)(pwVar11 + 2);
            param_3 = pwVar11 + 4;
          }
LAB_006765f1:
          if ((((local_c & 0x40) != 0) && (iVar7 < 1)) && (iVar7 < 0)) {
            bVar12 = uVar5 != 0;
            uVar5 = -uVar5;
            iVar7 = -(iVar7 + (uint)bVar12);
            local_c = local_c | 0x100;
          }
          if ((local_c & 0x8000) == 0) {
            iVar7 = 0;
          }
          lVar13 = CONCAT44(iVar7,uVar5);
          if (local_10 < 0) {
            local_10 = 1;
          }
          else {
            local_c = local_c & 0xfffffff7;
            if (0x200 < local_10) {
              local_10 = 0x200;
            }
          }
          if (uVar5 == 0 && iVar7 == 0) {
            local_24 = 0;
          }
          pwVar11 = &local_59;
          while( true ) {
            iVar7 = local_10;
            sVar9 = (size_t)lVar13;
            local_10 = local_10 + -1;
            if ((iVar7 < 1) && (lVar13 == 0)) break;
            lVar13 = __aulldvrm(lVar13,local_18,(int)local_18 >> 0x1f);
            iVar7 = extraout_ECX + 0x30;
            local_44 = sVar9;
            if (0x39 < iVar7) {
              iVar7 = iVar7 + local_34;
            }
            *(char *)pwVar11 = (char)iVar7;
            pwVar11 = (wchar_t *)((int)pwVar11 + -1);
          }
          local_18 = (int)&local_59 + -(int)pwVar11;
          local_14 = (wchar_t *)((int)pwVar11 + 1);
          if (((local_c & 0x200) != 0) && ((*(char *)((int)pwVar11 + 1) != '0' || (local_18 == 0))))
          {
            *(char *)pwVar11 = '0';
            local_18 = (int)&local_59 + -(int)pwVar11 + 1;
            local_14 = pwVar11;
          }
          goto LAB_006766a1;
        }
        if (bVar8 != 0x6e) {
          if (bVar8 == 0x6f) {
            local_18 = 8;
            if ((local_c & 0x80) != 0) {
              local_c = local_c | 0x200;
            }
            goto LAB_00676398;
          }
          if (bVar8 == 0x70) {
            local_10 = 8;
            goto LAB_00676559;
          }
          if (bVar8 == 0x73) {
LAB_006762d0:
            iVar7 = local_10;
            if (local_10 == -1) {
              iVar7 = 0x7fffffff;
            }
            param_3 = pwVar11 + 2;
            local_14 = *(wchar_t **)pwVar11;
            if ((local_c & 0x810) == 0) {
              pwVar11 = local_14;
              if (local_14 == (wchar_t *)0x0) {
                pwVar11 = (wchar_t *)PTR_DAT_006eb870;
                local_14 = (wchar_t *)PTR_DAT_006eb870;
              }
              for (; (iVar7 != 0 && (iVar7 = iVar7 + -1, (char)*pwVar11 != '\0'));
                  pwVar11 = (wchar_t *)((int)pwVar11 + 1)) {
              }
              local_18 = (int)pwVar11 - (int)local_14;
            }
            else {
              if (local_14 == (wchar_t *)0x0) {
                local_14 = (wchar_t *)PTR_DAT_006eb874;
              }
              local_2c = 1;
              for (pwVar11 = local_14; (iVar7 != 0 && (iVar7 = iVar7 + -1, *pwVar11 != L'\0'));
                  pwVar11 = pwVar11 + 1) {
              }
              local_18 = (int)pwVar11 - (int)local_14 >> 1;
            }
            goto LAB_006766a1;
          }
          if (bVar8 != 0x75) {
            if (bVar8 != 0x78) goto LAB_006766a1;
            local_34 = 0x27;
            goto LAB_0067655c;
          }
          goto LAB_00676391;
        }
        param_3 = pwVar11 + 2;
        if ((local_c & 0x20) == 0) {
          **(int **)pwVar11 = local_1c;
        }
        else {
          *(undefined2 *)*(int **)pwVar11 = (undefined2)local_1c;
        }
        local_38 = 1;
      }
      if (local_30 != (wchar_t *)0x0) {
        _free(local_30);
        local_30 = (wchar_t *)0x0;
      }
    }
    bVar8 = *param_2;
    pbVar3 = param_2;
    pwVar11 = param_3;
  } while( true );
}

