/* Decompiled from Speed.exe @ 00563550 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void FUN_00563550(void)

{
  int *piVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  void *_Memory;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_EDI + 0x2ee78) = 0;
  *(undefined4 *)(unaff_EDI + 0x2ee74) = 0;
  puVar3 = (undefined1 *)(unaff_EDI + 0x74);
  iVar6 = 0x5dc;
  do {
    *puVar3 = 0;
    puVar3 = puVar3 + 0x80;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  switch(DAT_006ee6f0) {
  case 1:
    pcVar8 = "LANGUAGES\\agree.fre";
    break;
  case 2:
    pcVar8 = "LANGUAGES\\agree.ger";
    break;
  case 3:
    pcVar8 = "LANGUAGES\\agree.ita";
    break;
  case 4:
    pcVar8 = "LANGUAGES\\agree.spa";
    break;
  case 5:
    pcVar8 = "LANGUAGES\\agree.dut";
    break;
  case 6:
    pcVar8 = "LANGUAGES\\agree.swe";
    break;
  case 7:
    pcVar8 = "LANGUAGES\\agree.kor";
    break;
  case 8:
    pcVar8 = "LANGUAGES\\agree.chi";
    break;
  default:
    pcVar8 = "LANGUAGES\\agree.eng";
  }
  if (DAT_00734998 == 0) {
    pcVar8 = "LANGUAGES\\agree.usa";
  }
  puVar4 = (undefined4 *)FUN_00594c60(pcVar8,0,1);
  if (puVar4 != (undefined4 *)0x0) {
    iVar6 = puVar4[1];
    if ((int)puVar4[7] < 1) {
      if (-1 < (int)puVar4[1]) {
        if (puVar4[4] == 0) {
          FUN_0063c2c0(puVar4[3],100);
        }
        else {
          piVar1 = (int *)(puVar4[4] + 8);
          *piVar1 = *piVar1 + -1;
        }
        puVar4[1] = 0xffffffff;
      }
      iVar7 = DAT_00734484;
      iVar5 = *(int *)(DAT_00734484 + 0x18);
      *puVar4 = *(undefined4 *)(DAT_00734484 + 0x10);
      *(int *)(iVar7 + 0x18) = iVar5 + -1;
      *(undefined4 **)(iVar7 + 0x10) = puVar4;
    }
    else {
      puVar4[5] = 1;
    }
    if (iVar6 != -1) {
      puVar4 = (undefined4 *)FUN_00594c60(pcVar8,1,1);
      if ((puVar4 == (undefined4 *)0x0) || (iVar6 = puVar4[1], iVar6 < 0)) {
        iVar6 = 0;
      }
      _Memory = _malloc(iVar6 + 1);
      FUN_00594dd0(iVar6);
      if (puVar4 != (undefined4 *)0x0) {
        if ((int)puVar4[7] < 1) {
          if (-1 < (int)puVar4[1]) {
            if (puVar4[4] == 0) {
              FUN_0063c2c0(puVar4[3],100);
            }
            else {
              piVar1 = (int *)(puVar4[4] + 8);
              *piVar1 = *piVar1 + -1;
            }
            puVar4[1] = 0xffffffff;
          }
          iVar7 = DAT_00734484;
          iVar5 = *(int *)(DAT_00734484 + 0x18);
          *puVar4 = *(undefined4 *)(DAT_00734484 + 0x10);
          *(int *)(iVar7 + 0x18) = iVar5 + -1;
          *(undefined4 **)(iVar7 + 0x10) = puVar4;
        }
        else {
          puVar4[5] = 1;
        }
      }
      iVar5 = 0;
      iVar7 = 0;
      if (0 < iVar6) {
        do {
          cVar2 = *(char *)(iVar7 + (int)_Memory);
          if (cVar2 == '\n') {
            *(undefined1 *)(*(int *)(unaff_EDI + 0x2ee74) * 0x80 + iVar5 + 0x74 + unaff_EDI) = 0;
            *(int *)(unaff_EDI + 0x2ee74) = *(int *)(unaff_EDI + 0x2ee74) + 1;
            iVar5 = 0;
          }
          else if (cVar2 != '\r') {
            if (cVar2 == '\0') {
              *(undefined1 *)(*(int *)(unaff_EDI + 0x2ee74) * 0x80 + iVar5 + 0x74 + unaff_EDI) = 0;
              *(int *)(unaff_EDI + 0x2ee74) = *(int *)(unaff_EDI + 0x2ee74) + 1;
              iVar5 = 0;
              break;
            }
            if (iVar5 < 0x7f) {
              *(char *)(*(int *)(unaff_EDI + 0x2ee74) * 0x80 + iVar5 + 0x74 + unaff_EDI) = cVar2;
              iVar5 = iVar5 + 1;
            }
            else {
              *(undefined1 *)(*(int *)(unaff_EDI + 0x2ee74) * 0x80 + iVar5 + 0x74 + unaff_EDI) = 0;
            }
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar6);
      }
      *(undefined1 *)(*(int *)(unaff_EDI + 0x2ee74) * 0x80 + iVar5 + 0x74 + unaff_EDI) = 0;
      *(int *)(unaff_EDI + 0x2ee74) = *(int *)(unaff_EDI + 0x2ee74) + 1;
      _free(_Memory);
    }
  }
  return;
}

