/* Decompiled from Speed.exe @ 0066e080 */
/* Module: Audio */
/* Ghidra DecompileAll */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0066e080(int *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  DWORD DVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  uint unaff_retaddr;
  ushort uStack_124;
  undefined2 uStack_122;
  undefined1 local_118 [16];
  undefined4 local_108;
  int local_104;
  uint local_4;
  
  local_4 = DAT_006eb720 ^ unaff_retaddr;
  if ((param_1[7] == 3) && (*param_1 == -1)) {
    if ((void *)param_1[0xf] != (void *)0x0) {
      _free((void *)param_1[0xf]);
    }
    param_1[0xd] = 0xc;
    param_1[0xe] = 0xc;
    puVar1 = _malloc(0xd);
    param_1[0xf] = (int)puVar1;
    puVar1[3] = 0xff;
    puVar1[2] = 0xff;
    puVar1[1] = 0xff;
    *puVar1 = 0xff;
    puVar1[7] = 0xfe;
    puVar1[6] = 0xfe;
    puVar1[5] = 0xfe;
    puVar1[4] = 0xfe;
    puVar1[10] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0xc;
    param_1[7] = 4;
  }
  if ((param_1[7] == 4) && (param_1[0xc] != 0)) {
    param_1[7] = 2;
    param_1[8] = 0;
  }
  if (param_1[7] == 1) {
    iVar2 = Ordinal_1(*param_1,local_118);
    if (iVar2 == -1) {
      return;
    }
    Ordinal_3(*param_1);
    *param_1 = iVar2;
    param_1[7] = 3;
    param_1[10] = 0;
    if ((void *)param_1[0xf] != (void *)0x0) {
      _free((void *)param_1[0xf]);
    }
    param_1[0xd] = 0xc;
    param_1[0xe] = 0xc;
    puVar1 = _malloc(0xd);
    param_1[0xf] = (int)puVar1;
    puVar1[3] = 0xff;
    puVar1[2] = 0xff;
    puVar1[1] = 0xff;
    *puVar1 = 0xff;
    puVar1[7] = 0xff;
    puVar1[6] = 0xff;
    puVar1[5] = 0xff;
    puVar1[4] = 0xff;
    puVar1[10] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0xc;
  }
  if (param_1[7] == 2) {
    DVar3 = GetTickCount();
    if ((uint)param_1[8] < DVar3) {
      if (*param_1 != -1) {
        Ordinal_3();
      }
      iVar2 = Ordinal_23(2,1);
      *param_1 = iVar2;
      if (iVar2 == -1) {
        Ordinal_111();
      }
      Ordinal_10(*param_1,0x8004667e,&stack0xfffffecc);
      Ordinal_4(*param_1,param_1 + 1,0x10);
      DVar3 = GetTickCount();
      param_1[8] = DVar3 + 30000;
    }
    local_104 = *param_1;
    if (local_104 == -1) {
      return;
    }
    local_108 = 1;
    iVar2 = Ordinal_18(1,0,&local_108,&local_108);
    if (iVar2 == 0) {
      return;
    }
    iVar2 = Ordinal_7(*param_1,0xffff,0x1007,&stack0xfffffec8,&stack0xfffffec4);
    if ((iVar2 == 0) && (CONCAT22(uStack_122,uStack_124) == 0)) {
      Ordinal_6(*param_1,local_118);
      iVar2 = Ordinal_14(0);
      param_1[5] = iVar2;
      uVar4 = Ordinal_15((uint)uStack_124 << 0x10);
      param_1[6] = uVar4 & 0xffff;
      param_1[7] = 3;
      param_1[10] = 0;
      if ((void *)param_1[0xf] != (void *)0x0) {
        _free((void *)param_1[0xf]);
      }
      param_1[0xd] = 0xc;
      param_1[0xe] = 0xc;
      puVar1 = _malloc(0xd);
      param_1[0xf] = (int)puVar1;
      puVar1[3] = 0xff;
      puVar1[2] = 0xff;
      puVar1[1] = 0xff;
      *puVar1 = 0xff;
      puVar1[7] = 0xff;
      puVar1[6] = 0xff;
      puVar1[5] = 0xff;
      puVar1[4] = 0xff;
      puVar1[10] = 0;
      puVar1[9] = 0;
      puVar1[8] = 0;
      puVar1[0xb] = 0xc;
      goto LAB_0066e342;
    }
    param_1[8] = (DAT_00717964 & 0xfff) + 1000;
    DVar3 = GetTickCount();
    param_1[8] = param_1[8] + DVar3;
    DAT_00717964 = DAT_00717964 * 0x19660d + 0x3c6ef35f;
LAB_0066e3ce:
    Ordinal_3();
    *param_1 = -1;
  }
  else {
LAB_0066e342:
    if (*param_1 == -1) {
      return;
    }
    if (param_1[0xc] == 0) {
LAB_0066e405:
      if (param_1[0xf] == 0) {
        if (param_1[0xd] == param_1[0xe]) {
          param_1[0xd] = 0xc;
          param_1[0xe] = 0;
        }
        iVar2 = Ordinal_16(*param_1,param_1[0xe] + 0x40 + (int)param_1,param_1[0xd] - param_1[0xe]);
        if ((iVar2 < 0) && (iVar5 = Ordinal_111(), iVar5 != 0x2733)) {
          Ordinal_3();
          *param_1 = -1;
          return;
        }
        if (iVar2 == 0) goto LAB_0066e3ce;
        if (0 < iVar2) {
          param_1[0xe] = param_1[0xe] + iVar2;
        }
        if (param_1[0xe] == param_1[0xd]) {
          uVar4 = CONCAT31(CONCAT21(CONCAT11((char)param_1[0x12],
                                             *(undefined1 *)((int)param_1 + 0x49)),
                                    *(undefined1 *)((int)param_1 + 0x4a)),
                           *(undefined1 *)((int)param_1 + 0x4b));
          param_1[0xd] = uVar4;
          if ((uVar4 < 0xc) || (0x8000 < (int)uVar4)) goto LAB_0066e38a;
          piVar6 = _malloc(uVar4 + 1);
          uVar4 = param_1[0xe];
          param_1[0xf] = (int)piVar6;
          piVar8 = param_1 + 0x10;
          for (uVar7 = uVar4 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *piVar6 = *piVar8;
            piVar8 = piVar8 + 1;
            piVar6 = piVar6 + 1;
          }
          for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(char *)piVar6 = (char)*piVar8;
            piVar8 = (int *)((int)piVar8 + 1);
            piVar6 = (int *)((int)piVar6 + 1);
          }
          if (((param_1[0xe] == param_1[0xd]) && ((void *)param_1[0xc] != (void *)0x0)) &&
             (param_1[10] == param_1[9])) {
            _free((void *)param_1[0xc]);
            param_1[0xc] = 0;
          }
        }
      }
      if (param_1[0xf] == 0) {
        return;
      }
      iVar2 = param_1[0xe];
      if (param_1[0xd] <= iVar2) {
        return;
      }
      iVar2 = Ordinal_16(*param_1,iVar2 + param_1[0xf],param_1[0xd] - iVar2);
      if ((iVar2 < 0) && (iVar5 = Ordinal_111(), iVar5 != 0x2733)) goto LAB_0066e3ce;
      if (iVar2 != 0) {
        if (0 < iVar2) {
          param_1[0xe] = param_1[0xe] + iVar2;
        }
        if (param_1[0xe] != param_1[0xd]) {
          return;
        }
        if ((void *)param_1[0xc] == (void *)0x0) {
          return;
        }
        if (param_1[10] != param_1[9]) {
          return;
        }
        _free((void *)param_1[0xc]);
        param_1[0xc] = 0;
        return;
      }
    }
    else {
      iVar2 = param_1[10];
      if (iVar2 == param_1[9]) goto LAB_0066e405;
      iVar2 = Ordinal_19(*param_1,iVar2 + param_1[0xc],param_1[9] - iVar2);
      if ((-1 < iVar2) || (iVar5 = Ordinal_111(), iVar5 == 0x2733)) {
        if (0 < iVar2) {
          param_1[10] = param_1[10] + iVar2;
        }
        if (param_1[10] == param_1[9]) {
          _free((void *)param_1[0xc]);
          param_1[0xc] = 0;
        }
        goto LAB_0066e405;
      }
    }
LAB_0066e38a:
    Ordinal_3();
    *param_1 = -1;
  }
  return;
}

