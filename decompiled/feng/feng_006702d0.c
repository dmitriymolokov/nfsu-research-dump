/* spd-match: far pct=7.08 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/C2065_undecl_stubs_p4/batches/20260724T141806Z_w0_tc0 */
#include "ghidra_compat.h"

typedef unsigned int unkint10;
typedef WCHAR *LPWCH;
typedef struct _LDBL12 { unsigned char bytes[12]; } _LDBL12;
typedef struct _CRT_DOUBLE {
  struct { unsigned int _0_4_; unsigned int _4_4_; } x;
} _CRT_DOUBLE;
#define INTRNCVT_OVERFLOW 1
#define INTRNCVT_UNDERFLOW 2
INTRNCVT_STATUS __cdecl FID_conflict___ld12tod(_LDBL12 *, _CRT_DOUBLE *);
void __cdecl __fassign(void);
void __cdecl __forcdecpt(void);
typedef struct _DCB {
  DWORD DCBlength; DWORD BaudRate; DWORD _8_4_;
  BYTE ByteSize; BYTE Parity; BYTE StopBits; BYTE EvtChar;
  BYTE XonLim; BYTE XoffLim; BYTE _pad[2];
  BYTE EofChar; BYTE EvtChar2; WORD wReserved1;
} DCB;
typedef struct _COMMCONFIG {
  DWORD dwSize; WORD wVersion; WORD wReserved;
  DCB dcb;
  DWORD dwProviderSubType; DWORD dwProviderOffset;
  DWORD dwProviderSize; DWORD dwLineOffset; DWORD dwLineSize;
} _COMMCONFIG, *LPCOMMCFG;
typedef struct _MEMORY_BASIC_INFORMATION {
  PVOID BaseAddress; PVOID AllocationBase; DWORD AllocationProtect;
  SIZE_T RegionSize; DWORD State;
  struct { unsigned char _0_1_; unsigned char _1_1_; unsigned char _2_1_; unsigned char _3_1_; } Protect;
  DWORD Type;
} MEMORY_BASIC_INFORMATION, _MEMORY_BASIC_INFORMATION;
SIZE_T __stdcall VirtualQuery(LPCVOID, MEMORY_BASIC_INFORMATION *, SIZE_T);
BOOL __stdcall VirtualProtect(PVOID, SIZE_T, DWORD, DWORD *);
PVOID __stdcall VirtualAlloc(PVOID, SIZE_T, DWORD, DWORD);
void __stdcall GetSystemInfo(SYSTEM_INFO *);

int __cdecl FUN_0066f590();
int __cdecl FUN_00672a10();
extern int DAT_006b9172;
extern int DAT_006eb720;
int unaff_retaddr;

undefined4 FUN_006702d0(int param_1,char *param_2)

{
  byte bVar1;
  int iVar2;
  undefined1 *puVar3;
  HANDLE pvVar4;
  byte *pbVar5;
  int iVar6;
  byte *_Str1;
  uint unaff_retaddr;
  DWORD local_103c;
  _COMMTIMEOUTS local_1038;
  char local_1024 [4];
  byte local_1020;
  byte local_101f [27];
  _COMMCONFIG local_1004 [78];
  uint local_4;
  
  local_4 = DAT_006eb720 ^ unaff_retaddr;
  iVar6 = 0;
  local_1038.ReadIntervalTimeout = 0xffffffff;
  local_1038.ReadTotalTimeoutMultiplier = 0;
  local_1038.ReadTotalTimeoutConstant = 0;
  local_1038.WriteTotalTimeoutMultiplier = 0;
  local_1038.WriteTotalTimeoutConstant = 0;
  if ((param_2 == (char *)0x0) && (*(int *)(param_1 + 0xbc) == 4)) {
    *(undefined4 *)(param_1 + 0xbc) = 5;
    SetCommMask(*(HANDLE *)(param_1 + 0x6c),2);
    PurgeComm(*(HANDLE *)(param_1 + 0x6c),0xf);
    CloseHandle(*(HANDLE *)(param_1 + 0x6c));
    *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0xbc) == 1) {
      FUN_0066f590();
    }
    else if (*(int *)(param_1 + 0xbc) != 5) {
      return 0xfffffff8;
    }
    _strncpy(local_1024,param_2,0x20);
    iVar2 = FUN_00672a10(local_1024,0x3a);
    if (iVar2 == 0) {
      _Str1 = &DAT_006b9172;
    }
    else {
      puVar3 = (undefined1 *)FUN_00672a10(local_1024,0x3a);
      *puVar3 = 0;
      iVar2 = FUN_00672a10(param_2,0x3a);
      _Str1 = (byte *)(iVar2 + 1);
    }
    iVar2 = _strncmp(local_1024,"TAPI",4);
    if (iVar2 == 0) {
      iVar6 = 0;
      pbVar5 = &local_1020;
      while (('/' < (char)local_1020 && ((char)local_1020 < ':'))) {
        pbVar5 = pbVar5 + 1;
        iVar6 = (local_1020 & 0xf) + iVar6 * 10;
        local_1020 = *pbVar5;
      }
      *(int *)(param_1 + 0x6c) = iVar6;
    }
    else {
      pvVar4 = CreateFileA(local_1024,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x40000080,
                           (HANDLE)0x0);
      *(HANDLE *)(param_1 + 0x6c) = pvVar4;
      if (pvVar4 == (HANDLE)0xffffffff) {
        return 0xfffffffc;
      }
    }
    SetupComm(*(HANDLE *)(param_1 + 0x6c),0x2000,0x1000);
    SetCommTimeouts(*(HANDLE *)(param_1 + 0x6c),&local_1038);
    SetCommMask(*(HANDLE *)(param_1 + 0x6c),2);
    if (iVar6 == 0) {
      local_1004[0].dcb.DCBlength = 0x1c;
      GetCommState(*(HANDLE *)(param_1 + 0x6c),&local_1004[0].dcb);
      local_1004[0].dcb._8_4_ = local_1004[0].dcb._8_4_ & 0xffffb497 | 0x13;
      local_1004[0].dcb.EvtChar = '\n';
      local_1004[0].dcb.ByteSize = '\b';
      local_1004[0].dcb.StopBits = '\0';
      if (_Str1 != (byte *)0x0) {
        while (*_Str1 != 0) {
          if (*_Str1 == 0x2c) {
            _Str1 = _Str1 + 1;
          }
          iVar6 = _strncmp((char *)_Str1,"+RTS",4);
          if (iVar6 == 0) {
            local_1004[0].dcb._8_4_ = local_1004[0].dcb._8_4_ & 0xffffefff | 0x2000;
          }
          iVar6 = _strncmp((char *)_Str1,"-RTS",4);
          if (iVar6 == 0) {
            local_1004[0].dcb._8_4_ = local_1004[0].dcb._8_4_ & 0xffffdfff | 0x1000;
          }
          iVar6 = _strncmp((char *)_Str1,"+CTS",4);
          if (iVar6 == 0) {
            local_1004[0].dcb._8_4_ = local_1004[0].dcb._8_4_ | 4;
          }
          iVar6 = _strncmp((char *)_Str1,"-CTS",4);
          if (iVar6 == 0) {
            local_1004[0].dcb._8_4_ = local_1004[0].dcb._8_4_ & 0xfffffffb;
          }
          if (('/' < (char)*_Str1) && ((char)*_Str1 < ':')) {
            local_1004[0].dcb.BaudRate = 0;
            bVar1 = *_Str1;
            while (('/' < (char)bVar1 && ((char)bVar1 < ':'))) {
              local_1004[0].dcb.BaudRate = (bVar1 & 0xf) + local_1004[0].dcb.BaudRate * 10;
              _Str1 = _Str1 + 1;
              bVar1 = *_Str1;
            }
          }
          bVar1 = *_Str1;
          while ((bVar1 != 0x2c && (bVar1 != 0))) {
            pbVar5 = _Str1 + 1;
            _Str1 = _Str1 + 1;
            bVar1 = *pbVar5;
          }
        }
      }
      SetCommState(*(HANDLE *)(param_1 + 0x6c),&local_1004[0].dcb);
    }
    else {
      local_103c = 0x1000;
      GetCommConfig(*(HANDLE *)(param_1 + 0x6c),local_1004,&local_103c);
      INSERT(local_1004[0].dcb._8_4_,0,0xe,1);
      INSERT(local_1004[0].dcb._8_4_,0,0xb,1);
      INSERT(local_1004[0].dcb._8_4_,0,9,1);
      INSERT(local_1004[0].dcb._8_4_,0,8,1);
      INSERT(local_1004[0].dcb._8_4_,1,0,1);
      local_1004[0].dcb.EvtChar = '\n';
      SetCommConfig(*(HANDLE *)(param_1 + 0x6c),local_1004,local_103c);
    }
    PurgeComm(*(HANDLE *)(param_1 + 0x6c),0xc);
    SetEvent(*(HANDLE *)(param_1 + 0x80));
    SetEvent(*(HANDLE *)(param_1 + 0x94));
    SetEvent(*(HANDLE *)(param_1 + 0xa8));
    *(uint *)(param_1 + 0xbc) = (*(int *)(param_1 + 0xbc) != 5) + 4;
  }
  return 0;
}
