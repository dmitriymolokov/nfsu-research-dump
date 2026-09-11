/* Decompiled from Speed.exe @ 0060ae08 */
/* Module: EAGL */
/* Ghidra DecompileModule */


uint FUN_0060ae08(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  bool bVar8;
  char local_30 [31];
  undefined1 local_11;
  int local_10;
  int local_c;
  uint local_8;
  
  piVar2 = param_1;
  uVar7 = 0;
  local_10 = 0;
  local_8 = 0;
  _strncpy(local_30,*(char **)(param_1[0x13] + 0x18),0x1f);
  local_11 = 0;
  pcVar6 = local_30;
  if (local_30[0] == '\0') {
LAB_0060ae65:
    param_1 = (int *)0x0;
  }
  else {
    do {
      iVar4 = _isalpha((int)*pcVar6);
      if (iVar4 == 0) break;
      pcVar6 = pcVar6 + 1;
    } while (*pcVar6 != '\0');
    if (*pcVar6 == '\0') goto LAB_0060ae65;
    param_1 = (int *)_atol(pcVar6);
  }
  if (*pcVar6 != '\0') {
    *pcVar6 = '\0';
    pcVar6 = pcVar6 + 1;
  }
  cVar3 = *pcVar6;
  if (cVar3 == '\0') {
LAB_0060ae98:
    param_1 = (int *)((int)param_1 + ((uint)piVar2[0x15] >> 2));
  }
  else {
    do {
      iVar4 = _isdigit((int)cVar3);
      if (iVar4 == 0) break;
      pcVar6 = pcVar6 + 1;
      cVar3 = *pcVar6;
    } while (cVar3 != '\0');
    if (*pcVar6 == '\0') goto LAB_0060ae98;
    param_1 = (int *)0xffffffff;
  }
  iVar4 = local_c;
  if (piVar2[0x14] == 0xffffffff) {
    uVar7 = *(uint *)(*(int *)(*(int *)(local_c + 0x10) + *piVar2 * 4) + 4);
    if (((uVar7 & 8) != 0) && ((uVar7 & 0x100) == 0)) {
      iVar5 = __stricmp(local_30,"color");
      if (iVar5 == 0) {
        local_8 = 1;
        if (param_2 == 0) {
          uVar7 = *(uint *)(iVar4 + 0x6c);
        }
        else {
          uVar7 = 2;
        }
LAB_0060af43:
        bVar8 = param_1 < uVar7;
LAB_0060afb9:
        uVar7 = 1 - bVar8;
      }
      else {
        iVar5 = __stricmp(local_30,"texcoord");
        if (iVar5 == 0) {
          local_8 = 3;
          if (param_2 == 0) {
            uVar7 = *(uint *)(iVar4 + 0x7c);
          }
          else {
            uVar7 = 8;
          }
          goto LAB_0060af43;
        }
        iVar4 = __stricmp(local_30,"position");
        if (((iVar4 == 0) || (iVar4 = __stricmp(local_30,"fog"), iVar4 == 0)) ||
           (iVar4 = __stricmp(local_30,"psize"), iVar4 == 0)) {
          bVar8 = param_1 == (int *)0x0;
          local_8 = 4;
          goto LAB_0060afb9;
        }
        iVar4 = __stricmp(local_30,"diffuse");
        if (iVar4 == 0) {
          local_8 = 1;
          uVar7 = (uint)(param_1 != (int *)0x0);
          local_10 = 1;
          if (uVar7 == 0) {
            param_1 = (int *)0x0;
          }
        }
        else {
          iVar4 = __stricmp(local_30,"specular");
          if (iVar4 == 0) {
            local_8 = 1;
            uVar7 = (uint)(param_1 != (int *)0x0);
            local_10 = 1;
            if (uVar7 == 0) {
              param_1 = (int *)0x1;
            }
          }
          else {
            local_8 = 0;
            uVar7 = 1;
          }
        }
      }
      if ((param_2 == 0) || (piVar2[3] == 0)) {
        if (uVar7 == 0) {
          if (local_10 != 0) {
            FUN_005fbf37(local_c,piVar2[0x13],0x1261,
                         "input semantic \'%s\' has been deprecated; use \'%s%d\' instead",local_30,
                         *(undefined4 *)(local_8 * 4 + 0x6df4b0),param_1);
          }
        }
        else {
          FUN_005fbec8(local_c,piVar2[0x13],0x1196,"invalid input semantic \'%s%d\'",local_30,
                       param_1);
        }
      }
      if (((local_8 == 4) || (uVar7 != 0)) && ((*(int *)(local_c + 0x204) == 0 && (param_2 == 0))))
      {
        *(int *)(local_c + 0x204) = 1;
        FUN_005fbec8(local_c,piVar2[0x13],0x1196,"invalid reference to input semantic \'%s%d\'",
                     local_30,param_1);
        uVar7 = 1;
      }
      goto LAB_0060b16f;
    }
    if ((uVar7 & 0x10) != 0) {
      iVar5 = __stricmp(local_30,"color");
      if (iVar5 == 0) {
        local_8 = 1;
        uVar7 = (uint)(*(uint *)(iVar4 + 0x84) <= param_1);
LAB_0060b119:
        if (uVar7 != 0) goto LAB_0060b11d;
      }
      else {
        iVar4 = __stricmp(local_30,"depth");
        if (iVar4 != 0) {
          local_8 = 0;
          uVar7 = 1;
          goto LAB_0060b119;
        }
        local_8 = 4;
        uVar7 = 1;
LAB_0060b11d:
        if ((param_2 == 0) || (piVar2[3] == 0)) {
          FUN_005fbec8(local_c,piVar2[0x13],0x1196,"invalid output semantic \'%s%d\'",local_30,
                       param_1);
        }
      }
      if (local_8 == 4) {
        if (param_2 != 0) goto LAB_0060b21d;
        pcVar6 = "output semantic \'%s%d\' not yet implemented in ps_1_x";
        iVar4 = piVar2[0x13];
        goto LAB_0060b167;
      }
      goto LAB_0060b16f;
    }
  }
  else {
    param_1 = (int *)(uint)*(byte *)((int)piVar2 + 0x51);
    local_8 = piVar2[0x14] & 0xff;
    if (local_8 == 4) {
      if ((*(int *)(local_c + 0x204) != 0) || (param_2 != 0)) goto LAB_0060b21d;
      uVar7 = 1;
      *(int *)(local_c + 0x204) = 1;
      pcVar6 = "invalid reference to input semantic \'%s%d\'";
      iVar4 = piVar2[0x13];
LAB_0060b167:
      FUN_005fbec8(local_c,iVar4,0x1196,pcVar6,local_30,param_1);
    }
LAB_0060b16f:
    if (local_8 == 3) {
      if ((((param_1 != (int *)0x0) && (param_1 < 4)) && (piVar2[3] == 3)) &&
         ((*(uint *)(local_c + 0x30) & 0xffff) < 0x104)) {
        piVar1 = (int *)(local_c + 0x1f8);
        if (*piVar1 == -1) {
          iVar4 = FUN_005f7478(&DAT_006a58fc,0x29,0xffffffff,4);
          *piVar1 = iVar4;
        }
        iVar4 = *piVar1;
        if (iVar4 == -1) {
          return 0x8007000e;
        }
        piVar2[2] = 0;
        local_8 = 5;
        *piVar2 = iVar4;
        piVar2[3] = (int)param_1 - 1;
        goto LAB_0060b21d;
      }
      if (((param_1 < *(uint *)(local_c + 0x7c)) || (param_2 != 0)) ||
         (*(int *)(local_c + 0x204) != 0)) goto LAB_0060b21d;
      uVar7 = 1;
      *(int *)(local_c + 0x204) = 1;
      FUN_005fbec8(local_c,piVar2[0x13],0x1196,
                   "\'texcoord\' reference exceeds valid range for this shader model (max: %i)",
                   *(uint *)(local_c + 0x7c));
    }
    if (local_8 != 0) goto LAB_0060b21d;
  }
  uVar7 = 1;
LAB_0060b21d:
  if (0xffff < param_1) {
    uVar7 = 1;
  }
  piVar2[0x14] = local_8 & 0xff | (int)param_1 << 8;
  return -(uint)(uVar7 != 0) & 0x80004005;
}

