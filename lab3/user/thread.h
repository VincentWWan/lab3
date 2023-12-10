// thread.h

#ifndef _THREAD_H_
#define _THREAD_H_

typedef unsigned int uint;

typedef struct lock_t {
    uint locked;       
} lock_t;

typedef struct thread_t {
    uint sp;           
} thread_t;

int  thread_create(void (*start_routine)(void*), void *arg);
void thread_exit(void);
int  thread_join(thread_t thread);

void lock_init(lock_t *lock);
void lock_acquire(lock_t *lock);
void lock_release(lock_t *lock);

#endif // _THREAD_H_
