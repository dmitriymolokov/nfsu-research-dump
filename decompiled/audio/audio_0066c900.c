/* Decompiled from Speed.exe @ 0066c900 */
/* Module: Audio */
/* Ghidra DecompileAll */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_0066c900(void)

{
  int iVar1;
  int iVar2;
  DWORD DVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint unaff_retaddr;
  uint uStack_488;
  int local_484;
  undefined4 local_480;
  undefined4 local_47c;
  undefined4 local_478;
  uint local_474;
  undefined4 local_470;
  int local_46c;
  int local_468;
  int iStack_464;
  uint local_460;
  uint local_45c;
  uint local_458;
  undefined4 local_454;
  undefined4 auStack_450 [134];
  uint uStack_238;
  uint uStack_234;
  int iStack_230;
  int iStack_22c;
  undefined4 auStack_228 [135];
  uint local_c;
  
  local_c = DAT_006eb720 ^ unaff_retaddr;
  local_47c = 0;
  local_478 = 0;
  local_474 = 0;
  local_470 = 0;
  local_484 = 0;
  local_480 = 0;
  local_46c = 0;
  local_460 = 0xffffffff;
  iVar1 = local_484;
  iVar2 = DAT_00717960;
  for (iVar4 = DAT_00717960; local_484 = iVar1, iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x68)) {
    local_484 = *(int *)(iVar4 + 0x6c);
    if ((local_484 != 0) && (local_484 != iVar1)) {
      local_468 = 0x10;
      local_468 = FUN_00662f00(local_484,&local_458,0x220,0,&local_47c,&local_468);
      iVar2 = DAT_00717960;
      iVar1 = local_484;
      if (0 < local_468) {
        local_460 = local_468 - 8;
        local_45c = (((local_474 & 0xff) << 8 | local_474 >> 8 & 0xff) << 8 |
                    local_474 >> 0x10 & 0xff) << 8 | local_474 >> 0x18;
        local_480 = 1;
        break;
      }
    }
    local_484 = iVar1;
    iVar1 = local_484;
  }
  iVar1 = 0;
  iVar4 = 0;
  for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x68)) {
    DVar3 = GetTickCount();
    if ((((local_46c == 0) && (local_484 == *(int *)(iVar2 + 0x6c))) &&
        (*(int *)(iVar2 + 0x80) == 3)) && (local_460 == 0)) {
      if ((local_454 != 0) && (local_458 == 1)) {
        local_46c = iVar2;
      }
LAB_0066ca39:
      if (((*(int *)(iVar2 + 0x80) != 3) && (*(int *)(iVar2 + 0x80) != 5)) &&
         ((local_484 == *(int *)(iVar2 + 0x6c) &&
          (iVar4 = FUN_006623c0(iVar2 + 0x70,&local_47c), iVar4 == 0)))) {
        *(uint *)(iVar2 + 0x5c) = *(int *)(iVar2 + 0x5c) + local_460;
        *(int *)(iVar2 + 100) = *(int *)(iVar2 + 100) + 1;
        if (((local_458 == 1) || (local_458 == 2)) || (local_458 == 3)) {
          FUN_0066c1a0();
        }
        else if (*(int *)(iVar2 + 0x80) == 4) {
          if (local_458 == 4) {
            *(uint *)(iVar2 + 200) = local_45c;
            FUN_0066c5d0();
          }
          else if (local_458 < 0x10000001) {
            *(uint *)(iVar2 + 200) = local_45c;
            FUN_0066c5d0();
            FUN_0066c680(&local_460);
          }
          else {
            iStack_464 = *(int *)(iVar2 + 0x9c);
            uStack_488 = local_458 >> 0x1c;
            iStack_230 = (local_458 & 0xfffffff) - uStack_488;
            uStack_234 = local_45c;
            iStack_22c = local_454;
            *(uint *)(iVar2 + 200) = local_45c;
            do {
              uStack_238 = local_460;
              if (0 < (int)uStack_488) {
                iVar4 = local_460 - 1;
                local_460 = local_460 - 1;
                uStack_238 = (uint)*(byte *)((int)auStack_450 + iVar4);
              }
              local_460 = local_460 - uStack_238;
              puVar5 = (undefined4 *)((int)auStack_450 + local_460);
              puVar6 = auStack_228;
              for (uVar7 = uStack_238 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                *puVar6 = *puVar5;
                puVar5 = puVar5 + 1;
                puVar6 = puVar6 + 1;
              }
              for (uVar7 = uStack_238 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
                puVar5 = (undefined4 *)((int)puVar5 + 1);
                puVar6 = (undefined4 *)((int)puVar6 + 1);
              }
              FUN_0066c5d0();
              iVar4 = FUN_0066c680(&uStack_238);
              if (iVar4 < 0) {
                uStack_488 = 0;
              }
              else if ((0 < (int)uStack_488) && (iStack_464 != *(int *)(iVar2 + 0x9c))) {
                iStack_464 = *(int *)(iVar2 + 0x9c);
              }
              uStack_488 = uStack_488 - 1;
              iStack_230 = iStack_230 + 1;
            } while (-1 < (int)uStack_488);
          }
        }
        local_460 = 0xffffffff;
      }
    }
    else if (-1 < (int)local_460) goto LAB_0066ca39;
    if ((*(int *)(iVar2 + 0x80) == 2) && (1000 < DVar3 - *(int *)(iVar2 + 0xc4))) {
      FUN_0066c220();
    }
    if (*(int *)(iVar2 + 0x80) == 4) {
      if (*(int *)(iVar2 + 0xb8) != *(int *)(iVar2 + 0xb0)) {
        FUN_0066c2a0();
      }
      if (((*(int *)(iVar2 + 0x80) == 4) && (120000 < DVar3 - *(int *)(iVar2 + 200))) &&
         (DVar3 - *(int *)(iVar2 + 0xc4) < 2000)) {
        FUN_0066c120();
      }
    }
    if (((*(int *)(iVar2 + 0x80) == 3) && (*(short *)(iVar2 + 0x70) == 2)) &&
       (*(int *)(iVar2 + 0xc4) + 1000U < DVar3)) {
      FUN_0066c7c0();
    }
    if ((*(int *)(iVar2 + 0x208) == 0) && (*(int *)(iVar2 + 0xcc) + 0xfaU < DVar3)) {
      *(DWORD *)(iVar2 + 0xcc) = DVar3;
      *(undefined4 *)(iVar2 + 0x208) = 4;
    }
    if ((*(int *)(iVar2 + 0x204) == 0) && (*(int *)(iVar2 + 0x208) != 0)) {
      *(int *)(iVar2 + 0x204) = *(int *)(iVar2 + 0x204) + 1;
      if (*(code **)(iVar2 + 0x20c) != (code *)0x0) {
        (**(code **)(iVar2 + 0x20c))(iVar2,*(int *)(iVar2 + 0x208));
      }
      *(int *)(iVar2 + 0x204) = *(int *)(iVar2 + 0x204) + -1;
      *(undefined4 *)(iVar2 + 0x208) = 0;
      DVar3 = GetTickCount();
    }
    if (((*(int *)(iVar2 + 0x80) == 4) && (*(int *)(iVar2 + 0xb8) == *(int *)(iVar2 + 0xb0))) &&
       ((((uVar7 = DVar3 - *(int *)(iVar2 + 0xc4), 100 < uVar7 &&
          ((*(int *)(iVar2 + 0xa0) != *(int *)(iVar2 + 0x9c) ||
           (*(int *)(iVar2 + 0xb0) != *(int *)(iVar2 + 0xb4))))) || (0x9c4 < uVar7)) ||
        (0x7ff < *(int *)(iVar2 + 0xa4))))) {
      *(undefined4 *)(iVar2 + 0xa4) = 0;
      FUN_0066c810();
    }
    iVar1 = local_46c;
    iVar4 = DAT_00717960;
  }
  if (((-1 < (int)local_460) && (local_458 == 5)) && ((short)local_47c == 2)) {
    for (; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x68)) {
      if (((*(int *)(iVar4 + 0x80) == 2) && (*(short *)(iVar4 + 0x70) == 2)) &&
         (local_484 == *(int *)(iVar4 + 0x6c))) {
        *(undefined4 *)(iVar4 + 0x70) = local_47c;
        *(undefined4 *)(iVar4 + 0x74) = local_478;
        *(uint *)(iVar4 + 0x78) = local_474;
        *(undefined4 *)(iVar4 + 0x7c) = local_470;
        break;
      }
    }
  }
  if ((iVar1 != 0) && (local_460 == 0)) {
    *(undefined4 *)(iVar1 + 0x70) = local_47c;
    *(undefined4 *)(iVar1 + 0x74) = local_478;
    *(uint *)(iVar1 + 0x78) = local_474;
    *(undefined4 *)(iVar1 + 0x7c) = local_470;
    *(int *)(iVar1 + 0x84) = local_454;
    *(undefined4 *)(iVar1 + 0x80) = 4;
    FUN_0066c1a0();
  }
  return local_480;
}

