/* spd-match: far pct=5.77 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/C2065_undecl_stubs_p1/batches/20260724T141849Z_w0_tc0 */
#include "ghidra_compat.h"

#ifndef _VA_LIST_DEFINED
typedef char *va_list;
#define _VA_LIST_DEFINED
#endif
typedef unsigned int errno_t;
typedef unsigned int (*LPTHREAD_START_ROUTINE)(void *);
typedef HANDLE *LPHANDLE;
typedef BYTE *LPBYTE;
typedef UINT MMRESULT;
typedef __int64 LONGLONG;
typedef long __time32_t;
typedef void *HLINEAPP;
typedef void __cdecl _StartAddress(void *);
typedef WIN32_FIND_DATAA *LPWIN32_FIND_DATAA;
int __cdecl _fclose(FILE *);
int __cdecl _isalnum(int);
int __cdecl WideCharToMultiByte(UINT, DWORD, LPCWSTR, int, LPSTR, int, LPCSTR, BOOL *);
int __cdecl lstrcmpiA(const char *, const char *);
char *__cdecl _strncpy(char *, const char *, unsigned int);
int __cdecl __stricmp(const char *, const char *);
long __cdecl __ftol(void);
unsigned int __cdecl __control87(unsigned int, unsigned int);
void *__cdecl CreateObject(void);
typedef struct tagMSG { unsigned char _[48]; } MSG, tagMSG, *LPMSG;
typedef struct tagPOINT { long x, y; } POINT, tagPOINT, *LPPOINT;
typedef struct tagPAINTSTRUCT { unsigned char _[64]; } PAINTSTRUCT, tagPAINTSTRUCT;
typedef struct varstring_tag { unsigned char _[32]; } varstring_tag;
typedef struct _AFX_EDIT_STATE { unsigned char _[64]; } _AFX_EDIT_STATE;
unsigned __stdcall __beginthreadex(void *, unsigned, unsigned (__stdcall *)(void *), void *, unsigned, unsigned *);

int __cdecl FUN_00540680();
int __cdecl FUN_00566e60();
extern unsigned char *DAT_007344c8;
extern unsigned char *DAT_0073557c;
extern int DAT_0073781c;
extern unsigned char *DAT_00737820;
extern int DAT_00743c70;
extern unsigned char *DAT_00743c74;
extern unsigned char *PTR_DAT_00700684;
extern void LAB_00686598(void);
void *ExceptionList;

extern char s_MARKER_GREEN_006b91a4[];






void FUN_00455810(char *param_1)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  char *pcVar10;
  undefined4 *puVar11;
  int *piVar12;
  int *piVar13;
  undefined **ppuVar14;
  undefined4 *puVar15;
  char *local_20;
  int local_1c;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00686598;
  local_c = ExceptionList;
  if (*param_1 == '\0') {
    ppuVar14 = &PTR_DAT_00700684;
    piVar13 = (int *)(param_1 + 0x1e8);
    ExceptionList = &local_c;
    do {
      iVar5 = -1;
      pcVar10 = "MARKER_GREEN";
      bVar2 = s_MARKER_GREEN_006b91a4[0];
      while (bVar2 != 0) {
        iVar5 = iVar5 * 0x21 + (uint)bVar2;
        pbVar9 = (byte *)(pcVar10 + 1);
        pcVar10 = pcVar10 + 1;
        bVar2 = *pbVar9;
      }
      piVar13[-1] = iVar5;
      pbVar9 = *ppuVar14;
      iVar5 = -1;
      bVar2 = *pbVar9;
      while (bVar2 != 0) {
        iVar5 = iVar5 * 0x21 + (uint)bVar2;
        pbVar1 = pbVar9 + 1;
        pbVar9 = pbVar9 + 1;
        bVar2 = *pbVar1;
      }
      if (iVar5 != *piVar13) {
        *piVar13 = iVar5;
        piVar13[1] = -1;
      }
      ppuVar14 = ppuVar14 + 1;
      piVar13 = piVar13 + 4;
    } while ((int)ppuVar14 < 0x700694);
    local_20 = param_1 + 4;
    local_18 = 3;
    do {
      local_1c = 0x28;
      do {
        iVar5 = DAT_007344c8;
        local_4 = 0xffffffff;
        puVar15 = (undefined4 *)(DAT_007344c8 + 0x10);
        if ((*(int *)(DAT_007344c8 + 0x10) == 0) && ((*(byte *)(DAT_007344c8 + 0x14) & 1) != 0)) {
          FUN_00566e60();
        }
        puVar11 = (undefined4 *)*puVar15;
        iVar6 = *(int *)(iVar5 + 0x18) + 1;
        if (puVar11 != (undefined4 *)0x0) {
          uVar3 = *puVar11;
          if (*(int *)(iVar5 + 0x1c) < iVar6) {
            *(int *)(iVar5 + 0x1c) = iVar6;
          }
          *(int *)(iVar5 + 0x18) = iVar6;
          bVar2 = *(byte *)(iVar5 + 0x14);
          *puVar15 = uVar3;
          if (((bVar2 & 2) != 0) &&
             (iVar5 = *(int *)(iVar5 + 0x28) >> 2, puVar15 = puVar11, 0 < iVar5)) {
            for (; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar15 = 0;
              puVar15 = puVar15 + 1;
            }
          }
        }
        iVar5 = DAT_0073557c;
        local_4 = 0;
        if (puVar11 == (undefined4 *)0x0) {
          puVar11 = (undefined4 *)0x0;
        }
        else {
          pcVar10 = "MARKER_GREENARROW";
          iVar6 = -1;
          uVar7 = 0x4d;
          do {
            iVar6 = iVar6 * 0x21 + uVar7;
            pbVar9 = (byte *)(pcVar10 + 1);
            uVar7 = (uint)*pbVar9;
            pcVar10 = pcVar10 + 1;
          } while (*pbVar9 != 0);
          piVar13 = (int *)(DAT_0073557c + 0x10);
          if ((*(int *)(DAT_0073557c + 0x10) == 0) && ((*(byte *)(DAT_0073557c + 0x14) & 1) != 0)) {
            FUN_00566e60();
          }
          piVar12 = (int *)*piVar13;
          iVar8 = *(int *)(iVar5 + 0x18) + 1;
          if (piVar12 == (int *)0x0) {
            piVar12 = (int *)0x0;
          }
          else {
            iVar4 = *piVar12;
            if (*(int *)(iVar5 + 0x1c) < iVar8) {
              *(int *)(iVar5 + 0x1c) = iVar8;
            }
            *(int *)(iVar5 + 0x18) = iVar8;
            *piVar13 = iVar4;
            if (((*(byte *)(iVar5 + 0x14) & 2) != 0) &&
               (iVar5 = *(int *)(iVar5 + 0x28) >> 2, piVar13 = piVar12, 0 < iVar5)) {
              for (; iVar5 != 0; iVar5 = iVar5 + -1) {
                *piVar13 = 0;
                piVar13 = piVar13 + 1;
              }
            }
            piVar12[3] = 0;
            piVar12[2] = iVar6;
            piVar12[4] = 0;
            piVar12[5] = 0;
            if (iVar6 != 0) {
              *DAT_00743c74 = (int)piVar12;
              piVar13 = piVar12;
              piVar12[1] = (int)DAT_00743c74;
              DAT_00743c74 = piVar13;
              *piVar12 = (int)&DAT_00743c70;
            }
            if (((piVar12[2] != 0) && (iVar5 = FUN_00540680(), piVar12[2] != 0)) &&
               (iVar5 != piVar12[3])) {
              iVar6 = *piVar12;
              piVar13 = (int *)piVar12[1];
              *piVar13 = iVar6;
              *(int **)(iVar6 + 4) = piVar13;
              if (iVar5 == 0) {
                *DAT_00743c74 = (int)piVar12;
                piVar13 = piVar12;
                piVar12[1] = (int)DAT_00743c74;
                DAT_00743c74 = piVar13;
                *piVar12 = (int)&DAT_00743c70;
                piVar12[3] = 0;
              }
              else {
                puVar15 = *(undefined4 **)(iVar5 + 0x8c);
                *puVar15 = piVar12;
                *(int **)(iVar5 + 0x8c) = piVar12;
                piVar12[1] = (int)puVar15;
                *piVar12 = iVar5 + 0x88;
                piVar12[3] = iVar5;
              }
            }
          }
          puVar11[2] = piVar12;
          puVar11[3] = 0;
          puVar11[5] = 1;
          puVar11[6] = 0;
          puVar11[4] = 0;
          puVar11[0x18] = 0;
          *DAT_00737820 = puVar11;
          puVar15 = puVar11;
          puVar11[1] = DAT_00737820;
          DAT_00737820 = puVar15;
          *puVar11 = &DAT_0073781c;
          *(undefined1 *)(puVar11 + 7) = 0;
        }
        *(undefined4 **)local_20 = puVar11;
        local_20 = local_20 + 4;
        local_1c = local_1c + -1;
        puVar11[4] = 0;
      } while (local_1c != 0);
      local_18 = local_18 + -1;
    } while (local_18 != 0);
    *param_1 = '\x01';
  }
  ExceptionList = local_c;
  return;
}
