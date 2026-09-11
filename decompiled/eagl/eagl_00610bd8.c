/* spd-match: far pct=9.36 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_7/buckets/eagl_p1/attempt2_tc_c */
#include "ghidra_compat.h"

int __cdecl FUN_005e54f8();
int __cdecl FUN_005e7078();
int __cdecl FUN_005fbec8();
int __cdecl FUN_005fbf37();
extern int DAT_006a3650;
extern unsigned char *PTR_s_UNKNOWN_006df648;
extern void LAB_00610cf0(void);
extern void LAB_00610d20(void);
extern void LAB_00610d64(void);
extern void LAB_00610f0d(void);
extern void LAB_00610f10(void);
extern void LAB_00610f31(void);
extern void LAB_00610f95(void);
extern void LAB_00611003(void);
extern void LAB_00611097(void);
extern void LAB_006110a8(void);
extern void LAB_006110af(void);

uint  FUN_00610bd8(int param_1,int *param_2,int param_3)

{
  short sVar1;
  char cVar2;
  short *psVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined4 uVar11;
  undefined *puVar12;
  char local_34 [32];
  char *local_14;
  short *local_10;
  int local_c;
  int local_8;
  
  uVar6 = 0;
  local_8 = 0;
  if (param_2[0x14] != -1) {
    return 0;
  }
  iVar4 = param_2[0x13];
  if (iVar4 == 0) {
    param_2[0x14] = 0;
    return 0;
  }
  local_10 = *(short **)(iVar4 + 0x18);
  local_c = param_1;
  if (*(int *)(param_1 + 0xec) != 0) {
    local_14 = (char *)((int)local_10 + 1);
    psVar3 = local_10;
    do {
      sVar1 = *psVar3;
      psVar3 = (short *)((int)psVar3 + 1);
    } while ((char)sVar1 != '\0');
    if ((2 < (uint)((int)psVar3 - (int)local_14)) && (DAT_006a3650 == *local_10)) {
      uVar6 = param_2[0x15];
      if (4 < uVar6) {
        FUN_005fbec8(param_1,iVar4,0x11bf,
                     "multi-register semantics are not allowed in fragments \'%s\'",local_10);
      }
      uVar8 = (uint)(4 < uVar6);
      iVar4 = FUN_005e54f8(local_10);
      if (iVar4 == 0) {
        uVar6 = FUN_005e7078(local_10,*(undefined4 *)(param_1 + 0x128),1);
        if ((int)uVar6 < 0) {
          return uVar6;
        }
        uVar9 = *(uint *)(local_c + 0x128);
        *(uint *)(local_c + 0x128) = uVar9 + 1;
      }
      else {
        uVar9 = *(uint *)(iVar4 + 4);
      }
      uVar6 = 0xffff;
      goto LAB_006110af;
    }
  }
  _strncpy(local_34,*(char **)(iVar4 + 0x18),0x20);
  pcVar7 = local_34;
  if (local_34[0] == '\0') {
LAB_00610cf0:
    lVar5 = 0;
  }
  else {
    do {
      iVar4 = _isalpha((int)*pcVar7);
      if (iVar4 == 0) break;
      pcVar7 = pcVar7 + 1;
    } while (*pcVar7 != '\0');
    if (*pcVar7 == '\0') goto LAB_00610cf0;
    lVar5 = _atol(pcVar7);
  }
  if (*pcVar7 != '\0') {
    *pcVar7 = '\0';
    pcVar7 = pcVar7 + 1;
  }
  cVar2 = *pcVar7;
  if (cVar2 == '\0') {
LAB_00610d20:
    uVar9 = lVar5 + ((uint)param_2[0x15] >> 2);
  }
  else {
    do {
      iVar4 = _isdigit((int)cVar2);
      if (iVar4 == 0) break;
      pcVar7 = pcVar7 + 1;
      cVar2 = *pcVar7;
    } while (cVar2 != '\0');
    if (*pcVar7 == '\0') goto LAB_00610d20;
    uVar9 = 0xffffffff;
  }
  uVar8 = *(uint *)(*(int *)(*(int *)(local_c + 0x10) + *param_2 * 4) + 4);
  if (((uVar8 & 8) == 0) || ((uVar8 & 0x100) != 0)) {
    if ((uVar8 & 0x10) != 0) {
      iVar4 = __stricmp(local_34,"position");
      if (iVar4 == 0) {
        uVar6 = 1;
        bVar10 = uVar9 == 0;
LAB_00610f95:
        uVar8 = 1 - bVar10;
      }
      else {
        iVar4 = __stricmp(local_34,"psize");
        if (iVar4 == 0) {
          uVar6 = 5;
LAB_00611003:
          bVar10 = uVar9 == 0;
          goto LAB_00610f95;
        }
        iVar4 = __stricmp(local_34,"texcoord");
        if (iVar4 == 0) {
          uVar6 = 6;
          bVar10 = uVar9 < 8;
          goto LAB_00610f95;
        }
        iVar4 = __stricmp(local_34,"color");
        if (iVar4 == 0) {
          uVar6 = 0xb;
          bVar10 = uVar9 < 2;
          goto LAB_00610f95;
        }
        iVar4 = __stricmp(local_34,"fog");
        if (iVar4 == 0) {
          uVar6 = 0xc;
          goto LAB_00611003;
        }
        iVar4 = __stricmp(local_34,"diffuse");
        if (iVar4 == 0) {
          uVar8 = (uint)(uVar9 != 0);
          uVar6 = 0xb;
          local_8 = 1;
          if (uVar8 == 0) {
            uVar9 = 0;
          }
        }
        else {
          iVar4 = __stricmp(local_34,"specular");
          if (iVar4 == 0) {
            uVar8 = (uint)(uVar9 != 0);
            uVar6 = 0xb;
            local_8 = 1;
            if (uVar8 == 0) {
              uVar9 = 1;
            }
          }
          else {
            uVar6 = 0;
            uVar8 = 1;
          }
        }
      }
      if ((param_3 == 0) || (param_2[3] == 0)) {
        if (uVar8 == 0) {
          if (local_8 == 0) goto LAB_006110a8;
          puVar12 = (&PTR_s_UNKNOWN_006df648)[uVar6];
          pcVar7 = "output semantic \'%s\' has been deprecated; use \'%s%d\' instead";
          uVar11 = 0x1262;
          goto LAB_00611097;
        }
        pcVar7 = "invalid output semantic \'%s%d\'";
        goto LAB_00610f31;
      }
      goto LAB_006110a8;
    }
  }
  else {
    iVar4 = __stricmp(local_34,"position");
    if (iVar4 == 0) {
      uVar6 = 1;
LAB_00610d64:
      uVar8 = (uint)(0xf < uVar9);
    }
    else {
      iVar4 = __stricmp(local_34,"blendweight");
      if (iVar4 == 0) {
        uVar6 = 2;
        goto LAB_00610d64;
      }
      iVar4 = __stricmp(local_34,"blendindices");
      if (iVar4 == 0) {
        uVar6 = 3;
        goto LAB_00610d64;
      }
      iVar4 = __stricmp(local_34,"normal");
      if (iVar4 == 0) {
        uVar6 = 4;
        goto LAB_00610d64;
      }
      iVar4 = __stricmp(local_34,"psize");
      if (iVar4 == 0) {
        uVar6 = 5;
        goto LAB_00610d64;
      }
      iVar4 = __stricmp(local_34,"texcoord");
      if (iVar4 == 0) {
        uVar6 = 6;
        goto LAB_00610d64;
      }
      iVar4 = __stricmp(local_34,"tangent");
      if (iVar4 == 0) {
        uVar6 = 7;
        goto LAB_00610d64;
      }
      iVar4 = __stricmp(local_34,"binormal");
      if (iVar4 == 0) {
        uVar6 = 8;
        goto LAB_00610d64;
      }
      iVar4 = __stricmp(local_34,"positiont");
      if (iVar4 != 0) {
        iVar4 = __stricmp(local_34,"color");
        if (iVar4 == 0) {
          uVar6 = 0xb;
        }
        else {
          iVar4 = __stricmp(local_34,"fog");
          if (iVar4 == 0) {
            uVar6 = 0xc;
          }
          else {
            iVar4 = __stricmp(local_34,"depth");
            if (iVar4 == 0) {
              uVar6 = 0xd;
            }
            else {
              iVar4 = __stricmp(local_34,"sample");
              if (iVar4 != 0) {
                iVar4 = __stricmp(local_34,"diffuse");
                if (iVar4 == 0) {
                  uVar8 = (uint)(uVar9 != 0);
                  uVar6 = 0xb;
                  local_8 = 1;
                  if (uVar8 == 0) {
                    uVar9 = 0;
                  }
                }
                else {
                  iVar4 = __stricmp(local_34,"specular");
                  if (iVar4 != 0) {
                    uVar6 = 0;
                    goto LAB_00610f0d;
                  }
                  uVar8 = (uint)(uVar9 != 0);
                  uVar6 = 0xb;
                  local_8 = 1;
                  if (uVar8 == 0) {
                    uVar9 = 1;
                  }
                }
                goto LAB_00610f10;
              }
              uVar6 = 0xe;
            }
          }
        }
        goto LAB_00610d64;
      }
      uVar6 = 10;
      if ((uVar9 < 0x10) && (uVar9 != 0)) {
        uVar8 = 0;
      }
      else {
LAB_00610f0d:
        uVar8 = 1;
      }
    }
LAB_00610f10:
    if ((param_3 == 0) || (param_2[3] == 0)) {
      if (uVar8 == 0) {
        if (local_8 != 0) {
          puVar12 = (&PTR_s_UNKNOWN_006df648)[uVar6];
          pcVar7 = "input semantic \'%s\' has been deprecated; use \'%s%d\' instead";
          uVar11 = 0x1261;
LAB_00611097:
          FUN_005fbf37(local_c,param_2[0x13],uVar11,pcVar7,local_34,puVar12,uVar9);
        }
      }
      else {
        pcVar7 = "invalid input semantic \'%s%d\'";
LAB_00610f31:
        FUN_005fbec8(local_c,param_2[0x13],0x1196,pcVar7,local_34,uVar9);
        uVar8 = 1;
      }
    }
LAB_006110a8:
    if (uVar6 != 0) goto LAB_006110af;
  }
  uVar8 = 1;
LAB_006110af:
  if (0xffff < uVar9) {
    uVar8 = 1;
  }
  param_2[0x14] = uVar9 << 0x10 | uVar6;
  return -(uint)(uVar8 != 0) & 0x80004005;
}
