/* spd-match: far pct=3.19 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

extern int DAT_0070430c;
extern int DAT_00704314;
extern int DAT_007183d8;
extern int DAT_007184dc;
extern int DAT_007185e0;
extern int DAT_007185e4;
extern int DAT_007185e8;
extern int DAT_007185ec;
extern int DAT_00734998;
extern int DAT_007363b4;
extern unsigned char *PTR_s_English_US_00704310;

undefined4 FUN_00401190(void)

{
  undefined **ppuVar1;
  BYTE BVar2;
  LSTATUS LVar3;
  DWORD DVar4;
  int iVar5;
  int iVar6;
  undefined **ppuVar7;
  BYTE *pBVar8;
  char *lpSubKey;
  DWORD local_11c;
  HKEY local_118;
  DWORD local_114;
  BYTE local_110 [268];
  
  if (DAT_00734998 == 0) {
    lpSubKey = "Software\\EA Games\\Need For Speed Underground";
  }
  else {
    lpSubKey = "Software\\EA Games\\NFS Underground";
  }
  LVar3 = RegOpenKeyExA((HKEY)0x80000002,lpSubKey,0,0x20019,&local_118);
  if (LVar3 != 0) {
    RegCloseKey(local_118);
    return 0;
  }
  pBVar8 = local_110;
  for (iVar6 = 0x41; iVar6 != 0; iVar6 = iVar6 + -1) {
    pBVar8[0] = '\0';
    pBVar8[1] = '\0';
    pBVar8[2] = '\0';
    pBVar8[3] = '\0';
    pBVar8 = pBVar8 + 4;
  }
  local_114 = 1;
  local_11c = 0x104;
  LVar3 = RegQueryValueExA(local_118,"Install Dir",(LPDWORD)0x0,&local_114,local_110,&local_11c);
  if ((LVar3 == 0) &&
     (DVar4 = GetLongPathNameA((LPCSTR)local_110,(LPSTR)local_110,0x104), DVar4 != 0)) {
    iVar6 = 0;
    do {
      BVar2 = local_110[iVar6];
      (&DAT_007184dc)[iVar6] = BVar2;
      iVar6 = iVar6 + 1;
    } while (BVar2 != '\0');
  }
  pBVar8 = local_110;
  for (iVar6 = 0x41; iVar6 != 0; iVar6 = iVar6 + -1) {
    pBVar8[0] = '\0';
    pBVar8[1] = '\0';
    pBVar8[2] = '\0';
    pBVar8[3] = '\0';
    pBVar8 = pBVar8 + 4;
  }
  local_11c = 0x104;
  LVar3 = RegQueryValueExA(local_118,"CD Drive",(LPDWORD)0x0,&local_114,local_110,&local_11c);
  if (LVar3 == 0) {
    DVar4 = GetLongPathNameA((LPCSTR)local_110,(LPSTR)local_110,0x104);
    GetLastError();
    if (DVar4 != 0) {
      iVar6 = 0;
      do {
        BVar2 = local_110[iVar6];
        (&DAT_007183d8)[iVar6] = BVar2;
        iVar6 = iVar6 + 1;
      } while (BVar2 != '\0');
    }
  }
  iVar6 = 0;
  local_11c = 0x104;
  LVar3 = RegQueryValueExA(local_118,"CacheSize",(LPDWORD)0x0,&local_114,local_110,&local_11c);
  if (LVar3 == 0) {
    DAT_007185e0 = _atol((char *)local_110);
    DAT_007185e4 = DAT_007185e0 >> 0x1f;
  }
  local_11c = 0x104;
  LVar3 = RegQueryValueExA(local_118,"SwapSize",(LPDWORD)0x0,&local_114,local_110,&local_11c);
  if (LVar3 == 0) {
    DAT_007185e8 = _atol((char *)local_110);
    DAT_007185ec = DAT_007185e8 >> 0x1f;
  }
  local_11c = 0x104;
  LVar3 = RegQueryValueExA(local_118,"Language",(LPDWORD)0x0,&local_114,local_110,&local_11c);
  if (LVar3 == 0) {
    if (PTR_s_English_US_00704310 != (undefined *)0x0) {
      ppuVar7 = &PTR_s_English_US_00704310;
      do {
        iVar5 = __stricmp((char *)local_110,*ppuVar7);
        if (iVar5 == 0) {
          DAT_0070430c = (&DAT_00704314)[iVar6 * 3];
          break;
        }
        ppuVar1 = ppuVar7 + 3;
        ppuVar7 = ppuVar7 + 3;
        iVar6 = iVar6 + 1;
      } while (*ppuVar1 != (undefined *)0x0);
    }
  }
  else {
    DAT_0070430c = 0;
  }
  local_11c = 0x104;
  LVar3 = RegQueryValueExA(local_118,"StreamingInstall",(LPDWORD)0x0,&local_114,local_110,&local_11c
                          );
  if (LVar3 != 0) {
    DAT_007363b4 = 1;
    RegCloseKey(local_118);
    return 1;
  }
  iVar6 = __stricmp((char *)local_110,"off");
  DAT_007363b4 = iVar6 != 0;
  RegCloseKey(local_118);
  return 1;
}
