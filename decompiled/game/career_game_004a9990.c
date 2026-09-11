/* spd-match: far pct=18.92 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004A9990 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_004a9990(undefined4 * obj, undefined4 *param_1)

{

  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  *obj = *param_1;
  obj[1] = param_1[1];
  obj[2] = param_1[2];
  obj[3] = param_1[3];
  obj[4] = param_1[4];
  obj[5] = param_1[5];
  obj[6] = param_1[6];
  obj[7] = param_1[7];
  puVar2 = obj + 8;
  iVar1 = (int)param_1 - (int)obj;
  iVar3 = 0xb;
  do {
    *puVar2 = *(undefined4 *)(iVar1 + (int)puVar2);
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar2 = obj + 0x13;
  iVar3 = 0xb;
  do {
    *puVar2 = *(undefined4 *)((int)puVar2 + iVar1);
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  obj[0x1e] = param_1[0x1e];
  obj[0x1f] = param_1[0x1f];
  obj[0x20] = param_1[0x20];
  obj[0x21] = param_1[0x21];
  obj[0x22] = param_1[0x22];
  obj[0x23] = param_1[0x23];
  obj[0x24] = param_1[0x24];
  obj[0x25] = param_1[0x25];
  obj[0x26] = param_1[0x26];
  obj[0x27] = param_1[0x27];
  obj[0x28] = param_1[0x28];
  obj[0x29] = param_1[0x29];
  obj[0x2a] = param_1[0x2a];
  obj[0x2b] = param_1[0x2b];
  obj[0x2c] = param_1[0x2c];
  obj[0x2d] = param_1[0x2d];
  obj[0x2e] = param_1[0x2e];
  obj[0x2f] = param_1[0x2f];
  obj[0x30] = param_1[0x30];
  obj[0x31] = param_1[0x31];
  puVar2 = obj + 0x32;
  iVar3 = 0xb;
  do {
    *puVar2 = *(undefined4 *)((int)puVar2 + iVar1);
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar2 = obj + 0x3d;
  iVar3 = 0xb;
  do {
    *puVar2 = *(undefined4 *)((int)puVar2 + iVar1);
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  obj[0x48] = param_1[0x48];
  obj[0x49] = param_1[0x49];
  obj[0x4a] = param_1[0x4a];
  obj[0x4b] = param_1[0x4b];
  obj[0x4c] = param_1[0x4c];
  obj[0x4d] = param_1[0x4d];
  obj[0x4e] = param_1[0x4e];
  obj[0x4f] = param_1[0x4f];
  obj[0x50] = param_1[0x50];
  obj[0x51] = param_1[0x51];
  obj[0x52] = param_1[0x52];
  obj[0x53] = param_1[0x53];
  obj[0x54] = param_1[0x54];
  obj[0x55] = param_1[0x55];
  obj[0x56] = param_1[0x56];
  return;
}
