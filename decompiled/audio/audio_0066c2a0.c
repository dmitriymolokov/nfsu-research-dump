/* Decompiled from Speed.exe @ 0066c2a0 */
/* Module: Audio */
/* Ghidra DecompileAll */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0066c2a0(void)

{
  DWORD DVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int unaff_EBX;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  int *piVar9;
  uint *puVar10;
  uint unaff_retaddr;
  int local_244;
  int local_23c;
  int local_238 [4];
  uint auStack_228 [135];
  uint local_c;
  
  local_c = DAT_006eb720 ^ unaff_retaddr;
  iVar5 = *(int *)(unaff_EBX + 0xb4);
  iVar6 = 0x800;
  local_244 = 0x800;
  if (iVar5 != *(int *)(unaff_EBX + 0xb8)) {
    do {
      iVar6 = iVar6 - *(int *)(*(int *)(unaff_EBX + 0xbc) + iVar5);
      iVar5 = (*(int *)(unaff_EBX + 0xa8) + iVar5) % *(int *)(unaff_EBX + 0xac);
    } while (iVar5 != *(int *)(unaff_EBX + 0xb8));
    local_244 = iVar6;
    if (0xff < iVar6) goto joined_r0x0066c48e;
    DVar1 = GetTickCount();
    if (DVar1 - *(int *)(unaff_EBX + 0xc4) < 0xfb) goto joined_r0x0066c48e;
    local_244 = 0x100;
  }
  do {
    iVar5 = 0x218;
    if (local_244 < 0x218) {
      iVar5 = local_244;
    }
    local_23c = 0;
    while ((0 < iVar5 && (iVar6 = *(int *)(unaff_EBX + 0xb8), iVar6 != *(int *)(unaff_EBX + 0xb0))))
    {
      piVar2 = (int *)(*(int *)(unaff_EBX + 0xbc) + iVar6);
      iVar5 = iVar5 + (-1 - *piVar2);
      if ((0 < local_23c) && (iVar5 < 1)) break;
      local_23c = local_23c + 1;
      *(int *)(unaff_EBX + 0xb8) = (*(int *)(unaff_EBX + 0xa8) + iVar6) % *(int *)(unaff_EBX + 0xac)
      ;
      if ((0xfa < *piVar2) || (7 < local_23c)) break;
    }
    if (local_23c == 0) {
      return;
    }
    iVar5 = ((*(int *)(unaff_EBX + 0xb8) - *(int *)(unaff_EBX + 0xa8)) + *(int *)(unaff_EBX + 0xac))
            % *(int *)(unaff_EBX + 0xac);
    uVar3 = *(int *)(*(int *)(unaff_EBX + 0xbc) + iVar5) + 0x10;
    piVar2 = (int *)(*(int *)(unaff_EBX + 0xbc) + iVar5);
    piVar9 = local_238;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *piVar9 = *piVar2;
      piVar2 = piVar2 + 1;
      piVar9 = piVar9 + 1;
    }
    local_23c = local_23c + -1;
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(char *)piVar9 = (char)*piVar2;
      piVar2 = (int *)((int)piVar2 + 1);
      piVar9 = (int *)((int)piVar9 + 1);
    }
    if (0 < local_23c) {
      do {
        iVar5 = ((*(int *)(unaff_EBX + 0xac) - *(int *)(unaff_EBX + 0xa8)) + iVar5) %
                *(int *)(unaff_EBX + 0xac);
        puVar7 = (uint *)(*(int *)(unaff_EBX + 0xbc) + iVar5);
        if (*(code **)(unaff_EBX + 0x38) != (code *)0x0) {
          (**(code **)(unaff_EBX + 0x38))();
        }
        local_238[2] = local_238[2] + 0x10000000;
        uVar4 = *puVar7;
        puVar8 = puVar7 + 4;
        puVar10 = (uint *)((int)auStack_228 + local_238[0]);
        for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar10 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar10 = puVar10 + 1;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(char *)puVar10 = (char)*puVar8;
          puVar8 = (uint *)((int)puVar8 + 1);
          puVar10 = (uint *)((int)puVar10 + 1);
        }
        uVar4 = *puVar7;
        *(char *)((int)auStack_228 + local_238[0] + uVar4) = (char)*puVar7;
        local_238[0] = local_238[0] + uVar4 + 1;
        local_23c = local_23c + -1;
      } while (local_23c != 0);
    }
    if (iVar5 == *(int *)(unaff_EBX + 0xb4)) {
LAB_0066c55c:
      DAT_006eb1ac = 0x20000000;
    }
    else {
      do {
        if (DAT_006eb1ac < (uint)local_238[2]) break;
        iVar5 = ((*(int *)(unaff_EBX + 0xac) - *(int *)(unaff_EBX + 0xa8)) + iVar5) %
                *(int *)(unaff_EBX + 0xac);
        puVar7 = (uint *)(*(int *)(unaff_EBX + 0xbc) + iVar5);
        if (0x40 < *(int *)(*(int *)(unaff_EBX + 0xbc) + iVar5) + local_238[0]) break;
        if (*(code **)(unaff_EBX + 0x38) != (code *)0x0) {
          (**(code **)(unaff_EBX + 0x38))();
        }
        local_238[2] = local_238[2] + 0x10000000;
        uVar4 = *puVar7;
        puVar8 = puVar7 + 4;
        puVar10 = (uint *)((int)auStack_228 + local_238[0]);
        for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar10 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar10 = puVar10 + 1;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(char *)puVar10 = (char)*puVar8;
          puVar8 = (uint *)((int)puVar8 + 1);
          puVar10 = (uint *)((int)puVar10 + 1);
        }
        uVar4 = *puVar7;
        *(char *)((int)auStack_228 + local_238[0] + uVar4) = (char)*puVar7;
        local_238[0] = local_238[0] + uVar4 + 1;
      } while (iVar5 != *(int *)(unaff_EBX + 0xb4));
      if (iVar5 == *(int *)(unaff_EBX + 0xb4)) goto LAB_0066c55c;
      if (DAT_006eb1ac < 0x80000000) {
        DAT_006eb1ac = DAT_006eb1ac * 2;
      }
      else {
        DAT_006eb1ac = 0xf0000000;
      }
    }
    *(int *)(unaff_EBX + 0xa0) = *(int *)(unaff_EBX + 0x9c);
    local_238[3] = *(int *)(unaff_EBX + 0x9c) + -1;
    iVar5 = FUN_0066c0c0();
    if (iVar5 < 0) {
      return;
    }
    local_244 = local_244 - local_238[0];
joined_r0x0066c48e:
    if (local_244 < 1) {
      return;
    }
  } while( true );
}

