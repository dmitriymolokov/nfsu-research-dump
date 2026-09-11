/* Decompiled from Speed.exe @ 0066f600 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 FUN_0066f600(int param_1,uint *param_2)

{
  LPOVERLAPPED lpOverlapped;
  HANDLE hFile;
  bool bVar1;
  short sVar2;
  BOOL BVar3;
  DWORD DVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  
  uVar6 = *(uint *)(param_1 + 0x8f8);
  puVar11 = (uint *)(param_1 + 0xf8);
LAB_0066f61f:
  do {
    bVar1 = false;
LAB_0066f621:
    if ((bVar1) || ((int)uVar6 < 8)) {
      hFile = *(HANDLE *)(param_1 + 0x6c);
      lpOverlapped = (LPOVERLAPPED)(param_1 + 0x70);
      lpOverlapped->Internal = 0;
      *(undefined4 *)(param_1 + 0x74) = 0;
      *(undefined4 *)(param_1 + 0x78) = 0;
      *(undefined4 *)(param_1 + 0x7c) = 0;
      BVar3 = ReadFile(hFile,(char *)((int)puVar11 + uVar6),0x800 - uVar6,(LPDWORD)(param_1 + 0xac),
                       lpOverlapped);
      if ((BVar3 == 0) && (DVar4 = GetLastError(), DVar4 == 0x3e5)) {
        GetOverlappedResult(*(HANDLE *)(param_1 + 0x6c),lpOverlapped,(LPDWORD)(param_1 + 0xac),1);
      }
      if (*(int *)(param_1 + 0xac) != 0) {
        uVar6 = uVar6 + *(int *)(param_1 + 0xac);
        goto LAB_0066f61f;
      }
      DVar4 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x94),0);
      if (DVar4 == 0x102) {
LAB_0066f81f:
        *(uint *)(param_1 + 0x8f8) = uVar6;
        return 0;
      }
      lpOverlapped->Internal = 0;
      *(undefined4 *)(param_1 + 0x74) = 0;
      *(undefined4 *)(param_1 + 0x78) = 0;
      *(undefined4 *)(param_1 + 0x7c) = 0;
      BVar3 = WaitCommEvent(*(HANDLE *)(param_1 + 0x6c),(LPDWORD)(param_1 + 0xb0),
                            (LPOVERLAPPED)(param_1 + 0x84));
      if ((BVar3 == 0) && (DVar4 = GetLastError(), DVar4 == 0x3e5)) goto LAB_0066f81f;
      bVar1 = true;
      goto LAB_0066f621;
    }
    puVar7 = puVar11;
    if (((*(char *)puVar11 != 'G') || (*(char *)(param_1 + 0xf9) != 'S')) ||
       (*(byte *)(param_1 + 0xfa) != (byte)~*(byte *)(param_1 + 0xfb))) {
      do {
        puVar10 = puVar7;
        uVar6 = uVar6 - 1;
        if ((int)uVar6 < 1) goto LAB_0066f621;
        puVar7 = (uint *)((int)puVar10 + 1);
      } while (((*(char *)puVar7 != 'G') ||
               ((1 < (int)uVar6 && (*(char *)((int)puVar10 + 2) != 'S')))) ||
              ((3 < (int)uVar6 && (*(byte *)((int)puVar10 + 3) != (byte)~(byte)puVar10[1]))));
      if (0 < (int)uVar6) {
        puVar10 = puVar11;
        for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar10 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar10 = puVar10 + 1;
        }
        for (uVar8 = uVar6 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(char *)puVar10 = (char)*puVar7;
          puVar7 = (uint *)((int)puVar7 + 1);
          puVar10 = (uint *)((int)puVar10 + 1);
        }
      }
      goto LAB_0066f621;
    }
    uVar8 = (uint)*(byte *)(param_1 + 0xfa);
    uVar9 = uVar8 + 8;
    if ((int)uVar6 < (int)(uVar8 + 0x10)) {
      bVar1 = true;
      goto LAB_0066f621;
    }
    if (((*(char *)(uVar8 + 0xe + (int)puVar11) == '\r') &&
        (*(char *)(uVar8 + 0xf + (int)puVar11) == '\n')) &&
       (sVar2 = FUN_0066f5e0(),
       sVar2 == CONCAT11(*(char *)(uVar8 + 0xd + (int)puVar11),*(char *)(uVar8 + 0xc + (int)puVar11)
                        ))) {
      puVar10 = param_2 + 2;
      for (uVar5 = uVar9 >> 2; puVar7 = puVar7 + 1, uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar10 = *puVar7;
        puVar10 = puVar10 + 1;
      }
      for (uVar5 = uVar9 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(char *)puVar10 = (char)*puVar7;
        puVar7 = (uint *)((int)puVar7 + 1);
        puVar10 = (uint *)((int)puVar10 + 1);
      }
      *param_2 = uVar8;
      DVar4 = GetTickCount();
      uVar6 = (uVar6 - uVar9) - 8;
      param_2[1] = DVar4;
      *(uint *)(param_1 + 0x8f8) = uVar6;
      if (uVar6 != 0) {
        puVar7 = (uint *)(uVar8 + 0x10 + (int)puVar11);
        for (uVar9 = uVar6 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *puVar11 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar11 = puVar11 + 1;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(char *)puVar11 = (char)*puVar7;
          puVar7 = (uint *)((int)puVar7 + 1);
          puVar11 = (uint *)((int)puVar11 + 1);
        }
      }
      return 1;
    }
    *(char *)puVar11 = '\0';
  } while( true );
}

