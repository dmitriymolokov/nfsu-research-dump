/* Decompiled from Speed.exe @ 004ba530 */
/* Module: Career_Game */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ba530(int param_1)

{
  char *pcVar1;
  float fVar2;
  short sVar3;
  float *pfVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  char local_9c [8];
  char local_94 [8];
  char local_8c [32];
  undefined4 local_6c;
  undefined1 local_40;
  undefined4 local_3f;
  
  FUN_004bbc90();
  uVar6 = FUN_004ad6d0(*(undefined4 *)(*(int *)(param_1 + 0x48) + 0x18));
  FUN_00495f00(uVar6);
  if ((*(byte *)(*(int *)(*(int *)(param_1 + 0x48) + 0xc) + 0x74) & 4) == 0) {
    iVar7 = 0;
    do {
      iVar7 = iVar7 + 1;
      FUN_004f68c0(0x20,"Sprint_BG_%d",iVar7);
      puVar9 = &local_6c;
      cVar5 = (char)local_6c;
      while (cVar5 != '\0') {
        pcVar10 = (char *)((int)puVar9 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        cVar5 = *pcVar10;
      }
      if ((((*(int *)(param_1 + 0xc) == 0) || (iVar8 = FUN_004f65d0(), iVar8 == 0)) ||
          (iVar8 = FUN_004ffb70(), iVar8 == 0)) && (DAT_0073578c != 0)) {
        FUN_004ef050();
      }
      FUN_004f6910();
    } while (iVar7 < 5);
    pcVar10 = "TrackLength";
    do {
      pcVar1 = pcVar10 + 1;
      pcVar10 = pcVar10 + 1;
    } while (*pcVar1 != '\0');
    if ((((*(int *)(param_1 + 0xc) == 0) || (iVar7 = FUN_004f65d0(), iVar7 == 0)) ||
        (iVar7 = FUN_004ffb70(), iVar7 == 0)) && (DAT_0073578c != 0)) {
      FUN_004ef050();
    }
    FUN_004f6910();
  }
  else {
    iVar7 = 0;
    do {
      iVar7 = iVar7 + 1;
      FUN_004f68c0(0x20,"Sprint_BG_%d",iVar7);
      puVar9 = &local_6c;
      cVar5 = (char)local_6c;
      while (cVar5 != '\0') {
        pcVar10 = (char *)((int)puVar9 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        cVar5 = *pcVar10;
      }
      if (((((*(int *)(param_1 + 0xc) != 0) && (iVar8 = FUN_004f65d0(), iVar8 != 0)) &&
           (iVar8 = FUN_004ffb70(), iVar8 != 0)) ||
          ((DAT_0073578c != 0 && (iVar8 = FUN_004ef050(), iVar8 != 0)))) &&
         ((*(uint *)(iVar8 + 0x1c) = *(uint *)(iVar8 + 0x1c) & 0xfffffffe | 0x400000,
          *(int *)(iVar8 + 0x18) == 5 && (iVar8 = *(int *)(iVar8 + 0x5c), 0 < iVar8)))) {
        do {
          FUN_004f6970();
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    } while (iVar7 < 5);
    pcVar10 = "TrackLength";
    do {
      pcVar1 = pcVar10 + 1;
      pcVar10 = pcVar10 + 1;
    } while (*pcVar1 != '\0');
    if (((((*(int *)(param_1 + 0xc) != 0) && (iVar7 = FUN_004f65d0(), iVar7 != 0)) &&
         (iVar7 = FUN_004ffb70(), iVar7 != 0)) ||
        ((DAT_0073578c != 0 && (iVar7 = FUN_004ef050(), iVar7 != 0)))) &&
       ((*(uint *)(iVar7 + 0x1c) = *(uint *)(iVar7 + 0x1c) & 0xfffffffe | 0x400000,
        *(int *)(iVar7 + 0x18) == 5 && (iVar7 = *(int *)(iVar7 + 0x5c), 0 < iVar7)))) {
      do {
        FUN_004f6970();
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    if (DAT_007588f0 == 1) {
      iVar7 = FUN_0059fb80();
      if (iVar7 == 0) {
        iVar7 = FUN_0059fb80();
      }
      iVar8 = 8;
      pcVar10 = local_9c;
      do {
        cVar5 = pcVar10[iVar7 - (int)local_9c];
        iVar8 = iVar8 + -1;
        *pcVar10 = cVar5;
        if (cVar5 == '\0') break;
        pcVar10 = pcVar10 + 1;
      } while (iVar8 != 0);
      iVar7 = *(int *)(*(int *)(param_1 + 0x48) + 0xc);
      fVar2 = (float)*(int *)(iVar7 + 0x78);
      if (*(int *)(iVar7 + 0x78) < 0) {
        fVar2 = fVar2 + _DAT_006cc858;
      }
      fVar2 = fVar2 * _DAT_006cc8bc;
    }
    else {
      iVar7 = FUN_0059fb80();
      if (iVar7 == 0) {
        iVar7 = FUN_0059fb80();
      }
      iVar8 = 8;
      pcVar10 = local_9c;
      do {
        cVar5 = pcVar10[iVar7 - (int)local_9c];
        iVar8 = iVar8 + -1;
        *pcVar10 = cVar5;
        if (cVar5 == '\0') break;
        pcVar10 = pcVar10 + 1;
      } while (iVar8 != 0);
      iVar7 = *(int *)(*(int *)(param_1 + 0x48) + 0xc);
      fVar2 = (float)*(int *)(iVar7 + 0x78);
      if (*(int *)(iVar7 + 0x78) < 0) {
        fVar2 = fVar2 + _DAT_006cc858;
      }
      fVar2 = fVar2 * _DAT_006ccd30;
    }
    FUN_004f68c0(8,"%3.1f",(double)fVar2);
    pcVar10 = local_94;
    if ((DAT_006ee6f0 != 0) && (DAT_006ee6f0 != 7)) {
      while (local_94[0] != '\0') {
        if (*pcVar10 == '.') {
          *pcVar10 = ',';
        }
        pcVar1 = pcVar10 + 1;
        pcVar10 = pcVar10 + 1;
        local_94[0] = *pcVar1;
      }
    }
    iVar7 = FUN_0059fb80();
    if (iVar7 == 0) {
      iVar7 = FUN_0059fb80();
    }
    FUN_004f67f0("%s %s %s",iVar7,local_94,local_9c);
  }
  iVar7 = *(int *)(param_1 + 0x48);
  if (*(int *)(iVar7 + 0x18) == 0) {
    uVar13 = CONCAT44((int)*(short *)(*(int *)(iVar7 + 0xc) + 0x6c),"TRACK_IMAGE_%d");
  }
  else {
    uVar13 = CONCAT44((int)*(short *)(*(int *)(iVar7 + 0xc) + 0x6c),"REVERSE_TRACK_IMAGE_%d");
  }
  iVar7 = FUN_004f42f0(uVar13);
  for (puVar9 = *(undefined4 **)(param_1 + 0x50); puVar9 != (undefined4 *)(param_1 + 0x50);
      puVar9 = (undefined4 *)*puVar9) {
    if (iVar7 == puVar9[2]) {
      if (puVar9 != *(undefined4 **)(param_1 + 0x58)) {
        *(undefined4 **)(param_1 + 0x58) = puVar9;
        fVar2 = (float)puVar9[4];
        pfVar4 = *(float **)(param_1 + 0x5c);
        pfVar4[2] = -fVar2;
        if (-fVar2 != *pfVar4) {
          *(undefined2 *)(pfVar4 + 0xb) = 2;
        }
      }
      FUN_004f87f0();
      _DAT_007460f8 = DAT_0073ad3c;
      break;
    }
  }
  pcVar10 = "Track_Reverse";
  if (*(int *)(*(int *)(param_1 + 0x48) + 0x18) == 1) {
    do {
      pcVar1 = pcVar10 + 1;
      pcVar10 = pcVar10 + 1;
    } while (*pcVar1 != '\0');
    if (((((*(int *)(param_1 + 0xc) != 0) && (iVar7 = FUN_004f65d0(), iVar7 != 0)) &&
         (iVar7 = FUN_004ffb70(), iVar7 != 0)) ||
        ((DAT_0073578c != 0 && (iVar7 = FUN_004ef050(), iVar7 != 0)))) &&
       ((*(uint *)(iVar7 + 0x1c) = *(uint *)(iVar7 + 0x1c) & 0xfffffffe | 0x400000,
        *(int *)(iVar7 + 0x18) == 5 && (iVar7 = *(int *)(iVar7 + 0x5c), 0 < iVar7)))) {
      do {
        FUN_004f6970();
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  else {
    do {
      pcVar1 = pcVar10 + 1;
      pcVar10 = pcVar10 + 1;
    } while (*pcVar1 != '\0');
    if ((((*(int *)(param_1 + 0xc) == 0) || (iVar7 = FUN_004f65d0(), iVar7 == 0)) ||
        (iVar7 = FUN_004ffb70(), iVar7 == 0)) && (DAT_0073578c != 0)) {
      FUN_004ef050();
    }
    FUN_004f6910();
  }
  iVar7 = *(int *)(param_1 + 0x48);
  if (((DAT_00735e74 == 0) && (cVar5 = FUN_0059e510(), cVar5 == '\0')) &&
     (*(char *)(iVar7 + 0x10) != '\0')) {
    if (((((*(int *)(param_1 + 0xc) != 0) && (iVar7 = FUN_004f65d0(), iVar7 != 0)) &&
         (iVar7 = FUN_004ffb70(), iVar7 != 0)) ||
        ((DAT_0073578c != 0 && (iVar7 = FUN_004ef050(), iVar7 != 0)))) &&
       ((*(uint *)(iVar7 + 0x1c) = *(uint *)(iVar7 + 0x1c) & 0xfffffffe | 0x400000,
        *(int *)(iVar7 + 0x18) == 5 && (iVar7 = *(int *)(iVar7 + 0x5c), 0 < iVar7)))) {
      do {
        FUN_004f6970();
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  else {
    if ((((*(int *)(param_1 + 0xc) == 0) || (iVar7 = FUN_004f65d0(), iVar7 == 0)) ||
        (iVar7 = FUN_004ffb70(), iVar7 == 0)) && (DAT_0073578c != 0)) {
      FUN_004ef050();
    }
    FUN_004f6910();
  }
  iVar7 = *(int *)(param_1 + 0x48);
  sVar3 = *(short *)(*(int *)(iVar7 + 0xc) + 0x6c);
  iVar8 = 0;
  do {
    iVar11 = 0;
    pcVar10 = (char *)((int)&DAT_007677b8 + 2);
    do {
      if (((*(short *)(pcVar10 + -2) == sVar3) && ((int)pcVar10[1] == *(int *)(iVar7 + 0x18))) &&
         (*pcVar10 == iVar8)) {
        puVar9 = &DAT_007677b8 + iVar11 * 2;
        goto LAB_004babce;
      }
      pcVar10 = pcVar10 + 8;
      iVar11 = iVar11 + 1;
    } while ((int)pcVar10 < 0x7681ba);
    puVar9 = (undefined4 *)0x0;
LAB_004babce:
    (&local_6c)[iVar8] = puVar9;
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0xb);
  iVar8 = 0;
  iVar11 = 0;
  do {
    if ((&local_6c)[iVar11] != 0) {
      iVar8 = (&local_6c)[iVar11];
    }
    iVar11 = iVar11 + 1;
  } while (iVar11 < 0xb);
  local_40 = 0;
  puVar9 = &local_3f;
  for (iVar11 = 0xf; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  *(undefined2 *)puVar9 = 0;
  *(undefined1 *)((int)puVar9 + 2) = 0;
  if (iVar8 == 0) {
    iVar8 = *(int *)(iVar7 + 0xc);
    if ((*(byte *)(iVar8 + 0x74) & 8) == 0) {
      FUN_00674898();
      goto LAB_004badca;
    }
    iVar11 = FUN_0059fb80();
    if (iVar11 == 0) {
      iVar11 = FUN_0059fb80();
    }
    iVar12 = 0x20;
    pcVar10 = local_8c;
    do {
      cVar5 = pcVar10[iVar11 - (int)local_8c];
      iVar12 = iVar12 + -1;
      *pcVar10 = cVar5;
      if (cVar5 == '\0') break;
      pcVar10 = pcVar10 + 1;
    } while (iVar12 != 0);
    if (*(int *)(iVar7 + 0x18) == 0) {
      iVar7 = FUN_0059fb80();
      if (iVar7 == 0) {
        iVar7 = FUN_0059fb80();
      }
      uVar6 = *(undefined4 *)(iVar8 + 0x84);
    }
    else {
      iVar7 = FUN_0059fb80();
      if (iVar7 == 0) {
        iVar7 = FUN_0059fb80();
      }
      uVar6 = *(undefined4 *)(iVar8 + 0x88);
    }
    FUN_004f68c0(0x40,"%s %d (%d %s)",iVar7,uVar6,4,local_8c);
  }
  else if ((*(byte *)(*(int *)(iVar7 + 0xc) + 0x74) & 8) == 0) {
LAB_004badca:
    FUN_00586580();
    iVar7 = FUN_0059fb80();
    if (iVar7 == 0) {
      iVar7 = FUN_0059fb80();
    }
    FUN_004f68c0(0x40,"%s %s",iVar7,&local_6c);
  }
  else {
    if (*(char *)(iVar8 + 2) == '\x01') {
      iVar7 = FUN_0059fb80();
      if (iVar7 == 0) {
        iVar7 = FUN_0059fb80();
      }
      iVar11 = 0x20;
      pcVar10 = local_8c;
      do {
        cVar5 = pcVar10[iVar7 - (int)local_8c];
        iVar11 = iVar11 + -1;
        *pcVar10 = cVar5;
        if (cVar5 == '\0') break;
        pcVar10 = pcVar10 + 1;
      } while (iVar11 != 0);
    }
    else {
      iVar7 = FUN_0059fb80();
      if (iVar7 == 0) {
        iVar7 = FUN_0059fb80();
      }
      iVar11 = 0x20;
      pcVar10 = local_8c;
      do {
        cVar5 = pcVar10[iVar7 - (int)local_8c];
        iVar11 = iVar11 + -1;
        *pcVar10 = cVar5;
        if (cVar5 == '\0') break;
        pcVar10 = pcVar10 + 1;
      } while (iVar11 != 0);
    }
    iVar7 = FUN_0059fb80();
    if (iVar7 == 0) {
      iVar7 = FUN_0059fb80();
    }
    FUN_004f68c0(0x40,"%s %d (%d %s)",iVar7,*(undefined4 *)(iVar8 + 4),(int)*(char *)(iVar8 + 2),
                 local_8c);
  }
  iVar7 = *(int *)(param_1 + 0x48);
  if (((DAT_00735e74 == 0) && (cVar5 = FUN_0059e510(), cVar5 == '\0')) &&
     (*(char *)(iVar7 + 0x10) != '\0')) {
    iVar7 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar8 = FUN_004f3f90();
      iVar7 = DAT_0073578c;
      if ((iVar8 == 0) || (iVar8 = *(int *)(iVar8 + 0x18), iVar8 == 0)) {
        if (DAT_0073578c == 0) goto LAB_004baee4;
        if ((*(int *)(DAT_0073578c + 8) == 0) ||
           ((iVar8 = FUN_004fd1e0(), iVar8 == 0 && (iVar8 = FUN_004fd1e0(), iVar8 == 0))))
        goto LAB_004baeb9;
      }
      if ((iVar8 != 0) && (iVar8 = FUN_004ffb70(), iVar7 = DAT_0073578c, iVar8 != 0))
      goto LAB_004baee4;
    }
LAB_004baeb9:
    if (iVar7 != 0) {
      FUN_004ef050();
      FUN_004f6910();
      return;
    }
LAB_004baee4:
    FUN_004f6910();
    return;
  }
  iVar7 = DAT_0073578c;
  if (*(int *)(param_1 + 0xc) == 0) {
LAB_004baf6d:
    if ((iVar7 == 0) || (iVar8 = FUN_004ef050(), iVar8 == 0)) goto LAB_004bafb4;
  }
  else {
    iVar8 = FUN_004f3f90();
    iVar7 = DAT_0073578c;
    if ((iVar8 == 0) || (iVar8 = *(int *)(iVar8 + 0x18), iVar8 == 0)) {
      if (DAT_0073578c == 0) goto LAB_004bafb4;
      if ((*(int *)(DAT_0073578c + 8) == 0) ||
         ((iVar8 = FUN_004fd1e0(), iVar8 == 0 && (iVar8 = FUN_004fd1e0(), iVar8 == 0))))
      goto LAB_004baf6d;
    }
    if ((iVar8 == 0) || (iVar8 = FUN_004ffb70(), iVar7 = DAT_0073578c, iVar8 == 0))
    goto LAB_004baf6d;
  }
  *(uint *)(iVar8 + 0x1c) = *(uint *)(iVar8 + 0x1c) & 0xfffffffe | 0x400000;
  if ((*(int *)(iVar8 + 0x18) == 5) && (iVar7 = *(int *)(iVar8 + 0x5c), 0 < iVar7)) {
    do {
      FUN_004f6970();
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
LAB_004bafb4:
  FUN_004f6850();
  return;
}

