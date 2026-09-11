/* Decompiled from Speed.exe @ 0063d670 */
/* Module: EAGL */
/* Ghidra DecompileAll */


int FUN_0063d670(uint param_1,LPCVOID param_2,uint param_3)

{
  int iVar1;
  BOOL BVar2;
  DWORD DVar3;
  int iVar4;
  int iVar5;
  LPCVOID lpBuffer;
  uint uVar6;
  int iVar7;
  uint nNumberOfBytesToWrite;
  int local_4;
  
  local_4 = 0;
  if ((((DAT_0070f48c == 0) || (-1 < (int)param_1)) || (DAT_0070f488 <= (int)~param_1)) ||
     (iVar7 = ~param_1 * 0x24, *(char *)(iVar7 + DAT_0070f48c) == '\0')) {
    SetLastError(6);
    return 0;
  }
  SetLastError(0);
  iVar4 = DAT_0070f48c;
  iVar5 = *(int *)(iVar7 + 0x1c + DAT_0070f48c);
  if (iVar5 < *(int *)(iVar7 + 0x18 + DAT_0070f48c)) {
    *(int *)(iVar7 + 0x18 + DAT_0070f48c) = iVar5;
  }
  nNumberOfBytesToWrite = *(uint *)(iVar7 + 0xc + iVar4);
  if (*(int *)(iVar7 + 0x14 + iVar4) != 0) {
    iVar5 = *(int *)(iVar7 + 0x18 + iVar4);
    iVar1 = *(int *)(iVar7 + 0x1c + iVar4);
    if (iVar1 < (int)(iVar5 + param_3)) {
      param_3 = iVar1 - iVar5;
    }
  }
  lpBuffer = param_2;
  uVar6 = param_3;
  if (param_3 == 0) {
    return 0;
  }
  do {
    if (uVar6 < nNumberOfBytesToWrite) {
      nNumberOfBytesToWrite = uVar6;
    }
    iVar5 = *(int *)(iVar7 + 0x14 + iVar4);
    if (iVar5 == 0) {
      BVar2 = WriteFile(*(HANDLE *)(iVar7 + 4 + iVar4),lpBuffer,nNumberOfBytesToWrite,&param_1,
                        (LPOVERLAPPED)0x0);
      if (BVar2 != 0) goto LAB_0063d747;
      DVar3 = GetLastError();
      if (DVar3 != 0x3e5) {
        return 0;
      }
      FUN_0063e5c0(1);
      iVar4 = DAT_0070f48c;
    }
    else {
      FUN_0063f1b0(*(int *)(iVar7 + 0x18 + iVar4) + iVar5,lpBuffer,nNumberOfBytesToWrite);
      param_1 = nNumberOfBytesToWrite;
      FUN_0063e5c0(0);
LAB_0063d747:
      iVar4 = DAT_0070f48c;
      iVar5 = *(int *)(iVar7 + 0x18 + DAT_0070f48c) + param_1;
      *(int *)(iVar7 + 0x18 + DAT_0070f48c) = iVar5;
      local_4 = local_4 + param_1;
      lpBuffer = (LPCVOID)((int)lpBuffer + param_1);
      if (param_1 < nNumberOfBytesToWrite) {
        uVar6 = 0;
      }
      else {
        uVar6 = param_3 - param_1;
      }
      param_3 = uVar6;
      if (*(int *)(iVar7 + 0x1c + iVar4) < iVar5) {
        *(int *)(iVar7 + 0x1c + iVar4) = iVar5;
      }
    }
    if (uVar6 == 0) {
      return local_4;
    }
  } while( true );
}

