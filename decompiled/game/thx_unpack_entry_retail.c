/* THX unpack entry stub — retail Speed.exe only @ 0x78905E (stxt371)
 * Not present in no-CD patch. Disassembly via objdump; not Ghidra-decompiled.
 *
 * Flow:
 *   1. pusha; ebx = self (entry VA)
 *   2. Read flag @ 0x78903D — first-run vs resume
 *   3. Self-modify: mov byte [ebx], 0xE9; mov [ebx+1], rel32 — patch to JMP
 *   4. call thx_unpack_worker @ 0x789120 (alloc 0x2E8 stack, resolve APIs)
 *   5. On success: jmp 0x664245 (RVA 0x264245) into decrypted .text
 */

void thx_unpack_entry_retail(void)
{
    /* 0x78905E: push ebp; mov ebp, esp; pusha */
    /* 0x789062: mov ebx, 0x78905E */
    /* 0x789069: mov cl, [0x78903D]; test ecx, ecx */
    /* 0x78908D: mov byte [ebx], 0xE9 — opcode for JMP rel32 */
    /* 0x789090: mov [ebx+1], eax — jump displacement */
    /* 0x7890A5: call 0x789120 */
    /* 0x789119: jmp 0x664245 — enter unpacked engine */
}
