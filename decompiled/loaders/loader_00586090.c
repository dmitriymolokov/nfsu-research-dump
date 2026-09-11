/* spd-match: far pct=1.84 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2143 */
#include "ghidra_compat.h"

int __cdecl FUN_00567cc0();
int __cdecl FUN_00567ce0();
int __cdecl FUN_00567d00();
extern unsigned char *DAT_006ee6f0;
extern void LAB_00586461(void);

void FUN_00586090(char *param_1,uint param_2,int param_3,int param_4,int param_5,int param_6)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  
  iVar2 = DAT_006ee6f0 + -1;
  if (param_3 == 0) {
    if (param_4 == 0) {
      if (param_5 == 0) {
        switch(iVar2) {
        case 0:
        case 2:
          break;
        case 1:
        case 3:
        case 5:
          break;
        default:;
        }
        FUN_00567ce0();
        iVar2 = 2;
        if ((param_2 & 4) == 0) {
          pcVar4 = param_1 + 7;
          do {
            *pcVar4 = (char)(param_6 % 10) + '0';
            pcVar4 = pcVar4 + -1;
            iVar2 = iVar2 + -1;
            param_6 = param_6 / 10;
          } while (iVar2 != 0);
        }
        else {
          param_1[1] = '0';
          pcVar4 = param_1 + 4;
          iVar5 = 0;
          do {
            *pcVar4 = (char)(iVar5 % 10) + '0';
            pcVar4 = pcVar4 + -1;
            iVar2 = iVar2 + -1;
            iVar5 = iVar5 / 10;
          } while (iVar2 != 0);
          pcVar4 = param_1 + 7;
          iVar2 = 2;
          do {
            *pcVar4 = (char)(param_6 % 10) + '0';
            pcVar4 = pcVar4 + -1;
            iVar2 = iVar2 + -1;
            param_6 = param_6 / 10;
          } while (iVar2 != 0);
        }
      }
      else {
        switch(iVar2) {
        case 0:
        case 2:
          break;
        case 1:
        case 3:
        case 5:
          break;
        default:;
        }
        FUN_00567ce0();
        if ((param_2 & 4) == 0) {
          pcVar4 = param_1 + 4;
          iVar2 = 2;
          do {
            if ((param_5 % 10 == 0) && (param_5 < 10)) {
              *pcVar4 = ' ';
            }
            else {
              *pcVar4 = (char)(param_5 % 10) + '0';
            }
            pcVar4 = pcVar4 + -1;
            iVar2 = iVar2 + -1;
            param_5 = param_5 / 10;
          } while (iVar2 != 0);
          pcVar4 = param_1 + 7;
          iVar2 = 2;
          do {
            *pcVar4 = (char)(param_6 % 10) + '0';
            pcVar4 = pcVar4 + -1;
            iVar2 = iVar2 + -1;
            param_6 = param_6 / 10;
          } while (iVar2 != 0);
        }
        else {
          param_1[1] = '0';
          pcVar4 = param_1 + 4;
          iVar2 = 2;
          do {
            *pcVar4 = (char)(param_5 % 10) + '0';
            pcVar4 = pcVar4 + -1;
            iVar2 = iVar2 + -1;
            param_5 = param_5 / 10;
          } while (iVar2 != 0);
          pcVar4 = param_1 + 7;
          iVar2 = 2;
          do {
            *pcVar4 = (char)(param_6 % 10) + '0';
            pcVar4 = pcVar4 + -1;
            iVar2 = iVar2 + -1;
            param_6 = param_6 / 10;
          } while (iVar2 != 0);
        }
      }
      goto LAB_00586461;
    }
    switch(iVar2) {
    case 0:
    case 2:
      if ((param_2 & 4) == 0) {
        pcVar4 = "--\'--\"--";
      }
      else {
        pcVar4 = "00\'00\"00";
      }
      break;
    case 1:
    case 3:
    case 5:
      if ((param_2 & 4) == 0) {
        pcVar4 = "--:--:--";
      }
      else {
        pcVar4 = "00:00:00";
      }
      break;
    default:
      pcVar4 = "00:00.00";
      if ((param_2 & 4) == 0) {
        pcVar4 = "--:--.--";
      }
    }
    cVar1 = *pcVar4;
    *param_1 = cVar1;
    if (cVar1 != '\0') {
      pcVar3 = param_1;
      do {
        cVar1 = pcVar3[(int)(pcVar4 + (1 - (int)param_1))];
        pcVar3 = pcVar3 + 1;
        *pcVar3 = cVar1;
      } while (cVar1 != '\0');
    }
    pcVar4 = param_1 + 1;
    iVar5 = 2;
    iVar2 = param_4;
    do {
      if ((iVar2 % 10 == 0) && (iVar2 < 10)) {
        *pcVar4 = ' ';
      }
      else {
        *pcVar4 = (char)(iVar2 % 10) + '0';
      }
      pcVar4 = pcVar4 + -1;
      iVar5 = iVar5 + -1;
      iVar2 = iVar2 / 10;
    } while (iVar5 != 0);
    pcVar4 = param_1 + 4;
    iVar2 = 2;
    do {
      *pcVar4 = (char)(param_5 % 10) + '0';
      pcVar4 = pcVar4 + -1;
      iVar2 = iVar2 + -1;
      param_5 = param_5 / 10;
    } while (iVar2 != 0);
    pcVar4 = param_1 + 7;
    iVar2 = 2;
    do {
      *pcVar4 = (char)(param_6 % 10) + '0';
      pcVar4 = pcVar4 + -1;
      iVar2 = iVar2 + -1;
      param_6 = param_6 / 10;
    } while (iVar2 != 0);
    if (((param_2 & 3) == 0) || (param_4 < 10)) goto LAB_00586461;
    FUN_00567cc0();
  }
  else {
    switch(iVar2) {
    case 0:
    case 2:
      if ((param_2 & 4) == 0) {
        pcVar4 = "--h:--\'--\"";
      }
      else {
        pcVar4 = "00h:00\'00\"";
      }
      break;
    default:
      pcVar4 = "00h:00:00";
      if ((param_2 & 4) == 0) {
        pcVar4 = "--h:--:--";
      }
    }
    cVar1 = *pcVar4;
    *param_1 = cVar1;
    if (cVar1 != '\0') {
      pcVar3 = param_1;
      do {
        cVar1 = pcVar3[(int)(pcVar4 + (1 - (int)param_1))];
        pcVar3 = pcVar3 + 1;
        *pcVar3 = cVar1;
      } while (cVar1 != '\0');
    }
    pcVar4 = param_1 + 1;
    iVar5 = 2;
    iVar2 = param_3;
    do {
      if ((iVar2 % 10 == 0) && (iVar2 < 10)) {
        *pcVar4 = ' ';
      }
      else {
        *pcVar4 = (char)(iVar2 % 10) + '0';
      }
      pcVar4 = pcVar4 + -1;
      iVar5 = iVar5 + -1;
      iVar2 = iVar2 / 10;
    } while (iVar5 != 0);
    pcVar4 = param_1 + 5;
    iVar2 = 2;
    do {
      *pcVar4 = (char)(param_4 % 10) + '0';
      pcVar4 = pcVar4 + -1;
      iVar2 = iVar2 + -1;
      param_4 = param_4 / 10;
    } while (iVar2 != 0);
    pcVar4 = param_1 + 8;
    iVar2 = 2;
    do {
      *pcVar4 = (char)(param_5 % 10) + '0';
      pcVar4 = pcVar4 + -1;
      iVar2 = iVar2 + -1;
      param_5 = param_5 / 10;
    } while (iVar2 != 0);
    if (((param_2 & 3) == 0) || (param_3 < 10)) goto LAB_00586461;
    iVar2 = 0;
    cVar1 = *param_1;
    while (cVar1 != '\0') {
      iVar5 = iVar2 + 1;
      iVar2 = iVar2 + 1;
      cVar1 = param_1[iVar5];
    }
  }
  FUN_00567d00();
  FUN_00567d00();
LAB_00586461:
  if ((param_2 & 1) == 0) {
    if ((param_2 & 2) != 0) {
      *param_1 = '+';
    }
    return;
  }
  *param_1 = '-';
  return;
}
