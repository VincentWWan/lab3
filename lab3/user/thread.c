// thread.c
#include "thread.h"

typedef struct lock_t {
    unsigned int locked;  
} lock_t;

int thread_create(void (*start_routine)(void*), void *arg) {
}

void lock_init(lock_t *lock) {
    lock->locked = 0;  
}

void lock_acquire(lock_t *lock) {
    while (__sync_lock_test_and_set(&lock->locked, 1)) {

    }
}

void lock_release(lock_t *lock) {
    __sync_lock_release(&lock->locked); 
}
