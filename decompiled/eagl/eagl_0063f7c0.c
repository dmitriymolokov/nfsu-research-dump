/* spd-match: far pct=11.19 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

int __cdecl FUN_0063f210();
int __cdecl FUN_0063f2a0();
int __cdecl FUN_0063f3f0();
int __cdecl FUN_00643a00();
int __cdecl FUN_00643a1b();
int __cdecl FUN_00643a39();
int __cdecl FUN_00643a60();
extern int DAT_006e769c;
extern int DAT_006e76a0;
extern int DAT_006e76a4;
extern int DAT_006e76a8;
extern unsigned char *DAT_0070f638;
extern int DAT_0070f644;
extern int DAT_0070f648;
extern int DAT_0070f650;
extern int DAT_0070f664;
extern int DAT_0070f6b0;
extern int DAT_0070f6b4;
extern int DAT_0070f6b8;
extern int DAT_0070f6bc;
extern int DAT_0070fdcc;
extern int DAT_0070fdd0;
extern int DAT_0070fdd4;
extern int DAT_0070fdd8;
extern int DAT_0070fddc;
extern int DAT_0070fde0;
extern int DAT_0070fde4;
extern int DAT_0070fde8;
extern int DAT_0070fdec;
extern int DAT_0070fdf0;
extern int DAT_0070fdf4;
extern int DAT_0070fdf8;
extern int _DAT_0070f638;
extern int _DAT_0070f63c;
extern int _DAT_0070f640;
extern int _DAT_0070f648;
extern int _DAT_0070f660;
extern int _DAT_0070f674;
extern int _DAT_0070f678;
extern int _DAT_0070f67c;
extern int _DAT_0070f680;
extern int _DAT_0070f684;
extern int _DAT_0070f688;
extern int _DAT_0070f68c;
extern int _DAT_0070f690;
extern int _DAT_0070f694;
extern int _DAT_0070f698;
extern int _DAT_0070f69c;
extern int _DAT_0070f6a0;
extern int _DAT_0070f6a4;
extern int _DAT_0070f6a8;
extern int _DAT_0070f6ac;

int FUN_0063f7c0(void)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  bool bVar8;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  _SYSTEM_INFO local_b8;
  _OSVERSIONINFOA local_94;
  
  lVar2 = CONCAT44(DAT_0070f6bc,DAT_0070f6b8);
  if (DAT_0070f6b0 == '\0') {
    DAT_0070fde4 = 0;
    DAT_0070fde0 = 0;
    DAT_0070fdf4 = 0;
    DAT_0070fdd8 = 0;
    DAT_006e769c = 0;
    DAT_0070fdd4 = 0;
    DAT_0070fdd0 = 0;
    DAT_0070fdcc = 0;
    DAT_0070fddc = 0;
    DAT_0070fde8 = 0;
    DAT_006e76a4 = 0;
    DAT_006e76a0 = 0;
    DAT_0070fdf8 = 0;
    DAT_0070fdec = 0;
    DAT_0070fdf0 = 0;
    DAT_006e76a8 = 0;
    _DAT_0070f638 = _DAT_0070f638 & 0xffffff00;
    iVar3 = FUN_00643a00();
    if (iVar3 == 0) {
      DAT_0070fdf0 = FUN_00643a39();
    }
    else {
      GetSystemInfo(&local_b8);
      DAT_006e769c = local_b8.dwNumberOfProcessors;
      local_bc = 0;
      FUN_00643a1b(&local_cc,0);
      uVar5 = local_cc;
      _DAT_0070f638 = local_c8;
      _DAT_0070f63c = local_c4;
      _DAT_0070f640 = local_c0;
      DAT_0070f644 = 0;
      if (0 < (int)local_cc) {
        iVar3 = 0xd;
        bVar8 = true;
        pcVar4 = &DAT_0070f638;
        pcVar7 = "GenuineIntel";
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar8 = *pcVar4 == *pcVar7;
          pcVar4 = pcVar4 + 1;
          pcVar7 = pcVar7 + 1;
        } while (bVar8);
        if (bVar8) {
          DAT_006e76a8 = 1;
        }
        else {
          iVar3 = 0xd;
          bVar8 = true;
          pcVar4 = &DAT_0070f638;
          pcVar7 = "AuthenticAMD";
          do {
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            bVar8 = *pcVar4 == *pcVar7;
            pcVar4 = pcVar4 + 1;
            pcVar7 = pcVar7 + 1;
          } while (bVar8);
          if (bVar8) {
            DAT_0070fdec = 1;
          }
          else {
            iVar3 = 0xd;
            bVar8 = true;
            pcVar4 = &DAT_0070f638;
            pcVar7 = "CyrixInstead";
            do {
              if (iVar3 == 0) break;
              iVar3 = iVar3 + -1;
              bVar8 = *pcVar4 == *pcVar7;
              pcVar4 = pcVar4 + 1;
              pcVar7 = pcVar7 + 1;
            } while (bVar8);
            if (bVar8) {
              DAT_0070fdf0 = 1;
            }
            else {
              iVar3 = 0xd;
              bVar8 = true;
              pcVar4 = &DAT_0070f638;
              pcVar7 = "CentaurHauls";
              do {
                if (iVar3 == 0) break;
                iVar3 = iVar3 + -1;
                bVar8 = *pcVar4 == *pcVar7;
                pcVar4 = pcVar4 + 1;
                pcVar7 = pcVar7 + 1;
              } while (bVar8);
              if (bVar8) {
                DAT_0070fdf8 = 1;
              }
            }
          }
        }
        FUN_00643a1b(&local_cc,1);
        DAT_0070fdcc = (int)local_cc >> 8 & 0xf;
        DAT_0070fdd0 = (int)local_cc >> 4 & 0xf;
        DAT_0070fdd4 = local_cc & 0xf;
        if (5 < DAT_0070fdcc) {
          DAT_006e76a0 = 1;
        }
        FUN_00643a1b(&local_cc,0x80000000);
        if ((DAT_0070fdec != 0) && (0x80000000 < local_cc)) {
          FUN_00643a1b(&local_cc,0x80000001);
          DAT_0070fdf4 = local_c4 >> 0x1f;
          DAT_0070fddc = local_c4 >> 0x16 & 1;
        }
        FUN_00643a1b(&local_cc,1);
        DAT_0070fde4 = local_c4 >> 0x1a & 1;
        DAT_0070fdd8 = local_c4 >> 0x17 & 1;
        DAT_0070fde0 = local_c4 >> 0x19 & 1;
        DAT_006e76a4 = local_c4 >> 4 & 1;
        DAT_0070fde8 = local_c4 >> 0xf & 1;
        if (DAT_0070fde0 != 0) {
          DAT_0070fddc = 1;
        }
        pcVar4 = _getenv("ISMMX");
        if (pcVar4 != (char *)0x0) {
          DAT_0070fdd8 = _atol(pcVar4);
        }
        pcVar4 = _getenv("ISK3D");
        if (pcVar4 != (char *)0x0) {
          DAT_0070fdf4 = _atol(pcVar4);
        }
        local_94.dwOSVersionInfoSize = 0x94;
        GetVersionExA(&local_94);
        if ((local_94.dwPlatformId == 1) && (local_94.dwMinorVersion == 0)) {
          DAT_0070fde4 = 0;
          DAT_0070fde0 = 0;
        }
        pcVar4 = _getenv("ISSSE");
        if (pcVar4 != (char *)0x0) {
          DAT_0070fde0 = _atol(pcVar4);
        }
        pcVar4 = _getenv("ISSSE2");
        if (pcVar4 != (char *)0x0) {
          DAT_0070fde4 = _atol(pcVar4);
        }
        pcVar4 = _getenv("ISMOVNT");
        if (pcVar4 != (char *)0x0) {
          DAT_0070fddc = _atol(pcVar4);
        }
        if (1 < (int)uVar5) {
          FUN_00643a1b(&local_cc,2);
        }
      }
    }
    uVar5 = FUN_0063f2a0();
    uVar6 = 1000000;
    if (uVar5 == 0) {
      uVar5 = FUN_0063f3f0();
      uVar6 = 5;
    }
    lVar2 = (ulonglong)uVar6 * (ulonglong)uVar5;
    DAT_0070f6b4 = (int)lVar2;
    if (((int)((ulonglong)lVar2 >> 0x20) != 0) || (DAT_0070f6b4 == -1)) {
      DAT_0070f6b4 = -1;
    }
    DAT_0070f6b0 = '\x01';
  }
  DAT_0070f6bc = (undefined4)((ulonglong)lVar2 >> 0x20);
  DAT_0070f6b8 = (undefined4)lVar2;
  if (DAT_0070f6b4 == 0) {
    FUN_0063f210(&DAT_0070f648,0x68);
    return DAT_0070f6b4;
  }
  _DAT_0070f648 = lVar2;
  pcVar4 = (char *)FUN_00643a60();
  pcVar7 = &DAT_0070f650;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    *pcVar7 = cVar1;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  _DAT_0070f660 = DAT_006e769c;
  iVar3 = 0;
  do {
    pcVar4 = &DAT_0070f638 + iVar3;
    (&DAT_0070f664)[iVar3] = *pcVar4;
    iVar3 = iVar3 + 1;
  } while (*pcVar4 != '\0');
  _DAT_0070f674 = DAT_0070fdcc;
  _DAT_0070f678 = DAT_0070fdd0;
  _DAT_0070f67c = DAT_0070fdd4;
  _DAT_0070f680 = DAT_006e76a0;
  _DAT_0070f684 = DAT_006e76a8;
  _DAT_0070f688 = DAT_0070fdec;
  _DAT_0070f68c = DAT_0070fdf0;
  _DAT_0070f690 = DAT_0070fdf8;
  _DAT_0070f694 = DAT_006e76a4;
  _DAT_0070f698 = DAT_0070fde8;
  _DAT_0070f69c = DAT_0070fddc;
  _DAT_0070f6a0 = DAT_0070fdd8;
  _DAT_0070f6a4 = DAT_0070fde0;
  _DAT_0070f6a8 = DAT_0070fde4;
  _DAT_0070f6ac = DAT_0070fdf4;
  return DAT_0070f6b4;
}
