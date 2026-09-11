/* spd-match: far pct=12.97 M4.0.2-CE */
/* Decompiled from Speed.exe @ 00612a70 */
/* Module: EAGL */
/* Ghidra DecompileAll */


uint  FUN_00612a70(int param_1,int *param_2)

{
  uint uVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  long lVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  char local_2c [32];
  int local_c;
  uint local_8;
  
  lVar6 = 0;
  local_8 = 0;
  if ((*(uint *)(param_1 + 0x30) & 0xffff0000) == 0x46580000) {
    if (param_2[0x14] == -1) {
      piVar3 = (int *)(param_1 + 0x10c);
      param_2[0x14] = *piVar3;
      *piVar3 = *piVar3 + 1;
    }
    return 0;
  }
  if (param_2[0x14] != -1) {
    return 0;
  }
  local_c = param_1;
  strncpy(local_2c,*(char **)(param_2[0x13] + 0x18),0x20);
  pcVar5 = local_2c;
  if (local_2c[0] == '\0') {
LAB_00612aff:
    if (*pcVar5 != '\0') {
      *pcVar5 = '\0';
      pcVar5 = pcVar5 + 1;
    }
  }
  else {
    do {
      iVar4 = _isalpha((int)*pcVar5);
      if (iVar4 == 0) break;
      pcVar5 = pcVar5 + 1;
    } while (*pcVar5 != '\0');
    if (*pcVar5 != '\0') {
      lVar6 = _atol(pcVar5);
      goto LAB_00612aff;
    }
  }
  cVar2 = *pcVar5;
  if (cVar2 == '\0') {
LAB_00612b2d:
    uVar7 = lVar6 + ((uint)param_2[0x15] >> 2);
  }
  else {
    do {
      iVar4 = _isdigit((int)cVar2);
      if (iVar4 == 0) break;
      pcVar5 = pcVar5 + 1;
      cVar2 = *pcVar5;
    } while (cVar2 != '\0');
    if (*pcVar5 == '\0') goto LAB_00612b2d;
    uVar7 = 0xffffffff;
  }
  uVar1 = *(uint *)(*(int *)(*(int *)(local_c + 0x10) + *param_2 * 4) + 4);
  if (((uVar1 & 8) == 0) || ((uVar1 & 0x100) != 0)) {
    if ((uVar1 & 0x10) != 0) {
      iVar4 = stricmp(local_2c,"color");
      bVar9 = iVar4 != 0;
      bVar8 = bVar9 || uVar7 != 0;
      local_8 = (uint)!bVar9;
      if ((bVar9 || uVar7 != 0) && (param_2[3] == 0)) {
        pcVar5 = "invalid reference to output semantic \'%s%d\'";
        goto LAB_00612be7;
      }
      goto LAB_00612bfa;
    }
  }
  else {
    iVar4 = stricmp(local_2c,"position");
    if (iVar4 == 0) {
      local_8 = 2;
LAB_00612b67:
      bVar8 = uVar7 != 0;
    }
    else {
      iVar4 = stricmp(local_2c,"psize");
      if (iVar4 == 0) {
        local_8 = 3;
        goto LAB_00612b67;
      }
      local_8 = 0;
      bVar8 = true;
    }
    if ((bVar8) && (param_2[3] == 0)) {
      pcVar5 = "invalid reference to input semantic \'%s%d\'";
LAB_00612be7:
      FUN_005fbec8(local_c,param_2[0x13],0x1196,pcVar5,local_2c,uVar7);
    }
LAB_00612bfa:
    if (local_8 != 0) goto LAB_00612c07;
  }
  bVar8 = true;
LAB_00612c07:
  if (0xffff < uVar7) {
    bVar8 = true;
  }
  param_2[0x14] = (uVar7 | 0xffffff00) << 8 | local_8 & 0xff;
  return -(uint)bVar8 & 0x80004005;
}

