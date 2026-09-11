/* spd-match: far pct=4.68 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_c2107/batches/20260724T133817Z_w0_tc0 */
#include "ghidra_compat.h"

int __cdecl FUN_00564830();
int __cdecl FUN_00565da0();
int __cdecl FUN_00674898();
extern int DAT_006b5e00;
extern int DAT_006b5e20;
extern code *DAT_007304b8;
extern code *DAT_007304bc;
extern int DAT_007304c0;
extern int DAT_007304c8;
extern int DAT_007304c9;
extern int DAT_007304ca;
extern unsigned char *DAT_00730506;
extern unsigned char *DAT_00730507;
extern unsigned char *DAT_00730508;
extern int DAT_00730510;
extern unsigned char *DAT_0073499c;
extern int _DAT_006cc9e8;
extern int _DAT_006ccaf8;
extern int _DAT_006ccb00;
extern int _DAT_006ccb08;
extern int _DAT_006ccb10;
extern unsigned char *PTR_DAT_006f2268;
extern unsigned char *PTR_s_1__INF_006f225c;
extern unsigned char *PTR_s_1__QNAN_006f2260;
extern unsigned char *PTR_s__1__INF_006f2258;
extern unsigned char *PTR_s__badptr__006f226c;
extern void LAB_00566023(void);
extern void LAB_00566085(void);
extern void LAB_0056615b(void);
extern void LAB_005662c0(void);
extern void LAB_005662fe(void);
extern void LAB_00566554(void);
extern void LAB_0056662b(void);
extern void LAB_005667dd(void);

undefined4 FUN_00565df0(char param_1,char *param_2,double *param_3)

{
  float *pfVar1;
  ulonglong uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  code *pcVar10;
  code *pcVar11;
  char cVar12;
  uint uVar13;
  int iVar14;
  char *pcVar15;
  uint uVar16;
  uint uVar17;
  byte bVar18;
  char cVar19;
  int iVar20;
  byte *pbVar21;
  uint uVar22;
  int iVar23;
  char *pcVar24;
  int iVar25;
  uint uVar26;
  double *pdVar27;
  bool bVar28;
  float10 fVar29;
  float10 fVar30;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST1;
  uint local_6c;
  uint local_68;
  byte *local_64;
  byte *local_60;
  int local_5c;
  int local_58;
  uint uStack_44;
  undefined1 local_40 [64];
  
  iVar20 = 0;
  DAT_00730507 = 0;
  cVar12 = *param_2;
  iVar23 = 0;
  local_6c = 0;
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  local_5c = 0;
  local_68 = 0;
  local_64 = (byte *)0x0;
  local_58 = 0;
  DAT_007304c0 = param_1;
  pdVar27 = param_3;
  iVar25 = DAT_00730508;
  pcVar10 = DAT_007304bc;
  pcVar11 = DAT_007304b8;
  pbVar21 = PTR_DAT_006f2268;
  do {
    PTR_DAT_006f2268 = pbVar21;
    DAT_007304b8 = pcVar11;
    DAT_007304bc = pcVar10;
    DAT_00730508 = iVar25;
    if (cVar12 == '\0') {
      if (DAT_0073499c == 0) {
        return 0;
      }
      ((undefined4 *)(unsigned int)(&DAT_00730510))[(int)(unsigned int)DAT_0073499c] = 0;
      FID_conflict__wprintf("%s",&DAT_00730510);
      OutputDebugStringA(&DAT_00730510);
      DAT_0073499c = 0;
      return 0;
    }
    param_2 = param_2 + 1;
    if ((cVar12 < ' ') || ('z' < cVar12)) {
      uVar16 = 0;
    }
    else {
      uVar16 = (byte)((undefined4 *)(unsigned int)(&DAT_006b5e00))[cVar12] & 0xf;
    }
    iVar23 = (int)(char)((undefined4 *)(unsigned int)(&DAT_006b5e20))[uVar16 * 8 + iVar23] >> 4;
    switch(iVar23) {
    case 0:
      (*pcVar11)(cVar12);
      break;
    case 1:
      local_6c = 0;
      bVar9 = false;
      bVar8 = false;
      bVar7 = false;
      bVar6 = false;
      bVar5 = false;
      bVar4 = false;
      bVar3 = false;
      local_5c = 0;
      local_58 = 0;
      local_64 = &DAT_007304c8;
      local_68 = 0xffffffff;
      iVar20 = 0;
      break;
    case 2:
      switch(cVar12) {
      case ' ':
        bVar8 = true;
        break;
      case '#':
        break;
      case '+':
        bVar7 = true;
        break;
      case '-':
        local_6c = local_6c | 4;
        break;
      case '0':
        local_6c = local_6c | 8;
      }
      break;
    case 3:
      if (cVar12 == '*') {
        local_5c = *(int *)pdVar27;
        param_3 = (double *)((int)pdVar27 + 4);
        iVar20 = local_5c;
        pdVar27 = param_3;
        if (local_5c < 0) {
          local_6c = local_6c | 4;
          local_5c = -local_5c;
          iVar20 = local_5c;
        }
      }
      else {
        local_5c = cVar12 + -0x30 + iVar20 * 10;
        iVar20 = local_5c;
      }
      break;
    case 4:
      local_68 = 0;
      break;
    case 5:
      if (cVar12 == '*') {
        local_68 = *(uint *)pdVar27;
        param_3 = (double *)((int)pdVar27 + 4);
        pdVar27 = param_3;
        if ((int)local_68 < 0) {
          local_68 = 0xffffffff;
        }
      }
      else {
        local_68 = cVar12 + -0x30 + local_68 * 10;
      }
      break;
    case 6:
      if (cVar12 == 'h') {
        bVar9 = true;
      }
      break;
    case 7:
      cVar19 = '\0';
      switch(cVar12) {
      case 'E':
      case 'G':
        param_1 = 'E';
        goto LAB_0056615b;
      case 'X':
        goto switchD_00565fe9_caseD_58;
      case 'b':
        uVar16 = 2;
        goto LAB_00566085;
      case 'c':
        DAT_007304c8 = *(undefined1 *)pdVar27;
        param_3 = (double *)((int)pdVar27 + 4);
        local_60 = (byte *)0x1;
        break;
      case 'd':
      case 'i':
        uVar16 = 10;
        bVar4 = true;
        goto LAB_00566085;
      case 'e':
      case 'g':
        param_1 = 'e';
LAB_0056615b:
        bVar3 = true;
switchD_00565fe9_caseD_66:
        fVar29 = (float10)*pdVar27;
        param_3 = pdVar27 + 1;
        uStack_44 = (uint)((ulonglong)*pdVar27 >> 0x20);
        bVar4 = true;
        if ((uStack_44 & 0x7ff00000) == 0x7ff00000) {
          local_64 = PTR_s__1__INF_006f2258;
          if ((uStack_44 != 0xfff00000) &&
             (local_64 = PTR_s_1__INF_006f225c, uStack_44 != 0x7ff00000)) {
            local_64 = PTR_s_1__QNAN_006f2260;
          }
          local_60 = (byte *)0x7;
          if (local_64 != (byte *)0x0) break;
        }
        pcVar24 = &DAT_007304c9;
        DAT_007304c8 = 0x30;
        local_64 = &DAT_007304c9;
        if (fVar29 < (float10)_DAT_006ccaf8) {
          bVar6 = true;
          fVar29 = -fVar29;
        }
        bVar4 = true;
        if (local_68 == 0xffffffff) {
          local_68 = 3;
        }
        uVar16 = local_68;
        iVar20 = 0;
        if ((bVar3) && (fVar29 != (float10)_DAT_006ccaf8)) {
          if ((float10)_DAT_006ccb10 <= fVar29) {
            do {
              iVar20 = iVar20 + 1;
              fVar29 = fVar29 * (float10)_DAT_006cc9e8;
            } while ((float10)_DAT_006ccb10 <= fVar29);
          }
          do {
            iVar20 = iVar20 + -1;
            fVar29 = fVar29 * (float10)_DAT_006ccb08;
          } while (fVar29 < (float10)_DAT_006ccb10);
LAB_005662c0:
          do {
            cVar12 = FUN_00674898();
            *pcVar24 = cVar12 + '0';
            pcVar24 = pcVar24 + 1;
            fVar29 = extraout_ST1 - (float10)(int)cVar12 * extraout_ST0;
          } while ((float10)_DAT_006ccb10 <= extraout_ST0 * (float10)_DAT_006cc9e8);
          if (pcVar24 == &DAT_007304c9) goto LAB_005662fe;
        }
        else {
          for (fVar30 = (float10)_DAT_006ccb10; fVar30 < fVar29;
              fVar30 = fVar30 * (float10)_DAT_006ccb08) {
          }
          if (fVar29 < fVar30) {
            fVar30 = fVar30 * (float10)_DAT_006cc9e8;
          }
          if ((float10)_DAT_006ccb10 <= fVar30) goto LAB_005662c0;
LAB_005662fe:
          DAT_007304c9 = 0x30;
          pcVar24 = &DAT_007304ca;
        }
        if (local_68 != 0) {
          *pcVar24 = '.';
          pcVar24 = pcVar24 + 1;
          if (local_68 != 0) {
            local_68 = 0;
            do {
              cVar12 = FUN_00674898();
              *pcVar24 = cVar12 + '0';
              pcVar24 = pcVar24 + 1;
              uVar16 = uVar16 - 1;
              fVar29 = extraout_ST0_00 - (float10)(int)cVar12;
            } while (uVar16 != 0);
          }
        }
        local_68 = local_68 - 1;
        if ((float10)_DAT_006ccb00 <= (float10)_DAT_006ccb08 * fVar29) {
          pcVar15 = pcVar24 + -1;
          while( true ) {
            for (; *pcVar15 == '9'; pcVar15 = pcVar15 + -1) {
              *pcVar15 = '0';
            }
            if (*pcVar15 != '.') break;
            pcVar15 = pcVar15 + -1;
          }
          *pcVar15 = *pcVar15 + '\x01';
          if (pcVar15 < &DAT_007304c9) {
            local_64 = &DAT_007304c8;
          }
        }
        if (bVar3) {
          *pcVar24 = param_1;
          if (iVar20 < 0) {
            iVar20 = -iVar20;
            pcVar24[1] = '-';
          }
          else {
            pcVar24[1] = '+';
          }
          cVar12 = ((char)(iVar20 / 100) + (char)(iVar20 >> 0x1f)) -
                   (char)((longlong)iVar20 * 0x51eb851f >> 0x3f);
          pcVar24[2] = cVar12 + '0';
          iVar20 = iVar20 + cVar12 * -100;
          cVar12 = ((char)(iVar20 / 10) + (char)(iVar20 >> 0x1f)) -
                   (char)((longlong)iVar20 * 0x66666667 >> 0x3f);
          pcVar24[3] = cVar12 + '0';
          local_58 = 0;
          pcVar24[4] = (char)((iVar20 + cVar12 * -10) % 10) + '0';
          pcVar24 = pcVar24 + 5;
        }
        local_60 = (byte *)(pcVar24 + -(int)local_64);
        break;
      case 'f':
        goto switchD_00565fe9_caseD_66;
      case 'n':
        param_3 = (double *)((int)pdVar27 + 4);
        **(undefined4 **)pdVar27 = 0;
        bVar5 = true;
        break;
      case 'o':
        uVar16 = 8;
        goto LAB_00566085;
      case 'p':
        local_68 = 8;
        goto switchD_00565fe9_caseD_58;
      case 's':
        local_64 = *(byte **)pdVar27;
        param_3 = (double *)((int)pdVar27 + 4);
        if ((local_64 == (byte *)0x0) ||
           (iVar20 = FUN_00564830(), pbVar21 = PTR_s__badptr__006f226c, iVar20 == 0)) {
          local_64 = pbVar21;
        }
        pbVar21 = local_64;
        uVar16 = local_68;
        if ((int)local_68 < 0) {
          uVar16 = 0x7fffffff;
        }
        do {
          bVar18 = *pbVar21;
          pbVar21 = pbVar21 + 1;
          if (bVar18 == 0) break;
          bVar28 = uVar16 != 0;
          uVar16 = uVar16 - 1;
        } while (bVar28);
        if (pbVar21 != local_64) {
          local_60 = pbVar21 + (-1 - (int)local_64);
        }
        break;
      case 'u':
        uVar16 = 10;
LAB_00566085:
        param_3 = (double *)((int)pdVar27 + 4);
        pbVar21 = (byte *)&DAT_00730506;
        if (bVar9) {
          if (bVar4) {
            uVar22 = (uint)*(short *)pdVar27;
          }
          else {
            uVar22 = (uint)*(ushort *)pdVar27;
          }
        }
        else {
          uVar22 = *(uint *)pdVar27;
        }
        if ((bVar4) && ((int)uVar22 < 0)) {
          uVar22 = -uVar22;
          bVar6 = true;
        }
        if ((int)local_68 < 0) {
          local_68 = 1;
        }
        else {
          local_6c = local_6c & 0xfffffff7;
        }
        uVar13 = local_68;
        if (uVar22 == 0) {
          local_58 = 0;
        }
        while ((local_68 = uVar13 - 1, 0 < (int)uVar13 || (uVar22 != 0))) {
          bVar18 = (char)(uVar22 % uVar16) + 0x30;
          if (0x39 < bVar18) {
            bVar18 = bVar18 + cVar19;
          }
          *pbVar21 = bVar18;
          pbVar21 = pbVar21 + -1;
          uVar22 = uVar22 / uVar16;
          uVar13 = local_68;
        }
        local_60 = (byte *)(&DAT_00730506 + -(int)pbVar21);
        local_64 = pbVar21 + 1;
        break;
      case 'v':
        iVar20 = 0;
        if (*param_2 == '2') {
          param_3 = (double *)((int)param_3 + 4);
          iVar20 = FUN_00564830();
          if (iVar20 != 0) {
            iVar20 = FUN_00565da0();
            goto LAB_0056662b;
          }
          local_64 = (byte *)0x6bc594;
          pcVar24 = "bPrintf:invalid pointer";
        }
        else {
          if (*param_2 == '3') {
            pfVar1 = *(float **)param_3;
            param_3 = (double *)((int)param_3 + 4);
            iVar14 = FUN_00564830();
            if (iVar14 != 0) {
              iVar20 = FUN_00565da0("[%*.*f,%*.*f,%*.*f]",local_5c,local_68,(double)*pfVar1,local_5c
                                    ,local_68,(double)pfVar1[1],local_5c,local_68,(double)pfVar1[2])
              ;
            }
LAB_0056662b:
            local_60 = (byte *)0x0;
            DAT_007304b8 = pcVar11;
            DAT_007304bc = pcVar10;
            DAT_00730508 = iVar25;
            (*pcVar10)(local_40,iVar20 + 1);
            if (0 < DAT_0073499c) {
              DAT_0073499c = DAT_0073499c + -1;
            }
            bVar5 = true;
            param_2 = param_2 + 1;
            DAT_00730508 = DAT_00730508 + -1;
            break;
          }
          pcVar24 = "bPrintf:invalid bVector";
          local_64 = (byte *)0x6bc568;
        }
        pcVar15 = pcVar24;
        uVar16 = local_68;
        if ((int)local_68 < 0) {
          uVar16 = 0x7fffffff;
        }
        do {
          cVar12 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          if (cVar12 == '\0') break;
          bVar28 = uVar16 != 0;
          uVar16 = uVar16 - 1;
        } while (bVar28);
        if (pcVar15 != pcVar24) {
          local_60 = (byte *)(pcVar15 + (-1 - (int)local_64));
        }
        break;
      case 'x':
        cVar19 = '\'';
        goto LAB_00566023;
      case 'z':
        param_3 = (double *)((int)pdVar27 + 4);
        uVar16 = *(uint *)pdVar27;
        local_64 = (byte *)&DAT_00730506;
        if (0x7ffffffe < uVar16) {
          uVar16 = ~uVar16 + 1;
          bVar6 = true;
        }
        bVar4 = true;
        uVar22 = uVar16 >> 0x10;
        uVar16 = uVar16 & 0xffff;
        if ((int)local_68 < 0) {
          local_68 = 2;
        }
        uVar13 = local_68;
        if ((uVar16 != 0) || (local_68 != 0)) {
          pcVar24 = &DAT_00730507 + -local_68;
          if (0 < (int)local_68) {
            local_68 = 0;
            uVar26 = uVar13;
            do {
              if (uVar16 < 0x10000) {
                uVar16 = uVar16 * 10;
              }
              uVar17 = 0;
              iVar20 = 0;
              do {
                iVar25 = iVar20;
                uVar17 = uVar17 + 0x10000;
                iVar20 = iVar25 + 1;
              } while (uVar17 <= uVar16);
              *pcVar24 = (char)iVar25 + '0';
              pcVar24 = pcVar24 + 1;
              uVar16 = uVar16 + iVar25 * -0x10000;
              uVar26 = uVar26 - 1;
            } while (uVar26 != 0);
          }
          if ((uVar16 == 0) && (0 < (int)local_68)) {
            uVar26 = local_68 >> 2;
            pcVar15 = pcVar24;
            while (uVar26 != 0) {
              uVar26 = uVar26 - 1;
              builtin_strncpy(pcVar15,"0000",4);
              pcVar15 = pcVar15 + 4;
            }
            for (uVar26 = local_68 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
              *pcVar15 = '0';
              pcVar15 = pcVar15 + 1;
            }
            pcVar24 = pcVar24 + local_68;
            local_68 = 0;
          }
          *pcVar24 = '\0';
          pcVar24[-1 - uVar13] = '.';
          local_64 = (byte *)(pcVar24 + (-1 - uVar13) + -1);
          if (uVar16 != 0) {
            if (uVar16 < 0x10000) {
              uVar16 = uVar16 * 10;
            }
            uVar13 = 0;
            iVar20 = 0;
            do {
              iVar25 = iVar20;
              uVar13 = uVar13 + 0x10000;
              iVar20 = iVar25 + 1;
            } while (uVar13 <= uVar16);
            if (4 < iVar25) {
              pcVar24 = &DAT_00730506;
              cVar12 = DAT_00730506;
              while (cVar12 == '9') {
                *pcVar24 = '0';
                if (pcVar24[-1] == '.') {
                  uVar22 = uVar22 + 1;
                  goto LAB_00566554;
                }
                pcVar15 = pcVar24 + -1;
                pcVar24 = pcVar24 + -1;
                cVar12 = *pcVar15;
              }
              *pcVar24 = *pcVar24 + '\x01';
            }
          }
        }
LAB_00566554:
        if (uVar22 == 0) {
          *local_64 = '0';
          local_64 = local_64 + -1;
        }
        else {
          do {
            uVar2 = (ulonglong)uVar22;
            uVar22 = uVar22 / 10;
            *local_64 = (char)(uVar2 % 10) + '0';
            local_64 = local_64 + -1;
          } while (uVar22 != 0);
        }
        local_60 = (byte *)(&DAT_00730506 + -(int)local_64);
        local_64 = local_64 + 1;
      }
      iVar20 = local_5c;
      pdVar27 = param_3;
      if (!bVar5) {
        if (bVar4) {
          if (bVar6) {
            param_1 = '-';
          }
          else if (bVar7) {
            param_1 = '+';
          }
          else {
            if (!bVar8) goto LAB_005667dd;
            param_1 = ' ';
          }
          local_58 = 1;
        }
LAB_005667dd:
        iVar25 = (local_5c - (int)local_60) - local_58;
        if (iVar25 < 0) {
          iVar25 = 0;
        }
        else if ((iVar25 != 0) && (local_6c == 0)) {
          do {
            (*DAT_007304b8)(0x20);
            iVar25 = iVar25 + -1;
          } while (iVar25 != 0);
          iVar25 = -1;
        }
        if (local_58 != 0) {
          (*DAT_007304bc)(&param_1,local_58);
        }
        if ((0 < iVar25) && ((local_6c & 4) == 0)) {
          do {
            (*DAT_007304b8)(0x30);
            iVar25 = iVar25 + -1;
          } while (iVar25 != 0);
          iVar25 = -1;
        }
        (*DAT_007304bc)(local_64,local_60);
        pdVar27 = param_3;
        if (0 < iVar25) {
          do {
            (*DAT_007304b8)(0x20);
            iVar25 = iVar25 + -1;
            pdVar27 = param_3;
          } while (iVar25 != 0);
        }
      }
    }
    cVar12 = *param_2;
    iVar25 = DAT_00730508;
    pcVar10 = DAT_007304bc;
    pcVar11 = DAT_007304b8;
    pbVar21 = PTR_DAT_006f2268;
  } while( true );
switchD_00565fe9_caseD_58:
  cVar19 = '\a';
LAB_00566023:
  uVar16 = 0x10;
  goto LAB_00566085;
}
