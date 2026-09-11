/* Decompiled from Speed.exe @ 006525f0 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_006525f0(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = DAT_00713f48 + param_1 * 0x8c;
  iVar5 = 0;
  iVar6 = -1;
  if (*(char *)(iVar3 + 0x26) == '\0') {
    *(undefined1 *)(iVar3 + 0x69) = 0;
    *(undefined1 *)(iVar3 + 0x26) = 0;
    *(undefined1 *)(iVar3 + 0x27) = 0;
    *(undefined4 *)(iVar3 + 0x2c) = DAT_00713eec;
    return;
  }
  iVar4 = 0;
  if (0 < DAT_00713ee8) {
    pcVar2 = (char *)(DAT_00713f48 + 0x69);
    do {
      if ((((pcVar2[-0x43] == *(char *)(iVar3 + 0x26)) && (-1 < *(int *)(pcVar2 + -0x69))) &&
          (*pcVar2 != '\0')) && (iVar5 = iVar5 + 1, pcVar2[-0x42] != '\0')) {
        iVar6 = iVar4;
      }
      iVar4 = iVar4 + 1;
      pcVar2 = pcVar2 + 0x8c;
    } while (iVar4 < DAT_00713ee8);
  }
  if (iVar5 != 1) {
    iVar4 = iVar6 * 0x8c;
    cVar1 = *(char *)(iVar4 + 0x69 + DAT_00713f48);
    if (((cVar1 == '\x02') && (param_1 != iVar6)) && (iVar5 == 2)) {
      *(undefined1 *)(iVar3 + 0x69) = 0;
      *(undefined1 *)(iVar3 + 0x26) = 0;
      *(undefined1 *)(iVar3 + 0x27) = 0;
      *(undefined4 *)(iVar3 + 0x2c) = DAT_00713eec;
      *(undefined1 *)(iVar4 + 0x69 + DAT_00713f48) = 0;
      *(undefined1 *)(iVar4 + 0x26 + DAT_00713f48) = 0;
      *(undefined1 *)(iVar4 + 0x27 + DAT_00713f48) = 0;
      *(undefined4 *)(iVar4 + 0x2c + DAT_00713f48) = DAT_00713eec;
      return;
    }
    if ((cVar1 == '\x01') && (param_1 == iVar6)) {
      *(undefined1 *)(iVar4 + 0x69 + DAT_00713f48) = 2;
      return;
    }
  }
  *(undefined1 *)(iVar3 + 0x69) = 0;
  *(undefined1 *)(iVar3 + 0x26) = 0;
  *(undefined1 *)(iVar3 + 0x27) = 0;
  *(undefined4 *)(iVar3 + 0x2c) = DAT_00713eec;
  return;
}

