/* spd-match: far pct=15.30 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2296 */
#include "ghidra_compat.h"

extern int DAT_00793204;
extern unsigned char *DAT_00793208;
extern int DAT_00793214;
extern int DAT_0079321c;

undefined4 * ___sbh_alloc_new_region(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_00793204 == DAT_00793214) {
    pvVar2 = HeapReAlloc(DAT_0079321c,0,DAT_00793208,(((int)DAT_00793214) * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_00793214 = ((int)DAT_00793214) + 0x10;
    DAT_00793208 = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_00793208 + ((int)DAT_00793204) * 0x14);
  pvVar2 = HeapAlloc(DAT_0079321c,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_00793204 = ((int)DAT_00793204) + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_0079321c,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}
