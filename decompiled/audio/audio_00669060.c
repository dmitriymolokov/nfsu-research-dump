/* Decompiled from Speed.exe @ 00669060 */
/* Module: Audio */
/* Ghidra DecompileAll */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00669060(undefined4 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  DWORD DVar5;
  char *pcVar6;
  undefined4 *puVar7;
  short *psVar8;
  undefined4 *puVar9;
  short *psVar10;
  int *piVar11;
  bool bVar12;
  uint unaff_retaddr;
  uint uStack_10c;
  short local_108;
  short sStack_106;
  undefined1 uStack_104;
  undefined1 uStack_103;
  undefined1 uStack_102;
  undefined1 uStack_101;
  undefined4 local_f8;
  short local_f4;
  short sStack_f2;
  undefined1 uStack_f0;
  undefined1 uStack_ef;
  undefined1 uStack_ee;
  undefined1 uStack_ed;
  char local_e4;
  char cStack_e3;
  char cStack_e2;
  byte bStack_e1;
  int iStack_e0;
  char local_dc [32];
  char acStack_bc [64];
  char acStack_7c [120];
  uint local_4;
  
  local_4 = DAT_006eb720 ^ unaff_retaddr;
  iVar4 = FUN_00668d10(param_3);
  if (iVar4 != 0) {
    iVar4 = *(int *)(param_3 + 0x38);
    while (iVar4 != 0) {
      if (0 < *(int *)(param_3 + 0x30)) {
        *(undefined4 *)(param_3 + 0x30) = 0;
        FUN_00668ff0();
      }
      local_dc[0] = '\0';
      local_f8 = 0x10;
      iVar4 = FUN_00662f00(*(undefined4 *)(param_3 + 0x38),&local_e4,0xe0,0,&local_108,&local_f8);
      if ((iVar4 < 1) || (local_dc[0] == '\0')) break;
      FUN_00663190(&local_f4,0x10,&local_108,0x10);
      uStack_10c = 0;
      if ((local_f4 == local_108) && (local_108 == 2)) {
        bVar12 = true;
        iVar4 = 3;
        psVar8 = &sStack_106;
        psVar10 = &sStack_f2;
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          bVar12 = *psVar8 == *psVar10;
          psVar8 = psVar8 + 1;
          psVar10 = psVar10 + 1;
        } while (bVar12);
        uStack_10c = (uint)bVar12;
      }
      if (((local_e4 == 'g') && (cStack_e3 == 'E')) && (cStack_e2 == 'A')) {
        if ((local_dc[0] == '?') && (local_dc[1] == '\0')) {
          DVar5 = GetTickCount();
          for (iVar4 = *(int *)(param_3 + 0x24); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x100)) {
            if (DVar5 + 1000 < *(uint *)(iVar4 + 0xe0)) {
              *(DWORD *)(iVar4 + 0xe0) = DVar5 + 1000;
            }
          }
        }
        else if (acStack_bc[0] != '\0') {
          puVar9 = *(undefined4 **)(param_3 + 0x28);
          puVar3 = *(undefined4 **)(param_3 + 0x2c);
          puVar7 = (undefined4 *)0x0;
          if (puVar9 == puVar3) {
LAB_00669203:
            if (puVar7 != (undefined4 *)0x0) {
              puVar9 = puVar7;
              for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar9 = 0;
                puVar9 = puVar9 + 1;
              }
              puVar7[1] = iStack_e0;
              pcVar6 = local_dc;
              do {
                cVar2 = *pcVar6;
                pcVar6[(int)puVar7 + (8 - (int)local_dc)] = cVar2;
                pcVar6 = pcVar6 + 1;
              } while (cVar2 != '\0');
              pcVar6 = acStack_bc;
              do {
                cVar2 = *pcVar6;
                pcVar6[(int)puVar7 + (0x28 - (int)acStack_bc)] = cVar2;
                pcVar6 = pcVar6 + 1;
              } while (cVar2 != '\0');
              *(int *)(param_3 + 0x4c) = *(int *)(param_3 + 0x4c) + 1;
              puVar9 = puVar7;
            }
          }
          else {
            do {
              if ((puVar7 == (undefined4 *)0x0) && (*(char *)(puVar9 + 10) == '\0')) {
                puVar7 = puVar9;
              }
              iVar4 = FUN_00668fb0();
            } while ((((iVar4 != 0) || (iVar4 = FUN_00668fb0(), iVar4 != 0)) ||
                     (iStack_e0 != puVar9[1])) &&
                    (puVar9 = puVar9 + 0x41, puVar9 != *(undefined4 **)(param_3 + 0x2c)));
            if (puVar9 == puVar3) goto LAB_00669203;
          }
          if (puVar9 != *(undefined4 **)(param_3 + 0x2c)) {
            pcVar6 = acStack_7c;
            do {
              cVar2 = *pcVar6;
              pcVar6[(int)puVar9 + (0x68 - (int)acStack_7c)] = cVar2;
              pcVar6 = pcVar6 + 1;
            } while (cVar2 != '\0');
            DVar5 = GetTickCount();
            puVar9[0x3f] = uStack_10c;
            puVar9[0x38] = DVar5 + 1000 + (uint)bStack_e1 * 2000;
            puVar9[0x3d] = CONCAT31(CONCAT21(CONCAT11(uStack_104,uStack_103),uStack_102),uStack_101)
            ;
            puVar9[0x3e] = CONCAT31(CONCAT21(CONCAT11(uStack_f0,uStack_ef),uStack_ee),uStack_ed);
            FUN_00662490(&local_108,puVar9 + 0x39,0x10);
            *(int *)(param_3 + 0x4c) = *(int *)(param_3 + 0x4c) + 1;
          }
        }
      }
      iVar4 = *(int *)(param_3 + 0x38);
    }
    DVar5 = GetTickCount();
    iVar4 = *(int *)(param_3 + 0x28);
    if (iVar4 != *(int *)(param_3 + 0x2c)) {
      do {
        if ((*(char *)(iVar4 + 0x28) != '\0') &&
           (((*(char *)(iVar4 + 0x68) == '\0' || (*(uint *)(iVar4 + 0xe0) == 0)) ||
            (*(uint *)(iVar4 + 0xe0) < DVar5)))) {
          *(undefined1 *)(iVar4 + 0x28) = 0;
          *(undefined1 *)(iVar4 + 8) = 0;
          *(int *)(param_3 + 0x4c) = *(int *)(param_3 + 0x4c) + 1;
        }
        iVar4 = iVar4 + 0x104;
      } while (iVar4 != *(int *)(param_3 + 0x2c));
    }
    piVar1 = (int *)(param_3 + 0x24);
    iVar4 = *piVar1;
    piVar11 = piVar1;
    while (iVar4 != 0) {
      iVar4 = *piVar11;
      if (*(int *)(iVar4 + 0xe0) == 0) {
        *piVar11 = *(int *)(iVar4 + 0x100);
        *(undefined1 *)(iVar4 + 0x68) = 0;
        FUN_00662e80(*(undefined4 *)(param_3 + 0x38),iVar4,0xe0,0,param_3 + 0x3c,0x10);
        FUN_00447030(iVar4);
      }
      else {
        piVar11 = (int *)(iVar4 + 0x100);
      }
      iVar4 = *piVar11;
    }
    DVar5 = GetTickCount();
    for (iVar4 = *piVar1; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x100)) {
      if (*(uint *)(iVar4 + 0xe0) < DVar5) {
        FUN_00662e80(*(undefined4 *)(param_3 + 0x38),iVar4,0xe0,0,param_3 + 0x3c,0x10);
        *(uint *)(iVar4 + 0xe0) = (uint)*(byte *)(iVar4 + 3) * 1000 + DVar5;
      }
    }
    FUN_00668df0(param_3);
  }
  return 0;
}

