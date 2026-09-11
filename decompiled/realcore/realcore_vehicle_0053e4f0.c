/* spd-match: far pct=21.70 flags=/Og /c /nologo /TC method=m39 source=m39/m39/va_0053E4F0 */
/* Decompiled from Speed.exe @ 0053e4f0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */
typedef struct Node { struct Node *next; struct Node *prev; char data[1]; } Node; typedef struct List { char pad[24]; Node *head; } List; void* __stdcall FUN_0053e4f0(List *list, const char *key) { Node *curr; Node *sentinel; const char *p1; const char *p2; Node *prev_node; Node *next_node; Node *old_head; sentinel = (Node *)&list->head; curr = list->head; while (curr != sentinel) { p1 = key; p2 = curr->data; while (*p1 != 0 && *p2 != 0 && *p1 == *p2) { p1++; p2++; } if (*p1 == *p2) { prev_node = curr->prev; next_node = curr->next; next_node->prev = prev_node; prev_node->next = next_node; old_head = list->head; list->head = curr; curr->next = old_head; curr->prev = sentinel; old_head->prev = curr; return curr; } curr = curr->next; } return 0; }

