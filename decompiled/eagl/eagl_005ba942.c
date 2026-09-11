/* spd-match: far pct=11.17 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8/p0/buckets/p0_13/attempt_03_targeted_nonthiscall */
#include "ghidra_compat.h"

int __cdecl FUN_005ba70c();
int __cdecl FUN_005ba80b();
int __cdecl FUN_00673533();
extern int DAT_0069efe8;
extern void LAB_005bab58(void);

int FUN_005ba942(char *param_1,uint param_2,int param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char local_108 [255];
  undefined1 local_9;
  char *local_8;
  
  local_8 = local_108;
  if (param_3 == 0) {
    local_8 = "void";
    goto LAB_005bab58;
  }
  iVar4 = *(int *)(param_3 + 4);
  if (iVar4 == 1) {
    FUN_005ba70c(param_3);
    iVar4 = 0;
    pcVar5 = "const ";
    if (iVar4 == 0) {
      pcVar5 = "";
    }
    FUN_005ba80b(param_3);
    pcVar3 = "";
    pcVar8 = "%sstruct{%u}";
  }
  else {
    if (iVar4 == 7) {
      iVar4 = *(int *)(param_3 + 4);
      iVar2 = param_3;
      while (iVar4 == 7) {
        iVar2 = *(int *)(iVar2 + 0x10);
        iVar4 = *(int *)(iVar2 + 4);
      }
      iVar4 = FUN_005ba942(local_108,0xff,iVar2);
      for (; *(int *)(param_3 + 4) == 7; param_3 = *(int *)(param_3 + 0x10)) {
        FUN_00673533(local_108 + iVar4,0xff - iVar4,&DAT_0069efe8,*(undefined4 *)(param_3 + 0x14));
        pcVar5 = local_108 + iVar4;
        local_9 = 0;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        iVar4 = (int)pcVar5 - (int)(local_108 + 1);
      }
      goto LAB_005bab58;
    }
    if (iVar4 != 8) {
      local_8 = "unknown";
      goto LAB_005bab58;
    }
    pcVar5 = "const ";
    if ((*(byte *)(param_3 + 0x21) & 2) == 0) {
      pcVar5 = "";
    }
    switch(*(undefined4 *)(param_3 + 0x14)) {
    case 0:
      pcVar3 = "bool";
      break;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      pcVar3 = "int";
      break;
    case 9:
    case 0xb:
      pcVar3 = "float";
      break;
    case 10:
      pcVar3 = "half";
      break;
    case 0xc:
      pcVar3 = "double";
      break;
    case 0xd:
      pcVar3 = "NULL";
      break;
    case 0xe:
      pcVar3 = "string";
      break;
    case 0xf:
      pcVar3 = "texture";
      break;
    case 0x10:
      pcVar3 = "texture1D";
      break;
    case 0x11:
      pcVar3 = "texture2D";
      break;
    case 0x12:
      pcVar3 = "texture3D";
      break;
    case 0x13:
      pcVar3 = "textureCUBE";
      break;
    case 0x14:
      pcVar3 = "sampler";
      break;
    case 0x15:
      pcVar3 = "sampler1D";
      break;
    case 0x16:
      pcVar3 = "sampler2D";
      break;
    case 0x17:
      pcVar3 = "sampler3D";
      break;
    case 0x18:
      pcVar3 = "samplerCUBE";
      break;
    case 0x19:
      pcVar3 = "pixelshader";
      break;
    case 0x1a:
      pcVar3 = "vertexshader";
      break;
    case 0x1b:
      pcVar3 = "pixelfragment";
      break;
    case 0x1c:
      pcVar3 = "vertexfragment";
      break;
    default:
      pcVar3 = "unknown";
    }
    if (*(int *)(param_3 + 0x10) == 1) {
      FUN_00673533(local_108,0xff,"%s%s%u",pcVar5,pcVar3,*(undefined4 *)(param_3 + 0x1c));
      goto LAB_005bab58;
    }
    if (*(int *)(param_3 + 0x10) == 2) {
      FUN_00673533(local_108,0xff,"%s%s%ux%u",pcVar5,pcVar3,*(undefined4 *)(param_3 + 0x18),
                   *(undefined4 *)(param_3 + 0x1c));
      goto LAB_005bab58;
    }
    pcVar8 = "%s%s";
  }
  FUN_00673533(local_108,0xff,pcVar8,pcVar5,pcVar3);
LAB_005bab58:
  pcVar5 = local_8;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar6 = (int)pcVar5 - (int)(local_8 + 1);
  if (param_2 < (uint)((int)pcVar5 - (int)(local_8 + 1))) {
    uVar6 = param_2;
  }
  pcVar5 = param_1;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)local_8;
    local_8 = local_8 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar5 = *local_8;
    local_8 = local_8 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[uVar6] = '\0';
  return;
}
