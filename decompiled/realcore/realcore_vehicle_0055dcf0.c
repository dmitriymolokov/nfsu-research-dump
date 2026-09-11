/* spd-match: far pct=11.25 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0055DCF0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004c2a50();
int __cdecl FUN_004f6910();
int __cdecl FUN_004f6970();
int __cdecl FUN_00549e50();
int __cdecl FUN_0054a0c0();
int __cdecl FUN_0054a1d0();
int __cdecl FUN_0054b700();
int __cdecl FUN_0055d0a0();
int __cdecl FUN_0055e3b0();
int __cdecl FUN_0055e980();
int __cdecl FUN_0055ea40();
int __cdecl FUN_0059fb30();
int __cdecl FUN_0059fb80();
int __cdecl FUN_00664d40();
int __cdecl FUN_00666ea0();
extern int DAT_006b9172;
extern int DAT_0073d868;
extern int DAT_0073d8d0;
extern int DAT_0073d8dc;
extern int DAT_0073dafc;
extern int DAT_00777cb0;
extern int DAT_00777cb4;
extern void LAB_0055dd90(void);
extern void LAB_0055ddf0(void);
extern void LAB_0055dead(void);
void __fastcall FUN_0055dcf0(int obj)

{
  char cVar1;
  char cVar2;
  int *piVar3;

  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int extraout_EDX;
  int extraout_EDX_00;
  int *piVar10;
  char *pcVar11;
  undefined1 *puVar12;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  char local_80 [128];
  
  FUN_0055e3b0(obj);
  local_90 = -1;
  if (DAT_0073dafc == -1) {
    local_90 = DAT_00777cb0;
  }
  if (DAT_0073d8d0 != 0) {
    iVar5 = local_90;
    if (local_90 == -1) {
      iVar5 = DAT_0073dafc;
    }
    uVar4 = FUN_00664d40(DAT_0073d8d0,5,iVar5);
    iVar5 = FUN_00666ea0(DAT_0073d8dc,uVar4);
    if (iVar5 != 0) {
      local_88 = *(int *)(iVar5 + 0x24c);
      local_84 = 0;
      local_8c = 0;
      piVar10 = (int *)(obj + 0x44);
      goto LAB_0055dd90;
    }
  }
  local_88 = 0;
  local_84 = 0;
  local_8c = 0;
  piVar10 = (int *)(obj + 0x44);
LAB_0055dd90:
  do {
    iVar5 = DAT_0073d8d0;
    if (local_84 < local_88) {
      FUN_0059fb30(0x80);
      if (iVar5 == 0) {
LAB_0055ddf0:
        pcVar11 = "";
      }
      else {
        iVar8 = local_90;
        if (local_90 == -1) {
          iVar8 = DAT_0073dafc;
        }
        uVar4 = FUN_00664d40(iVar5,5,iVar8);
        iVar5 = FUN_00666ea0(DAT_0073d8dc,uVar4);
        if (iVar5 == 0) goto LAB_0055ddf0;
        pcVar11 = (char *)(local_8c + 0x84 + iVar5);
      }
      pcVar6 = pcVar11;
      do {
        cVar1 = pcVar6[(int)(local_80 + -(int)pcVar11)];
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        if ((cVar1 == '\0') || (cVar2 == '\0')) break;
      } while (cVar1 == cVar2);
      if (cVar1 != cVar2) {
        iVar5 = FUN_0054b700(&DAT_0073d868,pcVar11);
        if ((iVar5 != 0) && (iVar5 = FUN_00549e50(&DAT_0073d868), iVar5 != 0)) {
          FUN_004c2a50();
        }
        iVar5 = FUN_0059fb80();
        if (iVar5 == 0) {
          iVar5 = FUN_0059fb80();
        }
        uVar4 = DAT_00777cb4;
        if (DAT_0073d8d0 == 0) {
LAB_0055dead:
          puVar12 = &DAT_006b9172;
        }
        else {
          iVar8 = local_90;
          if (local_90 == -1) {
            iVar8 = DAT_0073dafc;
          }
          uVar7 = FUN_00664d40(DAT_0073d8d0,5,iVar8);
          iVar8 = FUN_00666ea0(DAT_0073d8dc,uVar7);
          if (iVar8 == 0) goto LAB_0055dead;
          puVar12 = (undefined1 *)(local_8c + 0x84 + iVar8);
        }
        uVar4 = FUN_0054a0c0(local_84,uVar4);
        FUN_0055d0a0(puVar12,uVar4,iVar5);
      }
      iVar5 = FUN_0054a1d0(local_84,0);
      if ((iVar5 < 0) && (*(int *)(*(int *)*piVar10 + 0x10) < 0)) {
        FUN_0054a1d0(local_84,1);
      }
      FUN_004f6970(*(undefined4 *)(*piVar10 + 4));
      FUN_004f6970(*(undefined4 *)(extraout_EDX + 8));
      FUN_004f6970(*(undefined4 *)(extraout_EDX_00 + 0x10));
      FUN_0055e980();
    }
    else {
      piVar3 = (int *)*piVar10;
      FUN_004f6910(piVar3[1]);
      FUN_004f6910(piVar3[2]);
      FUN_004f6910(piVar3[4]);
      iVar5 = *piVar3;
      *(undefined4 *)(iVar5 + 0x10) = 0xffffffff;
      iVar8 = *(int *)(*(int *)(iVar5 + 0x14) + 0x5c);
      iVar9 = -1;
      if (iVar8 < -1) {
        iVar9 = iVar8;
      }
      if (*(int *)(iVar5 + 4) != iVar9) {
        *(int *)(iVar5 + 4) = iVar9;
        FUN_0055ea40(iVar5);
      }
    }
    local_8c = local_8c + 0x20;
    local_84 = local_84 + 1;
    piVar10 = piVar10 + 1;
    if (0x7f < local_8c) {
      return;
    }
  } while( true );
}
