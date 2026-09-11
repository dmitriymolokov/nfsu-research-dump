/* spd-match: far pct=4.57 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_8/p1/buckets/p1_04/attempt2/typed_pointer_repairs */
#include "ghidra_compat.h"

double __cdecl _atof(const char *);
int __cdecl _isalnum(int);

int __cdecl FUN_005b1775(...);
int __cdecl FUN_005b1f01(...);
int __cdecl FUN_005b2560(...);
extern void LAB_005b28c1(...);

struct ThisCallBox {
  int FUN_005b2838(char *param_2, undefined4 *param_3);
};
int ThisCallBox::FUN_005b2838(char *param_2, undefined4 *param_3) {
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  undefined1 *puVar4;
  int iVar5;
  char cVar6;
  char *pcVar7;
  undefined4 uVar8;
  char *pcVar9;
  
  pcVar3 = *(char **)(((int)this) + 4);
  if (pcVar3 <= param_2) {
    return 0;
  }
  if (*param_2 == '\"') {
    cVar6 = '\"';
  }
  else {
    if (*param_2 != '<') {
      return 0;
    }
    if ((*(byte *)(((int)this) + 0x28) & 8) == 0) {
      return 0;
    }
    cVar6 = '>';
  }
  pcVar1 = param_2 + 1;
  for (pcVar7 = pcVar1; ((pcVar7 < pcVar3 && (cVar2 = *pcVar7, cVar6 != cVar2)) && (cVar2 != '\n'));
      pcVar7 = pcVar7 + 1) {
    if ((cVar2 == '\\') && ((*(byte *)(((int)this) + 0x28) & 4) == 0)) {
      pcVar7 = pcVar7 + 1;
    }
  }
  if (pcVar7 < pcVar3) {
    if (*pcVar7 != '\n') goto LAB_005b28c1;
    pcVar9 = "string continues past end of line";
    uVar8 = 0x3ed;
  }
  else {
    pcVar9 = "string continues past end of file";
    uVar8 = 0x3ee;
    pcVar7 = pcVar3;
  }
  FUN_005b1f01(*(undefined4 *)(((int)this) + 0x30),((int)this) + 8,uVar8,pcVar9);
LAB_005b28c1:
  puVar4 = (undefined1 *)FUN_005b1775((int)pcVar7 - (int)param_2);
  if (puVar4 == (undefined1 *)0x0) {
    return 0;
  }
  *param_3 = (undefined4)(unsigned long)puVar4;
  for (; pcVar1 < pcVar7; pcVar1 = pcVar1 + iVar5) {
    iVar5 = FUN_005b2560(pcVar1,&param_3);
    *puVar4 = (unsigned char)(unsigned long)param_3;
    puVar4 = puVar4 + 1;
  }
  *puVar4 = 0;
  return ((int)pcVar7 - (int)param_2) + 1;
}
