/* Decompiled from Speed.exe @ 0063cf70 */
/* Module: EAGL */
/* Ghidra DecompileAll */


undefined4 FUN_0063cf70(LPCSTR param_1,LPSTR param_2,DWORD param_3)

{
  char cVar1;
  DWORD DVar2;
  LPCSTR pCVar3;
  BOOL BVar4;
  HANDLE hFindFile;
  CHAR *pCVar5;
  byte local_250 [4];
  char *local_24c;
  DWORD local_248;
  CHAR local_244 [260];
  _WIN32_FIND_DATAA local_140;
  
  DVar2 = GetFullPathNameA(param_1,param_3,param_2,&local_24c);
  if (DVar2 == 0) {
    pCVar3 = param_1;
    do {
      cVar1 = *pCVar3;
      pCVar3 = pCVar3 + 1;
    } while (cVar1 != '\0');
    if (pCVar3 + (1 - (int)(param_1 + 1)) < (char *)0x104) {
      pCVar3 = param_1;
      do {
        cVar1 = *pCVar3;
        pCVar3 = pCVar3 + 1;
      } while (cVar1 != '\0');
      FUN_0063f1b0(param_2,param_1,pCVar3 + (1 - (int)(param_1 + 1)));
      return 0;
    }
    FUN_0063f1b0(param_2,param_1,0x104);
  }
  else {
    FUN_0063ce90(param_2,local_244);
    BVar4 = GetVolumeInformationA
                      (local_244,(LPSTR)0x0,0,(LPDWORD)0x0,&local_248,(LPDWORD)local_250,(LPSTR)0x0,
                       0);
    if (BVar4 != 0) {
      if ((local_250[0] & 2) == 0) {
        CharUpperA(param_2);
      }
      if ((local_250[0] & 4) == 0) {
        hFindFile = FindFirstFileA(param_1,&local_140);
        if (hFindFile != (HANDLE)0xffffffff) {
          FindClose(hFindFile);
          pCVar5 = local_140.cFileName;
          do {
            cVar1 = *pCVar5;
            pCVar5 = pCVar5 + 1;
            *local_24c = cVar1;
            local_24c = local_24c + 1;
          } while (cVar1 != '\0');
        }
      }
      return 1;
    }
  }
  return 0;
}

