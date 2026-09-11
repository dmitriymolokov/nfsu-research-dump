/* spd-match: far pct=10.48 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_00418d10();
int __cdecl FUN_00419c20();
extern int DAT_00700fe8;
extern int DAT_0071d888;
extern int DAT_0071d890;
extern int DAT_0071d89c;
extern unsigned char *DAT_0071d8a8;
extern int DAT_0071d8ac;
extern unsigned char *DAT_0071d8b0;
extern unsigned char *DAT_0071d8b4;
extern unsigned char *DAT_0071d8b8;
extern unsigned char *DAT_0071d8bc;
extern unsigned char *DAT_0071d8c0;
extern unsigned char *DAT_0071d8c8;
extern int DAT_0071d8d8;
extern unsigned char *DAT_0071d958;
extern unsigned char *DAT_0071d95c;
extern unsigned char *DAT_0071d960;
extern unsigned char *DAT_0071d964;
extern unsigned char *DAT_0071d968;
extern unsigned char *DAT_0071d96c;
extern unsigned char *DAT_0071d970;
extern unsigned char *DAT_0071d978;
extern unsigned char *DAT_0071d97c;
extern unsigned char *DAT_0071d980;
extern unsigned char *DAT_0071d984;
extern unsigned char *DAT_0071d988;
extern unsigned char *DAT_0071d98c;
extern unsigned char *DAT_0071d990;
extern unsigned char *DAT_0071d998;
extern unsigned char *DAT_0071d99c;
extern unsigned char *DAT_0071d9a0;
extern unsigned char *DAT_0071d9a4;
extern unsigned char *DAT_0071d9a8;
extern unsigned char *DAT_0071d9ac;
extern unsigned char *DAT_0071d9b0;
extern int DAT_0071d9b8;
extern int DAT_0071d9bc;
extern int DAT_0071d9c0;
extern int DAT_0071d9cc;
extern int DAT_0071dad8;
extern int DAT_0073633c;
int unaff_retaddr;

int FUN_00419220(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  undefined4 unaff_EBP;
  int iVar4;
  int unaff_ESI;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  bool bVar8;
  int unaff_retaddr;
  
  piVar1 = (int *)(&DAT_0071d89c)[param_2];
  if (piVar1 == (int *)0x0) {
    FUN_00419c20("ERROR: trying to read a wheel on channel %d that doesn\'t have a handle\n",param_2
                );
    return 0;
  }
  iVar2 = (**(code **)(*piVar1 + 100))(piVar1);
  if (iVar2 < 0) {
    iVar2 = (**(code **)(*(int *)(&DAT_0071d89c)[param_2] + 0x1c))((int *)(&DAT_0071d89c)[param_2]);
    if (iVar2 < 0) {
      if (iVar2 == -0x7ff8fffb) {
        FUN_00419c20("ERROR: ReadChannel %d: failed to acquire device, error DIERR_OTHERAPPHASPRIO.\n"
                     ,param_2);
        return 0;
      }
      if (iVar2 == -0x7ff8ffeb) {
        FUN_00419c20("ERROR: ReadChannel %d: failed to acquire device, error DIERR_NOTINITIALIZED.\n"
                     ,param_2);
        return 0;
      }
      if (iVar2 == -0x7ff8ffa9) {
        FUN_00419c20("ERROR: ReadChannel %d: failed to acquire device, error DIERR_INVALIDPARAM.\n",
                     param_2);
        return 0;
      }
      FUN_00419c20("ERROR: ReadChannel %d: failed to acquire device, error unknown.\n",param_2);
      return 0;
    }
    if ((&DAT_0071d888)[param_2] != '\0') {
      iVar2 = (**(code **)(*(int *)(&DAT_0071d89c)[param_2] + 0x58))
                        ((int *)(&DAT_0071d89c)[param_2],0x10);
      if (-1 < iVar2) {
        *(undefined1 *)(param_2 + 0x220 + param_1) = 1;
        return 0;
      }
      FUN_00419c20("ERROR: ReadChannel %d: failed to set actuators to ON\n",param_2);
      *(undefined1 *)(param_2 + 0x220 + param_1) = 0;
      return iVar2;
    }
  }
  else {
    if ((*(char *)(param_2 + 0x220 + param_1) == '\0') && ((&DAT_0071d890)[param_2] != 0)) {
      iVar2 = (**(code **)(*(int *)(&DAT_0071d89c)[param_2] + 0x58))
                        ((int *)(&DAT_0071d89c)[param_2],0x10);
      if (iVar2 < 0) {
        FUN_00419c20("ERROR: ReadChannel %d: failed to set actuators to ON\n");
        *(undefined1 *)(param_2 + 0x220 + param_1) = 0;
        return iVar2;
      }
      *(undefined1 *)(param_2 + 0x220 + param_1) = 1;
    }
    iVar4 = param_1 * 0x110;
    piVar1 = (int *)(unaff_retaddr + iVar4);
    piVar5 = &DAT_0071d8a8 + param_1 * 0x44;
    piVar7 = piVar1;
    for (iVar2 = 0x44; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar7 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar7 = piVar7 + 1;
    }
    iVar2 = (**(code **)(*(int *)(&DAT_0071d89c)[param_1] + 0x24))
                      ((int *)(&DAT_0071d89c)[param_1],0x110,&DAT_0071d8a8 + param_1 * 0x44);
    if (iVar2 < 0) {
      FUN_00419c20("ERROR: could not retrieve positional information for wheel on channel %d\n",
                   unaff_ESI);
      if (iVar2 == -0x7ff8ffe2) {
        FUN_00419c20("Wheel got unplugged on channel %d!\n",unaff_ESI);
        FUN_00418d10(unaff_EBP);
      }
      return iVar2;
    }
    if (unaff_ESI == 1) {
      iVar2 = 4;
      bVar8 = true;
      piVar5 = &DAT_00700fe8;
      piVar7 = &DAT_0071dad8;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar8 = *piVar5 == *piVar7;
        piVar5 = piVar5 + 1;
        piVar7 = piVar7 + 1;
      } while (bVar8);
      if ((((bVar8) && (DAT_0071d9b8 == 10000)) && (DAT_0071d9bc == 10000)) &&
         ((DAT_0071d9c0 == 10000 && (DAT_0071d9cc == 10000)))) {
        DAT_0071d9b8 = 0;
        DAT_0071d9bc = 0;
        DAT_0071d9c0 = 0;
        DAT_0071d9cc = 0;
      }
    }
    uVar6 = 0;
    if (DAT_0073633c != '\0') {
      pcVar3 = (char *)(&DAT_0071d8a8 + param_1 * 0x44);
      iVar2 = (int)piVar1 - (int)pcVar3;
      while (*pcVar3 == pcVar3[iVar2]) {
        uVar6 = uVar6 + 1;
        pcVar3 = pcVar3 + 1;
        if (0x10f < uVar6) {
          return 0;
        }
      }
      FUN_00419c20("\nInput changed on channel %d.",unaff_ESI);
      if ((&DAT_0071d8a8)[param_1 * 0x44] != *piVar1) {
        FUN_00419c20("New lX:\t%d",(&DAT_0071d8a8)[param_1 * 0x44]);
      }
      if ((&DAT_0071d8ac)[param_1 * 0x44] != piVar1[1]) {
        FUN_00419c20("New lY:\t%d",(&DAT_0071d8ac)[param_1 * 0x44]);
      }
      if (*(int *)(&DAT_0071d8b0 + iVar4) != piVar1[2]) {
        FUN_00419c20("New lZ:\t%d",*(int *)(&DAT_0071d8b0 + iVar4));
      }
      if (*(int *)(&DAT_0071d8b4 + iVar4) != piVar1[3]) {
        FUN_00419c20("New lRx:\t%d",*(int *)(&DAT_0071d8b4 + iVar4));
      }
      if (*(int *)(&DAT_0071d8b8 + iVar4) != piVar1[4]) {
        FUN_00419c20("New lRy:\t%d",*(int *)(&DAT_0071d8b8 + iVar4));
      }
      if (*(int *)(&DAT_0071d8bc + iVar4) != piVar1[5]) {
        FUN_00419c20("New lRz:\t%d",*(int *)(&DAT_0071d8bc + iVar4));
      }
      if (*(int *)(&DAT_0071d958 + iVar4) != piVar1[0x2c]) {
        FUN_00419c20("New lVX:\t%d",*(int *)(&DAT_0071d958 + iVar4));
      }
      if (*(int *)(&DAT_0071d95c + iVar4) != piVar1[0x2d]) {
        FUN_00419c20("New lVY:\t%d",*(int *)(&DAT_0071d95c + iVar4));
      }
      if (*(int *)(&DAT_0071d960 + iVar4) != piVar1[0x2e]) {
        FUN_00419c20("New lVZ:\t%d",*(int *)(&DAT_0071d960 + iVar4));
      }
      if (*(int *)(&DAT_0071d964 + iVar4) != piVar1[0x2f]) {
        FUN_00419c20("New lVRx:\t%d",*(int *)(&DAT_0071d964 + iVar4));
      }
      if (*(int *)(&DAT_0071d968 + iVar4) != piVar1[0x30]) {
        FUN_00419c20("New lVRy:\t%d",*(int *)(&DAT_0071d968 + iVar4));
      }
      if (*(int *)(&DAT_0071d96c + iVar4) != piVar1[0x31]) {
        FUN_00419c20("New lVRz:\t%d",*(int *)(&DAT_0071d96c + iVar4));
      }
      if (*(int *)(&DAT_0071d978 + iVar4) != piVar1[0x34]) {
        FUN_00419c20("New lAX:\t%d",*(int *)(&DAT_0071d978 + iVar4));
      }
      if (*(int *)(&DAT_0071d97c + iVar4) != piVar1[0x35]) {
        FUN_00419c20("New lAY:\t%d",*(int *)(&DAT_0071d97c + iVar4));
      }
      if (*(int *)(&DAT_0071d980 + iVar4) != piVar1[0x36]) {
        FUN_00419c20("New lAZ:\t%d",*(int *)(&DAT_0071d980 + iVar4));
      }
      if (*(int *)(&DAT_0071d984 + iVar4) != piVar1[0x37]) {
        FUN_00419c20("New lARx:\t%d",*(int *)(&DAT_0071d984 + iVar4));
      }
      if (*(int *)(&DAT_0071d988 + iVar4) != piVar1[0x38]) {
        FUN_00419c20("New lARy:\t%d",*(int *)(&DAT_0071d988 + iVar4));
      }
      if (*(int *)(&DAT_0071d98c + iVar4) != piVar1[0x39]) {
        FUN_00419c20("New lARz:\t%d",*(int *)(&DAT_0071d98c + iVar4));
      }
      if (*(int *)(&DAT_0071d998 + iVar4) != piVar1[0x3c]) {
        FUN_00419c20("New lFX:\t%d",*(int *)(&DAT_0071d998 + iVar4));
      }
      if (*(int *)(&DAT_0071d99c + iVar4) != piVar1[0x3d]) {
        FUN_00419c20("New lFY:\t%d",*(int *)(&DAT_0071d99c + iVar4));
      }
      if (*(int *)(&DAT_0071d9a0 + iVar4) != piVar1[0x3e]) {
        FUN_00419c20("New lFZ:\t%d",*(int *)(&DAT_0071d9a0 + iVar4));
      }
      if (*(int *)(&DAT_0071d9a4 + iVar4) != piVar1[0x3f]) {
        FUN_00419c20("New lFRx:\t%d",*(int *)(&DAT_0071d9a4 + iVar4));
      }
      if (*(int *)(&DAT_0071d9a8 + iVar4) != piVar1[0x40]) {
        FUN_00419c20("New lFRy:\t%d",*(int *)(&DAT_0071d9a8 + iVar4));
      }
      if (*(int *)(&DAT_0071d9ac + iVar4) != piVar1[0x41]) {
        FUN_00419c20("New lFRz:\t%d",*(int *)(&DAT_0071d9ac + iVar4));
      }
      piVar5 = (int *)(&DAT_0071d970 + iVar4);
      iVar2 = 0;
      piVar7 = piVar1 + 0x32;
      do {
        if (*piVar5 != *piVar7) {
          FUN_00419c20("New rglVSlider[%d]:\t%d",iVar2,*piVar5);
        }
        iVar2 = iVar2 + 1;
        piVar5 = piVar5 + 1;
        piVar7 = piVar7 + 1;
      } while (iVar2 < 2);
      piVar5 = (int *)(&DAT_0071d990 + iVar4);
      iVar2 = 0;
      piVar7 = piVar1 + 0x3a;
      do {
        if (*piVar5 != *piVar7) {
          FUN_00419c20("New rglASlider[%d]:\t%d",iVar2,*piVar5);
        }
        iVar2 = iVar2 + 1;
        piVar5 = piVar5 + 1;
        piVar7 = piVar7 + 1;
      } while (iVar2 < 2);
      piVar5 = (int *)(&DAT_0071d9b0 + iVar4);
      iVar2 = 0;
      piVar7 = piVar1 + 0x42;
      do {
        if (*piVar5 != *piVar7) {
          FUN_00419c20("New rglFSlider[%d]:\t%d",iVar2,*piVar5);
        }
        iVar2 = iVar2 + 1;
        piVar5 = piVar5 + 1;
        piVar7 = piVar7 + 1;
      } while (iVar2 < 2);
      piVar7 = (int *)(&DAT_0071d8c0 + iVar4);
      iVar2 = 0;
      piVar5 = piVar1 + 6;
      do {
        if (*piVar7 != *piVar5) {
          FUN_00419c20("New rglSlider[%d]:\t%d",iVar2,*piVar7);
        }
        iVar2 = iVar2 + 1;
        piVar7 = piVar7 + 1;
        piVar5 = piVar5 + 1;
      } while (iVar2 < 2);
      piVar7 = (int *)(&DAT_0071d8c8 + iVar4);
      iVar2 = 0;
      piVar5 = piVar1 + 8;
      do {
        if (*piVar7 != *piVar5) {
          FUN_00419c20("New rgdwPOV[%d]:\t%d",iVar2,*piVar7);
        }
        iVar2 = iVar2 + 1;
        piVar7 = piVar7 + 1;
        piVar5 = piVar5 + 1;
      } while (iVar2 < 4);
      iVar2 = 0;
      do {
        if ((&DAT_0071d8d8)[iVar4 + iVar2] != *(char *)((int)piVar1 + iVar2 + 0x30)) {
          FUN_00419c20("New rgbButtons[%d]:\t%d",iVar2,(&DAT_0071d8d8)[iVar4 + iVar2]);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x80);
    }
  }
  return 0;
}
