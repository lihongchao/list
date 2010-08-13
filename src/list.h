
//
// List
//
// Copyright (c) 2010 TJ Holowaychuk <tj@vision-media.ca>
//

#ifndef __LIST_H__
#define __LIST_H__

/*
 * List node struct.
 */

typedef struct ListNode {
  struct ListNode *prev;
  struct ListNode *next;
  void *val;
} ListNode;

/*
 * List struct.
 */

typedef struct {
  ListNode *head;
  ListNode *tail;
  unsigned int len;
} List;

#endif /* __LIST_H__ */