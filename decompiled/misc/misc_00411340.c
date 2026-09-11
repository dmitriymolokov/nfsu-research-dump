/* spd-match: far pct=7.62 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2110 */
#include "ghidra_compat.h"

int __cdecl FUN_004115f0();
extern int DAT_0070108d;
extern int DAT_0070108e;
extern int DAT_0073639c;
extern int DAT_007363a0;
extern int DAT_007363a4;
extern int DAT_007363a8;
extern int DAT_007363ac;
extern int DAT_007363b0;
extern int DAT_007363b1;
extern int DAT_007363b3;

void FUN_00411340(void)

{
  int iVar1;
  char in_AL;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  
  if ((DAT_007363a8 != 0) && ((DAT_007363b0 == '\0' || (DAT_007363b0 = '\0', in_AL != '\r')))) {
    switch(in_AL) {
    case '\b':
      if (DAT_007363a4 != 0) {
        pcVar3 = _malloc(DAT_007363ac);
        iVar1 = DAT_0073639c;
        pcVar4 = (char *)(((int)DAT_0073639c) + (int)DAT_007363a4);
        iVar6 = (int)pcVar3 - (int)pcVar4;
        do {
          cVar2 = *pcVar4;
          pcVar4[iVar6] = cVar2;
          pcVar4 = pcVar4 + 1;
        } while (cVar2 != '\0');
        DAT_007363a0 = DAT_007363a0 - 1;
        DAT_007363a4 = ((int)DAT_007363a4) + -1;
        iVar1 = iVar1 + (int)DAT_007363a4;
        pcVar4 = pcVar3;
        do {
          cVar2 = *pcVar4;
          pcVar4[iVar1 - (int)pcVar3] = cVar2;
          pcVar4 = pcVar4 + 1;
        } while (cVar2 != '\0');
        _free(pcVar3);
        return;
      }
      break;
    case '\t':
    case '\r':
      DAT_0070108d = '\n';
      if (DAT_007363a0 < DAT_007363ac) {
        pcVar5 = _malloc(DAT_007363ac);
        iVar1 = DAT_0073639c;
        pcVar4 = (char *)(((int)DAT_0073639c) + (int)DAT_007363a4);
        pcVar3 = pcVar4;
        do {
          cVar2 = *pcVar3;
          pcVar3[(int)pcVar5 - (int)pcVar4] = cVar2;
          pcVar3 = pcVar3 + 1;
        } while (cVar2 != '\0');
        *pcVar4 = '\n';
        DAT_007363a0 = ((int)DAT_007363a0) + 1;
        DAT_007363a4 = ((int)DAT_007363a4) + 1;
        iVar1 = iVar1 + (int)DAT_007363a4;
        DAT_0070108d = 10;
        pcVar4 = pcVar5;
        do {
          cVar2 = *pcVar4;
          pcVar4[iVar1 - (int)pcVar5] = cVar2;
          pcVar4 = pcVar4 + 1;
        } while (cVar2 != '\0');
        _free(pcVar5);
        return;
      }
      break;
    case '\n':
      break;
    default:
      DAT_0070108d = in_AL;
      if (((((('`' < in_AL) && (in_AL < '{')) || (('@' < in_AL && (in_AL < '[')))) ||
           ((('/' < in_AL && (in_AL < ':')) ||
            ((DAT_0070108e == '\0' &&
             ((((in_AL == '_' || (in_AL == '@')) || (in_AL == '.')) || (in_AL == '-')))))))) ||
          ((DAT_007363b3 == '\x01' && (cVar2 = FUN_004115f0(), cVar2 != '\0')))) &&
         (DAT_007363b1 = 0, DAT_007363a0 < DAT_007363ac)) {
        pcVar3 = _malloc(DAT_007363ac);
        pcVar5 = (char *)(((int)DAT_0073639c) + (int)DAT_007363a4);
        pcVar4 = pcVar5;
        do {
          cVar2 = *pcVar4;
          pcVar4[(int)pcVar3 - (int)pcVar5] = cVar2;
          iVar1 = DAT_0073639c;
          pcVar4 = pcVar4 + 1;
        } while (cVar2 != '\0');
        *pcVar5 = in_AL;
        DAT_007363a0 = ((int)DAT_007363a0) + 1;
        DAT_007363a4 = ((int)DAT_007363a4) + 1;
        iVar1 = iVar1 + (int)DAT_007363a4;
        pcVar4 = pcVar3;
        do {
          cVar2 = *pcVar4;
          pcVar4[iVar1 - (int)pcVar3] = cVar2;
          pcVar4 = pcVar4 + 1;
        } while (cVar2 != '\0');
        _free(pcVar3);
      }
      break;
    case '\x1b':
      DAT_0070108d = '\0';
      if (DAT_007363a0 < DAT_007363ac) {
        pcVar5 = _malloc(DAT_007363ac);
        iVar1 = DAT_0073639c;
        pcVar4 = (char *)(((int)DAT_0073639c) + (int)DAT_007363a4);
        pcVar3 = pcVar4;
        do {
          cVar2 = *pcVar3;
          pcVar3[(int)pcVar5 - (int)pcVar4] = cVar2;
          pcVar3 = pcVar3 + 1;
        } while (cVar2 != '\0');
        *pcVar4 = '\0';
        DAT_007363a0 = ((int)DAT_007363a0) + 1;
        DAT_007363a4 = ((int)DAT_007363a4) + 1;
        iVar1 = iVar1 + (int)DAT_007363a4;
        pcVar4 = pcVar5;
        do {
          cVar2 = *pcVar4;
          pcVar4[iVar1 - (int)pcVar5] = cVar2;
          pcVar4 = pcVar4 + 1;
        } while (cVar2 != '\0');
        _free(pcVar5);
        return;
      }
    }
  }
  return;
}
